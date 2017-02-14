/*
Setup AI für Taxi_Heli
*/

if(isServer) then
{
	_pads = [[pad_kavala_from,"O_Heli_Light_02_unarmed_F"],[pad_agios_from,"O_Heli_Light_02_unarmed_F"],[pad_syrta_from,"O_Heli_Light_02_unarmed_F"],[pad_athira_from,"O_Heli_Light_02_unarmed_F"],
	[pad_sofia_from,"O_Heli_Light_02_unarmed_F"],[pad_flughafen_from,"O_Heli_Transport_04_bench_F"],[pad_zaros_from,"B_Heli_Light_01_F"],[pad_flugplatz_from,"O_Heli_Transport_04_bench_F"],
	[pad_neochori_from,"B_Heli_Light_01_F"],[pad_paros_from,"C_Heli_Light_01_civil_F"],[pad_salzwueste_from,"O_Heli_Transport_04_bench_F"],[pad_pyrgos_from,"C_Heli_Light_01_civil_F"],
	[pad_selakano_from,"B_Heli_Transport_01_F"]];

	{	
		_pad = _x select 0;
		_heli_type = _x select 1;
		_vehicle = nil;
		_vehicle = createVehicle[_heli_type,[0,0,999],[],0,"NONE"];
		waitUntil {!isNil "_vehicle" && {!isNull _vehicle}};
		_vehicle allowDamage false;
		sleep 0.6;
		
		_vehicle setPos (getpos _pad);
		_vehicle setDir (getdir _pad);
		
		_vehicle lock 0;
		_vehicle setVariable["vehicle_info_owners",[[0,"System"]],true];
		_vehicle setVariable["Trunk",[[],0],true];
		_vehicle setVariable["trunk_in_use",false,true];
		_vehicle setVariable["locked",false,true];
		[_vehicle] call life_fnc_clearVehicleAmmo;
		_vehicle disableTIEquipment true;
		
		_pilot = [getpos _vehicle, resistance, ["I_officer_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		_copilot = [getpos _vehicle, resistance, ["I_officer_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;

		{
			_x moveinDriver _vehicle;
			_x disableAI "AUTOTARGET";
			_x disableAI "TARGET";
			_x disableAI "WAYPOINT_STOP";
			_x allowFleeing 0;
			_x allowDamage false;
		}forEach units _pilot;
		
		{
			_x moveinturret [_vehicle, [0]];
			_x disableAI "AUTOTARGET";
			_x disableAI "TARGET";
			_x disableAI "WAYPOINT_STOP";
			_x disableAI "MOVE";
			_x disableAI "AUTOCOMBAT";
			_x allowFleeing 0;
			_x allowDamage false;
		}forEach units _copilot;
		
		if(_heli_type == "O_Heli_Transport_04_bench_F") then
		{
			_loadmaster = [getpos _vehicle, resistance, ["I_officer_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
			
			{
				_x moveinturret [_vehicle, [1]];
				_x disableAI "AUTOTARGET";
				_x disableAI "TARGET";
				_x disableAI "WAYPOINT_STOP";
				_x allowFleeing 0;
				_x allowDamage false;
			}forEach units _loadmaster;
		};
		

	} foreach _pads;
};
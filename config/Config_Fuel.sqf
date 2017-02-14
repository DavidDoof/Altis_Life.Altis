private["_vehicle","_position","_distance","_consumption"];

_position = getPos player;

while{true} do {

    sleep 10;

    _distance = round(player distance _position);
    _position = getPos player;

    _vehicle = (vehicle player);
    if( isEngineOn _vehicle && _vehicle != player && driver _vehicle == player && _distance > 10 ) then {

        // 1m distance = 0.000035 fuel consumed = 28.5km total Range
        _consumption = 0.02 min _distance * 0.000028;

        // For helicopters we reduce the consumption:
        if( _vehicle isKindOf "Air" ) then {
            _consumption = _consumption * 0.3;
        };
        _vehicle setFuel( (fuel _vehicle) - _consumption );

        //hintSilent format ["Distance: %1\nConsumption: %2\nFuel: %3", _distance, _consumption, fuel _vehicle];
    };
};
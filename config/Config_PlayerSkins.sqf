// Shutter--Island
// Central place to modify player textures and ensure they are re-applied if something changes

[] spawn {
    private ["_textures","_mappings"];

    _mappings = [
        // Cops:
        [west, "U_B_CTRG_3", "textures\police\cloth\po1-3.paa"],
        [west, "U_Rangemaster", "textures\police\cloth\pd1-3.paa"],
        [west, "U_B_CTRG_1", "textures\police\cloth\sg-lt.paa"],
		[west, "U_Marshal", "textures\police\cloth\pdc.paa"],
		[west, "U_Competitor", "textures\police\cloth\fbiagent.paa"],
		[west, "U_B_CombatUniform_mcam", "textures\police\cloth\fbichief.paa"],
        // Medics:
        [independent, "U_B_CTRG_1", "textures\a.e.r.s\cloth\aers.paa"],
		[independent, "U_B_CTRG_3", "textures\a.e.r.s\cloth\aershoch.paa"],
        // ADAC:
        [east, "U_C_WorkerCoveralls", "textures\adac_uniform.jpg"]
    ];

    while {true} do {
        sleep 5;

        _textures = getObjectTextures player;
        {
            if( playerSide == _x select 0 ) then {
                if( uniform player == _x select 1 ) then {
                    if( _textures select 0 != _x select 2 ) then {
                        player setObjectTextureGlobal [0, _x select 2];
                    };
                };
            };
        } forEach _mappings;
    };
};
waitUntil {!isServer && !isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["changelog","Change Log"];
player createDiarySubject ["serverrules","General Rules"];
player createDiarySubject ["policerules","Police Procedures/Rules"];
player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controls","Controls"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

    player createDiaryRecord ["credits",
        [
            "AsYetUntitled",
                "
AsYetUntitled (formerly ArmaLife) is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["changelog",
        [
            "Altis Life Changelog",
                "
The full changelog can be found on the AsYetUntitled/Framework repository on GitHub. https://github.com/AsYetUntitled/Framework/<br/><br/>
v4.4 release 3!<br/>
By: danielstuart14<br/>
Date: 31. May 2016<br/><br/>
v4.4 release 2!<br/>
By: danielstuart14<br/>
Date: 20. March 2016<br/><br/>
v4.4 release 1!<br/>
By: danielstuart14<br/>
Date: 12. February 2016<br/><br/>
v4.3 release 4!<br/>
By: danielstuart14<br/>
Date: 31. January 2016<br/><br/>
v4.3 release 3!<br/>
By: danielstuart14<br/>
Date: Not released<br/><br/>
v4.3 release 2!<br/>
By: danielstuart14<br/>
Date: 22. January 2016<br/><br/>
v4.3 release 1!<br/>
By: danielstuart14<br/>
Date: 19. January 2016<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["changelog",
        [
            "Server Change Log",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

        player createDiaryRecord ["serverrules",
        [
            "Exploits",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["safezones",
        [
            "Safe Zones",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Bannable Offenses",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Cop Interaction",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Boats",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Aviation",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Vehicles",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Communication Rules",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Random Deathmatching (RDM)",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "New Life Rule",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Don't Be A Dick!",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

// Police Section
    player createDiaryRecord ["policerules",
        [
            "Crisis Negotiation",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "The Federal Reserve",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Aviation",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Illegal Areas",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Patrolling",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Checkpoints",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Vehicles",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Speeding",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "City Protocol",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Arresting and Ticketing",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Weapons",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Use of Non-Lethal Force",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Raiding/Camping",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Chain of Command",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Use of Lethal Force",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "TeamSpeak Rule",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

// Illegal Items Section
    player createDiaryRecord ["illegalitems",
        [
            "Rebel Rules",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["illegalitems",
        [
            "Gang Rules",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["illegalitems",
        [
            "Illegal Vehicles",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["illegalitems",
        [
            "Illegal Weapons",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["illegalitems",
        [
            "Illegal Items",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

// Controls Section

    player createDiaryRecord ["controls",
        [
            "Police and medic controls",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Civilian controls",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "General controls",
                "
Alle Regeln findet du im Forum! shutter--island.net<br/><br/>
                "
        ]
    ];

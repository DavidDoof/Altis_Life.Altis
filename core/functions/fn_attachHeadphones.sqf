#include "..\..\script_macros.hpp"
/*
    File: fn_attachHeadphones.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Attach headphones.
*/

hint localize "STR_NOTF_attached_Headphones_hostage";

1 fadeSound 0;
1 fadeMusic 0;
1 fadeRadio 0;
1 fadeSpeech 0;
enableRadio false; 
enableEnvironment false; 

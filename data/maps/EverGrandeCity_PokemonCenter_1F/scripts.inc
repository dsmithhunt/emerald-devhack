# 1 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_MET_SCOTT_IN_EVERGRANDE, EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott
# 10 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott::
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_EVER_GRANDE_NURSE
# 19 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 20 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call PokemonCenter_Turn
# 22 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 29 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
# 30 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth
# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_EVER_GRANDE_SCOTT
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth::
# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit::
# 54 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExit
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth:
# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 61 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 62 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 63 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 64 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExit:
# 68 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 69 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 70 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 73 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 75 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON LEAGUE is only a short\n"
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "distance after the VICTORY ROAD.\p"
# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon:
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing VICTORY ROAD…\p"
# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "It's like reliving the path one has\n"
# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "traveled in life…\p"
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Believe in your POKéMON and give it\n"
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "your very best!$"
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, you've clawed your\n"
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "way up to face the POKéMON LEAGUE!\p"
# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You made my cheering worthwhile!\p"
# 94 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}{KUN}, if you were to become\n"
# 95 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON LEAGUE CHAMPION…\p"
# 96 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'll get in touch with you then.\p"
# 97 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Okay, {PLAYER}{KUN}.\n"
# 98 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"

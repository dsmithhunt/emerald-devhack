# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FALLARBOR_NURSE
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call PokemonCenter_Turn
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette::
# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_FACING
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 41 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
# 44 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
# 45 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 47 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
# 50 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 51 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_FALLARBOR_LANETTE
# 52 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
# 53 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 54 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 55 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
# 57 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_right
# 58 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 59 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 60 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 61 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 62 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 63 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 66 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 67 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 69 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 70 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 71 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
# 72 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 73 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 75 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 77 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 78 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 79 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 80 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 81 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 82 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 83 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 84 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
# 85 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, hello.\n"
# 86 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You are?\p"
# 87 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
# 88 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I can see that you're a TRAINER.\p"
# 89 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "So that means you use the POKéMON\n"
# 90 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Storage System I developed.\p"
# 91 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "How I arrived at that conclusion is\n"
# 92 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "a simple deductive process.\p"
# 93 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You spoke to me because you wanted\n"
# 94 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "to access something on this PC.\p"
# 95 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
# 96 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Honestly, I'm glad to meet you--it's\n"
# 97 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "great you're using the Storage System.\p"
# 98 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "If you could, please visit me at home.\n"
# 99 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "My house is on ROUTE 114.$"
# 100 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 101 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
# 102 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
# 103 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago?\p"
# 104 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
# 105 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "of town will know.$"
# 106 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 107 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
# 108 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "In the fields of FALLARBOR, we plant\n"
# 109 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "seedlings of hardy trees that thrive\l"
# 110 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "even in volcanic ash.$"

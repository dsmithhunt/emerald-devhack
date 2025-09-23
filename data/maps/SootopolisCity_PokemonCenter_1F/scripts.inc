# 1 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 9 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SOOTOPOLIS_NURSE
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call PokemonCenter_Turn
# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
# 28 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman::
# 33 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 37 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
# 38 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 39 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
# 47 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "WALLACE is rumored to be the toughest\n"
# 48 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "TRAINER in the whole HOENN region.\p"
# 49 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "This town's GYM is led by the TRAINER\n"
# 50 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "who taught WALLACE.\p"
# 51 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "But the ELITE FOUR… They're said to be\n"
# 52 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "even stronger than WALLACE's mentor.\p"
# 53 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "How strong could they be?$"
# 54 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
# 56 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Everyone in town has taken refuge\n"
# 57 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "and won't come out of their homes.\p"
# 58 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Even I would rather not venture\n"
# 59 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "outside.$"
# 60 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
# 62 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Whenever, wherever, and whatever\n"
# 63 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "happens, I will always be friends with\l"
# 64 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.\p"
# 65 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Because it's fun to be with POKéMON!$"
# 66 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
# 68 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Aren't POKéMON our friends?\p"
# 69 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Why are they going wild this way?$"

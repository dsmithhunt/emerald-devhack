# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call PokemonCenter_Turn
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think POKéMON get closer to their\n"
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINERS if they spend time together.\p"
# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "The longer the better.\n"
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's what I think.$"
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "in a hot-spring pool can invigorate.\p"
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I wish I could let my POKéMON\n"
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "soak, too.$"
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "the hot springs from here.\p"
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "If POKéMON are getting rest, so too\n"
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "should their TRAINERS.$"

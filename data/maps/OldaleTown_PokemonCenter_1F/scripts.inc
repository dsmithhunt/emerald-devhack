PokemonCenter_Turn::
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonCenter_Turn_Movement_0
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call PokemonCenter_Turn
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 65 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
PokemonCenter_Turn_Movement_0:
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

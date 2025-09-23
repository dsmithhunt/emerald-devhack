# 1 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call PokemonCenter_Turn
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 35 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 38 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 39 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"

Underwater_SealedChamber_EventScript_Braille::
# 2 "data/maps/Underwater_SealedChamber/scripts.pory"
	lockall
# 3 "data/maps/Underwater_SealedChamber/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 4 "data/maps/Underwater_SealedChamber/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Underwater_SealedChamber_EventScript_Braille_2
# 10 "data/maps/Underwater_SealedChamber/scripts.pory"
	braillemsgbox Underwater_SealedChamber_Braille_GoUpHere
Underwater_SealedChamber_EventScript_Braille_1:
# 12 "data/maps/Underwater_SealedChamber/scripts.pory"
	releaseall
	return

Underwater_SealedChamber_EventScript_Braille_2:
# 5 "data/maps/Underwater_SealedChamber/scripts.pory"
	msgbox Underwater_SealedChamber_EventScript_Braille_Text_0
	goto Underwater_SealedChamber_EventScript_Braille_1


# 15 "data/maps/Underwater_SealedChamber/scripts.pory"

# 16 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_MapScripts::
# 17 "data/maps/Underwater_SealedChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_DIVE_WARP, Underwater_SealedChamber_OnDive
# 18 "data/maps/Underwater_SealedChamber/scripts.pory"
	.byte 0
# 19 "data/maps/Underwater_SealedChamber/scripts.pory"

# 20 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_OnDive:
# 21 "data/maps/Underwater_SealedChamber/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 22 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto_if_ne VAR_0x8004, 12, Underwater_SealedChamber_EventScript_SurfaceRoute134
# 23 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto_if_ne VAR_0x8005, 44, Underwater_SealedChamber_EventScript_SurfaceRoute134
# 24 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceSealedChamber
# 25 "data/maps/Underwater_SealedChamber/scripts.pory"

# 26 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_EventScript_SurfaceRoute134::
# 27 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_ROUTE134, 60, 31
# 28 "data/maps/Underwater_SealedChamber/scripts.pory"
	end
# 29 "data/maps/Underwater_SealedChamber/scripts.pory"

# 30 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_EventScript_SurfaceSealedChamber::
# 31 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_SEALED_CHAMBER_OUTER_ROOM, 10, 19
# 32 "data/maps/Underwater_SealedChamber/scripts.pory"
	end

Underwater_SealedChamber_EventScript_Braille_Text_0:
# 6 "data/maps/Underwater_SealedChamber/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "GO UP HERE.$"

DesertRuins_EventScript_CaveEntranceMiddle::
# 2 "data/maps/DesertRuins/scripts.pory"
	lockall
# 3 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_BigHoleInWall
# 4 "data/maps/DesertRuins/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 5 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DesertRuins_EventScript_CaveEntranceMiddle_2
# 11 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
DesertRuins_EventScript_CaveEntranceMiddle_1:
# 13 "data/maps/DesertRuins/scripts.pory"
	releaseall
	return

DesertRuins_EventScript_CaveEntranceMiddle_2:
# 6 "data/maps/DesertRuins/scripts.pory"
	msgbox DesertRuins_EventScript_CaveEntranceMiddle_Text_0
	goto DesertRuins_EventScript_CaveEntranceMiddle_1


DesertRuins_EventScript_BigHoleInWall::
# 17 "data/maps/DesertRuins/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 18 "data/maps/DesertRuins/scripts.pory"
	releaseall
	return


DesertRuins_EventScript_CaveEntranceSide::
# 22 "data/maps/DesertRuins/scripts.pory"
	lockall
# 23 "data/maps/DesertRuins/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 24 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DesertRuins_EventScript_CaveEntranceSide_2
# 30 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
DesertRuins_EventScript_CaveEntranceSide_1:
# 32 "data/maps/DesertRuins/scripts.pory"
	releaseall
	return

DesertRuins_EventScript_CaveEntranceSide_2:
# 25 "data/maps/DesertRuins/scripts.pory"
	msgbox DesertRuins_EventScript_CaveEntranceMiddle_Text_0
	goto DesertRuins_EventScript_CaveEntranceSide_1


# 37 "data/maps/DesertRuins/scripts.pory"

# 38 "data/maps/DesertRuins/scripts.pory"
DesertRuins_MapScripts::
# 39 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_OnResume
# 40 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_OnLoad
# 41 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_OnTransition
# 42 "data/maps/DesertRuins/scripts.pory"
	.byte 0
# 43 "data/maps/DesertRuins/scripts.pory"

# 44 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnResume:
# 45 "data/maps/DesertRuins/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_EventScript_TryRemoveRegirock
# 46 "data/maps/DesertRuins/scripts.pory"
	end
# 47 "data/maps/DesertRuins/scripts.pory"

# 48 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_TryRemoveRegirock::
# 49 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/DesertRuins/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 51 "data/maps/DesertRuins/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/DesertRuins/scripts.pory"
	return
# 53 "data/maps/DesertRuins/scripts.pory"

# 54 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnLoad:
# 55 "data/maps/DesertRuins/scripts.pory"
	call_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_HideRegiEntrance
# 56 "data/maps/DesertRuins/scripts.pory"
	end
# 57 "data/maps/DesertRuins/scripts.pory"

# 58 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_HideRegiEntrance::
# 59 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 60 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 61 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 62 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 63 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 64 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 65 "data/maps/DesertRuins/scripts.pory"
	return
# 66 "data/maps/DesertRuins/scripts.pory"

# 67 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnTransition:
# 68 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_RUINS
# 69 "data/maps/DesertRuins/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_EventScript_ShowRegirock
# 70 "data/maps/DesertRuins/scripts.pory"
	end
# 71 "data/maps/DesertRuins/scripts.pory"

# 72 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_ShowRegirock::
# 73 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_HIDE_REGIROCK
# 74 "data/maps/DesertRuins/scripts.pory"
	return
# 75 "data/maps/DesertRuins/scripts.pory"

# 76 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock::
# 77 "data/maps/DesertRuins/scripts.pory"
	lock
# 78 "data/maps/DesertRuins/scripts.pory"
	faceplayer
# 79 "data/maps/DesertRuins/scripts.pory"
	waitse
# 80 "data/maps/DesertRuins/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 81 "data/maps/DesertRuins/scripts.pory"
	delay 40
# 82 "data/maps/DesertRuins/scripts.pory"
	waitmoncry
# 83 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 40
# 84 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/DesertRuins/scripts.pory"
	special StartRegiBattle
# 86 "data/maps/DesertRuins/scripts.pory"
	waitstate
# 87 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DesertRuins_EventScript_DefeatedRegirock
# 90 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DesertRuins_EventScript_RanFromRegirock
# 91 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_RanFromRegirock
# 92 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 93 "data/maps/DesertRuins/scripts.pory"
	release
# 94 "data/maps/DesertRuins/scripts.pory"
	end
# 95 "data/maps/DesertRuins/scripts.pory"

# 96 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_DefeatedRegirock::
# 97 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 98 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 99 "data/maps/DesertRuins/scripts.pory"
	end
# 100 "data/maps/DesertRuins/scripts.pory"

# 101 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_RanFromRegirock::
# 102 "data/maps/DesertRuins/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIROCK
# 103 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 104 "data/maps/DesertRuins/scripts.pory"
	end

DesertRuins_EventScript_CaveEntranceMiddle_Text_0:
# 7 "data/maps/DesertRuins/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "LEFT, LEFT, DOWN, DOWN. THEN, USE ROCK\l"
	.string "SMASH.$"

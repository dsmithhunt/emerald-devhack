FulgurRuins_MapScripts::
# 2 "data/maps/FulgurRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FulgurRuins_OnResume
# 3 "data/maps/FulgurRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FulgurRuins_OnLoad
# 4 "data/maps/FulgurRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FulgurRuins_OnTransition
	.byte 0


FulgurRuins_OnResume::
# 8 "data/maps/FulgurRuins/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, FulgurRuins_TryRemoveRegieleki
	return


FulgurRuins_TryRemoveRegieleki::
# 12 "data/maps/FulgurRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/FulgurRuins/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/FulgurRuins/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


FulgurRuins_OnLoad::
# 19 "data/maps/FulgurRuins/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, FulgurRuins_HideRegiEntrance
	return


FulgurRuins_HideRegiEntrance::
# 23 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 24 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 25 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 26 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 27 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 28 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


FulgurRuins_OnTransition::
# 33 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_LANDMARK_ISLAND_CAVE
# 34 "data/maps/FulgurRuins/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 35 "data/maps/FulgurRuins/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGICE, FulgurRuins_ShowRegieleki
	return


FulgurRuins_ShowRegieleki::
# 39 "data/maps/FulgurRuins/scripts.pory"
	clearflag FLAG_HIDE_REGICE
	return


FulgurRuins_CaveEntranceMiddle::
# 46 "data/maps/FulgurRuins/scripts.pory"
	lockall
# 47 "data/maps/FulgurRuins/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 48 "data/maps/FulgurRuins/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_BigHoleInWall
# 49 "data/maps/FulgurRuins/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 50 "data/maps/FulgurRuins/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FulgurRuins_CaveEntranceMiddle_1
# 59 "data/maps/FulgurRuins/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 60 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 61 "data/maps/FulgurRuins/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 62 "data/maps/FulgurRuins/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
	return

FulgurRuins_CaveEntranceMiddle_1:
# 51 "data/maps/FulgurRuins/scripts.pory"
	msgbox FulgurRuins_CaveEntranceMiddle_Text_0
# 55 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 56 "data/maps/FulgurRuins/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 57 "data/maps/FulgurRuins/scripts.pory"
	releaseall
	return


FulgurRuins_BigHoleInWall::
# 67 "data/maps/FulgurRuins/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 68 "data/maps/FulgurRuins/scripts.pory"
	releaseall
	return


FulgurRuins_CaveEntranceSide::
# 72 "data/maps/FulgurRuins/scripts.pory"
	lockall
# 73 "data/maps/FulgurRuins/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 74 "data/maps/FulgurRuins/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 75 "data/maps/FulgurRuins/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FulgurRuins_CaveEntranceSide_1
# 87 "data/maps/FulgurRuins/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 88 "data/maps/FulgurRuins/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, FulgurRuins_CloseBrailleMsg
# 89 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 90 "data/maps/FulgurRuins/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 91 "data/maps/FulgurRuins/scripts.pory"
	goto FulgurRuins_CloseBrailleMsg
	return

FulgurRuins_CaveEntranceSide_1:
# 76 "data/maps/FulgurRuins/scripts.pory"
	msgbox FulgurRuins_CaveEntranceMiddle_Text_0
# 80 "data/maps/FulgurRuins/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, FulgurRuins_CaveEntranceSide_5
FulgurRuins_CaveEntranceSide_4:
# 83 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 84 "data/maps/FulgurRuins/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 85 "data/maps/FulgurRuins/scripts.pory"
	releaseall
	return

FulgurRuins_CaveEntranceSide_5:
# 81 "data/maps/FulgurRuins/scripts.pory"
	releaseall
	goto FulgurRuins_CaveEntranceSide_4


FulgurRuins_CloseBrailleMsg::
# 96 "data/maps/FulgurRuins/scripts.pory"
	waitbuttonpress
# 97 "data/maps/FulgurRuins/scripts.pory"
	closebraillemessage
# 98 "data/maps/FulgurRuins/scripts.pory"
	releaseall
	return


FulgurRuins_PuzzleSwitch::
# 103 "data/maps/FulgurRuins/scripts.pory"
	playse SE_SWITCH
# 104 "data/maps/FulgurRuins/scripts.pory"
	addvar VAR_TEMP_A, 1
# 105 "data/maps/FulgurRuins/scripts.pory"
	goto_if_eq VAR_TEMP_A, 7, FulgurRuins_OpenRegiEntrance
	return


FulgurRuins_OpenRegiEntrance::
# 109 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 110 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 111 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 112 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 113 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 114 "data/maps/FulgurRuins/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 115 "data/maps/FulgurRuins/scripts.pory"
	special DrawWholeMapView
# 116 "data/maps/FulgurRuins/scripts.pory"
	playse SE_BANG
# 117 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
	return


FulgurRuins_Regieleki::
# 121 "data/maps/FulgurRuins/scripts.pory"
	lock
# 122 "data/maps/FulgurRuins/scripts.pory"
	faceplayer
# 123 "data/maps/FulgurRuins/scripts.pory"
	waitse
# 124 "data/maps/FulgurRuins/scripts.pory"
	playmoncry SPECIES_REGIELEKI, CRY_MODE_ENCOUNTER
# 125 "data/maps/FulgurRuins/scripts.pory"
	delay 40
# 126 "data/maps/FulgurRuins/scripts.pory"
	waitmoncry
# 127 "data/maps/FulgurRuins/scripts.pory"
	setwildbattle SPECIES_REGIELEKI, 40
# 128 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 129 "data/maps/FulgurRuins/scripts.pory"
	special StartRegiBattle
# 130 "data/maps/FulgurRuins/scripts.pory"
	waitstate
# 131 "data/maps/FulgurRuins/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 132 "data/maps/FulgurRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 133 "data/maps/FulgurRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FulgurRuins_DefeatedRegieleki
# 134 "data/maps/FulgurRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FulgurRuins_RanFromRegieleki
# 135 "data/maps/FulgurRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FulgurRuins_RanFromRegieleki
# 136 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 137 "data/maps/FulgurRuins/scripts.pory"
	release
	return


FulgurRuins_DefeatedRegieleki::
# 141 "data/maps/FulgurRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 142 "data/maps/FulgurRuins/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


FulgurRuins_RanFromRegieleki::
# 146 "data/maps/FulgurRuins/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIELEKI
# 147 "data/maps/FulgurRuins/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	return


FulgurRuins_CaveEntranceMiddle_Text_0:
# 52 "data/maps/FulgurRuins/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "STAY CLOSE TO THE WALL. RUN AROUND ONE\l"
	.string "LAP.$"

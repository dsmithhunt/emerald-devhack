IslandCave_EventScript_CaveEntranceMiddle::
# 2 "data/maps/IslandCave/scripts.pory"
	lockall
# 3 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 4 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_BigHoleInWall
# 5 "data/maps/IslandCave/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 6 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IslandCave_EventScript_CaveEntranceMiddle_1
# 15 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 16 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 17 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 18 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
	return

IslandCave_EventScript_CaveEntranceMiddle_1:
# 7 "data/maps/IslandCave/scripts.pory"
	msgbox IslandCave_EventScript_CaveEntranceMiddle_Text_0
# 11 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 12 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 13 "data/maps/IslandCave/scripts.pory"
	releaseall
	return


IslandCave_EventScript_BigHoleInWall::
# 23 "data/maps/IslandCave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 24 "data/maps/IslandCave/scripts.pory"
	releaseall
	return


IslandCave_EventScript_CaveEntranceSide::
# 28 "data/maps/IslandCave/scripts.pory"
	lockall
# 29 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 30 "data/maps/IslandCave/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 31 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IslandCave_EventScript_CaveEntranceSide_1
# 43 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 44 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CloseBrailleMsg
# 45 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 46 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 47 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
	return

IslandCave_EventScript_CaveEntranceSide_1:
# 32 "data/maps/IslandCave/scripts.pory"
	msgbox IslandCave_EventScript_CaveEntranceMiddle_Text_0
# 36 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CaveEntranceSide_5
IslandCave_EventScript_CaveEntranceSide_4:
# 39 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 40 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 41 "data/maps/IslandCave/scripts.pory"
	releaseall
	return

IslandCave_EventScript_CaveEntranceSide_5:
# 37 "data/maps/IslandCave/scripts.pory"
	releaseall
	goto IslandCave_EventScript_CaveEntranceSide_4


IslandCave_EventScript_CloseBrailleMsg::
# 52 "data/maps/IslandCave/scripts.pory"
	waitbuttonpress
# 53 "data/maps/IslandCave/scripts.pory"
	closebraillemessage
# 54 "data/maps/IslandCave/scripts.pory"
	releaseall
	return


# 57 "data/maps/IslandCave/scripts.pory"

# 58 "data/maps/IslandCave/scripts.pory"
IslandCave_MapScripts::
# 59 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IslandCave_OnResume
# 60 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IslandCave_OnLoad
# 61 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IslandCave_OnTransition
# 62 "data/maps/IslandCave/scripts.pory"
	.byte 0
# 63 "data/maps/IslandCave/scripts.pory"

# 64 "data/maps/IslandCave/scripts.pory"
IslandCave_OnResume:
# 65 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, IslandCave_EventScript_TryRemoveRegice
# 66 "data/maps/IslandCave/scripts.pory"
	end
# 67 "data/maps/IslandCave/scripts.pory"

# 68 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_TryRemoveRegice::
# 69 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/IslandCave/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 71 "data/maps/IslandCave/scripts.pory"
	removeobject VAR_LAST_TALKED
# 72 "data/maps/IslandCave/scripts.pory"
	return
# 73 "data/maps/IslandCave/scripts.pory"

# 74 "data/maps/IslandCave/scripts.pory"
IslandCave_OnLoad:
# 75 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_HideRegiEntrance
# 76 "data/maps/IslandCave/scripts.pory"
	end
# 77 "data/maps/IslandCave/scripts.pory"

# 78 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_HideRegiEntrance::
# 79 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 80 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 81 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 82 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 83 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 84 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 85 "data/maps/IslandCave/scripts.pory"
	return
# 86 "data/maps/IslandCave/scripts.pory"

# 87 "data/maps/IslandCave/scripts.pory"
IslandCave_OnTransition:
# 88 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_LANDMARK_ISLAND_CAVE
# 89 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 90 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGICE, IslandCave_EventScript_ShowRegice
# 91 "data/maps/IslandCave/scripts.pory"
	end
# 92 "data/maps/IslandCave/scripts.pory"

# 93 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ShowRegice::
# 94 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_HIDE_REGICE
# 95 "data/maps/IslandCave/scripts.pory"
	return
# 96 "data/maps/IslandCave/scripts.pory"

# 97 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_OpenRegiEntrance::
# 98 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 99 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 100 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 101 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 102 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 103 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 104 "data/maps/IslandCave/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/IslandCave/scripts.pory"
	playse SE_BANG
# 106 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
# 107 "data/maps/IslandCave/scripts.pory"
	end
# 108 "data/maps/IslandCave/scripts.pory"

# 109 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ClearSteps::
# 110 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_1, 0
# 111 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_2, 0
# 112 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_3, 0
# 113 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_TEMP_REGICE_PUZZLE_FAILED
# 114 "data/maps/IslandCave/scripts.pory"
	return
# 115 "data/maps/IslandCave/scripts.pory"

# 116 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice::
# 117 "data/maps/IslandCave/scripts.pory"
	lock
# 118 "data/maps/IslandCave/scripts.pory"
	faceplayer
# 119 "data/maps/IslandCave/scripts.pory"
	waitse
# 120 "data/maps/IslandCave/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 121 "data/maps/IslandCave/scripts.pory"
	delay 40
# 122 "data/maps/IslandCave/scripts.pory"
	waitmoncry
# 123 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_REGICE, 40
# 124 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 125 "data/maps/IslandCave/scripts.pory"
	special StartRegiBattle
# 126 "data/maps/IslandCave/scripts.pory"
	waitstate
# 127 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 128 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 129 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, IslandCave_EventScript_DefeatedRegice
# 130 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IslandCave_EventScript_RanFromRegice
# 131 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IslandCave_EventScript_RanFromRegice
# 132 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 133 "data/maps/IslandCave/scripts.pory"
	release
# 134 "data/maps/IslandCave/scripts.pory"
	end
# 135 "data/maps/IslandCave/scripts.pory"

# 136 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_DefeatedRegice::
# 137 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 138 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 139 "data/maps/IslandCave/scripts.pory"
	end
# 140 "data/maps/IslandCave/scripts.pory"

# 141 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_RanFromRegice::
# 142 "data/maps/IslandCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 143 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 144 "data/maps/IslandCave/scripts.pory"
	end

IslandCave_EventScript_CaveEntranceMiddle_Text_0:
# 8 "data/maps/IslandCave/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "STAY CLOSE TO THE WALL. RUN AROUND ONE\l"
	.string "LAP.$"

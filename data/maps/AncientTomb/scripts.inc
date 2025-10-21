AncientTomb_EventScript_CaveEntranceMiddle::
# 2 "data/maps/AncientTomb/scripts.pory"
	lockall
# 3 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_BigHoleInWall
# 4 "data/maps/AncientTomb/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 5 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AncientTomb_EventScript_CaveEntranceMiddle_2
# 11 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
AncientTomb_EventScript_CaveEntranceMiddle_1:
# 13 "data/maps/AncientTomb/scripts.pory"
	releaseall
	return

AncientTomb_EventScript_CaveEntranceMiddle_2:
# 6 "data/maps/AncientTomb/scripts.pory"
	msgbox AncientTomb_EventScript_CaveEntranceMiddle_Text_0
	goto AncientTomb_EventScript_CaveEntranceMiddle_1


AncientTomb_EventScript_BigHoleInWall::
# 17 "data/maps/AncientTomb/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 18 "data/maps/AncientTomb/scripts.pory"
	releaseall
	return


AncientTomb_EventScript_CaveEntranceSide::
# 22 "data/maps/AncientTomb/scripts.pory"
	lockall
# 23 "data/maps/AncientTomb/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 24 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AncientTomb_EventScript_CaveEntranceSide_2
# 30 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
AncientTomb_EventScript_CaveEntranceSide_1:
# 32 "data/maps/AncientTomb/scripts.pory"
	releaseall
	return

AncientTomb_EventScript_CaveEntranceSide_2:
# 25 "data/maps/AncientTomb/scripts.pory"
	msgbox AncientTomb_EventScript_CaveEntranceMiddle_Text_0
	goto AncientTomb_EventScript_CaveEntranceSide_1


# 35 "data/maps/AncientTomb/scripts.pory"

# 36 "data/maps/AncientTomb/scripts.pory"
AncientTomb_MapScripts::
# 37 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
# 38 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
# 39 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
# 40 "data/maps/AncientTomb/scripts.pory"
	.byte 0
# 41 "data/maps/AncientTomb/scripts.pory"

# 42 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnResume:
# 43 "data/maps/AncientTomb/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_EventScript_TryRemoveRegisteel
# 44 "data/maps/AncientTomb/scripts.pory"
	end
# 45 "data/maps/AncientTomb/scripts.pory"

# 46 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_TryRemoveRegisteel::
# 47 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 48 "data/maps/AncientTomb/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 49 "data/maps/AncientTomb/scripts.pory"
	removeobject VAR_LAST_TALKED
# 50 "data/maps/AncientTomb/scripts.pory"
	return
# 51 "data/maps/AncientTomb/scripts.pory"

# 52 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnTransition:
# 53 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_LANDMARK_ANCIENT_TOMB
# 54 "data/maps/AncientTomb/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_EventScript_ShowRegisteel
# 55 "data/maps/AncientTomb/scripts.pory"
	end
# 56 "data/maps/AncientTomb/scripts.pory"

# 57 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_ShowRegisteel::
# 58 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_HIDE_REGISTEEL
# 59 "data/maps/AncientTomb/scripts.pory"
	return
# 60 "data/maps/AncientTomb/scripts.pory"

# 61 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnLoad:
# 62 "data/maps/AncientTomb/scripts.pory"
	call_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_HideRegiEntrance
# 63 "data/maps/AncientTomb/scripts.pory"
	end
# 64 "data/maps/AncientTomb/scripts.pory"

# 65 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_HideRegiEntrance::
# 66 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 67 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 68 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 69 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 70 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 71 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 72 "data/maps/AncientTomb/scripts.pory"
	return
# 73 "data/maps/AncientTomb/scripts.pory"

# 74 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel::
# 75 "data/maps/AncientTomb/scripts.pory"
	lock
# 76 "data/maps/AncientTomb/scripts.pory"
	faceplayer
# 77 "data/maps/AncientTomb/scripts.pory"
	waitse
# 78 "data/maps/AncientTomb/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 79 "data/maps/AncientTomb/scripts.pory"
	delay 40
# 80 "data/maps/AncientTomb/scripts.pory"
	waitmoncry
# 81 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 40
# 82 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 83 "data/maps/AncientTomb/scripts.pory"
	special StartRegiBattle
# 84 "data/maps/AncientTomb/scripts.pory"
	waitstate
# 85 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 87 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedRegisteel
# 88 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromRegisteel
# 89 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromRegisteel
# 90 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 91 "data/maps/AncientTomb/scripts.pory"
	release
# 92 "data/maps/AncientTomb/scripts.pory"
	end
# 93 "data/maps/AncientTomb/scripts.pory"

# 94 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_DefeatedRegisteel::
# 95 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 96 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 97 "data/maps/AncientTomb/scripts.pory"
	end
# 98 "data/maps/AncientTomb/scripts.pory"

# 99 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_RanFromRegisteel::
# 100 "data/maps/AncientTomb/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 101 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 102 "data/maps/AncientTomb/scripts.pory"
	end

AncientTomb_EventScript_CaveEntranceMiddle_Text_0:
# 7 "data/maps/AncientTomb/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "THOSE WHO INHERIT OUR WILL, SHINE IN\l"
	.string "THE MIDDLE.$"

SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall::
# 4 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 5 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_HoleInWall
# 6 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 7 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2
# 13 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1:
# 15 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	return

SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2:
# 8 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_Text_0
	goto SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1


SealedChamber_OuterRoom_EventScript_HoleInWall::
# 19 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 20 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	return


SealedChamber_OuterRoom_EventScript_BrailleDigHere::
# 24 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 25 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 26 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_OuterRoom_EventScript_BrailleDigHere_2
# 32 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
SealedChamber_OuterRoom_EventScript_BrailleDigHere_1:
# 34 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	return

SealedChamber_OuterRoom_EventScript_BrailleDigHere_2:
# 27 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_Text_0
	goto SealedChamber_OuterRoom_EventScript_BrailleDigHere_1


# 37 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 38 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_MapScripts::
# 39 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_OuterRoom_OnResume
# 40 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_OuterRoom_OnTransition
# 41 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SealedChamber_OuterRoom_OnLoad
# 42 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	.byte 0
# 43 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 44 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnResume:
# 45 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 46 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 47 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 48 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 49 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnTransition:
# 50 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_LANDMARK_SEALED_CHAMBER
# 51 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 52 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 53 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnLoad:
# 54 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance
# 55 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 56 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 57 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance::
# 58 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_EntranceCover, TRUE
# 59 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 1, METATILE_Cave_EntranceCover, TRUE
# 60 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 1, METATILE_Cave_EntranceCover, TRUE
# 61 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 62 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 63 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 64 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	return
# 65 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 66 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleABC::
# 67 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 68 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_ABC
# 69 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 70 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 71 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 72 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleGHI::
# 73 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 74 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_GHI
# 75 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 76 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 77 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 78 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleMNO::
# 79 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 80 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_MNO
# 81 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 82 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 83 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 84 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleTUV::
# 85 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 86 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_TUV
# 87 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 88 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 89 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 90 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleDEF::
# 91 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 92 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DEF
# 93 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 94 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 95 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 96 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleJKL::
# 97 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 98 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_JKL
# 99 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 100 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 101 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 102 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePQRS::
# 103 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 104 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_PQRS
# 105 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 106 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 107 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 108 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePeriod::
# 109 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 110 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Period
# 111 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 112 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 113 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 114 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleWXYZ::
# 115 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 116 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_WXYZ
# 117 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 118 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 119 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 120 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleComma::
# 121 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 122 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Comma
# 123 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 124 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end

SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_Text_0:
# 9 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "DIG HERE.$"

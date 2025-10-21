SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleBackWall_2
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
SealedChamber_InnerRoom_EventScript_BrailleBackWall_1:
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_NoEffect
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SealedChamber_InnerRoom_EventScript_NoEffect
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

SealedChamber_InnerRoom_EventScript_BrailleBackWall_2:
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_BrailleBackWall_Text_0
	goto SealedChamber_InnerRoom_EventScript_BrailleBackWall_1


SealedChamber_InnerRoom_EventScript_NoEffect::
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return


AwakenRegigigas::
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkspecies SPECIES_REGIROCK
# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AwakenRegigigas_2
AwakenRegigigas_1:
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkspecies SPECIES_REGICE
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AwakenRegigigas_5
AwakenRegigigas_4:
# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkspecies SPECIES_REGISTEEL
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AwakenRegigigas_8
AwakenRegigigas_7:
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkspecies SPECIES_REGIELEKI
# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AwakenRegigigas_11
AwakenRegigigas_10:
# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkspecies SPECIES_REGIDRAGO
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AwakenRegigigas_14
AwakenRegigigas_13:
# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_ge AwakenRegigigas_16
# 73 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 0
# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox AwakenRegigigas_Text_1
# 75 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

AwakenRegigigas_2:
# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto AwakenRegigigas_1

AwakenRegigigas_5:
# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto AwakenRegigigas_4

AwakenRegigigas_8:
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto AwakenRegigigas_7

AwakenRegigigas_11:
# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto AwakenRegigigas_10

AwakenRegigigas_14:
# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto AwakenRegigigas_13

AwakenRegigigas_16:
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox AwakenRegigigas_Text_0
# 70 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 71 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return


SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 80 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 81 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 82 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleStoryPart1_2
# 88 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1_1:
# 90 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

SealedChamber_InnerRoom_EventScript_BrailleStoryPart1_2:
# 83 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_BrailleStoryPart1_Text_0
	goto SealedChamber_InnerRoom_EventScript_BrailleStoryPart1_1


SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 94 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 95 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 96 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleStoryPart2_2
# 102 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2_1:
# 104 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

SealedChamber_InnerRoom_EventScript_BrailleStoryPart2_2:
# 97 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_BrailleStoryPart2_Text_0
	goto SealedChamber_InnerRoom_EventScript_BrailleStoryPart2_1


SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 108 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 109 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 110 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleStoryPart3_2
# 117 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3_1:
# 119 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

SealedChamber_InnerRoom_EventScript_BrailleStoryPart3_2:
# 111 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_BrailleStoryPart3_Text_0
	goto SealedChamber_InnerRoom_EventScript_BrailleStoryPart3_1


SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 123 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 124 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 125 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleStoryPart4_2
# 131 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4_1:
# 133 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

SealedChamber_InnerRoom_EventScript_BrailleStoryPart4_2:
# 126 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_BrailleStoryPart4_Text_0
	goto SealedChamber_InnerRoom_EventScript_BrailleStoryPart4_1


SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 137 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 138 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 139 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleStoryPart5_2
# 146 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5_1:
# 148 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

SealedChamber_InnerRoom_EventScript_BrailleStoryPart5_2:
# 140 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_BrailleStoryPart5_Text_0
	goto SealedChamber_InnerRoom_EventScript_BrailleStoryPart5_1


SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 152 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 153 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 154 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleStoryPart6_2
# 161 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6_1:
# 163 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	return

SealedChamber_InnerRoom_EventScript_BrailleStoryPart6_2:
# 155 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_BrailleStoryPart6_Text_0
	goto SealedChamber_InnerRoom_EventScript_BrailleStoryPart6_1


# 166 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 167 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_MapScripts::
# 168 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.byte 0

SealedChamber_InnerRoom_EventScript_BrailleBackWall_Text_0:
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "FIRST COMES WAILORD.\l"
	.string "LAST COMES RELICANTH.$"

AwakenRegigigas_Text_0:
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You awaken Regigigas!$"

AwakenRegigigas_Text_1:
# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You don't awaken Regigigas!$"

SealedChamber_InnerRoom_EventScript_BrailleStoryPart1_Text_0:
# 84 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "IN THIS CAVE WE HAVE LIVED.$"

SealedChamber_InnerRoom_EventScript_BrailleStoryPart2_Text_0:
# 98 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "WE OWE ALL TO THE POKEMON.$"

SealedChamber_InnerRoom_EventScript_BrailleStoryPart3_Text_0:
# 112 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "BUT, WE SEALED\l"
	.string "; THE POKEMON AWAY.$"

SealedChamber_InnerRoom_EventScript_BrailleStoryPart4_Text_0:
# 127 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "WE FEARED IT.$"

SealedChamber_InnerRoom_EventScript_BrailleStoryPart5_Text_0:
# 141 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "THOSE WITH COURAGE,\l"
	.string "THOSE WITH HOPE.$"

SealedChamber_InnerRoom_EventScript_BrailleStoryPart6_Text_0:
# 156 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You use the Ancient Cypher:\n"
	.string "OPEN A DOOR.\l"
	.string "AN ETERNAL POKEMON WAITS.$"

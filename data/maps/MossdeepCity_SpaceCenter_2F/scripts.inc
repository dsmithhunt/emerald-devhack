Mossdeep_SpaceCenter_NewMaxie::
# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox Mossdeep_SpaceCenter_NewMaxie_Text_0
	return


Mossdeep_SpaceCenter_NewMaxiePostBattle::
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox Mossdeep_SpaceCenter_NewMaxiePostBattle_Text_0
	return


MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_Steven_3
MossdeepCity_SpaceCenter_2F_EventScript_Steven_1:
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	return

MossdeepCity_SpaceCenter_2F_EventScript_Steven_3:
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
	goto MossdeepCity_SpaceCenter_2F_EventScript_Steven_1


MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	return


MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
	return


MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_Text_0, TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_Text_0, PARTNER_STEVEN
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_3
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_1:
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
	return

MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_3:
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
	goto MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_1


MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_6
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_7
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_5
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_TABITHA
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_MAXIE
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_SCIENTIST, DIR_SOUTH
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_GENTLEMAN, 11, 8
# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_GENTLEMAN, DIR_NORTH
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_RICH_BOY, 6, 2
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_RICH_BOY, DIR_NORTH
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_STEVEN
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end


# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 3
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_RICH_BOY, 3, 2
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GENTLEMAN, 1, 3
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_6, 11, 2
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_7, 15, 2
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_5, 13, 4
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_6
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_7
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_5
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_NORTH
# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_EAST
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would TEAM MAGMA want to steal\n"
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "our rocket fuel in the first place?$"
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If TEAM MAGMA takes the rocket fuel,\n"
# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I won't be able to go to space!\p"
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "They can't be allowed to get away\n"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "with such an outrage!$"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "TEAM MAGMA…\n"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Do they want to go to space, too?$"
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're outnumbered three to one,\n"
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "but you still want to take us on?$"
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Clear out of the way!\n"
# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Fufufu… Since you're so\n"
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "curious, you deserve an explanation.\p"
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into MT. CHIMNEY!\p"
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With GROUDON gone, we have no need\n"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!$"
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
# 477 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 478 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're going to help me?\p"
# 479 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!\n"
# 480 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are you ready?$"
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 482 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
# 483 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Get ready quickly!$"
# 485 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 487 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 488 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 490 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat:
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 492 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 493 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 494 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We failed to make the volcano\n"
# 495 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "erupt…\p"
# 496 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We failed to control GROUDON after\n"
# 497 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we had awoken it…\p"
# 498 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 499 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 500 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 502 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 503 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, TEAM MAGMA, are wrong…\l"
# 504 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 505 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might TEAM AQUA's goal to expand\n"
# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 507 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 508 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 509 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
# 510 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 512 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 513 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 514 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
# 515 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, thank you.\p"
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I have something to give you as\n"
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "thanks for your support.\p"
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Please come see me at home\n"
# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after this.\p"
# 521 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
# 522 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I live right here on this island.$"

Mossdeep_SpaceCenter_NewMaxie_Text_0:
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: It's almost complete! It will\n"
	.string "take too long to explain. We are on the\l"
	.string "verge of something critical.\p"
	.string "DEVAN: You're crazy… I can't just let\n"
	.string "you have control of the rocket\l"
	.string "facility!$"

Mossdeep_SpaceCenter_NewMaxiePostBattle_Text_0:
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We were using this facility's\n"
	.string "sensors to track the location of the\l"
	.string "stolen submarine…\p"
	.string "Whether you believe in our vision or\n"
	.string "not, it is imperative that Archie and his\l"
	.string "TEAM AQUA be stopped!\p"
	.string "If they succeed in awakening KYOGRE,\n"
	.string "each of the superancient Pokémon will\l"
	.string "be sent into a frenzied rage!\p"
	.string "Their apocalyptic feud will destroy the\n"
	.string "world as we know it!$"

MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_Text_0:
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I think we bought enough time.$"

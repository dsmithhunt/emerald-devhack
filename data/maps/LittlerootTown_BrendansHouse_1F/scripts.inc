LittlerootTown_BrendansHouse_1F_GymBattle::
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadenewbgm MUS_VS_GYM_LEADER
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special SpawnCameraObject
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_CLICK
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_CAMERA, LittlerootTown_BrendansHouse_1F_GymBattle_Movement_0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_GymBattle_Text_0
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_HARIYAMA, CRY_MODE_ENCOUNTER
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 11, LittlerootTown_BrendansHouse_1F_GymBattle_Movement_1
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_M_COMET_PUNCH
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitse
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EFFECTIVE
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_GymBattle_Text_1
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_ENCOUNTER
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 10, LittlerootTown_BrendansHouse_1F_GymBattle_Movement_1
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_M_VITAL_THROW2
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitse
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EFFECTIVE
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitse
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_LOW_HEALTH
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitse
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_GymBattle_Text_2
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 40
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_GymBattle_Text_3
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 20
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_ENCOUNTER
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 9, LittlerootTown_BrendansHouse_1F_GymBattle_Movement_2
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_M_COMET_PUNCH
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitse
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitse
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_ENCOUNTER
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmoncry
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject 10
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_FAINT
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_GymBattle_Text_4
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_HARIYAMA, CRY_MODE_ENCOUNTER
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmoncry
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject 11
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_FAINT
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_GymBattle_Text_5
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_GymBattle_Text_6
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PC_OFF
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_CAMERA, LittlerootTown_BrendansHouse_1F_GymBattle_Movement_3
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_GymBattle_2
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, LittlerootTown_BrendansHouse_1F_GymBattle_Movement_5
LittlerootTown_BrendansHouse_1F_GymBattle_1:
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setseenmon SPECIES_SABLEYE
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setseenmon SPECIES_HARIYAMA
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setseenmon SPECIES_SLAKING
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setseenmon SPECIES_ZIGZAGOON
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setseenmon SPECIES_VIGOROTH
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special RemoveCameraObject
	return

LittlerootTown_BrendansHouse_1F_GymBattle_2:
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, LittlerootTown_BrendansHouse_1F_GymBattle_Movement_4
	goto LittlerootTown_BrendansHouse_1F_GymBattle_1


# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}? Isn't this nice?$"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do the work of\n"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "moving us in and cleaning up after.\p"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock so\n"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "don't forget to set it!$"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Go set the clock in your room, {PLAYER}.$"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: It's over…\n"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "At least we saw the ending!$"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes. One of DAD's friends,\n"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH, lives in town.\p"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so go\n"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "over and introduce yourself.$"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_GymBattle_Movement_0:
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_down
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_diag_southeast
	step_end

# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_GymBattle_Movement_1:
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	jump_in_place_right
	step_end

# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_GymBattle_Movement_2:
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	jump_left
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock_facing_direction
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	unlock_facing_direction
	step_end

# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_GymBattle_Movement_3:
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_diag_northwest
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_up
	step_end

# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_GymBattle_Movement_4:
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_left
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_player
	step_end

# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_GymBattle_Movement_5:
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_faster_right
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_player
	step_end

LittlerootTown_BrendansHouse_1F_GymBattle_Text_0:
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "COMMENTATOR: Wow, the challenger has\n"
	.string "Norman down to his last POKéMON!\p"
	.string "Will this be the first person to win the\n"
	.string "newly revamped Balance Badge?$"

LittlerootTown_BrendansHouse_1F_GymBattle_Text_1:
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hariyama used Bullet Punch!\l"
	.string "and a Sucker Punch from Sableye!$"

LittlerootTown_BrendansHouse_1F_GymBattle_Text_2:
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "NORMAN: Slaking, NOW!$"

LittlerootTown_BrendansHouse_1F_GymBattle_Text_3:
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Slaking used Brutal Swing.$"

LittlerootTown_BrendansHouse_1F_GymBattle_Text_4:
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The challenger's Sableye fainted.$"

LittlerootTown_BrendansHouse_1F_GymBattle_Text_5:
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The challenger's Hariyama fainted.$"

LittlerootTown_BrendansHouse_1F_GymBattle_Text_6:
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The challenger has no POKéMON\n"
	.string "remaining!\p"
	.string "It was close, but\n"
	.string "Norman is the winner!$"

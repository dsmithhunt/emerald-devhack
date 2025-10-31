RustboroCity_Gym_MapScripts::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_Gym_OnLoad
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script_2 VAR_UNUSED_0x404E, 1, RustboroCity_Gym_Increment
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script_2 VAR_UNUSED_0x404E, 2, RustboroCity_Gym_CheckBadge
	.2byte 0


RustboroCity_Gym_OnLoad::
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_DeactivatePuzzle
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_RUSTBORO_GYM_STATE
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, RustboroCity_Gym_OnLoad_2
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_OnLoad_3
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_OnLoad_4
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_OnLoad_5
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, RustboroCity_Gym_OnLoad_6
	return

RustboroCity_Gym_OnLoad_2:
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return

RustboroCity_Gym_OnLoad_3:
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch1Pressed
	return

RustboroCity_Gym_OnLoad_4:
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch2Pressed
	return

RustboroCity_Gym_OnLoad_5:
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch3Pressed
	return

RustboroCity_Gym_OnLoad_6:
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch4Pressed
	return


RustboroCity_Gym_EventScript_UpdateBarriers::
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_RUSTBORO_GYM_BARRIERS_STATE, RustboroCity_Gym_EventScript_SetAltBarriers
	return


RustboroCity_Gym_EventScript_SetAltBarriers::
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	return


RustboroCity_Gym_EventScript_Switch1Pressed::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_Switch2Pressed::
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_Switch3Pressed::
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_Switch4Pressed::
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_DeactivatePuzzle::
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
	return


RustboroCity_Gym_EventScript_Switch1::
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 1, RustboroCity_Gym_EventScript_SwitchDoNothing
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 1
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_Switch2::
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 2, RustboroCity_Gym_EventScript_SwitchDoNothing
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 2
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_Switch3::
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 3, RustboroCity_Gym_EventScript_SwitchDoNothing
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 3
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_Switch4::
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 4, RustboroCity_Gym_EventScript_SwitchDoNothing
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 4
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_PressFloorSwitch::
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	special DrawWholeMapView
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_RUSTBORO_GYM_BARRIERS_STATE, RustboroCity_Gym_EventScript_ClearBarriersAltState
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_GYM_BARRIERS_STATE, RustboroCity_Gym_EventScript_SetBarriersAltState
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_EventScript_SwitchDoNothing::
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_EventScript_SetBarriersAltState::
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RUSTBORO_GYM_BARRIERS_STATE
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_EventScript_ClearBarriersAltState::
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_RUSTBORO_GYM_BARRIERS_STATE
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_Band::
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_JERRY_2, RustboroCity_Gym_Band_Text_0, TRAINER_JERRY_3, RustboroCity_Gym_Band_Text_1
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_RichBoy::
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_BattleGirl::
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JERRY_4, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_Beauty::
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JERRY_5, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_Cameraman::
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_Damien::
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAREN_2, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_Warp::
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	warp MAP_RUSTBORO_CITY_GYM, 25, 19
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	waitstate
	return


RustboroCity_Gym_Increment::
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_UNUSED_0x404E, 2
	return


RustboroCity_Gym_CheckBadge::
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_UNUSED_0x404E, 0
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_CheckBadge_1
	return

RustboroCity_Gym_CheckBadge_1:
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_ChallengeSierra
	return


RustboroCity_Gym_ChallengeSierra::
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Gym_ChallengeSierra_Movement_0
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	special SpawnCameraObject
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_ChallengeSierra_Movement_1
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 20
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ChallengeSierra_Text_0
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Gym_ChallengeSierra_Movement_2
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_ChallengeSierra_Movement_3
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ChallengeSierra_Text_1
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SIERRA, RustboroCity_Gym_ChallengeSierra_Text_2
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_SierraDefeated
	return


RustboroCity_Gym_SierraDefeated::
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	special SpawnCameraObject
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_SierraDefeated_Text_0
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_SierraDefeated_Movement_0
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Gym_SierraDefeated_Movement_1
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_SierraDefeated_Movement_2
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_SierraDefeated_Text_1
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_GiveTM
	return


RustboroCity_Gym_GiveTM::
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_GiveTM_Text_0
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


RustboroCity_Gym_Sierra::
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_SIERRA, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons, RustboroCity_Gym_SierraDefeated, NO_MUSIC
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


# 310 "data/maps/RustboroCity_Gym/scripts.pory"

# 311 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SIERRA, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 319 "data/maps/RustboroCity_Gym/scripts.pory"

# 320 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 334 "data/maps/RustboroCity_Gym/scripts.pory"

# 335 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 342 "data/maps/RustboroCity_Gym/scripts.pory"

# 343 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_SIERRA, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 347 "data/maps/RustboroCity_Gym/scripts.pory"

# 348 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 352 "data/maps/RustboroCity_Gym/scripts.pory"

# 353 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 357 "data/maps/RustboroCity_Gym/scripts.pory"

# 358 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 362 "data/maps/RustboroCity_Gym/scripts.pory"

# 363 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 370 "data/maps/RustboroCity_Gym/scripts.pory"

# 371 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 374 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 375 "data/maps/RustboroCity_Gym/scripts.pory"

# 376 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 377 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 381 "data/maps/RustboroCity_Gym/scripts.pory"

# 382 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 383 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 384 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 387 "data/maps/RustboroCity_Gym/scripts.pory"

# 388 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 389 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 390 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 391 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 392 "data/maps/RustboroCity_Gym/scripts.pory"

# 393 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 395 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 396 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 397 "data/maps/RustboroCity_Gym/scripts.pory"

# 398 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 399 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 400 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 403 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 404 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 405 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 406 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 407 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 408 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 409 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 410 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 411 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 412 "data/maps/RustboroCity_Gym/scripts.pory"

# 413 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 417 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 418 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 422 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 424 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 426 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 427 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 431 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 432 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 433 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 434 "data/maps/RustboroCity_Gym/scripts.pory"

# 435 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 436 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 437 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 438 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 439 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 440 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 441 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 442 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 443 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 444 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 446 "data/maps/RustboroCity_Gym/scripts.pory"

# 447 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 448 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 449 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 450 "data/maps/RustboroCity_Gym/scripts.pory"

# 451 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 452 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 453 "data/maps/RustboroCity_Gym/scripts.pory"

# 454 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 455 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 456 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 457 "data/maps/RustboroCity_Gym/scripts.pory"

# 458 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 459 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 460 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 461 "data/maps/RustboroCity_Gym/scripts.pory"

# 462 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 463 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 464 "data/maps/RustboroCity_Gym/scripts.pory"

# 465 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 466 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 467 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 468 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 469 "data/maps/RustboroCity_Gym/scripts.pory"

# 470 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 471 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 472 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 473 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 474 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 475 "data/maps/RustboroCity_Gym/scripts.pory"

# 476 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 477 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 478 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 479 "data/maps/RustboroCity_Gym/scripts.pory"

# 480 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 481 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 482 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 483 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 484 "data/maps/RustboroCity_Gym/scripts.pory"

# 485 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 486 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 487 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 488 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 489 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 490 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 491 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 492 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 493 "data/maps/RustboroCity_Gym/scripts.pory"

# 494 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 495 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 496 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 497 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 498 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 499 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 500 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 501 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 502 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 503 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 504 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 505 "data/maps/RustboroCity_Gym/scripts.pory"

# 506 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 507 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 508 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 509 "data/maps/RustboroCity_Gym/scripts.pory"

# 510 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 511 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 512 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 513 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 514 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 515 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 516 "data/maps/RustboroCity_Gym/scripts.pory"

# 517 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 518 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 519 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 520 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 521 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 522 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 523 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 524 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 525 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 526 "data/maps/RustboroCity_Gym/scripts.pory"

# 527 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 528 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 529 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 530 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 531 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 532 "data/maps/RustboroCity_Gym/scripts.pory"

# 533 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 534 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 535 "data/maps/RustboroCity_Gym/scripts.pory"

# 536 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 537 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 538 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 539 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 540 "data/maps/RustboroCity_Gym/scripts.pory"

# 541 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 542 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 543 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 544 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 545 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 546 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 547 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 548 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 549 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 550 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 551 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 552 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 553 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 554 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 555 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 556 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 557 "data/maps/RustboroCity_Gym/scripts.pory"

# 558 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 559 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 560 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 561 "data/maps/RustboroCity_Gym/scripts.pory"

# 562 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 563 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 564 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 565 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 566 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 567 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 568 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 569 "data/maps/RustboroCity_Gym/scripts.pory"

# 570 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 571 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 572 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 573 "data/maps/RustboroCity_Gym/scripts.pory"

# 574 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 575 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 576 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 577 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 578 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 579 "data/maps/RustboroCity_Gym/scripts.pory"

# 580 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 581 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 582 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 583 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 584 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 585 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 586 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 587 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 588 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 589 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 590 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

# 226 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_0:
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
	step_end

# 231 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_1:
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
	step_end

# 243 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_2:
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_fast_right
	step_end

# 248 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_3:
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_fast_left
	step_end

# 271 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_0:
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
	step_end

# 274 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_1:
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	unlock_facing_direction
	step_end

# 279 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_2:
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
	step_end

RustboroCity_Gym_Band_Text_0:
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you take bug POKéMON to school,\n"
	.string "you get to be instantly popular!$"

RustboroCity_Gym_Band_Text_1:
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't be popular if I lose.$"

RustboroCity_Gym_Band_Text_2:
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you have a big bug POKéMON,\n"
	.string "people respect you for it.$"

RustboroCity_Gym_ChallengeSierra_Text_0:
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "SIERRA: I knew I'd see you again.\p"
	.string "I'm Sierra, the gym leader of Rustboro\n"
	.string "City.\p"
	.string "If you can win against me, you'll earn\n"
	.string "the Shutter Badge and be on the path\l"
	.string "to the POKéMON CHAMPIONSHIP.$"

RustboroCity_Gym_ChallengeSierra_Text_1:
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Let's see if you can win against my\n"
	.string "shockingly cute POKéMON!$"

RustboroCity_Gym_ChallengeSierra_Text_2:
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You did it! By defeating a gym\n"
	.string "leader, you earn a gym badge!\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE Shutter Badge.$"

RustboroCity_Gym_SierraDefeated_Text_0:
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Shutter Badge\n"
	.string "from Sierra.$"

RustboroCity_Gym_SierraDefeated_Text_1:
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That badge gives you the ability to use\n"
	.string "the HM move, FLASH, outside of battle.\p"
	.string "Also, defeated gym leaders give\n"
	.string "successful challengers a TM to help\l"
	.string "them on their journeys. Here…$"

RustboroCity_Gym_GiveTM_Text_0:
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM 39,\n"
	.string "contains CHARGE BEAM.\p"
	.string "It not only inflicts damage, it can also\n"
	.string "raise Sp. Atk.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.$"

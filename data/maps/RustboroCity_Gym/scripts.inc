RustboroCity_Gym_MapScripts::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_Gym_OnLoad
	.byte 0


RustboroCity_Gym_OnLoad::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_DeactivatePuzzle
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_RUSTBORO_GYM_STATE
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, RustboroCity_Gym_OnLoad_2
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_OnLoad_3
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_OnLoad_4
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_OnLoad_5
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, RustboroCity_Gym_OnLoad_6
	return

RustboroCity_Gym_OnLoad_2:
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return

RustboroCity_Gym_OnLoad_3:
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch1Pressed
	return

RustboroCity_Gym_OnLoad_4:
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch2Pressed
	return

RustboroCity_Gym_OnLoad_5:
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch3Pressed
	return

RustboroCity_Gym_OnLoad_6:
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Switch4Pressed
	return


RustboroCity_Gym_EventScript_UpdateBarriers::
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_RUSTBORO_GYM_BARRIERS_STATE, RustboroCity_Gym_EventScript_SetAltBarriers
	return


RustboroCity_Gym_EventScript_SetAltBarriers::
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	return


RustboroCity_Gym_EventScript_Switch1Pressed::
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_Switch2Pressed::
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_Switch3Pressed::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_Switch4Pressed::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_UpdateBarriers
	return


RustboroCity_Gym_EventScript_DeactivatePuzzle::
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
	return


RustboroCity_Gym_EventScript_Switch1::
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 1, RustboroCity_Gym_EventScript_SwitchDoNothing
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 1
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_Switch2::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 2, RustboroCity_Gym_EventScript_SwitchDoNothing
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 2
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_Switch3::
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 3, RustboroCity_Gym_EventScript_SwitchDoNothing
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 3
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_Switch4::
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_SwitchDoNothing
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RUSTBORO_GYM_STATE, 4, RustboroCity_Gym_EventScript_SwitchDoNothing
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 4
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_PressFloorSwitch
	return


RustboroCity_Gym_EventScript_PressFloorSwitch::
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	special DrawWholeMapView
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_RUSTBORO_GYM_BARRIERS_STATE, RustboroCity_Gym_EventScript_ClearBarriersAltState
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_GYM_BARRIERS_STATE, RustboroCity_Gym_EventScript_SetBarriersAltState
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_EventScript_SwitchDoNothing::
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_EventScript_SetBarriersAltState::
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RUSTBORO_GYM_BARRIERS_STATE
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_EventScript_ClearBarriersAltState::
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_RUSTBORO_GYM_BARRIERS_STATE
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return


RustboroCity_Gym_Band::
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_JERRY_2, RustboroCity_Gym_Band_Text_0, TRAINER_JERRY_3, RustboroCity_Gym_Band_Text_1
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_RichBoy::
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_BattleGirl::
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JERRY_4, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_Beauty::
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JERRY_5, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_Cameraman::
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_Damien::
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAREN_2, RustboroCity_Gym_Band_Text_0, RustboroCity_Gym_Band_Text_1
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Band_Text_2, MSGBOX_AUTOCLOSE
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
	return


RustboroCity_Gym_CheckBadge::
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_CheckBadge_1
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_ChallengeSierra
	return

RustboroCity_Gym_CheckBadge_1:
	end


RustboroCity_Gym_ChallengeSierra::
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	special SpawnCameraObject
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	special HealPlayerParty
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_ChallengeSierra_Movement_0
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 20
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ChallengeSierra_Text_0
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_lt RustboroCity_Gym_ChallengeSierra_1
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Gym_ChallengeSierra_Movement_2
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_ChallengeSierra_Movement_3
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ChallengeSierra_Text_2
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SIERRA, RustboroCity_Gym_ChallengeSierra_Text_3
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_SierraDefeated
	return

RustboroCity_Gym_ChallengeSierra_1:
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ChallengeSierra_Text_1
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_ChallengeSierra_Movement_1
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


RustboroCity_Gym_SierraDefeated::
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	special SpawnCameraObject
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_SierraDefeated_Text_0
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_SierraDefeated_Movement_0
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Gym_SierraDefeated_Movement_1
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_SierraDefeated_Movement_2
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_SierraDefeated_Text_1
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_GiveTM
	return


RustboroCity_Gym_GiveTM::
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_GiveTM_Text_0
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


RustboroCity_Gym_Sierra::
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_SIERRA, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons, RustboroCity_Gym_SierraDefeated, NO_MUSIC
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle
# 310 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


# 313 "data/maps/RustboroCity_Gym/scripts.pory"

# 314 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SIERRA, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 322 "data/maps/RustboroCity_Gym/scripts.pory"

# 323 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 337 "data/maps/RustboroCity_Gym/scripts.pory"

# 338 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 345 "data/maps/RustboroCity_Gym/scripts.pory"

# 346 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_SIERRA, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 350 "data/maps/RustboroCity_Gym/scripts.pory"

# 351 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 355 "data/maps/RustboroCity_Gym/scripts.pory"

# 356 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 360 "data/maps/RustboroCity_Gym/scripts.pory"

# 361 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 365 "data/maps/RustboroCity_Gym/scripts.pory"

# 366 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 373 "data/maps/RustboroCity_Gym/scripts.pory"

# 374 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 377 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 378 "data/maps/RustboroCity_Gym/scripts.pory"

# 379 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 381 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 382 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 383 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 384 "data/maps/RustboroCity_Gym/scripts.pory"

# 385 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 387 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 388 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 389 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 390 "data/maps/RustboroCity_Gym/scripts.pory"

# 391 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 392 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 393 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 395 "data/maps/RustboroCity_Gym/scripts.pory"

# 396 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 397 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 398 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 399 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 400 "data/maps/RustboroCity_Gym/scripts.pory"

# 401 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 403 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 404 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 405 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 406 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 407 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 408 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 409 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 410 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 411 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 415 "data/maps/RustboroCity_Gym/scripts.pory"

# 416 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 417 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 418 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 422 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 424 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 426 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 427 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 431 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 432 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 433 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 434 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 435 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 436 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 437 "data/maps/RustboroCity_Gym/scripts.pory"

# 438 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 439 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 440 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 441 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 442 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 443 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 444 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 446 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 447 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 448 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 449 "data/maps/RustboroCity_Gym/scripts.pory"

# 450 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 451 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 452 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 453 "data/maps/RustboroCity_Gym/scripts.pory"

# 454 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 455 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 456 "data/maps/RustboroCity_Gym/scripts.pory"

# 457 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 458 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 459 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 460 "data/maps/RustboroCity_Gym/scripts.pory"

# 461 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 462 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 463 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 464 "data/maps/RustboroCity_Gym/scripts.pory"

# 465 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 466 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 467 "data/maps/RustboroCity_Gym/scripts.pory"

# 468 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 469 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 470 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 471 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 472 "data/maps/RustboroCity_Gym/scripts.pory"

# 473 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 474 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 475 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 476 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 477 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 478 "data/maps/RustboroCity_Gym/scripts.pory"

# 479 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 480 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 481 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 482 "data/maps/RustboroCity_Gym/scripts.pory"

# 483 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 484 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 485 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 486 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 487 "data/maps/RustboroCity_Gym/scripts.pory"

# 488 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 489 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 490 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 491 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 492 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 493 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 494 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 495 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 496 "data/maps/RustboroCity_Gym/scripts.pory"

# 497 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 498 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 499 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 500 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 501 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 502 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 503 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 504 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 505 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 506 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 507 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 508 "data/maps/RustboroCity_Gym/scripts.pory"

# 509 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 510 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 511 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 512 "data/maps/RustboroCity_Gym/scripts.pory"

# 513 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 514 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 515 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 516 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 517 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 518 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 519 "data/maps/RustboroCity_Gym/scripts.pory"

# 520 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 521 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 522 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 523 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 524 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 525 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 526 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 527 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 528 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 529 "data/maps/RustboroCity_Gym/scripts.pory"

# 530 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 531 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 532 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 533 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 534 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 535 "data/maps/RustboroCity_Gym/scripts.pory"

# 536 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 537 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 538 "data/maps/RustboroCity_Gym/scripts.pory"

# 539 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 540 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 541 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 542 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 543 "data/maps/RustboroCity_Gym/scripts.pory"

# 544 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 545 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 546 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 547 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 548 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 549 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 550 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 551 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 552 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 553 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 554 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 555 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 556 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 557 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 558 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 559 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 560 "data/maps/RustboroCity_Gym/scripts.pory"

# 561 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 562 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 563 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 564 "data/maps/RustboroCity_Gym/scripts.pory"

# 565 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 566 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 567 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 568 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 569 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 570 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 571 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 572 "data/maps/RustboroCity_Gym/scripts.pory"

# 573 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 574 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 575 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 576 "data/maps/RustboroCity_Gym/scripts.pory"

# 577 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 578 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 579 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 580 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 581 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 582 "data/maps/RustboroCity_Gym/scripts.pory"

# 583 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 584 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 585 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 586 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 587 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 588 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 589 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 590 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 591 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 592 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 593 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

# 216 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_0:
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
	step_end

# 232 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_1:
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
	step_end

# 240 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_2:
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_fast_right
	step_end

# 245 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_3:
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_fast_left
	step_end

# 274 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_0:
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
	step_end

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_1:
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	unlock_facing_direction
	step_end

# 282 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_2:
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
	step_end

RustboroCity_Gym_Band_Text_0:
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you take bug POKéMON to school,\n"
	.string "you get to be instantly popular!$"

RustboroCity_Gym_Band_Text_1:
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't be popular if I lose.$"

RustboroCity_Gym_Band_Text_2:
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you have a big bug POKéMON,\n"
	.string "people respect you for it.$"

RustboroCity_Gym_ChallengeSierra_Text_0:
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "SIERRA: I knew I'd see you again.\p"
	.string "I'm Sierra, the gym leader of Rustboro\n"
	.string "City.\p"
	.string "If you can win against me, you'll earn\n"
	.string "the Shutter Badge and be on the path\l"
	.string "to the POKéMON CHAMPIONSHIP.$"

RustboroCity_Gym_ChallengeSierra_Text_1:
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh… I'm sorry, all official gym\n"
	.string "challenges are double battles. You\l"
	.string "don't have enough POKéMON for that\l"
	.string "right now.$"

RustboroCity_Gym_ChallengeSierra_Text_2:
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Let's see if you can win against my\n"
	.string "shockingly cute POKéMON!$"

RustboroCity_Gym_ChallengeSierra_Text_3:
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You did it! By defeating a gym\n"
	.string "leader, you earn a gym badge!\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE Shutter Badge.$"

RustboroCity_Gym_SierraDefeated_Text_0:
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Shutter Badge\n"
	.string "from Sierra.$"

RustboroCity_Gym_SierraDefeated_Text_1:
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That badge gives you the ability to use\n"
	.string "the HM move, FLASH, outside of battle.\p"
	.string "Also, defeated gym leaders give\n"
	.string "successful challengers a TM to help\l"
	.string "them on their journeys. Here…$"

RustboroCity_Gym_GiveTM_Text_0:
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM 39,\n"
	.string "contains CHARGE BEAM.\p"
	.string "It not only inflicts damage, it can also\n"
	.string "raise Sp. Atk.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.$"

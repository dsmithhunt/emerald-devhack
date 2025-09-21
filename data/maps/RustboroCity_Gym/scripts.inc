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


RustboroCity_Gym_CheckBadge::
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_CheckBadge_1
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_ChallengeSierra
	return

RustboroCity_Gym_CheckBadge_1:
	end


RustboroCity_Gym_ChallengeSierra::
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	special SpawnCameraObject
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	special HealPlayerParty
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_ChallengeSierra_Movement_0
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 20
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ChallengeSierra_Text_0
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_lt RustboroCity_Gym_ChallengeSierra_1
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Gym_ChallengeSierra_Movement_2
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_ChallengeSierra_Movement_3
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_ChallengeSierra_Movement_4
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_SIERRA, RustboroCity_Gym_ChallengeSierra_Text_2, RustboroCity_Gym_ChallengeSierra_Text_3, RustboroCity_Gym_ChallengeSierra_Text_4, RustboroCity_Gym_SierraDefeated, NO_MUSIC
	return

RustboroCity_Gym_ChallengeSierra_1:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ChallengeSierra_Text_1
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_ChallengeSierra_Movement_1
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


RustboroCity_Gym_SierraDefeated::
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	special SpawnCameraObject
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_SierraDefeated_Text_0
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_SierraDefeated_Movement_0
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Gym_SierraDefeated_Movement_1
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, RustboroCity_Gym_SierraDefeated_Movement_2
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	special RemoveCameraObject
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_SierraDefeated_Text_1
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_GiveTM
	return


RustboroCity_Gym_GiveTM::
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_GiveTM_Text_0
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


RustboroCity_Gym_Sierra::
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_SIERRA, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons, RustboroCity_Gym_SierraDefeated, NO_MUSIC
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


# 252 "data/maps/RustboroCity_Gym/scripts.pory"

# 253 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SIERRA, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 261 "data/maps/RustboroCity_Gym/scripts.pory"

# 262 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 284 "data/maps/RustboroCity_Gym/scripts.pory"

# 285 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_SIERRA, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 289 "data/maps/RustboroCity_Gym/scripts.pory"

# 290 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 294 "data/maps/RustboroCity_Gym/scripts.pory"

# 295 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 299 "data/maps/RustboroCity_Gym/scripts.pory"

# 300 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 304 "data/maps/RustboroCity_Gym/scripts.pory"

# 305 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 310 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 312 "data/maps/RustboroCity_Gym/scripts.pory"

# 313 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 317 "data/maps/RustboroCity_Gym/scripts.pory"

# 318 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 323 "data/maps/RustboroCity_Gym/scripts.pory"

# 324 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 329 "data/maps/RustboroCity_Gym/scripts.pory"

# 330 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 334 "data/maps/RustboroCity_Gym/scripts.pory"

# 335 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 339 "data/maps/RustboroCity_Gym/scripts.pory"

# 340 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 354 "data/maps/RustboroCity_Gym/scripts.pory"

# 355 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 374 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 376 "data/maps/RustboroCity_Gym/scripts.pory"

# 377 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 381 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 382 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 383 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 384 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 387 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 388 "data/maps/RustboroCity_Gym/scripts.pory"

# 389 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 390 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 391 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 392 "data/maps/RustboroCity_Gym/scripts.pory"

# 393 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 395 "data/maps/RustboroCity_Gym/scripts.pory"

# 396 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 397 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 398 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 399 "data/maps/RustboroCity_Gym/scripts.pory"

# 400 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 403 "data/maps/RustboroCity_Gym/scripts.pory"

# 404 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 405 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 406 "data/maps/RustboroCity_Gym/scripts.pory"

# 407 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 408 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 409 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 410 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 411 "data/maps/RustboroCity_Gym/scripts.pory"

# 412 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 417 "data/maps/RustboroCity_Gym/scripts.pory"

# 418 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 421 "data/maps/RustboroCity_Gym/scripts.pory"

# 422 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 424 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 426 "data/maps/RustboroCity_Gym/scripts.pory"

# 427 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 431 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 432 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 433 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 434 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 435 "data/maps/RustboroCity_Gym/scripts.pory"

# 436 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 437 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 438 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 439 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 440 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 441 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 442 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 443 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 444 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 446 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 447 "data/maps/RustboroCity_Gym/scripts.pory"

# 448 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 449 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 450 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 451 "data/maps/RustboroCity_Gym/scripts.pory"

# 452 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 453 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 454 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 455 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 456 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 457 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 458 "data/maps/RustboroCity_Gym/scripts.pory"

# 459 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 460 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 461 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 462 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 463 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 464 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 465 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 466 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 467 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 468 "data/maps/RustboroCity_Gym/scripts.pory"

# 469 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 470 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 471 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 472 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 473 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 474 "data/maps/RustboroCity_Gym/scripts.pory"

# 475 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 476 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 477 "data/maps/RustboroCity_Gym/scripts.pory"

# 478 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 479 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 480 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 481 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 482 "data/maps/RustboroCity_Gym/scripts.pory"

# 483 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 484 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 485 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 486 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 487 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 488 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 489 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 490 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 491 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 492 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 493 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 494 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 495 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 496 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 497 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 498 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 499 "data/maps/RustboroCity_Gym/scripts.pory"

# 500 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 501 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 502 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 503 "data/maps/RustboroCity_Gym/scripts.pory"

# 504 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 505 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 506 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 507 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 508 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 509 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 510 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 511 "data/maps/RustboroCity_Gym/scripts.pory"

# 512 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 513 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 514 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 515 "data/maps/RustboroCity_Gym/scripts.pory"

# 516 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 517 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 518 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 519 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 520 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 521 "data/maps/RustboroCity_Gym/scripts.pory"

# 522 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 523 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 524 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 525 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 526 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 527 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 528 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 529 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 530 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 531 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 532 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

# 155 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_0:
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
	step_end

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_1:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
	step_end

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_2:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
	step_end

# 183 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_3:
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
	step_end

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_ChallengeSierra_Movement_4:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_fast_left
	step_end

# 213 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_0:
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
	step_end

# 216 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_1:
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	unlock_facing_direction
	step_end

# 221 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_SierraDefeated_Movement_2:
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
	step_end

RustboroCity_Gym_ChallengeSierra_Text_0:
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "SIERRA: I knew I'd see you again.\p"
	.string "I'm Sierra, the gym leader of Rustboro\n"
	.string "City.\p"
	.string "If you can win against me, you'll earn\n"
	.string "the Shutter Badge and be on the path\l"
	.string "to the POKéMON CHAMPIONSHIP.$"

RustboroCity_Gym_ChallengeSierra_Text_1:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh… I'm sorry, all official gym\n"
	.string "challenges are double battles. You\l"
	.string "don't have enough POKéMON for that\l"
	.string "right now.$"

RustboroCity_Gym_ChallengeSierra_Text_2:
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Let's see if you can win against my\n"
	.string "shockingly cute POKéMON!$"

RustboroCity_Gym_ChallengeSierra_Text_3:
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You did it! By defeating a gym\n"
	.string "leader, you earn a gym badge!\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE Shutter Badge.$"

RustboroCity_Gym_ChallengeSierra_Text_4:
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "N/A$"

RustboroCity_Gym_SierraDefeated_Text_0:
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Shutter Badge\n"
	.string "from Sierra.$"

RustboroCity_Gym_SierraDefeated_Text_1:
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That badge gives you the ability to use\n"
	.string "the HM move, FLASH, outside of battle.\p"
	.string "Also, defeated gym leaders give\n"
	.string "successful challengers a TM to help\l"
	.string "them on their journeys. Here…$"

RustboroCity_Gym_GiveTM_Text_0:
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM 39,\n"
	.string "contains CHARGE BEAM.\p"
	.string "It not only inflicts damage, it can also\n"
	.string "raise Sp. Atk.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.$"

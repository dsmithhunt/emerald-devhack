MauvilleCity_Gym_MapScripts::
# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_Gym_OnTransition
	.byte 0


MauvilleCity_Gym_OnTransition::
# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_SetFlashLevel::
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY, MauvilleGym_SetLightsOn
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_CountTrainersDefeated
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_0x8000
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleGym_SetFlashLevel_2
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleGym_SetFlashLevel_3
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleGym_SetFlashLevel_4
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleGym_SetFlashLevel_5
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleGym_SetFlashLevel_6
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleGym_SetFlashLevel_7
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel1
	return

MauvilleGym_SetFlashLevel_2:
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel7
	return

MauvilleGym_SetFlashLevel_3:
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel6
	return

MauvilleGym_SetFlashLevel_4:
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel5
	return

MauvilleGym_SetFlashLevel_5:
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel4
	return

MauvilleGym_SetFlashLevel_6:
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel3
	return

MauvilleGym_SetFlashLevel_7:
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel2
	return


MauvilleGym_SetLightsOn::
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 0
	return


MauvilleGym_SetFlashLevel1::
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 1
	return


MauvilleGym_SetFlashLevel2::
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 2
	return


MauvilleGym_SetFlashLevel3::
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 3
	return


MauvilleGym_SetFlashLevel4::
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 4
	return


MauvilleGym_SetFlashLevel5::
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 5
	return


MauvilleGym_SetFlashLevel6::
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 6
	return


MauvilleGym_SetFlashLevel7::
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflashlevel 7
	return


MauvilleGym_BrightenRoom::
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_CountTrainersDefeated
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	nop1
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, MauvilleGym_NoLightChange
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_0x8000
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleGym_BrightenRoom_2
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleGym_BrightenRoom_3
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleGym_BrightenRoom_4
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleGym_BrightenRoom_5
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleGym_BrightenRoom_6
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleGym_BrightenRoom_7
	return

MauvilleGym_BrightenRoom_2:
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_AnimateFlash1Trainer
	return

MauvilleGym_BrightenRoom_3:
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_AnimateFlash2Trainers
	return

MauvilleGym_BrightenRoom_4:
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_AnimateFlash3Trainers
	return

MauvilleGym_BrightenRoom_5:
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_AnimateFlash4Trainers
	return

MauvilleGym_BrightenRoom_6:
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_AnimateFlash5Trainers
	return

MauvilleGym_BrightenRoom_7:
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_AnimateFlash6Trainers
	return


MauvilleGym_NoLightChange::
	return


MauvilleGym_AnimateFlash1Trainer::
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_SWITCH
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	animateflash 6
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_AnimateFlash2Trainers::
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_SWITCH
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	animateflash 5
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_AnimateFlash3Trainers::
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_SWITCH
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	animateflash 4
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_AnimateFlash4Trainers::
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	animateflash 3
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_AnimateFlash5Trainers::
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_SWITCH
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	animateflash 2
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_AnimateFlash6Trainers::
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_SWITCH
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	animateflash 1
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_AnimateFlashFullBrightness::
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_SWITCH
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	animateflash 0
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleGym_SetFlashLevel
	return


MauvilleGym_CountTrainersDefeated::
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, MauvilleGym_CheckJocelyn
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	return


MauvilleGym_CheckJocelyn::
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, MauvilleGym_CheckLaura
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	return


MauvilleGym_CheckLaura::
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, MauvilleGym_CheckBrenden
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	return


MauvilleGym_CheckBrenden::
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, MauvilleGym_CheckCristian
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	return


MauvilleGym_CheckCristian::
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, MauvilleGym_CheckLilith
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	return


MauvilleGym_CheckLilith::
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, MauvilleGym_StopCountingTrainers
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	return


MauvilleGym_StopCountingTrainers::
	return


MauvilleGym_Brawly::
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, NULL, NO_MUSIC
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
	return


# 172 "data/maps/MauvilleCity_Gym/scripts.pory"

# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_GiveShockWave2
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"

# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"

# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"

# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"

# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"

# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"

# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"

# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"

# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"

# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"

# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"

# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"

# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"

# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"

# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"

# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"

# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"

# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"

# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"

# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"

# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"

# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"

# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"

# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"

# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"

# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"

# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"

# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"

# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"

# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"

# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"

# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"

# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"

# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"

# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"

# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"

# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"

# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"

# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"

# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"

# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"

# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"

# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"

# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"

# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"

# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"

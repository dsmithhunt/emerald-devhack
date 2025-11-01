# 2 "data/maps/DewfordTown_Gym/scripts.pory"

# 3 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/DewfordTown_Gym/scripts.pory"

# 7 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 10 "data/maps/DewfordTown_Gym/scripts.pory"

# 11 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetLightsOn
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 22 "data/maps/DewfordTown_Gym/scripts.pory"

# 23 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 26 "data/maps/DewfordTown_Gym/scripts.pory"

# 27 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 31 "data/maps/DewfordTown_Gym/scripts.pory"

# 32 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 35 "data/maps/DewfordTown_Gym/scripts.pory"

# 36 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 39 "data/maps/DewfordTown_Gym/scripts.pory"

# 40 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 43 "data/maps/DewfordTown_Gym/scripts.pory"

# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 47 "data/maps/DewfordTown_Gym/scripts.pory"

# 48 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 51 "data/maps/DewfordTown_Gym/scripts.pory"

# 52 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 56 "data/maps/DewfordTown_Gym/scripts.pory"

# 57 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 68 "data/maps/DewfordTown_Gym/scripts.pory"

# 69 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 71 "data/maps/DewfordTown_Gym/scripts.pory"

# 72 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 78 "data/maps/DewfordTown_Gym/scripts.pory"

# 79 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 84 "data/maps/DewfordTown_Gym/scripts.pory"

# 85 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 90 "data/maps/DewfordTown_Gym/scripts.pory"

# 91 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 96 "data/maps/DewfordTown_Gym/scripts.pory"

# 97 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 102 "data/maps/DewfordTown_Gym/scripts.pory"

# 103 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 108 "data/maps/DewfordTown_Gym/scripts.pory"

# 109 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 114 "data/maps/DewfordTown_Gym/scripts.pory"

# 115 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 136 "data/maps/DewfordTown_Gym/scripts.pory"

# 137 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 145 "data/maps/DewfordTown_Gym/scripts.pory"

# 146 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 171 "data/maps/DewfordTown_Gym/scripts.pory"

# 172 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 178 "data/maps/DewfordTown_Gym/scripts.pory"

# 179 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 186 "data/maps/DewfordTown_Gym/scripts.pory"

# 187 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 191 "data/maps/DewfordTown_Gym/scripts.pory"

# 192 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 196 "data/maps/DewfordTown_Gym/scripts.pory"

# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 201 "data/maps/DewfordTown_Gym/scripts.pory"

# 202 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 206 "data/maps/DewfordTown_Gym/scripts.pory"

# 207 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 211 "data/maps/DewfordTown_Gym/scripts.pory"

# 212 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 221 "data/maps/DewfordTown_Gym/scripts.pory"

# 222 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 226 "data/maps/DewfordTown_Gym/scripts.pory"

# 227 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 231 "data/maps/DewfordTown_Gym/scripts.pory"

# 232 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 236 "data/maps/DewfordTown_Gym/scripts.pory"

# 237 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 241 "data/maps/DewfordTown_Gym/scripts.pory"

# 242 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 246 "data/maps/DewfordTown_Gym/scripts.pory"

# 247 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 251 "data/maps/DewfordTown_Gym/scripts.pory"

# 252 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 259 "data/maps/DewfordTown_Gym/scripts.pory"

# 260 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 264 "data/maps/DewfordTown_Gym/scripts.pory"

# 265 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 270 "data/maps/DewfordTown_Gym/scripts.pory"

# 271 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 276 "data/maps/DewfordTown_Gym/scripts.pory"

# 277 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 281 "data/maps/DewfordTown_Gym/scripts.pory"

# 282 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 286 "data/maps/DewfordTown_Gym/scripts.pory"

# 287 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"

# 303 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"

# 311 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"

# 314 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"

# 318 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"

# 323 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"

# 327 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"

# 334 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"

# 338 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"

# 342 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"

# 348 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"

# 352 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"

# 356 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"

# 360 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"

# 364 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"

# 368 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"

# 372 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"

# 376 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"

# 380 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"

# 384 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"

# 393 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"

# 400 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"

# 404 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"

# 413 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"

# 419 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"

# 423 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"

# 428 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"

# 431 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"

# 436 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"

# 444 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"

# 448 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"

# 453 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

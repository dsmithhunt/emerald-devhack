DewfordTown_Gym_MapScripts::
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DewfordTown_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DewfordTown_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script_2 VAR_UNUSED_0x404E, 1, DewfordGym_Increment
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script_2 VAR_UNUSED_0x404E, 2, DewfordGym_CheckBadge
	.2byte 0


DewfordGym_Warp::
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	warp MAP_DEWFORD_TOWN_GYM, 43, 8
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	waitstate
	return


DewfordGym_Increment::
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_UNUSED_0x404E, 2
	return


DewfordGym_CheckBadge::
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_UNUSED_0x404E, 0
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_DEWFORD_GYM, DewfordGym_CheckBadge_1
	return

DewfordGym_CheckBadge_1:
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordGym_ChallengeLeader
	return


DewfordGym_ChallengeLeader::
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordGym_ChallengeLeader_Movement_0
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	special SpawnCameraObject
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, DewfordGym_ChallengeLeader_Movement_1
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 20
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordGym_ChallengeLeader_Text_0
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordGym_ChallengeLeader_Movement_2
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement 1, DewfordGym_ChallengeLeader_Movement_3
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	special RemoveCameraObject
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordGym_ChallengeLeader_Text_1
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY, DewfordGym_ChallengeLeader_Text_2
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordGym_LeaderDefeated
	return


DewfordGym_LeaderDefeated::
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	special SpawnCameraObject
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordGym_LeaderDefeated_Text_0
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement 1, DewfordGym_LeaderDefeated_Movement_0
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordGym_LeaderDefeated_Movement_1
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, DewfordGym_LeaderDefeated_Movement_2
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	special RemoveCameraObject
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordGym_LeaderDefeated_Text_1
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordGym_GiveTM
	return


DewfordGym_GiveTM::
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_HM03
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordGym_GiveTM_Text_0
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	return


DewfordTown_Gym_EventScript_BrightenRoom::
	return


# 106 "data/maps/DewfordTown_Gym/scripts.pory"

# 107 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 115 "data/maps/DewfordTown_Gym/scripts.pory"

# 116 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	@ call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 141 "data/maps/DewfordTown_Gym/scripts.pory"

# 142 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 148 "data/maps/DewfordTown_Gym/scripts.pory"

# 149 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 156 "data/maps/DewfordTown_Gym/scripts.pory"

# 157 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 161 "data/maps/DewfordTown_Gym/scripts.pory"

# 162 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 166 "data/maps/DewfordTown_Gym/scripts.pory"

# 167 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 171 "data/maps/DewfordTown_Gym/scripts.pory"

# 172 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 176 "data/maps/DewfordTown_Gym/scripts.pory"

# 177 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 181 "data/maps/DewfordTown_Gym/scripts.pory"

# 182 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 186 "data/maps/DewfordTown_Gym/scripts.pory"

# 187 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 191 "data/maps/DewfordTown_Gym/scripts.pory"

# 192 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 196 "data/maps/DewfordTown_Gym/scripts.pory"

# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 201 "data/maps/DewfordTown_Gym/scripts.pory"

# 202 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 206 "data/maps/DewfordTown_Gym/scripts.pory"

# 207 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 211 "data/maps/DewfordTown_Gym/scripts.pory"

# 212 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 221 "data/maps/DewfordTown_Gym/scripts.pory"

# 222 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 229 "data/maps/DewfordTown_Gym/scripts.pory"

# 230 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 234 "data/maps/DewfordTown_Gym/scripts.pory"

# 235 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 240 "data/maps/DewfordTown_Gym/scripts.pory"

# 241 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 246 "data/maps/DewfordTown_Gym/scripts.pory"

# 247 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 251 "data/maps/DewfordTown_Gym/scripts.pory"

# 252 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 256 "data/maps/DewfordTown_Gym/scripts.pory"

# 257 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 272 "data/maps/DewfordTown_Gym/scripts.pory"

# 273 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 276 "data/maps/DewfordTown_Gym/scripts.pory"

# 277 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 280 "data/maps/DewfordTown_Gym/scripts.pory"

# 281 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"

# 284 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 287 "data/maps/DewfordTown_Gym/scripts.pory"

# 288 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"

# 293 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"

# 297 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"

# 304 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 307 "data/maps/DewfordTown_Gym/scripts.pory"

# 308 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 311 "data/maps/DewfordTown_Gym/scripts.pory"

# 312 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"

# 318 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"

# 322 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 325 "data/maps/DewfordTown_Gym/scripts.pory"

# 326 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 329 "data/maps/DewfordTown_Gym/scripts.pory"

# 330 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"

# 334 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"

# 338 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"

# 342 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"

# 346 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"

# 350 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"

# 354 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"

# 363 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"

# 370 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 373 "data/maps/DewfordTown_Gym/scripts.pory"

# 374 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 382 "data/maps/DewfordTown_Gym/scripts.pory"

# 383 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"

# 389 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"

# 393 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"

# 398 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"

# 401 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"

# 406 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"

# 414 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"

# 418 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"

# 423 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_ChallengeLeader_Movement_0:
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_ChallengeLeader_Movement_1:
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_up
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_ChallengeLeader_Movement_2:
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_up
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_up
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_in_place_fast_right
	step_end

# 49 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_ChallengeLeader_Movement_3:
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_down
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_down
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_in_place_fast_left
	step_end

# 70 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_LeaderDefeated_Movement_0:
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
	step_end

# 73 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_LeaderDefeated_Movement_1:
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	unlock_facing_direction
	step_end

# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_LeaderDefeated_Movement_2:
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
	step_end

DewfordGym_ChallengeLeader_Text_0:
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: What's up, bro?\p"
	.string "I'm Brawly, the gym leader of Dewford\n"
	.string "Town.\p"
	.string "So, you're gonna try for the Wave\n"
	.string "Badge…$"

DewfordGym_ChallengeLeader_Text_1:
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I hope you can swim!$"

DewfordGym_ChallengeLeader_Text_2:
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That was rad! Here's the Wave Badge;\n"
	.string "you earned it!$"

DewfordGym_LeaderDefeated_Text_0:
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the Wave Badge\n"
	.string "from Brawly.$"

DewfordGym_LeaderDefeated_Text_1:
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That badge gives you the ability to use\n"
	.string "the HM move, SURF, outside of battle.\p"
	.string "Most gym leaders hand out a TM, but I've\n"
	.string "got something cooler…$"

DewfordGym_GiveTM_Text_0:
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "HM 03 contains SURF.\p"
	.string "It let's your POKéMON carry you across\n"
	.string "the water or make huge waves! Be\l"
	.string "careful not to wipe out your buddies.$"

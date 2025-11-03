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
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, DewfordGym_CheckBadge_1
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
	trainerbattle_no_intro TRAINER_SIERRA, DewfordGym_ChallengeLeader_Text_2
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordGym_LeaderDefeated
	return


DewfordGym_LeaderDefeated::
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	special SpawnCameraObject
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordGym_LeaderDefeated_Text_0
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement 1, DewfordGym_LeaderDefeated_Movement_0
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordGym_LeaderDefeated_Movement_1
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_CAMERA, DewfordGym_LeaderDefeated_Movement_2
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	special RemoveCameraObject
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordGym_LeaderDefeated_Text_1
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordGym_GiveTM
	return


DewfordGym_GiveTM::
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_HM03
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordGym_GiveTM_Text_0
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	return


DewfordTown_Gym_EventScript_BrightenRoom::
	return


# 108 "data/maps/DewfordTown_Gym/scripts.pory"

# 109 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 117 "data/maps/DewfordTown_Gym/scripts.pory"

# 118 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	@ call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 143 "data/maps/DewfordTown_Gym/scripts.pory"

# 144 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 150 "data/maps/DewfordTown_Gym/scripts.pory"

# 151 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 158 "data/maps/DewfordTown_Gym/scripts.pory"

# 159 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 168 "data/maps/DewfordTown_Gym/scripts.pory"

# 169 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 173 "data/maps/DewfordTown_Gym/scripts.pory"

# 174 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 178 "data/maps/DewfordTown_Gym/scripts.pory"

# 179 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 183 "data/maps/DewfordTown_Gym/scripts.pory"

# 184 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 188 "data/maps/DewfordTown_Gym/scripts.pory"

# 189 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 193 "data/maps/DewfordTown_Gym/scripts.pory"

# 194 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 198 "data/maps/DewfordTown_Gym/scripts.pory"

# 199 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 203 "data/maps/DewfordTown_Gym/scripts.pory"

# 204 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 208 "data/maps/DewfordTown_Gym/scripts.pory"

# 209 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 213 "data/maps/DewfordTown_Gym/scripts.pory"

# 214 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 218 "data/maps/DewfordTown_Gym/scripts.pory"

# 219 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 223 "data/maps/DewfordTown_Gym/scripts.pory"

# 224 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 231 "data/maps/DewfordTown_Gym/scripts.pory"

# 232 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 236 "data/maps/DewfordTown_Gym/scripts.pory"

# 237 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 242 "data/maps/DewfordTown_Gym/scripts.pory"

# 243 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 248 "data/maps/DewfordTown_Gym/scripts.pory"

# 249 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 253 "data/maps/DewfordTown_Gym/scripts.pory"

# 254 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 258 "data/maps/DewfordTown_Gym/scripts.pory"

# 259 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 274 "data/maps/DewfordTown_Gym/scripts.pory"

# 275 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"

# 279 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 282 "data/maps/DewfordTown_Gym/scripts.pory"

# 283 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 285 "data/maps/DewfordTown_Gym/scripts.pory"

# 286 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 289 "data/maps/DewfordTown_Gym/scripts.pory"

# 290 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"

# 295 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"

# 299 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"

# 306 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"

# 310 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"

# 314 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"

# 320 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 323 "data/maps/DewfordTown_Gym/scripts.pory"

# 324 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"

# 332 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"

# 336 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"

# 340 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"

# 344 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"

# 348 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"

# 352 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"

# 356 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"

# 365 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"

# 372 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"

# 376 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"

# 391 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 394 "data/maps/DewfordTown_Gym/scripts.pory"

# 395 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"

# 400 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"

# 403 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"

# 408 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"

# 416 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"

# 420 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"

# 425 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
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

# 72 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_LeaderDefeated_Movement_0:
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
	step_end

# 75 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_LeaderDefeated_Movement_1:
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_right
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	unlock_facing_direction
	step_end

# 80 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordGym_LeaderDefeated_Movement_2:
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_left
	step_end

DewfordGym_ChallengeLeader_Text_0:
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SIERRA: I knew I'd see you again.\p"
	.string "I'm Sierra, the gym leader of Rustboro\n"
	.string "City.\p"
	.string "If you can win against me, you'll earn\n"
	.string "the Shutter Badge and be on the path\l"
	.string "to the POKéMON CHAMPIONSHIP.$"

DewfordGym_ChallengeLeader_Text_1:
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let's see if you can win against my\n"
	.string "shockingly cute POKéMON!$"

DewfordGym_ChallengeLeader_Text_2:
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow! You did it! By defeating a gym\n"
	.string "leader, you earn a gym badge!\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE Shutter Badge.$"

DewfordGym_LeaderDefeated_Text_0:
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the Wave Badge\n"
	.string "from Brawly.$"

DewfordGym_LeaderDefeated_Text_1:
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That badge gives you the ability to use\n"
	.string "the HM move, SURF, outside of battle.\p"
	.string "Also, defeated gym leaders give\n"
	.string "successful challengers a TM to help\l"
	.string "them on their journeys. Here…$"

DewfordGym_GiveTM_Text_0:
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That HIDDEN MACHINE, HM 03, contains\n"
	.string "SURF.\p"
	.string "It not only inflicts damage, it can also\n"
	.string "raise Sp. Atk.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.$"

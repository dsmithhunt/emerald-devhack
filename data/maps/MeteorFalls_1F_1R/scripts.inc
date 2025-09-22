MeteorFalls_PartySelect::
# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_RIVAL, MeteorFalls_PartySelect_Movement_0
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_PartySelect_Movement_1
	checkplayergender
# 0 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_PartySelect_2
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_PartySelect_Text_1
MeteorFalls_PartySelect_1:
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SavePlayerParty
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special ChooseHalfPartyForBattle
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MeteorFalls_MeteoriteScene
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special LoadPlayerParty
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_DeclineMulti
	return

MeteorFalls_PartySelect_2:
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_PartySelect_Text_0
	goto MeteorFalls_PartySelect_1


MeteorFalls_DeclineMulti::
	checkplayergender
# 0 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_DeclineMulti_2
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_DeclineMulti_Text_1
MeteorFalls_DeclineMulti_1:
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_DeclineMulti_Movement_0
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	return

MeteorFalls_DeclineMulti_2:
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_DeclineMulti_Text_0
	goto MeteorFalls_DeclineMulti_1


MeteorFalls_MeteoriteScene::
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_ADMIN
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_MeteoriteScene_Movement_0
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_RIVAL, MeteorFalls_MeteoriteScene_Movement_1
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_MeteoriteScene_Text_0
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_ADMIN, MeteorFalls_MeteoriteScene_Movement_2
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_ADMIN, MeteorFalls_MeteoriteScene_Movement_2
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_MeteoriteScene_Text_1
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_GetPartner
	return


MeteorFalls_GetPartner::
	checkplayergender
# 0 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_GetPartner_1
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_STARTER_MON
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 0, MeteorFalls_GetPartner_9
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_GetPartner_10
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 2, MeteorFalls_GetPartner_11
	return

MeteorFalls_GetPartner_1:
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_STARTER_MON
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 0, MeteorFalls_GetPartner_5
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_GetPartner_6
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 2, MeteorFalls_GetPartner_7
	return

MeteorFalls_GetPartner_5:
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_1 TRAINER_MATT, MeteorFalls_Text_AdminLose, PARTNER_MAY_CHESPIN
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_AdminDefeated
	return

MeteorFalls_GetPartner_6:
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_1 TRAINER_MATT, MeteorFalls_Text_AdminLose, PARTNER_MAY_TEPIG
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_AdminDefeated
	return

MeteorFalls_GetPartner_7:
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_1 TRAINER_MATT, MeteorFalls_Text_AdminLose, PARTNER_MAY_SOBBLE
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_AdminDefeated
	return

MeteorFalls_GetPartner_9:
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_1 TRAINER_MATT, MeteorFalls_Text_AdminLose, PARTNER_BRENDAN_CHESPIN
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_AdminDefeated
	return

MeteorFalls_GetPartner_10:
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_1 TRAINER_MATT, MeteorFalls_Text_AdminLose, PARTNER_BRENDAN_TEPIG
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_AdminDefeated
	return

MeteorFalls_GetPartner_11:
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_1 TRAINER_MATT, MeteorFalls_Text_AdminLose, PARTNER_BRENDAN_SOBBLE
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_AdminDefeated
	return


MeteorFalls_AdminDefeated::
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_AdminDefeated_Movement_0
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_RIVAL, MeteorFalls_AdminDefeated_Movement_0
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT, MeteorFalls_AdminDefeated_Movement_1
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_ADMIN, MeteorFalls_AdminDefeated_Movement_2
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT, MeteorFalls_AdminDefeated_Movement_3
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_AdminDefeated_Text_0
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_RIVAL, MeteorFalls_AdminDefeated_Movement_4
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_ADMIN, MeteorFalls_AdminDefeated_Movement_5
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT, MeteorFalls_AdminDefeated_Movement_5
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_ADMIN
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, MeteorFalls_AdminDefeated_Movement_6
	checkplayergender
# 0 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_AdminDefeated_2
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_AdminDefeated_Text_2
MeteorFalls_AdminDefeated_1:
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_ARCHIE
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_AdminDefeated_Movement_7
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_AdminDefeated_Movement_8
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_ADMIN, MeteorFalls_AdminDefeated_Movement_9
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT, MeteorFalls_AdminDefeated_Movement_1
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_AdminDefeated_Text_3
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_AdminDefeated_Movement_10
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitse
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_AdminDefeated_Movement_0
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_AdminDefeated_Text_4
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_AdminDefeated_Movement_11
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_ADMIN, MeteorFalls_AdminDefeated_Movement_12
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_AdminDefeated_Text_5
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_AdminDefeated_Movement_13
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_ADMIN, MeteorFalls_AdminDefeated_Movement_14
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT, MeteorFalls_AdminDefeated_Movement_15
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_CAVE_OF_ORIGIN, TRUE
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_ARCHIE
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_ADMIN
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 12, 22
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	return

MeteorFalls_AdminDefeated_2:
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_AdminDefeated_Text_1
	goto MeteorFalls_AdminDefeated_1


MeteorFalls_Rival::
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_Rival_2
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_Rival_Text_1
MeteorFalls_Rival_1:
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	return

MeteorFalls_Rival_2:
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_Rival_Text_0
	goto MeteorFalls_Rival_1


MeteorFalls_1F_1R_EventScript_SetRivalPos::
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 12, 22
	return


# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_1F_1R_OnTransition
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnTransition:
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_eq VAR_METEOR_FALLS_STATE, 1, MeteorFalls_1F_1R_EventScript_SetRivalPos
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"

# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_PartySelect_Movement_0:
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	emote_exclamation_mark
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_up
	step_end

# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_PartySelect_Movement_1:
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_down
	step_end

# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_DeclineMulti_Movement_0:
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_MeteoriteScene_Movement_0:
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_MeteoriteScene_Movement_1:
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_up
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_MeteoriteScene_Movement_2:
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	emote_exclamation_mark
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_fast_up
	step_end

# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_0:
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_up
	step_end

# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_1:
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_2:
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_fast_down
	step_end

# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_3:
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_fast_down
	step_end

# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_4:
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_left
	step_end

# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_5:
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_6:
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_7:
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_8:
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_9:
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
	step_end

# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_10:
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	emote_exclamation_mark
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_11:
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_left
	step_end

# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_12:
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_13:
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_14:
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_AdminDefeated_Movement_15:
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

MeteorFalls_PartySelect_Text_0:
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MAY: Good, you're here.\n"
	.string "I hear Prof. Cozmo up ahead.\p"
	.string "Do you have POKéMON ready in case we\n"
	.string "have to battle?$"

MeteorFalls_PartySelect_Text_1:
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BRENDAN: Good, you're here.\n"
	.string "I hear Prof. Cozmo up ahead.\p"
	.string "Do you have POKéMON ready in case we\n"
	.string "have to battle?$"

MeteorFalls_DeclineMulti_Text_0:
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MAY: Get ready, quick!$"

MeteorFalls_DeclineMulti_Text_1:
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BRENDAN: Get ready, quick!$"

MeteorFalls_MeteoriteScene_Text_0:
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ADMIN MATT: Ha! We've got you Magma\n"
	.string "fools dead to rights.\p"
	.string "When the leader gets here, he'll make\n"
	.string "short work of you.$"

MeteorFalls_MeteoriteScene_Text_1:
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ADMIN MATT: So, Courtney…\n"
	.string "You got reinforcements…\p"
	.string "Gah! It doesn't matter!\n"
	.string "I'll take you all on!$"

MeteorFalls_AdminDefeated_Text_0:
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ADMIN COURTNEY: I don't know who you\n"
	.string "are, but you distracted that oaf for us\l"
	.string "so I kinda like you.\p"
	.string "Now, with this meteorite, we can awaken\n"
	.string "the volcanic beast of Mt. Chimney!\p"
	.string "Maybe, I'll be lucky enough to see you\n"
	.string "there…$"

MeteorFalls_AdminDefeated_Text_1:
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MAY: Prof. Cozmo, are you okay?$"

MeteorFalls_AdminDefeated_Text_2:
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BRENDAN: Prof. Cozmo, are you okay?$"

MeteorFalls_AdminDefeated_Text_3:
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ADMIN MATT: Boss! They got away…\p"
	.string "ARCHIE: Aye, we'll have to stop them\n"
	.string "atop Mt. Chimney.$"

MeteorFalls_AdminDefeated_Text_4:
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Haven't I seen you before?\p"
	.string "Ah, SLATEPORT's MUSEUM?\n"
	.string "So your name is {PLAYER}.\p"
	.string "You're one brave kid to put yourself in\n"
	.string "the middle of all this.\p"
	.string "TEAM MAGMA is a greedy bunch of\n"
	.string "fanatics who would destabalize the\l"
	.string "world for their misguided solutions.$"

MeteorFalls_AdminDefeated_Text_5:
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ADMIN MATT: Sir, shouldn't we go after\n"
	.string "TEAM MAGMA?\p"
	.string "ARCHIE: Aye. Sorry, I got distracted.\n"
	.string "I saw a bit of myself in that kid.\p"
	.string "After them!$"

MeteorFalls_Rival_Text_0:
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MAY: I'll take care of Prof. Cozmo! You\n"
	.string "go to Mt. Chimney!$"

MeteorFalls_Rival_Text_1:
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BRENDAN: I'll take care of Prof. Cozmo!\n"
	.string "You go to Mt. Chimney!$"

MeteorFalls_Text_AdminLose::
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "How'd I lose to some kids?$"

MtChimney_Courtney::
# 2 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Courtney_Text_0, MtChimney_Courtney_Text_1
# 11 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Courtney_Text_2, MSGBOX_AUTOCLOSE
	end


MtChimney_Maxie::
# 32 "data/maps/MtChimney/scripts.pory"
	lockall
# 33 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 34 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_MaxieMeteorite
# 35 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 36 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 37 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 38 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 39 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 40 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 41 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_MaxieExplanation
# 44 "data/maps/MtChimney/scripts.pory"
	closemessage
# 45 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, MtChimney_Maxie_Movement_0
# 48 "data/maps/MtChimney/scripts.pory"
	playse SE_PC_LOGIN
# 49 "data/maps/MtChimney/scripts.pory"
	waitse
# 50 "data/maps/MtChimney/scripts.pory"
	playse SE_M_DETECT
# 51 "data/maps/MtChimney/scripts.pory"
	dofieldeffectsparkle 14, 6, 0
# 52 "data/maps/MtChimney/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 53 "data/maps/MtChimney/scripts.pory"
	playse SE_PC_OFF
# 54 "data/maps/MtChimney/scripts.pory"
	waitse
# 55 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_MaxieFailure
# 56 "data/maps/MtChimney/scripts.pory"
	closemessage
# 58 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 59 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 60 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 61 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 62 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 63 "data/maps/MtChimney/scripts.pory"
	delay 12
# 64 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_MaxieLeave
# 66 "data/maps/MtChimney/scripts.pory"
	delay 30
# 67 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 68 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 69 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 70 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 71 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 72 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 73 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 74 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 75 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 76 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 77 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 78 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 79 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 80 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 81 "data/maps/MtChimney/scripts.pory"
	closemessage
# 82 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 83 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 84 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 85 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 86 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 87 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 88 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 89 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 90 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


# 127 "data/maps/MtChimney/scripts.pory"

# 128 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 129 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 130 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 131 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 132 "data/maps/MtChimney/scripts.pory"

# 133 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 134 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 135 "data/maps/MtChimney/scripts.pory"
	end
# 136 "data/maps/MtChimney/scripts.pory"

# 137 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 138 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 139 "data/maps/MtChimney/scripts.pory"
	end
# 140 "data/maps/MtChimney/scripts.pory"

# 141 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 142 "data/maps/MtChimney/scripts.pory"
	lock
# 143 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 144 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 145 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 146 "data/maps/MtChimney/scripts.pory"
	closemessage
# 147 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 148 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 149 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 150 "data/maps/MtChimney/scripts.pory"
	release
# 151 "data/maps/MtChimney/scripts.pory"
	end
# 152 "data/maps/MtChimney/scripts.pory"

# 153 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 154 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 155 "data/maps/MtChimney/scripts.pory"
	return
# 156 "data/maps/MtChimney/scripts.pory"

# 157 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 158 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 159 "data/maps/MtChimney/scripts.pory"
	return
# 160 "data/maps/MtChimney/scripts.pory"

# 161 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 162 "data/maps/MtChimney/scripts.pory"
	lockall
# 163 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 164 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 165 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 166 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 167 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 168 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 169 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 170 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 171 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 172 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 173 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 174 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 175 "data/maps/MtChimney/scripts.pory"
	closemessage
# 176 "data/maps/MtChimney/scripts.pory"
	delay 30
# 177 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 178 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 179 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 180 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 181 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 182 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 183 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 184 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 185 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 186 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 187 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 188 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 189 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 190 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 191 "data/maps/MtChimney/scripts.pory"
	closemessage
# 192 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 193 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 194 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 195 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 196 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 197 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 198 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 199 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 200 "data/maps/MtChimney/scripts.pory"
	releaseall
# 201 "data/maps/MtChimney/scripts.pory"
	end
# 202 "data/maps/MtChimney/scripts.pory"

# 203 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 204 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 205 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 206 "data/maps/MtChimney/scripts.pory"
	return
# 207 "data/maps/MtChimney/scripts.pory"

# 208 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 209 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 210 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 211 "data/maps/MtChimney/scripts.pory"
	return
# 212 "data/maps/MtChimney/scripts.pory"

# 213 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 214 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 215 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 216 "data/maps/MtChimney/scripts.pory"
	return
# 217 "data/maps/MtChimney/scripts.pory"

# 218 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 219 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 220 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 221 "data/maps/MtChimney/scripts.pory"
	return
# 222 "data/maps/MtChimney/scripts.pory"

# 223 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 224 "data/maps/MtChimney/scripts.pory"
	lock
# 225 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 226 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 227 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 228 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 229 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 230 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 231 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 232 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 233 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 234 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 235 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 236 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 237 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 238 "data/maps/MtChimney/scripts.pory"
	release
# 239 "data/maps/MtChimney/scripts.pory"
	end
# 240 "data/maps/MtChimney/scripts.pory"

# 241 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 242 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 243 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 244 "data/maps/MtChimney/scripts.pory"
	release
# 245 "data/maps/MtChimney/scripts.pory"
	end
# 246 "data/maps/MtChimney/scripts.pory"
.else
# 247 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 248 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 249 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 250 "data/maps/MtChimney/scripts.pory"
	release
# 251 "data/maps/MtChimney/scripts.pory"
	end
# 252 "data/maps/MtChimney/scripts.pory"

# 253 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 254 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 255 "data/maps/MtChimney/scripts.pory"
	release
# 256 "data/maps/MtChimney/scripts.pory"
	end
# 257 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 258 "data/maps/MtChimney/scripts.pory"

# 259 "data/maps/MtChimney/scripts.pory"

# 260 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 261 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 262 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 263 "data/maps/MtChimney/scripts.pory"
	return
# 264 "data/maps/MtChimney/scripts.pory"

# 265 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 266 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 267 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 268 "data/maps/MtChimney/scripts.pory"
	release
# 269 "data/maps/MtChimney/scripts.pory"
	end
# 270 "data/maps/MtChimney/scripts.pory"

# 271 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 272 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 273 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 274 "data/maps/MtChimney/scripts.pory"
	release
# 275 "data/maps/MtChimney/scripts.pory"
	end
# 276 "data/maps/MtChimney/scripts.pory"

# 277 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 278 "data/maps/MtChimney/scripts.pory"
	walk_up
# 279 "data/maps/MtChimney/scripts.pory"
	walk_up
# 280 "data/maps/MtChimney/scripts.pory"
	walk_up
# 281 "data/maps/MtChimney/scripts.pory"
	walk_up
# 282 "data/maps/MtChimney/scripts.pory"
	walk_up
# 283 "data/maps/MtChimney/scripts.pory"
	walk_up
# 284 "data/maps/MtChimney/scripts.pory"
	walk_right
# 285 "data/maps/MtChimney/scripts.pory"
	step_end
# 286 "data/maps/MtChimney/scripts.pory"

# 287 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 288 "data/maps/MtChimney/scripts.pory"
	walk_left
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	walk_down
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_down
# 296 "data/maps/MtChimney/scripts.pory"
	step_end
# 297 "data/maps/MtChimney/scripts.pory"

# 298 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 299 "data/maps/MtChimney/scripts.pory"
	walk_up
# 300 "data/maps/MtChimney/scripts.pory"
	walk_up
# 301 "data/maps/MtChimney/scripts.pory"
	walk_up
# 302 "data/maps/MtChimney/scripts.pory"
	walk_up
# 303 "data/maps/MtChimney/scripts.pory"
	walk_up
# 304 "data/maps/MtChimney/scripts.pory"
	walk_right
# 305 "data/maps/MtChimney/scripts.pory"
	walk_right
# 306 "data/maps/MtChimney/scripts.pory"
	step_end
# 307 "data/maps/MtChimney/scripts.pory"

# 308 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_down
# 314 "data/maps/MtChimney/scripts.pory"
	walk_down
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	walk_down
# 318 "data/maps/MtChimney/scripts.pory"
	step_end
# 319 "data/maps/MtChimney/scripts.pory"

# 320 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 321 "data/maps/MtChimney/scripts.pory"
	walk_down
# 322 "data/maps/MtChimney/scripts.pory"
	walk_down
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_left
# 335 "data/maps/MtChimney/scripts.pory"
	walk_left
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_down
# 338 "data/maps/MtChimney/scripts.pory"
	step_end
# 339 "data/maps/MtChimney/scripts.pory"

# 340 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_left
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	step_end
# 350 "data/maps/MtChimney/scripts.pory"

# 351 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 352 "data/maps/MtChimney/scripts.pory"
	walk_right
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_left
# 358 "data/maps/MtChimney/scripts.pory"
	walk_left
# 359 "data/maps/MtChimney/scripts.pory"
	walk_left
# 360 "data/maps/MtChimney/scripts.pory"
	walk_left
# 361 "data/maps/MtChimney/scripts.pory"
	walk_left
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	step_end
# 367 "data/maps/MtChimney/scripts.pory"

# 368 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 369 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 370 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 371 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 372 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 373 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 375 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 376 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 378 "data/maps/MtChimney/scripts.pory"
	walk_left
# 379 "data/maps/MtChimney/scripts.pory"
	walk_left
# 380 "data/maps/MtChimney/scripts.pory"
	walk_down
# 381 "data/maps/MtChimney/scripts.pory"
	walk_down
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	walk_left
# 384 "data/maps/MtChimney/scripts.pory"
	walk_left
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_left
# 388 "data/maps/MtChimney/scripts.pory"
	walk_left
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_left
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	step_end
# 394 "data/maps/MtChimney/scripts.pory"

# 395 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 396 "data/maps/MtChimney/scripts.pory"
	delay_16
# 397 "data/maps/MtChimney/scripts.pory"
	delay_16
# 398 "data/maps/MtChimney/scripts.pory"
	delay_16
# 399 "data/maps/MtChimney/scripts.pory"
	walk_down
# 400 "data/maps/MtChimney/scripts.pory"
	walk_down
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
	walk_left
# 403 "data/maps/MtChimney/scripts.pory"
	walk_left
# 404 "data/maps/MtChimney/scripts.pory"
	walk_left
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
	step_end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 409 "data/maps/MtChimney/scripts.pory"
	delay_16
# 410 "data/maps/MtChimney/scripts.pory"
	walk_left
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
	walk_down
# 413 "data/maps/MtChimney/scripts.pory"
	walk_down
# 414 "data/maps/MtChimney/scripts.pory"
	walk_down
# 415 "data/maps/MtChimney/scripts.pory"
	walk_left
# 416 "data/maps/MtChimney/scripts.pory"
	walk_left
# 417 "data/maps/MtChimney/scripts.pory"
	walk_left
# 418 "data/maps/MtChimney/scripts.pory"
	walk_left
# 419 "data/maps/MtChimney/scripts.pory"
	walk_left
# 420 "data/maps/MtChimney/scripts.pory"
	walk_down
# 421 "data/maps/MtChimney/scripts.pory"
	walk_down
# 422 "data/maps/MtChimney/scripts.pory"
	walk_down
# 423 "data/maps/MtChimney/scripts.pory"
	walk_down
# 424 "data/maps/MtChimney/scripts.pory"
	step_end
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 427 "data/maps/MtChimney/scripts.pory"
	delay_16
# 428 "data/maps/MtChimney/scripts.pory"
	walk_left
# 429 "data/maps/MtChimney/scripts.pory"
	walk_left
# 430 "data/maps/MtChimney/scripts.pory"
	walk_down
# 431 "data/maps/MtChimney/scripts.pory"
	walk_down
# 432 "data/maps/MtChimney/scripts.pory"
	walk_down
# 433 "data/maps/MtChimney/scripts.pory"
	walk_left
# 434 "data/maps/MtChimney/scripts.pory"
	walk_left
# 435 "data/maps/MtChimney/scripts.pory"
	walk_down
# 436 "data/maps/MtChimney/scripts.pory"
	walk_down
# 437 "data/maps/MtChimney/scripts.pory"
	walk_left
# 438 "data/maps/MtChimney/scripts.pory"
	walk_left
# 439 "data/maps/MtChimney/scripts.pory"
	walk_left
# 440 "data/maps/MtChimney/scripts.pory"
	walk_left
# 441 "data/maps/MtChimney/scripts.pory"
	walk_left
# 442 "data/maps/MtChimney/scripts.pory"
	walk_down
# 443 "data/maps/MtChimney/scripts.pory"
	step_end
# 444 "data/maps/MtChimney/scripts.pory"

# 445 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 446 "data/maps/MtChimney/scripts.pory"
	delay_16
# 447 "data/maps/MtChimney/scripts.pory"
	walk_down
# 448 "data/maps/MtChimney/scripts.pory"
	walk_left
# 449 "data/maps/MtChimney/scripts.pory"
	walk_left
# 450 "data/maps/MtChimney/scripts.pory"
	walk_left
# 451 "data/maps/MtChimney/scripts.pory"
	walk_left
# 452 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 453 "data/maps/MtChimney/scripts.pory"
	step_end
# 454 "data/maps/MtChimney/scripts.pory"

# 455 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 456 "data/maps/MtChimney/scripts.pory"
	walk_down
# 457 "data/maps/MtChimney/scripts.pory"
	walk_down
# 458 "data/maps/MtChimney/scripts.pory"
	walk_down
# 459 "data/maps/MtChimney/scripts.pory"
	walk_down
# 460 "data/maps/MtChimney/scripts.pory"
	walk_left
# 461 "data/maps/MtChimney/scripts.pory"
	walk_left
# 462 "data/maps/MtChimney/scripts.pory"
	walk_left
# 463 "data/maps/MtChimney/scripts.pory"
	walk_left
# 464 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_down
# 466 "data/maps/MtChimney/scripts.pory"
	walk_down
# 467 "data/maps/MtChimney/scripts.pory"
	walk_down
# 468 "data/maps/MtChimney/scripts.pory"
	walk_down
# 469 "data/maps/MtChimney/scripts.pory"
	step_end
# 470 "data/maps/MtChimney/scripts.pory"

# 471 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 472 "data/maps/MtChimney/scripts.pory"
	walk_down
# 473 "data/maps/MtChimney/scripts.pory"
	step_end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 476 "data/maps/MtChimney/scripts.pory"
	walk_down
# 477 "data/maps/MtChimney/scripts.pory"
	walk_down
# 478 "data/maps/MtChimney/scripts.pory"
	walk_down
# 479 "data/maps/MtChimney/scripts.pory"
	walk_down
# 480 "data/maps/MtChimney/scripts.pory"
	walk_down
# 481 "data/maps/MtChimney/scripts.pory"
	walk_down
# 482 "data/maps/MtChimney/scripts.pory"
	walk_down
# 483 "data/maps/MtChimney/scripts.pory"
	step_end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 486 "data/maps/MtChimney/scripts.pory"
	delay_16
# 487 "data/maps/MtChimney/scripts.pory"
	delay_16
# 488 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 489 "data/maps/MtChimney/scripts.pory"
	delay_16
# 490 "data/maps/MtChimney/scripts.pory"
	walk_down
# 491 "data/maps/MtChimney/scripts.pory"
	walk_down
# 492 "data/maps/MtChimney/scripts.pory"
	walk_down
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
# 494 "data/maps/MtChimney/scripts.pory"
	walk_down
# 495 "data/maps/MtChimney/scripts.pory"
	step_end
# 496 "data/maps/MtChimney/scripts.pory"

# 497 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 498 "data/maps/MtChimney/scripts.pory"
	delay_16
# 499 "data/maps/MtChimney/scripts.pory"
	delay_16
# 500 "data/maps/MtChimney/scripts.pory"
	delay_16
# 501 "data/maps/MtChimney/scripts.pory"
	delay_16
# 502 "data/maps/MtChimney/scripts.pory"
	delay_16
# 503 "data/maps/MtChimney/scripts.pory"
	delay_16
# 504 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 505 "data/maps/MtChimney/scripts.pory"
	delay_16
# 506 "data/maps/MtChimney/scripts.pory"
	walk_down
# 507 "data/maps/MtChimney/scripts.pory"
	walk_down
# 508 "data/maps/MtChimney/scripts.pory"
	step_end
# 509 "data/maps/MtChimney/scripts.pory"

# 510 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 511 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 512 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 513 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 514 "data/maps/MtChimney/scripts.pory"
	face_right
# 515 "data/maps/MtChimney/scripts.pory"
	step_end
# 516 "data/maps/MtChimney/scripts.pory"

# 517 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 518 "data/maps/MtChimney/scripts.pory"
	walk_left
# 519 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 520 "data/maps/MtChimney/scripts.pory"
	delay_16
# 521 "data/maps/MtChimney/scripts.pory"
	step_end
# 522 "data/maps/MtChimney/scripts.pory"

# 523 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 524 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 525 "data/maps/MtChimney/scripts.pory"
	end
# 526 "data/maps/MtChimney/scripts.pory"

# 527 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 528 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 529 "data/maps/MtChimney/scripts.pory"
	end
# 530 "data/maps/MtChimney/scripts.pory"

# 531 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 532 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 533 "data/maps/MtChimney/scripts.pory"
	end
# 534 "data/maps/MtChimney/scripts.pory"

# 535 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 536 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 537 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/MtChimney/scripts.pory"
	end
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 541 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 542 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/MtChimney/scripts.pory"
	end
# 544 "data/maps/MtChimney/scripts.pory"

# 545 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 546 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 547 "data/maps/MtChimney/scripts.pory"
	end
# 548 "data/maps/MtChimney/scripts.pory"

# 549 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 550 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 551 "data/maps/MtChimney/scripts.pory"
	end
# 552 "data/maps/MtChimney/scripts.pory"

# 553 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 554 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 555 "data/maps/MtChimney/scripts.pory"
	end
# 556 "data/maps/MtChimney/scripts.pory"

# 557 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 558 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 559 "data/maps/MtChimney/scripts.pory"
	end
# 560 "data/maps/MtChimney/scripts.pory"

# 561 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 562 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 563 "data/maps/MtChimney/scripts.pory"
	end
# 564 "data/maps/MtChimney/scripts.pory"

# 565 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 566 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 567 "data/maps/MtChimney/scripts.pory"
	end
# 568 "data/maps/MtChimney/scripts.pory"

# 569 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 570 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_HOUNDOUR, 0
# 571 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 572 "data/maps/MtChimney/scripts.pory"
	end
# 573 "data/maps/MtChimney/scripts.pory"

# 574 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 575 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 0
# 576 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 577 "data/maps/MtChimney/scripts.pory"
	end
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 580 "data/maps/MtChimney/scripts.pory"
	lockall
# 581 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 582 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 583 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 584 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 585 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 586 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 587 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 588 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 589 "data/maps/MtChimney/scripts.pory"
	releaseall
# 590 "data/maps/MtChimney/scripts.pory"
	end
# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 593 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 594 "data/maps/MtChimney/scripts.pory"
	releaseall
# 595 "data/maps/MtChimney/scripts.pory"
	end
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 598 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 599 "data/maps/MtChimney/scripts.pory"
	releaseall
# 600 "data/maps/MtChimney/scripts.pory"
	end
# 601 "data/maps/MtChimney/scripts.pory"

# 602 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 603 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 604 "data/maps/MtChimney/scripts.pory"
	releaseall
# 605 "data/maps/MtChimney/scripts.pory"
	end
# 606 "data/maps/MtChimney/scripts.pory"

# 607 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 608 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 609 "data/maps/MtChimney/scripts.pory"
	end
# 610 "data/maps/MtChimney/scripts.pory"

# 611 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 612 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 613 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 614 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 615 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 616 "data/maps/MtChimney/scripts.pory"
	release
# 617 "data/maps/MtChimney/scripts.pory"
	end
# 618 "data/maps/MtChimney/scripts.pory"

# 619 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 620 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 621 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 622 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 623 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 624 "data/maps/MtChimney/scripts.pory"
	release
# 625 "data/maps/MtChimney/scripts.pory"
	end
# 626 "data/maps/MtChimney/scripts.pory"

# 627 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 628 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 629 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 630 "data/maps/MtChimney/scripts.pory"
	end
# 631 "data/maps/MtChimney/scripts.pory"

# 632 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 633 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 634 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 635 "data/maps/MtChimney/scripts.pory"
	end
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 638 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 639 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 640 "data/maps/MtChimney/scripts.pory"
	end
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 643 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 644 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 645 "data/maps/MtChimney/scripts.pory"
	end
# 646 "data/maps/MtChimney/scripts.pory"

# 647 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 648 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 649 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 650 "data/maps/MtChimney/scripts.pory"
	end
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 653 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 654 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 655 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 656 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 657 "data/maps/MtChimney/scripts.pory"
	release
# 658 "data/maps/MtChimney/scripts.pory"
	end
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 661 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 662 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 663 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 664 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 665 "data/maps/MtChimney/scripts.pory"
	release
# 666 "data/maps/MtChimney/scripts.pory"
	end
# 667 "data/maps/MtChimney/scripts.pory"

# 668 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 669 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 670 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 671 "data/maps/MtChimney/scripts.pory"
	end
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 674 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 681 "data/maps/MtChimney/scripts.pory"

# 682 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 683 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 709 "data/maps/MtChimney/scripts.pory"

# 710 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 711 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 712 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 713 "data/maps/MtChimney/scripts.pory"

# 714 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 715 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 718 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 721 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 722 "data/maps/MtChimney/scripts.pory"

# 723 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 724 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 726 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 727 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 728 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 729 "data/maps/MtChimney/scripts.pory"

# 730 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 733 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 734 "data/maps/MtChimney/scripts.pory"

# 735 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 736 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 739 "data/maps/MtChimney/scripts.pory"

# 740 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 741 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 746 "data/maps/MtChimney/scripts.pory"

# 747 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 748 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 750 "data/maps/MtChimney/scripts.pory"

# 751 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 752 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 753 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 758 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 761 "data/maps/MtChimney/scripts.pory"

# 762 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 763 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 764 "data/maps/MtChimney/scripts.pory"

# 765 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 766 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 768 "data/maps/MtChimney/scripts.pory"

# 769 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 770 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 772 "data/maps/MtChimney/scripts.pory"

# 773 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 774 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 780 "data/maps/MtChimney/scripts.pory"

# 781 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 782 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 785 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 786 "data/maps/MtChimney/scripts.pory"

# 787 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 788 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 793 "data/maps/MtChimney/scripts.pory"

# 794 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 795 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 796 "data/maps/MtChimney/scripts.pory"

# 797 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 798 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 800 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 808 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 825 "data/maps/MtChimney/scripts.pory"

# 826 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 827 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 833 "data/maps/MtChimney/scripts.pory"

# 834 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 835 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 850 "data/maps/MtChimney/scripts.pory"

# 851 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 852 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 857 "data/maps/MtChimney/scripts.pory"

# 858 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 859 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 861 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 862 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 863 "data/maps/MtChimney/scripts.pory"

# 864 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 865 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 866 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 867 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 868 "data/maps/MtChimney/scripts.pory"

# 869 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 870 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 871 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 872 "data/maps/MtChimney/scripts.pory"

# 873 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 874 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 875 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 876 "data/maps/MtChimney/scripts.pory"

# 877 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 878 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 880 "data/maps/MtChimney/scripts.pory"

# 881 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 882 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 883 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 884 "data/maps/MtChimney/scripts.pory"

# 885 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 886 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 887 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 888 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 889 "data/maps/MtChimney/scripts.pory"

# 890 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 891 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 892 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 893 "data/maps/MtChimney/scripts.pory"

# 894 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 895 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 896 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 897 "data/maps/MtChimney/scripts.pory"

# 898 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 899 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 900 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 901 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 902 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 903 "data/maps/MtChimney/scripts.pory"

# 904 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 905 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 906 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 907 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 908 "data/maps/MtChimney/scripts.pory"

# 909 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 910 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 911 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 912 "data/maps/MtChimney/scripts.pory"

# 913 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 914 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 915 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 916 "data/maps/MtChimney/scripts.pory"

# 917 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 918 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 919 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 920 "data/maps/MtChimney/scripts.pory"

# 921 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 922 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 923 "data/maps/MtChimney/scripts.pory"

# 924 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 925 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 926 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 927 "data/maps/MtChimney/scripts.pory"

# 928 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 929 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 930 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 931 "data/maps/MtChimney/scripts.pory"

# 932 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 933 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 934 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 935 "data/maps/MtChimney/scripts.pory"

# 936 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 937 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 938 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 939 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 940 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 941 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 942 "data/maps/MtChimney/scripts.pory"

# 943 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 944 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 945 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 946 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 947 "data/maps/MtChimney/scripts.pory"

# 948 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 949 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 950 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 951 "data/maps/MtChimney/scripts.pory"

# 952 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 953 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 954 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 955 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 956 "data/maps/MtChimney/scripts.pory"

# 957 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 958 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 959 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 960 "data/maps/MtChimney/scripts.pory"

# 961 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 962 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 963 "data/maps/MtChimney/scripts.pory"

# 964 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 965 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 966 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 967 "data/maps/MtChimney/scripts.pory"

# 968 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 969 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 970 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 971 "data/maps/MtChimney/scripts.pory"

# 972 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 973 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 974 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 975 "data/maps/MtChimney/scripts.pory"

# 976 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 977 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 978 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 979 "data/maps/MtChimney/scripts.pory"

# 980 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 981 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 982 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

# 45 "data/maps/MtChimney/scripts.pory"
MtChimney_Maxie_Movement_0:
# 46 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
	step_end

MtChimney_Courtney_Text_0:
# 5 "data/maps/MtChimney/scripts.pory"
	.string "COURTNEY: Anticipated factor… Did you\n"
	.string "come all the way up here to see me\l"
	.string "again?\p"
	.string "Your timing is once again opportune;\n"
	.string "the METEORITE has already been\l"
	.string "delivered!\p"
	.string "Target acquired…\n"
	.string "Interest levels peaking… ~\l"
	.string "Commencing… experiment…$"

MtChimney_Courtney_Text_1:
# 10 "data/maps/MtChimney/scripts.pory"
	.string "Result: unexpected…$"

MtChimney_Courtney_Text_2:
# 12 "data/maps/MtChimney/scripts.pory"
	.string "COURTNEY: I knew it. You…\n"
	.string "are interesting! …Haha. ~$"

MtChimney_Text_CourtneyExamples::
# 17 "data/maps/MtChimney/scripts.pory"
	.string "Ahahahaha! You're going to meddle in Team Magma's affairs? You're either absolutely fearless, simply ignorant, or both! You're so cute, you're disgusting! I'll put you down, kiddy!"
	.string "Ahahahaha! Ouch!"
	.string "Ahahahaha! You're so darn strong. It's terribly disappointing that you're not a Team Magma member. You could have enjoyed the fabulous world our Boss has promised to one of our own…"
	.string "As anticipated. Unanticipated. You. Target lock…completed. Commencing…experiment. You. Forever. Aha… ~"
	.string "Returning home."
	.string "…Again? That's unanticipated. …I knew it. You…are interesting! …Haha. ~"
	.string "I'm looking forward to… I'm looking forward to… When we…can meet again."
	.string "… …There's still more…work for me to do. …I must…stop you. …Until Leader Maxie…departs… …But… …Now…I just…want to… …With you… …I want to…engage… …You… …I want to…analyze. Ahahaha. ~"
	.string "…Leader Maxie… … …Mission… …Complete. …Leader Maxie…has departed. …For the development…of humanity. …For our…dreams… …To you…whom I had not foreseen. …I will give a hint. …So that you…may dream…the same dream as us. …Leader Maxie…is headed for…the sea stretching out from Lilycove. …In the depths of the sea…lies the Seafloor Cavern. …What are you…going to do? …Looking around…in seaside towns. …That might work. …Ahaha. ~$"

MtChimney_MaxieMeteorite::
# 94 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Ah! The METEORITE…\n"
	.string "Humanity's hopes made manifest…\l"
	.string "At last, it is in my hands!\p"
	.string "With this, the power of GROUDON\n"
	.string "will be mine to command!$"

MtChimney_MaxieExplanation::
# 102 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Of coure… you've been misled by Archie's limited intellect…\p"
	.string "While the power to create land will have its uses, our true goal is far greater.\p"
	.string "The energy of GROUDON is near infinite. By harnessing it, we can push humanity to new heights!\p"
	.string "Energy will be abundant and conflicts can be left in the past!\l"
	.string "Technology will flourish, and we will create a utopia for both humans and POKéMON!\p"
	.string "Our research suggests that humanity's wishes have formed this METEORITE which will awaken the savior POKéMON.\p"
	.string "Now, bear witness to the dawn of a new era!$"

MtChimney_MaxieFailure::
# 112 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Impossible…\n"
	.string "The METEORITE's energy…\l"
	.string "It was supposed to be enough!\p"
	.string "Perhaps I had taken the\n"
	.string "ancient tales too literally…\p"
	.string "No matter. It seems we'll simply have to acquire that ORB…$"

MtChimney_MaxieLeave::
# 121 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Oh, I'd forgotten about you…\p"
	.string "I really don't have time for you right now. I need to plan the next phase of our operation.\p"
	.string "You should give up your futile interruptions and plan for the new future.$"

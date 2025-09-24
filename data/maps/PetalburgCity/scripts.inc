PetalburgAnthony::
# 2 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgAnthony_Text_0
	return


# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 35 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 36 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 37 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 38 "data/maps/PetalburgCity/scripts.pory"

# 39 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 40 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 41 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 42 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 43 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 44 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 45 "data/maps/PetalburgCity/scripts.pory"
	end
# 46 "data/maps/PetalburgCity/scripts.pory"

# 47 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 48 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 49 "data/maps/PetalburgCity/scripts.pory"
	return
# 50 "data/maps/PetalburgCity/scripts.pory"

# 51 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 52 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 53 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 54 "data/maps/PetalburgCity/scripts.pory"
	return
# 55 "data/maps/PetalburgCity/scripts.pory"

# 56 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 57 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 58 "data/maps/PetalburgCity/scripts.pory"
	return
# 59 "data/maps/PetalburgCity/scripts.pory"

# 60 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 61 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 62 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 63 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 64 "data/maps/PetalburgCity/scripts.pory"

# 65 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 66 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 67 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 68 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 70 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 71 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 73 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 75 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 77 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 78 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 80 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 82 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 83 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 84 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 86 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 87 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 88 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 89 "data/maps/PetalburgCity/scripts.pory"
	end
# 90 "data/maps/PetalburgCity/scripts.pory"

# 91 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 92 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 93 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 94 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 95 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 96 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 98 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 99 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 100 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 101 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 102 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 103 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 105 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 106 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 107 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 108 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 109 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 110 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 111 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 112 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 113 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 114 "data/maps/PetalburgCity/scripts.pory"
	end
# 115 "data/maps/PetalburgCity/scripts.pory"

# 116 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 117 "data/maps/PetalburgCity/scripts.pory"
	lock
# 118 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 119 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 120 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 121 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 122 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/PetalburgCity/scripts.pory"
	release
# 124 "data/maps/PetalburgCity/scripts.pory"
	end
# 125 "data/maps/PetalburgCity/scripts.pory"

# 126 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 127 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 128 "data/maps/PetalburgCity/scripts.pory"
	end
# 129 "data/maps/PetalburgCity/scripts.pory"

# 130 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 131 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 149 "data/maps/PetalburgCity/scripts.pory"

# 150 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 154 "data/maps/PetalburgCity/scripts.pory"

# 155 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 156 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 173 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 174 "data/maps/PetalburgCity/scripts.pory"

# 175 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 177 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 178 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 179 "data/maps/PetalburgCity/scripts.pory"

# 180 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 181 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_up
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_up
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 214 "data/maps/PetalburgCity/scripts.pory"

# 215 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 216 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_up
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_up
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 247 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 249 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 250 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 252 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 255 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 256 "data/maps/PetalburgCity/scripts.pory"
	end
# 257 "data/maps/PetalburgCity/scripts.pory"

# 258 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 259 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 260 "data/maps/PetalburgCity/scripts.pory"
	end
# 261 "data/maps/PetalburgCity/scripts.pory"

# 262 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 263 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 264 "data/maps/PetalburgCity/scripts.pory"
	end
# 265 "data/maps/PetalburgCity/scripts.pory"

# 266 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 267 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 268 "data/maps/PetalburgCity/scripts.pory"
	end
# 269 "data/maps/PetalburgCity/scripts.pory"

# 270 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 271 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 272 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 273 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 274 "data/maps/PetalburgCity/scripts.pory"
	end
# 275 "data/maps/PetalburgCity/scripts.pory"

# 276 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 277 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 278 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 279 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 280 "data/maps/PetalburgCity/scripts.pory"
	end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 283 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 284 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 285 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 286 "data/maps/PetalburgCity/scripts.pory"
	end
# 287 "data/maps/PetalburgCity/scripts.pory"

# 288 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 289 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 290 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 291 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 292 "data/maps/PetalburgCity/scripts.pory"
	end
# 293 "data/maps/PetalburgCity/scripts.pory"

# 294 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 295 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 296 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 298 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 302 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 304 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 305 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 306 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 307 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 308 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 309 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 310 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 311 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 312 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 313 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 318 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 322 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 323 "data/maps/PetalburgCity/scripts.pory"
	end
# 324 "data/maps/PetalburgCity/scripts.pory"

# 325 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	return
# 336 "data/maps/PetalburgCity/scripts.pory"

# 337 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 339 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity/scripts.pory"
	return
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 345 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 346 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 348 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/PetalburgCity/scripts.pory"
	return
# 350 "data/maps/PetalburgCity/scripts.pory"

# 351 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 352 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 354 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgCity/scripts.pory"
	return
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 358 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 359 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 360 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/PetalburgCity/scripts.pory"
	return
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 364 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 366 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/PetalburgCity/scripts.pory"
	return
# 368 "data/maps/PetalburgCity/scripts.pory"

# 369 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 370 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 371 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 372 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 373 "data/maps/PetalburgCity/scripts.pory"
	return
# 374 "data/maps/PetalburgCity/scripts.pory"

# 375 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 376 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 377 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 378 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 379 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 380 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 381 "data/maps/PetalburgCity/scripts.pory"

# 382 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 387 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 388 "data/maps/PetalburgCity/scripts.pory"

# 389 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 399 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 400 "data/maps/PetalburgCity/scripts.pory"

# 401 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 420 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 421 "data/maps/PetalburgCity/scripts.pory"

# 422 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 436 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 437 "data/maps/PetalburgCity/scripts.pory"

# 438 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 449 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 450 "data/maps/PetalburgCity/scripts.pory"

# 451 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 463 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 464 "data/maps/PetalburgCity/scripts.pory"

# 465 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 478 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 479 "data/maps/PetalburgCity/scripts.pory"

# 480 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 490 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 491 "data/maps/PetalburgCity/scripts.pory"

# 492 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 493 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 494 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 505 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 506 "data/maps/PetalburgCity/scripts.pory"

# 507 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 517 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 518 "data/maps/PetalburgCity/scripts.pory"

# 519 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 525 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 526 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 527 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 529 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 530 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 531 "data/maps/PetalburgCity/scripts.pory"

# 532 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 533 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 534 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 535 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 536 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 537 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 538 "data/maps/PetalburgCity/scripts.pory"
	end
# 539 "data/maps/PetalburgCity/scripts.pory"

# 540 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 541 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 542 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 543 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 544 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 545 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 546 "data/maps/PetalburgCity/scripts.pory"
	end
# 547 "data/maps/PetalburgCity/scripts.pory"

# 548 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 549 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 550 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 551 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 552 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 553 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 554 "data/maps/PetalburgCity/scripts.pory"
	end
# 555 "data/maps/PetalburgCity/scripts.pory"

# 556 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 557 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 558 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 559 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 560 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 561 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 562 "data/maps/PetalburgCity/scripts.pory"
	end
# 563 "data/maps/PetalburgCity/scripts.pory"

# 564 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 565 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 566 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 569 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 571 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 573 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 575 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 577 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 578 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 579 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 580 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 582 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 583 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 585 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 587 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 588 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 589 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 590 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 591 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 592 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 593 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 594 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 595 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 596 "data/maps/PetalburgCity/scripts.pory"
	end
# 597 "data/maps/PetalburgCity/scripts.pory"

# 598 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 599 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 600 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 601 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/PetalburgCity/scripts.pory"
	return
# 603 "data/maps/PetalburgCity/scripts.pory"

# 604 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 605 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 606 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 607 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/PetalburgCity/scripts.pory"
	return
# 609 "data/maps/PetalburgCity/scripts.pory"

# 610 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 611 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 612 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 613 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/PetalburgCity/scripts.pory"
	return
# 615 "data/maps/PetalburgCity/scripts.pory"

# 616 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 617 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 618 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 619 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/PetalburgCity/scripts.pory"
	return
# 621 "data/maps/PetalburgCity/scripts.pory"

# 622 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 628 "data/maps/PetalburgCity/scripts.pory"

# 629 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity/scripts.pory"

# 636 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 651 "data/maps/PetalburgCity/scripts.pory"

# 652 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 653 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 655 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 656 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 657 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 660 "data/maps/PetalburgCity/scripts.pory"

# 661 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 675 "data/maps/PetalburgCity/scripts.pory"

# 676 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 679 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 680 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 683 "data/maps/PetalburgCity/scripts.pory"

# 684 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 698 "data/maps/PetalburgCity/scripts.pory"

# 699 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 700 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 702 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 703 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 705 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 706 "data/maps/PetalburgCity/scripts.pory"

# 707 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 709 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 710 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 711 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 712 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 713 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 714 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 715 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 717 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 718 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 719 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 720 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 721 "data/maps/PetalburgCity/scripts.pory"

# 722 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 723 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 724 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 725 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 726 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 727 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 728 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 729 "data/maps/PetalburgCity/scripts.pory"

# 730 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 731 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 732 "data/maps/PetalburgCity/scripts.pory"
	end
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 746 "data/maps/PetalburgCity/scripts.pory"

# 747 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 749 "data/maps/PetalburgCity/scripts.pory"

# 750 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 760 "data/maps/PetalburgCity/scripts.pory"

# 761 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 766 "data/maps/PetalburgCity/scripts.pory"

# 767 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 771 "data/maps/PetalburgCity/scripts.pory"

# 772 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 775 "data/maps/PetalburgCity/scripts.pory"

# 776 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

PetalburgAnthony_Text_0:
# 3 "data/maps/PetalburgCity/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu\p"
	.string "$"

PetalburgCity_Text_AreYouATrainer::
# 7 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot::
# 15 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 25 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"

# 28 "data/maps/PetalburgCity/scripts.pory"

# 29 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 30 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 31 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 32 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 35 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 36 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 37 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 38 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 39 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 40 "data/maps/PetalburgCity/scripts.pory"
	end
# 41 "data/maps/PetalburgCity/scripts.pory"

# 42 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 43 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 44 "data/maps/PetalburgCity/scripts.pory"
	return
# 45 "data/maps/PetalburgCity/scripts.pory"

# 46 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 47 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 49 "data/maps/PetalburgCity/scripts.pory"
	return
# 50 "data/maps/PetalburgCity/scripts.pory"

# 51 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 52 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 53 "data/maps/PetalburgCity/scripts.pory"
	return
# 54 "data/maps/PetalburgCity/scripts.pory"

# 55 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 56 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 57 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 58 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 59 "data/maps/PetalburgCity/scripts.pory"

# 60 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 61 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 62 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 63 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 64 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 65 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 66 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 69 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 70 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 71 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 72 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 73 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 74 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 75 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 77 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 78 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 79 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 80 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 81 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 82 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 83 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 84 "data/maps/PetalburgCity/scripts.pory"
	end
# 85 "data/maps/PetalburgCity/scripts.pory"

# 86 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 87 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 88 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 89 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 90 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 93 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 94 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 95 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 96 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 97 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 98 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 100 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 101 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 102 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 103 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 104 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 105 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 106 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 107 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 108 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 109 "data/maps/PetalburgCity/scripts.pory"
	end
# 110 "data/maps/PetalburgCity/scripts.pory"

# 111 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 112 "data/maps/PetalburgCity/scripts.pory"
	lock
# 113 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 114 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 116 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 117 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/PetalburgCity/scripts.pory"
	release
# 119 "data/maps/PetalburgCity/scripts.pory"
	end
# 120 "data/maps/PetalburgCity/scripts.pory"

# 121 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 122 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 123 "data/maps/PetalburgCity/scripts.pory"
	end
# 124 "data/maps/PetalburgCity/scripts.pory"

# 125 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 126 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 144 "data/maps/PetalburgCity/scripts.pory"

# 145 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 149 "data/maps/PetalburgCity/scripts.pory"

# 150 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 151 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 168 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 169 "data/maps/PetalburgCity/scripts.pory"

# 170 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 172 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 173 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 174 "data/maps/PetalburgCity/scripts.pory"

# 175 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 176 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
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
	walk_faster_up
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_up
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 209 "data/maps/PetalburgCity/scripts.pory"

# 210 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 211 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
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
	walk_faster_up
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_up
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_right
# 242 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 244 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 245 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 247 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 248 "data/maps/PetalburgCity/scripts.pory"

# 249 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 250 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 251 "data/maps/PetalburgCity/scripts.pory"
	end
# 252 "data/maps/PetalburgCity/scripts.pory"

# 253 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 254 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 255 "data/maps/PetalburgCity/scripts.pory"
	end
# 256 "data/maps/PetalburgCity/scripts.pory"

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 258 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 259 "data/maps/PetalburgCity/scripts.pory"
	end
# 260 "data/maps/PetalburgCity/scripts.pory"

# 261 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 262 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 263 "data/maps/PetalburgCity/scripts.pory"
	end
# 264 "data/maps/PetalburgCity/scripts.pory"

# 265 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 266 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 267 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 268 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 269 "data/maps/PetalburgCity/scripts.pory"
	end
# 270 "data/maps/PetalburgCity/scripts.pory"

# 271 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 272 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 273 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 274 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 275 "data/maps/PetalburgCity/scripts.pory"
	end
# 276 "data/maps/PetalburgCity/scripts.pory"

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 278 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 279 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 280 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 281 "data/maps/PetalburgCity/scripts.pory"
	end
# 282 "data/maps/PetalburgCity/scripts.pory"

# 283 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 284 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 285 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 286 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 287 "data/maps/PetalburgCity/scripts.pory"
	end
# 288 "data/maps/PetalburgCity/scripts.pory"

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 293 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 294 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 295 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 299 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 300 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 301 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 302 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 303 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 304 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 305 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 306 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 307 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 308 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 309 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 313 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 315 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 317 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 318 "data/maps/PetalburgCity/scripts.pory"
	end
# 319 "data/maps/PetalburgCity/scripts.pory"

# 320 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 322 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	return
# 326 "data/maps/PetalburgCity/scripts.pory"

# 327 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	return
# 338 "data/maps/PetalburgCity/scripts.pory"

# 339 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 343 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 344 "data/maps/PetalburgCity/scripts.pory"
	return
# 345 "data/maps/PetalburgCity/scripts.pory"

# 346 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 347 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 349 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/PetalburgCity/scripts.pory"
	return
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 355 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgCity/scripts.pory"
	return
# 357 "data/maps/PetalburgCity/scripts.pory"

# 358 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 359 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 360 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 361 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/PetalburgCity/scripts.pory"
	return
# 363 "data/maps/PetalburgCity/scripts.pory"

# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 366 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 367 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/PetalburgCity/scripts.pory"
	return
# 369 "data/maps/PetalburgCity/scripts.pory"

# 370 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 371 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 372 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 373 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 374 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 375 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 376 "data/maps/PetalburgCity/scripts.pory"

# 377 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 382 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 383 "data/maps/PetalburgCity/scripts.pory"

# 384 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 388 "data/maps/PetalburgCity/scripts.pory"

# 389 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 394 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 395 "data/maps/PetalburgCity/scripts.pory"

# 396 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 402 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 403 "data/maps/PetalburgCity/scripts.pory"

# 404 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 415 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 416 "data/maps/PetalburgCity/scripts.pory"

# 417 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 431 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 432 "data/maps/PetalburgCity/scripts.pory"

# 433 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 444 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 445 "data/maps/PetalburgCity/scripts.pory"

# 446 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 458 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 459 "data/maps/PetalburgCity/scripts.pory"

# 460 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 474 "data/maps/PetalburgCity/scripts.pory"

# 475 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 485 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 486 "data/maps/PetalburgCity/scripts.pory"

# 487 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 488 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 489 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 500 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 501 "data/maps/PetalburgCity/scripts.pory"

# 502 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 512 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 513 "data/maps/PetalburgCity/scripts.pory"

# 514 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 525 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 528 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 529 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 530 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 531 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 532 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 533 "data/maps/PetalburgCity/scripts.pory"
	end
# 534 "data/maps/PetalburgCity/scripts.pory"

# 535 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 536 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 537 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 538 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 539 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 540 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 541 "data/maps/PetalburgCity/scripts.pory"
	end
# 542 "data/maps/PetalburgCity/scripts.pory"

# 543 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 544 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 545 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 546 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 547 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 548 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 549 "data/maps/PetalburgCity/scripts.pory"
	end
# 550 "data/maps/PetalburgCity/scripts.pory"

# 551 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 552 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 553 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 554 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 555 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 556 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 557 "data/maps/PetalburgCity/scripts.pory"
	end
# 558 "data/maps/PetalburgCity/scripts.pory"

# 559 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 560 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 561 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 564 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 566 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 568 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 570 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 572 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 573 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 575 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 577 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 578 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 579 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 580 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 582 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 583 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 584 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 585 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 586 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 587 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 588 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 589 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 590 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 591 "data/maps/PetalburgCity/scripts.pory"
	end
# 592 "data/maps/PetalburgCity/scripts.pory"

# 593 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 594 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 595 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 596 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/PetalburgCity/scripts.pory"
	return
# 598 "data/maps/PetalburgCity/scripts.pory"

# 599 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 600 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 601 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 602 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/PetalburgCity/scripts.pory"
	return
# 604 "data/maps/PetalburgCity/scripts.pory"

# 605 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 606 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 607 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 608 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/PetalburgCity/scripts.pory"
	return
# 610 "data/maps/PetalburgCity/scripts.pory"

# 611 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 612 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 613 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 614 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/PetalburgCity/scripts.pory"
	return
# 616 "data/maps/PetalburgCity/scripts.pory"

# 617 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity/scripts.pory"

# 624 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 630 "data/maps/PetalburgCity/scripts.pory"

# 631 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 634 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 646 "data/maps/PetalburgCity/scripts.pory"

# 647 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 648 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 650 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity/scripts.pory"

# 656 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 670 "data/maps/PetalburgCity/scripts.pory"

# 671 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 672 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 674 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 675 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 678 "data/maps/PetalburgCity/scripts.pory"

# 679 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 693 "data/maps/PetalburgCity/scripts.pory"

# 694 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 695 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 697 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 701 "data/maps/PetalburgCity/scripts.pory"

# 702 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 703 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 707 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 716 "data/maps/PetalburgCity/scripts.pory"

# 717 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 718 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 719 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 720 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 721 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 722 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 723 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 724 "data/maps/PetalburgCity/scripts.pory"

# 725 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 726 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 727 "data/maps/PetalburgCity/scripts.pory"
	end
# 728 "data/maps/PetalburgCity/scripts.pory"

# 729 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 744 "data/maps/PetalburgCity/scripts.pory"

# 745 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 748 "data/maps/PetalburgCity/scripts.pory"

# 749 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 755 "data/maps/PetalburgCity/scripts.pory"

# 756 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 761 "data/maps/PetalburgCity/scripts.pory"

# 762 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 766 "data/maps/PetalburgCity/scripts.pory"

# 767 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 770 "data/maps/PetalburgCity/scripts.pory"

# 771 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer::
# 1 "data/maps/PetalburgCity/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot::
# 10 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 20 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"

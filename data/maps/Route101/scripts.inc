Route101_RunToBag::
# 2 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_RunToBag_Movement_0
# 7 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 8 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_BirchsBag
	return


# 12 "data/maps/Route101/scripts.pory"

# 13 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 14 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 15 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 16 "data/maps/Route101/scripts.pory"
	.byte 0
# 17 "data/maps/Route101/scripts.pory"

# 18 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 19 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 20 "data/maps/Route101/scripts.pory"
	end
# 21 "data/maps/Route101/scripts.pory"

# 22 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 23 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 24 "data/maps/Route101/scripts.pory"
	.2byte 0
# 25 "data/maps/Route101/scripts.pory"

# 26 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 27 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 28 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 29 "data/maps/Route101/scripts.pory"
	end
# 30 "data/maps/Route101/scripts.pory"

# 31 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 32 "data/maps/Route101/scripts.pory"
	lockall
# 33 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 34 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 35 "data/maps/Route101/scripts.pory"
	closemessage
# 36 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 37 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 38 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 39 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 40 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 41 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 43 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 44 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 46 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 48 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 49 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 51 "data/maps/Route101/scripts.pory"
	closemessage
# 52 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 53 "data/maps/Route101/scripts.pory"
	goto Route101_RunToBag
# 54 "data/maps/Route101/scripts.pory"
	end
# 55 "data/maps/Route101/scripts.pory"

# 56 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 57 "data/maps/Route101/scripts.pory"
	lockall
# 58 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 59 "data/maps/Route101/scripts.pory"
	closemessage
# 60 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 61 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route101/scripts.pory"
	releaseall
# 63 "data/maps/Route101/scripts.pory"
	end
# 64 "data/maps/Route101/scripts.pory"

# 65 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 66 "data/maps/Route101/scripts.pory"
	lockall
# 67 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 68 "data/maps/Route101/scripts.pory"
	closemessage
# 69 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 70 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route101/scripts.pory"
	releaseall
# 72 "data/maps/Route101/scripts.pory"
	end
# 73 "data/maps/Route101/scripts.pory"

# 74 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 75 "data/maps/Route101/scripts.pory"
	lockall
# 76 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 77 "data/maps/Route101/scripts.pory"
	closemessage
# 78 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 79 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route101/scripts.pory"
	releaseall
# 81 "data/maps/Route101/scripts.pory"
	end
# 82 "data/maps/Route101/scripts.pory"

# 83 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 84 "data/maps/Route101/scripts.pory"
	walk_up
# 85 "data/maps/Route101/scripts.pory"
	step_end
# 86 "data/maps/Route101/scripts.pory"

# 87 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 88 "data/maps/Route101/scripts.pory"
	walk_right
# 89 "data/maps/Route101/scripts.pory"
	step_end
# 90 "data/maps/Route101/scripts.pory"

# 91 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 92 "data/maps/Route101/scripts.pory"
	walk_down
# 93 "data/maps/Route101/scripts.pory"
	step_end
# 94 "data/maps/Route101/scripts.pory"

# 95 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route101/scripts.pory"
	step_end
# 127 "data/maps/Route101/scripts.pory"

# 128 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 135 "data/maps/Route101/scripts.pory"
	step_end
# 136 "data/maps/Route101/scripts.pory"

# 137 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 138 "data/maps/Route101/scripts.pory"
	step_end
# 139 "data/maps/Route101/scripts.pory"

# 140 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 141 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 142 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 143 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 144 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 145 "data/maps/Route101/scripts.pory"
	step_end
# 146 "data/maps/Route101/scripts.pory"

# 147 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 148 "data/maps/Route101/scripts.pory"
	player_run_up
# 149 "data/maps/Route101/scripts.pory"
	player_run_up
# 150 "data/maps/Route101/scripts.pory"
	player_run_up
# 151 "data/maps/Route101/scripts.pory"
	player_run_up
# 152 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 153 "data/maps/Route101/scripts.pory"
	step_end
# 154 "data/maps/Route101/scripts.pory"

# 155 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route101/scripts.pory"
	step_end
# 187 "data/maps/Route101/scripts.pory"

# 188 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 195 "data/maps/Route101/scripts.pory"
	step_end
# 196 "data/maps/Route101/scripts.pory"

# 197 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 198 "data/maps/Route101/scripts.pory"
	step_end
# 199 "data/maps/Route101/scripts.pory"

# 200 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 201 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 202 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 205 "data/maps/Route101/scripts.pory"
	step_end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 208 "data/maps/Route101/scripts.pory"
	walk_up
# 209 "data/maps/Route101/scripts.pory"
	walk_up
# 210 "data/maps/Route101/scripts.pory"
	step_end
# 211 "data/maps/Route101/scripts.pory"

# 212 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 213 "data/maps/Route101/scripts.pory"
	walk_up
# 214 "data/maps/Route101/scripts.pory"
	walk_left
# 215 "data/maps/Route101/scripts.pory"
	walk_up
# 216 "data/maps/Route101/scripts.pory"
	step_end
# 217 "data/maps/Route101/scripts.pory"

# 218 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 219 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 220 "data/maps/Route101/scripts.pory"
	end
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 223 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 224 "data/maps/Route101/scripts.pory"
	end
# 225 "data/maps/Route101/scripts.pory"

# 226 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 227 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 228 "data/maps/Route101/scripts.pory"
	end
# 229 "data/maps/Route101/scripts.pory"

# 230 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 231 "data/maps/Route101/scripts.pory"
	lock
# 232 "data/maps/Route101/scripts.pory"
	faceplayer
# 233 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 234 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 235 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 236 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 237 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 238 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 240 "data/maps/Route101/scripts.pory"
	waitstate
# 241 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 242 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 244 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 245 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 246 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 247 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 248 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 249 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 250 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 251 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 252 "data/maps/Route101/scripts.pory"
	checkplayergender
# 253 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 254 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 255 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 256 "data/maps/Route101/scripts.pory"
	waitstate
# 257 "data/maps/Route101/scripts.pory"
	release
# 258 "data/maps/Route101/scripts.pory"
	end
# 259 "data/maps/Route101/scripts.pory"

# 260 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 261 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 262 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 263 "data/maps/Route101/scripts.pory"
	return
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 266 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 267 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 268 "data/maps/Route101/scripts.pory"
	return
# 269 "data/maps/Route101/scripts.pory"

# 270 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 271 "data/maps/Route101/scripts.pory"
	walk_right
# 272 "data/maps/Route101/scripts.pory"
	step_end
# 273 "data/maps/Route101/scripts.pory"

# 274 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 275 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 276 "data/maps/Route101/scripts.pory"

# 277 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 278 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 279 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 280 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 281 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 282 "data/maps/Route101/scripts.pory"

# 283 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 284 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 285 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 286 "data/maps/Route101/scripts.pory"

# 287 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 288 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 289 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 290 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 291 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 292 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 293 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 294 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 295 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 296 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 297 "data/maps/Route101/scripts.pory"

# 298 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 299 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 300 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 301 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 302 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 303 "data/maps/Route101/scripts.pory"

# 304 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 305 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 306 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 307 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 308 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 309 "data/maps/Route101/scripts.pory"

# 310 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 311 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 312 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

# 2 "data/maps/Route101/scripts.pory"
Route101_RunToBag_Movement_0:
# 3 "data/maps/Route101/scripts.pory"
	player_run_left
# 3 "data/maps/Route101/scripts.pory"
	player_run_left
# 3 "data/maps/Route101/scripts.pory"
	player_run_left
# 3 "data/maps/Route101/scripts.pory"
	player_run_left
# 4 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_up
# 5 "data/maps/Route101/scripts.pory"
	step_end

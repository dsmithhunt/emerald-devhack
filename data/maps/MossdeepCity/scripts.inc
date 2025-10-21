# 17 "data/maps/MossdeepCity/scripts.pory"

# 18 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 19 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 20 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 21 "data/maps/MossdeepCity/scripts.pory"

# 22 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 23 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 24 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 25 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 26 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 27 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 28 "data/maps/MossdeepCity/scripts.pory"
	end
# 29 "data/maps/MossdeepCity/scripts.pory"

# 30 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 31 "data/maps/MossdeepCity/scripts.pory"
	lock
# 32 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 33 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 34 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 35 "data/maps/MossdeepCity/scripts.pory"
	release
# 36 "data/maps/MossdeepCity/scripts.pory"
	end
# 37 "data/maps/MossdeepCity/scripts.pory"

# 38 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 39 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 40 "data/maps/MossdeepCity/scripts.pory"
	release
# 41 "data/maps/MossdeepCity/scripts.pory"
	end
# 42 "data/maps/MossdeepCity/scripts.pory"

# 43 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 44 "data/maps/MossdeepCity/scripts.pory"
	lock
# 45 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 46 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 47 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 48 "data/maps/MossdeepCity/scripts.pory"
	release
# 49 "data/maps/MossdeepCity/scripts.pory"
	end
# 50 "data/maps/MossdeepCity/scripts.pory"

# 51 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 52 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 53 "data/maps/MossdeepCity/scripts.pory"
	release
# 54 "data/maps/MossdeepCity/scripts.pory"
	end
# 55 "data/maps/MossdeepCity/scripts.pory"

# 56 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 57 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 58 "data/maps/MossdeepCity/scripts.pory"
	end
# 59 "data/maps/MossdeepCity/scripts.pory"

# 60 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 61 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 62 "data/maps/MossdeepCity/scripts.pory"
	end
# 63 "data/maps/MossdeepCity/scripts.pory"

# 64 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 65 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 66 "data/maps/MossdeepCity/scripts.pory"
	end
# 67 "data/maps/MossdeepCity/scripts.pory"

# 68 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 69 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 70 "data/maps/MossdeepCity/scripts.pory"
	end
# 71 "data/maps/MossdeepCity/scripts.pory"

# 72 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 73 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 74 "data/maps/MossdeepCity/scripts.pory"
	end
# 75 "data/maps/MossdeepCity/scripts.pory"

# 76 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 77 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 78 "data/maps/MossdeepCity/scripts.pory"
	end
# 79 "data/maps/MossdeepCity/scripts.pory"

# 80 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 81 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 82 "data/maps/MossdeepCity/scripts.pory"
	end
# 83 "data/maps/MossdeepCity/scripts.pory"

# 84 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 85 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 86 "data/maps/MossdeepCity/scripts.pory"
	end
# 87 "data/maps/MossdeepCity/scripts.pory"

# 88 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 89 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 90 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 91 "data/maps/MossdeepCity/scripts.pory"
	end
# 92 "data/maps/MossdeepCity/scripts.pory"

# 93 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 94 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 95 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 96 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 98 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 99 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 100 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 101 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 103 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 104 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 105 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 106 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 107 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 109 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 110 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 111 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 112 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 113 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 114 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 115 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 116 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 117 "data/maps/MossdeepCity/scripts.pory"
	end
# 118 "data/maps/MossdeepCity/scripts.pory"

# 119 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 120 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 121 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 122 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 123 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 124 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 125 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 126 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 127 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 128 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 129 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 130 "data/maps/MossdeepCity/scripts.pory"

# 131 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 132 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 134 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 135 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 136 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 137 "data/maps/MossdeepCity/scripts.pory"

# 138 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 153 "data/maps/MossdeepCity/scripts.pory"

# 154 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 155 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 156 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 174 "data/maps/MossdeepCity/scripts.pory"

# 175 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 176 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 177 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 194 "data/maps/MossdeepCity/scripts.pory"

# 195 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 196 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 197 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 212 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 213 "data/maps/MossdeepCity/scripts.pory"

# 214 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 215 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 216 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 217 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 218 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 219 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 220 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 221 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 222 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 223 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 224 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 225 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 226 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 227 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 228 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 229 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 230 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 231 "data/maps/MossdeepCity/scripts.pory"

# 232 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 233 "data/maps/MossdeepCity/scripts.pory"
	lock
# 234 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 235 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 236 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 237 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/MossdeepCity/scripts.pory"
	release
# 239 "data/maps/MossdeepCity/scripts.pory"
	end
# 240 "data/maps/MossdeepCity/scripts.pory"

# 241 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 242 "data/maps/MossdeepCity/scripts.pory"
	lock
# 243 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 244 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 245 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 246 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 247 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 248 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 249 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 250 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 251 "data/maps/MossdeepCity/scripts.pory"
	release
# 252 "data/maps/MossdeepCity/scripts.pory"
	end
# 253 "data/maps/MossdeepCity/scripts.pory"

# 254 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 255 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 256 "data/maps/MossdeepCity/scripts.pory"
	release
# 257 "data/maps/MossdeepCity/scripts.pory"
	end
# 258 "data/maps/MossdeepCity/scripts.pory"

# 259 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 260 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 261 "data/maps/MossdeepCity/scripts.pory"
	release
# 262 "data/maps/MossdeepCity/scripts.pory"
	end
# 263 "data/maps/MossdeepCity/scripts.pory"

# 264 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 265 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 266 "data/maps/MossdeepCity/scripts.pory"
	end
# 267 "data/maps/MossdeepCity/scripts.pory"

# 268 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 269 "data/maps/MossdeepCity/scripts.pory"
	lock
# 270 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 271 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 272 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 273 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 274 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 275 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 276 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
# 277 "data/maps/MossdeepCity/scripts.pory"
	release
# 278 "data/maps/MossdeepCity/scripts.pory"
	end
# 279 "data/maps/MossdeepCity/scripts.pory"

# 280 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 281 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 282 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 283 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 284 "data/maps/MossdeepCity/scripts.pory"
	return
# 285 "data/maps/MossdeepCity/scripts.pory"

# 286 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 287 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 288 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
# 289 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/MossdeepCity/scripts.pory"
	return
# 291 "data/maps/MossdeepCity/scripts.pory"

# 292 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 293 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 294 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 296 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 297 "data/maps/MossdeepCity/scripts.pory"

# 298 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 302 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 304 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 306 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 307 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 308 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 309 "data/maps/MossdeepCity/scripts.pory"

# 310 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 311 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 312 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 313 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 314 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 315 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 316 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 317 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 318 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 319 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 320 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 321 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 322 "data/maps/MossdeepCity/scripts.pory"

# 323 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 324 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 326 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 327 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 328 "data/maps/MossdeepCity/scripts.pory"

# 329 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 334 "data/maps/MossdeepCity/scripts.pory"

# 335 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 337 "data/maps/MossdeepCity/scripts.pory"

# 338 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 341 "data/maps/MossdeepCity/scripts.pory"

# 342 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 349 "data/maps/MossdeepCity/scripts.pory"

# 350 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 355 "data/maps/MossdeepCity/scripts.pory"

# 356 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 359 "data/maps/MossdeepCity/scripts.pory"

# 360 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 369 "data/maps/MossdeepCity/scripts.pory"

# 370 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 375 "data/maps/MossdeepCity/scripts.pory"

# 376 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 380 "data/maps/MossdeepCity/scripts.pory"

# 381 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 389 "data/maps/MossdeepCity/scripts.pory"

# 390 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 394 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 396 "data/maps/MossdeepCity/scripts.pory"

# 397 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 406 "data/maps/MossdeepCity/scripts.pory"

# 407 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 409 "data/maps/MossdeepCity/scripts.pory"

# 410 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: LIZA & TATE\p"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 414 "data/maps/MossdeepCity/scripts.pory"

# 415 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 418 "data/maps/MossdeepCity/scripts.pory"

# 419 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 422 "data/maps/MossdeepCity/scripts.pory"

# 423 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new LEADER once\n"
# 431 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored WALLACE.$"

MossdeepCity_Text_ScottSomethingWrongWithTown::
# 1 "data/maps/MossdeepCity/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu\p"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
	.string "pretty strong, so I decided to come\l"
	.string "take a look-see for myself.\p"
	.string "But there's something wrong about\n"
	.string "this town.\p"
	.string "People are going on about a warning\n"
	.string "letter and the SPACE CENTER…\p"
	.string "I don't think it concerns me in any\n"
	.string "way, though.$"

SootopolisCity_EventScript_Steven::
# 2 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 3 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 4 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 5 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 6 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpZinnia
# 7 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedZinnia
# 8 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedZinnia
# 9 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 10 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_Steven_Text_0
# 14 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	return


SootopolisCity_EventScript_StevenHelpZinnia::
# 18 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_StevenHelpZinnia_Text_0
# 21 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	return


SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 25 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_StevenMaxieArchieLeft_Text_0
# 30 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	return


SootopolisCity_EventScript_StevenHelpedZinnia::
# 34 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_StevenHelpedZinnia_Text_0
# 39 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	return


SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 43 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Text_0
# 57 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 58 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 59 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 60 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Text_1
# 68 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 69 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 70 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 71 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 73 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 74 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 76 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 77 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Text_2
# 84 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 85 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 86 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 87 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 89 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	return


SootopolisCity_Defense_AlolanNinetales::
# 93 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_NINETALES_ALOLA, 0
# 94 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Defense_AlolanNinetales_Text_0, MSGBOX_SIGN
	return


# 97 "data/maps/SootopolisCity/scripts.pory"

# 98 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 99 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 100 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 101 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 102 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 103 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 104 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 105 "data/maps/SootopolisCity/scripts.pory"

# 106 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 107 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 108 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 109 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 110 "data/maps/SootopolisCity/scripts.pory"
	end
# 111 "data/maps/SootopolisCity/scripts.pory"

# 112 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 113 "data/maps/SootopolisCity/scripts.pory"
	end
# 114 "data/maps/SootopolisCity/scripts.pory"

# 115 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 116 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 117 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 118 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 119 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 120 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 121 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 122 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 123 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 124 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 125 "data/maps/SootopolisCity/scripts.pory"
	return
# 126 "data/maps/SootopolisCity/scripts.pory"

# 127 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 128 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 129 "data/maps/SootopolisCity/scripts.pory"
	return
# 130 "data/maps/SootopolisCity/scripts.pory"

# 131 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 132 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 133 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 134 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 135 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 136 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 137 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 138 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 139 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 140 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 141 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 142 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 143 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 144 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 145 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 146 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 147 "data/maps/SootopolisCity/scripts.pory"
	end
# 148 "data/maps/SootopolisCity/scripts.pory"

# 149 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 150 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 151 "data/maps/SootopolisCity/scripts.pory"
	return
# 152 "data/maps/SootopolisCity/scripts.pory"

# 153 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 154 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 155 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_1, 46, 32
# 156 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_NINJA_BOY, 48, 41
# 157 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WOMAN_1, 45, 43
# 158 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 159 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 160 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 161 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 162 "data/maps/SootopolisCity/scripts.pory"
	return
# 163 "data/maps/SootopolisCity/scripts.pory"

# 164 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 165 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 166 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 167 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 168 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 169 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 170 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 171 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 172 "data/maps/SootopolisCity/scripts.pory"
	return
# 173 "data/maps/SootopolisCity/scripts.pory"

# 174 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 175 "data/maps/SootopolisCity/scripts.pory"
	return
# 176 "data/maps/SootopolisCity/scripts.pory"

# 177 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 178 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 179 "data/maps/SootopolisCity/scripts.pory"
	return
# 180 "data/maps/SootopolisCity/scripts.pory"

# 181 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 182 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 183 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 184 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 185 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 186 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 187 "data/maps/SootopolisCity/scripts.pory"
	return
# 188 "data/maps/SootopolisCity/scripts.pory"

# 189 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 190 "data/maps/SootopolisCity/scripts.pory"
	return
# 191 "data/maps/SootopolisCity/scripts.pory"

# 192 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 193 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 194 "data/maps/SootopolisCity/scripts.pory"
	return
# 195 "data/maps/SootopolisCity/scripts.pory"

# 196 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 197 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 198 "data/maps/SootopolisCity/scripts.pory"
	return
# 199 "data/maps/SootopolisCity/scripts.pory"

# 200 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 201 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 202 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 203 "data/maps/SootopolisCity/scripts.pory"
	return
# 204 "data/maps/SootopolisCity/scripts.pory"

# 205 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 206 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 207 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 18
# 208 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 209 "data/maps/SootopolisCity/scripts.pory"
	end
# 210 "data/maps/SootopolisCity/scripts.pory"

# 211 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 212 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 213 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 29, 33
# 214 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 33, 35
# 215 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_ARCHIE, 34, 35
# 216 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 217 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 218 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 219 "data/maps/SootopolisCity/scripts.pory"
	return
# 220 "data/maps/SootopolisCity/scripts.pory"

# 221 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 222 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 33
# 223 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 224 "data/maps/SootopolisCity/scripts.pory"
	return
# 225 "data/maps/SootopolisCity/scripts.pory"

# 226 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 227 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 32, 33
# 228 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 229 "data/maps/SootopolisCity/scripts.pory"
	return
# 230 "data/maps/SootopolisCity/scripts.pory"

# 231 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 232 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 30, 33
# 233 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 234 "data/maps/SootopolisCity/scripts.pory"
	return
# 235 "data/maps/SootopolisCity/scripts.pory"

# 236 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 237 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 238 "data/maps/SootopolisCity/scripts.pory"
	return
# 239 "data/maps/SootopolisCity/scripts.pory"

# 240 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 241 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 242 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 243 "data/maps/SootopolisCity/scripts.pory"

# 244 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 245 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 246 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 247 "data/maps/SootopolisCity/scripts.pory"
	end
# 248 "data/maps/SootopolisCity/scripts.pory"

# 249 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 250 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 251 "data/maps/SootopolisCity/scripts.pory"
	return
# 252 "data/maps/SootopolisCity/scripts.pory"

# 253 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 254 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 255 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 256 "data/maps/SootopolisCity/scripts.pory"
	return
# 257 "data/maps/SootopolisCity/scripts.pory"

# 258 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 259 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 260 "data/maps/SootopolisCity/scripts.pory"
	end
# 261 "data/maps/SootopolisCity/scripts.pory"

# 262 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 263 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 264 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 265 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 266 "data/maps/SootopolisCity/scripts.pory"

# 267 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 268 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 269 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 270 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 271 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 272 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 273 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 274 "data/maps/SootopolisCity/scripts.pory"
	end
# 275 "data/maps/SootopolisCity/scripts.pory"

# 276 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 277 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 278 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 279 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 280 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 282 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 283 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 284 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 285 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 286 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 287 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 288 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 289 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 290 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 291 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 293 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 294 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 295 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 296 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 297 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 299 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 300 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 301 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 302 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 303 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 304 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 305 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 306 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 308 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 309 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 310 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 311 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 313 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 314 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 315 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 316 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 317 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 318 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 319 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 320 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 322 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 323 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 324 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 325 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 327 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 328 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 329 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 330 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 331 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 332 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 333 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 334 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 336 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 337 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 338 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 339 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 341 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 342 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 343 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 344 "data/maps/SootopolisCity/scripts.pory"
	end
# 345 "data/maps/SootopolisCity/scripts.pory"

# 346 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 347 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 348 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 349 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 350 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 351 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 352 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 353 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 354 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 355 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 356 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 357 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 358 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 359 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 360 "data/maps/SootopolisCity/scripts.pory"

# 361 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 362 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 363 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 364 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 365 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 366 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 367 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 368 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 369 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 370 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 371 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 372 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 373 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 374 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 375 "data/maps/SootopolisCity/scripts.pory"

# 376 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 377 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 378 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 379 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 380 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 381 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 382 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 383 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 384 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 385 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 386 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 387 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 388 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 389 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 390 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 391 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 393 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 394 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 395 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 396 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 397 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 399 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 400 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 401 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 402 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 403 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 404 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 405 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 406 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 407 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 408 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 409 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 410 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 411 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 412 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 413 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 414 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 415 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 416 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 417 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 418 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 419 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 420 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 421 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 422 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 423 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 424 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 425 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 426 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 427 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 428 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 429 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 430 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 431 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 432 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 433 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 434 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 435 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 436 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 437 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 438 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 439 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 440 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 441 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 442 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 443 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 444 "data/maps/SootopolisCity/scripts.pory"
	end
# 445 "data/maps/SootopolisCity/scripts.pory"

# 446 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 447 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 448 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 449 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 450 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 451 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 452 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 453 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 454 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 455 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 456 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 457 "data/maps/SootopolisCity/scripts.pory"

# 458 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 459 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 460 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 461 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 462 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 463 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 464 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 465 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 466 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 467 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 468 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 469 "data/maps/SootopolisCity/scripts.pory"

# 470 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 471 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 472 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 473 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 474 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 475 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 476 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 477 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 478 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 479 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 480 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 481 "data/maps/SootopolisCity/scripts.pory"

# 482 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 483 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 484 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 485 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 486 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 487 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 488 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 489 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 490 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 491 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 492 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 493 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 494 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 495 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 496 "data/maps/SootopolisCity/scripts.pory"

# 497 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 498 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 499 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 500 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 501 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 502 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 503 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 504 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 505 "data/maps/SootopolisCity/scripts.pory"

# 506 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 507 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 508 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 509 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 510 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 511 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 512 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 513 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 514 "data/maps/SootopolisCity/scripts.pory"

# 515 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 516 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 517 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 518 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 519 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 520 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 521 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 522 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 523 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 524 "data/maps/SootopolisCity/scripts.pory"

# 525 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 526 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 527 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 528 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 529 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 530 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 531 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 532 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 533 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 534 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 536 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 537 "data/maps/SootopolisCity/scripts.pory"

# 538 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 539 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 540 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 541 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 542 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 543 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 544 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 545 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 546 "data/maps/SootopolisCity/scripts.pory"

# 547 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 549 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 550 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 551 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 553 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 554 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 555 "data/maps/SootopolisCity/scripts.pory"

# 556 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 557 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 558 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 559 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 560 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 561 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 562 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 563 "data/maps/SootopolisCity/scripts.pory"
	end
# 564 "data/maps/SootopolisCity/scripts.pory"

# 565 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 566 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 567 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 568 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 569 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 571 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 572 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 573 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 574 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 575 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 576 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 577 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 578 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 579 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 580 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 581 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 582 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 583 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanUp
# 584 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 585 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 586 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 587 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 588 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 589 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 590 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 591 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 592 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 593 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 594 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 595 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 596 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 597 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 598 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 599 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 600 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 601 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 602 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 603 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 604 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 605 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 607 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 608 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 609 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 610 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 611 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 612 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 613 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 614 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 615 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 616 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 617 "data/maps/SootopolisCity/scripts.pory"
	end
# 618 "data/maps/SootopolisCity/scripts.pory"

# 619 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 620 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 621 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 622 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 623 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 625 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 626 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 627 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 628 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 629 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 630 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 631 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 632 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 633 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 634 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 635 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanUp
# 636 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 637 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 639 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 640 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 641 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 642 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 643 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 644 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 645 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 646 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 647 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 648 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 649 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 650 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 651 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 652 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 653 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 654 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 655 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 656 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 657 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 658 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 660 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 661 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 662 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 663 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 664 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 665 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 666 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 667 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 668 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 669 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 670 "data/maps/SootopolisCity/scripts.pory"
	end
# 671 "data/maps/SootopolisCity/scripts.pory"

# 672 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 673 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 674 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 675 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 676 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 677 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 678 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 679 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 680 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 681 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 682 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 683 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 684 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 685 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 686 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 687 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 688 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 689 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 690 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 691 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 692 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 693 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 694 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 695 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 696 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 697 "data/maps/SootopolisCity/scripts.pory"
	return
# 698 "data/maps/SootopolisCity/scripts.pory"

# 699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 700 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 701 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 702 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 703 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 704 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 705 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 706 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 707 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 708 "data/maps/SootopolisCity/scripts.pory"

# 709 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 710 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 711 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 712 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 713 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 714 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 715 "data/maps/SootopolisCity/scripts.pory"

# 716 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 717 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 718 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 719 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 720 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 721 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 722 "data/maps/SootopolisCity/scripts.pory"

# 723 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 724 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 725 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 726 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 727 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 728 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 729 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 730 "data/maps/SootopolisCity/scripts.pory"

# 731 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 732 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 733 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 734 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 735 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 736 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 737 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 738 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 739 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 740 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 741 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 742 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 743 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 744 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 745 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 746 "data/maps/SootopolisCity/scripts.pory"

# 747 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 748 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 749 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 750 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 751 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 752 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 753 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 754 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 755 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 756 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 757 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 758 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 759 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 760 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 761 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 762 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 763 "data/maps/SootopolisCity/scripts.pory"

# 764 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 765 "data/maps/SootopolisCity/scripts.pory"
	lock
# 766 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 767 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 768 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 769 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 770 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 771 "data/maps/SootopolisCity/scripts.pory"
	release
# 772 "data/maps/SootopolisCity/scripts.pory"
	end
# 773 "data/maps/SootopolisCity/scripts.pory"

# 774 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 775 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 776 "data/maps/SootopolisCity/scripts.pory"
	release
# 777 "data/maps/SootopolisCity/scripts.pory"
	end
# 778 "data/maps/SootopolisCity/scripts.pory"

# 779 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 780 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 781 "data/maps/SootopolisCity/scripts.pory"
	release
# 782 "data/maps/SootopolisCity/scripts.pory"
	end
# 783 "data/maps/SootopolisCity/scripts.pory"

# 784 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 785 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 786 "data/maps/SootopolisCity/scripts.pory"
	release
# 787 "data/maps/SootopolisCity/scripts.pory"
	end
# 788 "data/maps/SootopolisCity/scripts.pory"

# 789 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 790 "data/maps/SootopolisCity/scripts.pory"
	lock
# 791 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 792 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 793 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 794 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 795 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 796 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 797 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 798 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/SootopolisCity/scripts.pory"
	release
# 800 "data/maps/SootopolisCity/scripts.pory"
	end
# 801 "data/maps/SootopolisCity/scripts.pory"

# 802 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 803 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 804 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 805 "data/maps/SootopolisCity/scripts.pory"
	release
# 806 "data/maps/SootopolisCity/scripts.pory"
	end
# 807 "data/maps/SootopolisCity/scripts.pory"

# 808 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 809 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 810 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 811 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 812 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 813 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 814 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 815 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 816 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 817 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 818 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 819 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 820 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 821 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 822 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 823 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 824 "data/maps/SootopolisCity/scripts.pory"
	end
# 825 "data/maps/SootopolisCity/scripts.pory"

# 826 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 827 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 828 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 829 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 830 "data/maps/SootopolisCity/scripts.pory"
	release
# 831 "data/maps/SootopolisCity/scripts.pory"
	end
# 832 "data/maps/SootopolisCity/scripts.pory"

# 833 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 834 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 835 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 836 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 837 "data/maps/SootopolisCity/scripts.pory"
	release
# 838 "data/maps/SootopolisCity/scripts.pory"
	end
# 839 "data/maps/SootopolisCity/scripts.pory"

# 840 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 841 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 842 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 843 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 844 "data/maps/SootopolisCity/scripts.pory"
	release
# 845 "data/maps/SootopolisCity/scripts.pory"
	end
# 846 "data/maps/SootopolisCity/scripts.pory"

# 847 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 848 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 849 "data/maps/SootopolisCity/scripts.pory"
	release
# 850 "data/maps/SootopolisCity/scripts.pory"
	end
# 851 "data/maps/SootopolisCity/scripts.pory"

# 852 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 853 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 854 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 855 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 856 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 857 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 858 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 859 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 860 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 861 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 862 "data/maps/SootopolisCity/scripts.pory"
	end
# 863 "data/maps/SootopolisCity/scripts.pory"

# 864 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 865 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 866 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 867 "data/maps/SootopolisCity/scripts.pory"
	end
# 868 "data/maps/SootopolisCity/scripts.pory"

# 869 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 870 "data/maps/SootopolisCity/scripts.pory"
	lock
# 871 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 872 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 873 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 874 "data/maps/SootopolisCity/scripts.pory"
	release
# 875 "data/maps/SootopolisCity/scripts.pory"
	end
# 876 "data/maps/SootopolisCity/scripts.pory"

# 877 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 878 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 879 "data/maps/SootopolisCity/scripts.pory"
	release
# 880 "data/maps/SootopolisCity/scripts.pory"
	end
# 881 "data/maps/SootopolisCity/scripts.pory"

# 882 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 883 "data/maps/SootopolisCity/scripts.pory"
	lock
# 884 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 885 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 886 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 887 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 888 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 889 "data/maps/SootopolisCity/scripts.pory"
	release
# 890 "data/maps/SootopolisCity/scripts.pory"
	end
# 891 "data/maps/SootopolisCity/scripts.pory"

# 892 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 893 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 894 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 895 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_1, Common_Movement_FaceOriginalDirection
# 896 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 897 "data/maps/SootopolisCity/scripts.pory"
	release
# 898 "data/maps/SootopolisCity/scripts.pory"
	end
# 899 "data/maps/SootopolisCity/scripts.pory"

# 900 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 901 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 902 "data/maps/SootopolisCity/scripts.pory"
	release
# 903 "data/maps/SootopolisCity/scripts.pory"
	end
# 904 "data/maps/SootopolisCity/scripts.pory"

# 905 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 906 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 907 "data/maps/SootopolisCity/scripts.pory"
	release
# 908 "data/maps/SootopolisCity/scripts.pory"
	end
# 909 "data/maps/SootopolisCity/scripts.pory"

# 910 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 911 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 912 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 913 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 914 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 915 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 916 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 917 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 918 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 919 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 920 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/SootopolisCity/scripts.pory"
	release
# 922 "data/maps/SootopolisCity/scripts.pory"
	end
# 923 "data/maps/SootopolisCity/scripts.pory"

# 924 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 925 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 926 "data/maps/SootopolisCity/scripts.pory"
	release
# 927 "data/maps/SootopolisCity/scripts.pory"
	end
# 928 "data/maps/SootopolisCity/scripts.pory"

# 929 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 931 "data/maps/SootopolisCity/scripts.pory"
	release
# 932 "data/maps/SootopolisCity/scripts.pory"
	end
# 933 "data/maps/SootopolisCity/scripts.pory"

# 934 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 935 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 936 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 937 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 938 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 939 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 940 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 941 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 942 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 943 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 944 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FaceOriginalDirection
# 945 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 946 "data/maps/SootopolisCity/scripts.pory"
	release
# 947 "data/maps/SootopolisCity/scripts.pory"
	end
# 948 "data/maps/SootopolisCity/scripts.pory"

# 949 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 950 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 951 "data/maps/SootopolisCity/scripts.pory"
	release
# 952 "data/maps/SootopolisCity/scripts.pory"
	end
# 953 "data/maps/SootopolisCity/scripts.pory"

# 954 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 955 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 956 "data/maps/SootopolisCity/scripts.pory"
	release
# 957 "data/maps/SootopolisCity/scripts.pory"
	end
# 958 "data/maps/SootopolisCity/scripts.pory"

# 959 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 960 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 961 "data/maps/SootopolisCity/scripts.pory"
	release
# 962 "data/maps/SootopolisCity/scripts.pory"
	end
# 963 "data/maps/SootopolisCity/scripts.pory"

# 964 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 965 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 966 "data/maps/SootopolisCity/scripts.pory"
	end
# 967 "data/maps/SootopolisCity/scripts.pory"

# 968 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 969 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 970 "data/maps/SootopolisCity/scripts.pory"
	end
# 971 "data/maps/SootopolisCity/scripts.pory"

# 972 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 973 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 974 "data/maps/SootopolisCity/scripts.pory"
	end
# 975 "data/maps/SootopolisCity/scripts.pory"

# 976 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 977 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 978 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 979 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 980 "data/maps/SootopolisCity/scripts.pory"
	return
# 981 "data/maps/SootopolisCity/scripts.pory"

# 982 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 983 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 984 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 985 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 986 "data/maps/SootopolisCity/scripts.pory"
	return
# 987 "data/maps/SootopolisCity/scripts.pory"

# 988 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 989 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 990 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 991 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 992 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 993 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 994 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 995 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 996 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 997 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 998 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 999 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1000 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1001 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1002 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1003 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1004 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1006 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1007 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1008 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1009 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1010 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1011 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1012 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1013 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1014 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1015 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1016 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1017 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1018 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1019 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1020 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1021 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1022 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1025 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1026 "data/maps/SootopolisCity/scripts.pory"

# 1027 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1030 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1031 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1036 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1037 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1050 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1051 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1052 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1054 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1055 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1057 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1058 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1059 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1060 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1061 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1062 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1063 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1064 "data/maps/SootopolisCity/scripts.pory"

# 1065 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1074 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1075 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1076 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1077 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1078 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1079 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1081 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1096 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1097 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1098 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1100 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1101 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1102 "data/maps/SootopolisCity/scripts.pory"

# 1103 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1112 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1113 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1132 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1134 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1135 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1136 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1139 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1140 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1141 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1154 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1156 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1157 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1161 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1162 "data/maps/SootopolisCity/scripts.pory"

# 1163 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1194 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1203 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1214 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1215 "data/maps/SootopolisCity/scripts.pory"

# 1216 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1219 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1220 "data/maps/SootopolisCity/scripts.pory"

# 1221 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1225 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1232 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1233 "data/maps/SootopolisCity/scripts.pory"

# 1234 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1235 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1236 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1237 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1238 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1245 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1246 "data/maps/SootopolisCity/scripts.pory"

# 1247 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1248 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1249 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1250 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1251 "data/maps/SootopolisCity/scripts.pory"

# 1252 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1253 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1254 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 1255 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1256 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1257 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1258 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1259 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 1260 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1261 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1262 "data/maps/SootopolisCity/scripts.pory"
	end
# 1263 "data/maps/SootopolisCity/scripts.pory"

# 1264 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1265 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1266 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1267 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1268 "data/maps/SootopolisCity/scripts.pory"
	end
# 1269 "data/maps/SootopolisCity/scripts.pory"

# 1270 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1271 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1272 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1273 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1274 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1275 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1276 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1277 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1278 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1279 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1280 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1281 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1282 "data/maps/SootopolisCity/scripts.pory"
	end
# 1283 "data/maps/SootopolisCity/scripts.pory"

# 1284 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1285 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1286 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1287 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1288 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1289 "data/maps/SootopolisCity/scripts.pory"
	end
# 1290 "data/maps/SootopolisCity/scripts.pory"

# 1291 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1292 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1293 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 1294 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1295 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1296 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1297 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1298 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 1299 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1300 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1301 "data/maps/SootopolisCity/scripts.pory"
	end
# 1302 "data/maps/SootopolisCity/scripts.pory"

# 1303 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1304 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1305 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1306 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1307 "data/maps/SootopolisCity/scripts.pory"
	end
# 1308 "data/maps/SootopolisCity/scripts.pory"

# 1309 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1310 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1311 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 1312 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1313 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1314 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1315 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1316 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 1317 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1318 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1319 "data/maps/SootopolisCity/scripts.pory"
	end
# 1320 "data/maps/SootopolisCity/scripts.pory"

# 1321 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1322 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1323 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1324 "data/maps/SootopolisCity/scripts.pory"
	end
# 1325 "data/maps/SootopolisCity/scripts.pory"

# 1326 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1327 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1328 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1329 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1330 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1331 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1332 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1333 "data/maps/SootopolisCity/scripts.pory"
	release
# 1334 "data/maps/SootopolisCity/scripts.pory"
	end
# 1335 "data/maps/SootopolisCity/scripts.pory"

# 1336 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1337 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1338 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1339 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1340 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1341 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1342 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1343 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1344 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1345 "data/maps/SootopolisCity/scripts.pory"
	release
# 1346 "data/maps/SootopolisCity/scripts.pory"
	end
# 1347 "data/maps/SootopolisCity/scripts.pory"

# 1348 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1349 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1350 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1351 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1352 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1353 "data/maps/SootopolisCity/scripts.pory"
	return
# 1354 "data/maps/SootopolisCity/scripts.pory"

# 1355 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1356 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1357 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1358 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1359 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1360 "data/maps/SootopolisCity/scripts.pory"
	return
# 1361 "data/maps/SootopolisCity/scripts.pory"

# 1362 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1363 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1364 "data/maps/SootopolisCity/scripts.pory"
	release
# 1365 "data/maps/SootopolisCity/scripts.pory"
	end
# 1366 "data/maps/SootopolisCity/scripts.pory"

# 1367 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1368 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1369 "data/maps/SootopolisCity/scripts.pory"
	release
# 1370 "data/maps/SootopolisCity/scripts.pory"
	end
# 1371 "data/maps/SootopolisCity/scripts.pory"

# 1372 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1373 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1374 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1375 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1376 "data/maps/SootopolisCity/scripts.pory"

# 1377 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1378 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1379 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1380 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1381 "data/maps/SootopolisCity/scripts.pory"

# 1382 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1383 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1384 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1385 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1386 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1387 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1388 "data/maps/SootopolisCity/scripts.pory"
	end
# 1389 "data/maps/SootopolisCity/scripts.pory"

# 1390 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1391 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1392 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1393 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1394 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1395 "data/maps/SootopolisCity/scripts.pory"
	end
# 1396 "data/maps/SootopolisCity/scripts.pory"

# 1397 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1398 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1399 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1400 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1401 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1402 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1403 "data/maps/SootopolisCity/scripts.pory"
	end
# 1404 "data/maps/SootopolisCity/scripts.pory"

# 1405 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1406 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1407 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1408 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1409 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1410 "data/maps/SootopolisCity/scripts.pory"
	end
# 1411 "data/maps/SootopolisCity/scripts.pory"

# 1412 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1413 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1414 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1415 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1416 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1417 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1418 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1419 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1420 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1421 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1422 "data/maps/SootopolisCity/scripts.pory"
	end
# 1423 "data/maps/SootopolisCity/scripts.pory"

# 1424 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1425 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1426 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1427 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1428 "data/maps/SootopolisCity/scripts.pory"

# 1429 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1430 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1431 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1432 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1433 "data/maps/SootopolisCity/scripts.pory"

# 1434 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1435 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1436 "data/maps/SootopolisCity/scripts.pory"
	.string "LEADER: JUAN\p"
# 1437 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1438 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1439 "data/maps/SootopolisCity/scripts.pory"

# 1440 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1441 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1442 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1443 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1444 "data/maps/SootopolisCity/scripts.pory"

# 1445 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1446 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1447 "data/maps/SootopolisCity/scripts.pory"

# 1448 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1449 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1450 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1451 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1452 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1453 "data/maps/SootopolisCity/scripts.pory"

# 1454 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1455 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
# 1456 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1457 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1458 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1459 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1460 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1461 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1462 "data/maps/SootopolisCity/scripts.pory"

# 1463 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1464 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1465 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green POKéMON?!$"
# 1466 "data/maps/SootopolisCity/scripts.pory"

# 1467 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1468 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
# 1469 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1470 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1471 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1472 "data/maps/SootopolisCity/scripts.pory"

# 1473 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1474 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1475 "data/maps/SootopolisCity/scripts.pory"
	.string "the two POKéMON aren't angry.\p"
# 1476 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1477 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1478 "data/maps/SootopolisCity/scripts.pory"

# 1479 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1480 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
# 1481 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1482 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON…$"
# 1483 "data/maps/SootopolisCity/scripts.pory"

# 1484 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1485 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1486 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1487 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1488 "data/maps/SootopolisCity/scripts.pory"

# 1489 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1490 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1491 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1492 "data/maps/SootopolisCity/scripts.pory"

# 1493 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1494 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1495 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1496 "data/maps/SootopolisCity/scripts.pory"

# 1497 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1498 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
# 1499 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue POKéMON!$"
# 1500 "data/maps/SootopolisCity/scripts.pory"

# 1501 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1502 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1503 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1504 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON fighting over there?$"
# 1505 "data/maps/SootopolisCity/scripts.pory"

# 1506 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1507 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1508 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1509 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1510 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1511 "data/maps/SootopolisCity/scripts.pory"

# 1512 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1513 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1514 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1515 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1516 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1517 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1518 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1519 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1520 "data/maps/SootopolisCity/scripts.pory"

# 1521 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1522 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1523 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1524 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1525 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1526 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1527 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1528 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1529 "data/maps/SootopolisCity/scripts.pory"

# 1530 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1531 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
# 1532 "data/maps/SootopolisCity/scripts.pory"
	.string "another big POKéMON!\p"
# 1533 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1534 "data/maps/SootopolisCity/scripts.pory"

# 1535 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1536 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
# 1537 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1538 "data/maps/SootopolisCity/scripts.pory"

# 1539 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1540 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1541 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY will get wrecked!$"
# 1542 "data/maps/SootopolisCity/scripts.pory"

# 1543 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1544 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"
# 1545 "data/maps/SootopolisCity/scripts.pory"

# 1546 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1547 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to SOOTOPOLIS?\l"
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1550 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1551 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1552 "data/maps/SootopolisCity/scripts.pory"

# 1553 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1555 "data/maps/SootopolisCity/scripts.pory"

# 1556 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN.\p"
# 1559 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of POKéMON, becalmed at\n"
# 1560 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1562 "data/maps/SootopolisCity/scripts.pory"

# 1563 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1564 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1565 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1567 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of POKéMON…\p"
# 1568 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1569 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by WALLACE to lead that\l"
# 1570 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1571 "data/maps/SootopolisCity/scripts.pory"

# 1572 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1573 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1574 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1575 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON was quelled by the awakening\l"
# 1576 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third POKéMON…$"
# 1577 "data/maps/SootopolisCity/scripts.pory"

# 1578 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1579 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
# 1580 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1582 "data/maps/SootopolisCity/scripts.pory"

# 1583 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1584 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
# 1585 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1586 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1587 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1588 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1589 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1590 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS the most beautiful.$"
# 1591 "data/maps/SootopolisCity/scripts.pory"

# 1592 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
# 1594 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1595 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1596 "data/maps/SootopolisCity/scripts.pory"

# 1597 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1598 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1600 "data/maps/SootopolisCity/scripts.pory"

# 1601 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1602 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1603 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1604 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1606 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1607 "data/maps/SootopolisCity/scripts.pory"

# 1608 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1609 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1611 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1612 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1613 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1615 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1616 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1617 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1618 "data/maps/SootopolisCity/scripts.pory"

# 1619 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1620 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1621 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1622 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON here?\p"
# 1623 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1624 "data/maps/SootopolisCity/scripts.pory"

# 1625 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1626 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
# 1627 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1628 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1629 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all HOENN, not just\n"
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS, will be utterly ruined!$"
# 1631 "data/maps/SootopolisCity/scripts.pory"

# 1632 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1633 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only GROUDON and KYOGRE…\p"
# 1635 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1636 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one POKéMON's\l"
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1639 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1640 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1641 "data/maps/SootopolisCity/scripts.pory"

# 1642 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1643 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
# 1644 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the RED ORB!\l"
# 1645 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! KYOGRE!\p"
# 1646 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1649 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1650 "data/maps/SootopolisCity/scripts.pory"

# 1651 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1652 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
# 1653 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1654 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in HOENN has returned\n"
# 1655 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1658 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1659 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1660 "data/maps/SootopolisCity/scripts.pory"
	.string "to POKéMON…$"
# 1661 "data/maps/SootopolisCity/scripts.pory"

# 1662 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
# 1664 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1665 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the SKY PILLAR\n"
# 1666 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1668 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the SKY PILLAR…$"
# 1669 "data/maps/SootopolisCity/scripts.pory"

# 1670 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1674 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1675 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1676 "data/maps/SootopolisCity/scripts.pory"

# 1677 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1678 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
# 1679 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, SOOTOPOLIS…\n"
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of HOENN was saved.\p"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1683 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1684 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1685 "data/maps/SootopolisCity/scripts.pory"

# 1686 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
# 1688 "data/maps/SootopolisCity/scripts.pory"
	.string "WATERFALL.\p"
# 1689 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the RAIN BADGE, a POKéMON\n"
# 1690 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the RAIN BADGE?\n"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1694 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1695 "data/maps/SootopolisCity/scripts.pory"
	.string "the SOOTOPOLIS GYM LEADER.\p"
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 1698 "data/maps/SootopolisCity/scripts.pory"

# 1699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1700 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.$"

SootopolisCity_EventScript_Steven_Text_0:
# 11 "data/maps/SootopolisCity/scripts.pory"
	.string "DEVAN: So that's RAYQUAZA…\p"
	.string "It's incredible how the two rampaging\n"
	.string "POKéMON would flee from it in fear…$"

SootopolisCity_EventScript_StevenHelpZinnia_Text_0:
# 19 "data/maps/SootopolisCity/scripts.pory"
	.string "DEVAN: I think you have what's\n"
	.string "needed to help her…$"

SootopolisCity_EventScript_StevenMaxieArchieLeft_Text_0:
# 26 "data/maps/SootopolisCity/scripts.pory"
	.string "DEVAN: It looks like both MAXIE and\n"
	.string "ARCHIE have gone away somewhere.\p"
	.string "Perhaps they've gone to MT. PYRE to\n"
	.string "return those ORBS…$"

SootopolisCity_EventScript_StevenHelpedZinnia_Text_0:
# 35 "data/maps/SootopolisCity/scripts.pory"
	.string "DEVAN: The SKY PILLAR…\p"
	.string "I've seen it from Route 131,\n"
	.string "but I've never been there.\l"
	.string "I wonder where it's like…$"

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Text_0:
# 44 "data/maps/SootopolisCity/scripts.pory"
	.string "DEVAN: Those POKéMON fighting…\n"
	.string "GROUDON… And KYOGRE…\p"
	.string "The two super-ancient POKéMON\n"
	.string "were awakened from a long sleep…\p"
	.string "And now they are smashing each other\n"
	.string "with their uncontrollable energy…\p"
	.string "…{PLAYER}{KUN}.\p"
	.string "You being here now I'll take to mean\n"
	.string "that you're prepared to become\l"
	.string "involved in this crisis.\p"
	.string "Well, then, there's someone that\n"
	.string "I'd like you to meet.\p"
	.string "Come with me, please.$"

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Text_1:
# 61 "data/maps/SootopolisCity/scripts.pory"
	.string "DEVAN: Listen, {PLAYER}{KUN}.\p"
	.string "Does seeing GROUDON and KYOGRE make\n"
	.string "you think POKéMON are to be feared?\p"
	.string "But that's not true.\n"
	.string "POKéMON are really more…\p"
	.string "…Why am I asking you this?\n"
	.string "You already know.$"

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Text_2:
# 79 "data/maps/SootopolisCity/scripts.pory"
	.string "DEVAN: Okay, here we are!\p"
	.string "Inside here you'll find someone named\n"
	.string "Zinnia. She's the LOREKEEPER.\p"
	.string "I think you have what's needed to\n"
	.string "help her…$"

SootopolisCity_Defense_AlolanNinetales_Text_0:
# 94 "data/maps/SootopolisCity/scripts.pory"
	.string "Ninetales is using Aurora Veil to\n"
	.string "protect the city.$"

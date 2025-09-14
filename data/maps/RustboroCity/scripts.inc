SkipMatchCallTutorial::
	return


Rustboro_BlockGym::
# 19 "data/maps/RustboroCity/scripts.pory"
	lock
# 20 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 21 "data/maps/RustboroCity/scripts.pory"
	msgbox Rustboro_BlockGym_Text_0
# 22 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Rustboro_BlockGym_Movement_0
# 23 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 24 "data/maps/RustboroCity/scripts.pory"
	release
	return


# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 29 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 30 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 31 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 32 "data/maps/RustboroCity/scripts.pory"

# 33 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 34 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 35 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 36 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 37 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 38 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 39 "data/maps/RustboroCity/scripts.pory"
	end
# 40 "data/maps/RustboroCity/scripts.pory"

# 41 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 42 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 43 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 44 "data/maps/RustboroCity/scripts.pory"
	end
# 45 "data/maps/RustboroCity/scripts.pory"

# 46 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 47 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 48 "data/maps/RustboroCity/scripts.pory"
	end
# 49 "data/maps/RustboroCity/scripts.pory"

# 50 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 51 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 52 "data/maps/RustboroCity/scripts.pory"
	return
# 53 "data/maps/RustboroCity/scripts.pory"

# 54 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 55 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, SkipMatchCallTutorial
# 56 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 57 "data/maps/RustboroCity/scripts.pory"

# 58 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 59 "data/maps/RustboroCity/scripts.pory"
	lockall
# 60 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 61 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 62 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 64 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 65 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 66 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 67 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 69 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 70 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 72 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 74 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 76 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 78 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 79 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 80 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 83 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 84 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 85 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 86 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 87 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 88 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 89 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 90 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 93 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 94 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 95 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 96 "data/maps/RustboroCity/scripts.pory"

# 97 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 98 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 100 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 101 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 102 "data/maps/RustboroCity/scripts.pory"

# 103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 104 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 105 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 106 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 107 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 109 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 110 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 111 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 112 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 113 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 114 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 115 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 116 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 117 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 118 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 119 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 120 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 121 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 122 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 124 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 125 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 126 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 127 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 128 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 129 "data/maps/RustboroCity/scripts.pory"
	end
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 133 "data/maps/RustboroCity/scripts.pory"
	step_end
# 134 "data/maps/RustboroCity/scripts.pory"

# 135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 136 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 137 "data/maps/RustboroCity/scripts.pory"
	step_end
# 138 "data/maps/RustboroCity/scripts.pory"

# 139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 140 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 141 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 142 "data/maps/RustboroCity/scripts.pory"
	step_end
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 146 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 148 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 149 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 150 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 151 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 152 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 153 "data/maps/RustboroCity/scripts.pory"
	step_end
# 154 "data/maps/RustboroCity/scripts.pory"

# 155 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 156 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 157 "data/maps/RustboroCity/scripts.pory"
	step_end
# 158 "data/maps/RustboroCity/scripts.pory"

# 159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 160 "data/maps/RustboroCity/scripts.pory"
	lock
# 161 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 162 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 163 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 164 "data/maps/RustboroCity/scripts.pory"
	release
# 165 "data/maps/RustboroCity/scripts.pory"
	end
# 166 "data/maps/RustboroCity/scripts.pory"

# 167 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 169 "data/maps/RustboroCity/scripts.pory"
	release
# 170 "data/maps/RustboroCity/scripts.pory"
	end
# 171 "data/maps/RustboroCity/scripts.pory"

# 172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 173 "data/maps/RustboroCity/scripts.pory"
	lock
# 174 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 175 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity/scripts.pory"
	release
# 177 "data/maps/RustboroCity/scripts.pory"
	end
# 178 "data/maps/RustboroCity/scripts.pory"

# 179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 180 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 181 "data/maps/RustboroCity/scripts.pory"
	end
# 182 "data/maps/RustboroCity/scripts.pory"

# 183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 184 "data/maps/RustboroCity/scripts.pory"
	lock
# 185 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 186 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 187 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity/scripts.pory"
	release
# 189 "data/maps/RustboroCity/scripts.pory"
	end
# 190 "data/maps/RustboroCity/scripts.pory"

# 191 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 192 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 193 "data/maps/RustboroCity/scripts.pory"
	release
# 194 "data/maps/RustboroCity/scripts.pory"
	end
# 195 "data/maps/RustboroCity/scripts.pory"

# 196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 197 "data/maps/RustboroCity/scripts.pory"
	lock
# 198 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 199 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 200 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 201 "data/maps/RustboroCity/scripts.pory"
	release
# 202 "data/maps/RustboroCity/scripts.pory"
	end
# 203 "data/maps/RustboroCity/scripts.pory"

# 204 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 205 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 206 "data/maps/RustboroCity/scripts.pory"
	release
# 207 "data/maps/RustboroCity/scripts.pory"
	end
# 208 "data/maps/RustboroCity/scripts.pory"

# 209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 210 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 211 "data/maps/RustboroCity/scripts.pory"
	end
# 212 "data/maps/RustboroCity/scripts.pory"

# 213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 214 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 215 "data/maps/RustboroCity/scripts.pory"
	end
# 216 "data/maps/RustboroCity/scripts.pory"

# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 218 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 219 "data/maps/RustboroCity/scripts.pory"
	end
# 220 "data/maps/RustboroCity/scripts.pory"

# 221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 222 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 223 "data/maps/RustboroCity/scripts.pory"
	end
# 224 "data/maps/RustboroCity/scripts.pory"

# 225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 226 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 227 "data/maps/RustboroCity/scripts.pory"
	end
# 228 "data/maps/RustboroCity/scripts.pory"

# 229 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 231 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 232 "data/maps/RustboroCity/scripts.pory"
	end
# 233 "data/maps/RustboroCity/scripts.pory"

# 234 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 235 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 236 "data/maps/RustboroCity/scripts.pory"
	end
# 237 "data/maps/RustboroCity/scripts.pory"

# 238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 239 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 240 "data/maps/RustboroCity/scripts.pory"
	end
# 241 "data/maps/RustboroCity/scripts.pory"

# 242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 243 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 244 "data/maps/RustboroCity/scripts.pory"
	end
# 245 "data/maps/RustboroCity/scripts.pory"

# 246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 247 "data/maps/RustboroCity/scripts.pory"
	lock
# 248 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 249 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 250 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 251 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/RustboroCity/scripts.pory"
	release
# 253 "data/maps/RustboroCity/scripts.pory"
	end
# 254 "data/maps/RustboroCity/scripts.pory"

# 255 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 256 "data/maps/RustboroCity/scripts.pory"
	lock
# 257 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 258 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 259 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 260 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 261 "data/maps/RustboroCity/scripts.pory"
	release
# 262 "data/maps/RustboroCity/scripts.pory"
	end
# 263 "data/maps/RustboroCity/scripts.pory"

# 264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 265 "data/maps/RustboroCity/scripts.pory"
	lock
# 266 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 267 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 268 "data/maps/RustboroCity/scripts.pory"
	release
# 269 "data/maps/RustboroCity/scripts.pory"
	end
# 270 "data/maps/RustboroCity/scripts.pory"

# 271 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 272 "data/maps/RustboroCity/scripts.pory"
	lockall
# 273 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 274 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 275 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 276 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 277 "data/maps/RustboroCity/scripts.pory"
	end
# 278 "data/maps/RustboroCity/scripts.pory"

# 279 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 280 "data/maps/RustboroCity/scripts.pory"
	lockall
# 281 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 282 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 283 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 284 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 285 "data/maps/RustboroCity/scripts.pory"
	end
# 286 "data/maps/RustboroCity/scripts.pory"

# 287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 288 "data/maps/RustboroCity/scripts.pory"
	lockall
# 289 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 290 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 291 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 292 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 293 "data/maps/RustboroCity/scripts.pory"
	end
# 294 "data/maps/RustboroCity/scripts.pory"

# 295 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 296 "data/maps/RustboroCity/scripts.pory"
	lockall
# 297 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 298 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 299 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 300 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 301 "data/maps/RustboroCity/scripts.pory"
	end
# 302 "data/maps/RustboroCity/scripts.pory"

# 303 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 304 "data/maps/RustboroCity/scripts.pory"
	lockall
# 305 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 306 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 307 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 308 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 309 "data/maps/RustboroCity/scripts.pory"
	end
# 310 "data/maps/RustboroCity/scripts.pory"

# 311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 312 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 313 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 314 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 315 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 316 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 317 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 318 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 320 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 321 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 323 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 324 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 325 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 327 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 328 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 329 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 330 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 331 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 332 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 333 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 334 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 335 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 336 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 337 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 338 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 339 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 340 "data/maps/RustboroCity/scripts.pory"
	end
# 341 "data/maps/RustboroCity/scripts.pory"

# 342 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 343 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 344 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 345 "data/maps/RustboroCity/scripts.pory"
	return
# 346 "data/maps/RustboroCity/scripts.pory"

# 347 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 348 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 349 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 350 "data/maps/RustboroCity/scripts.pory"
	return
# 351 "data/maps/RustboroCity/scripts.pory"

# 352 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 353 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 354 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 355 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/RustboroCity/scripts.pory"
	return
# 357 "data/maps/RustboroCity/scripts.pory"

# 358 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 359 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 360 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 361 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/RustboroCity/scripts.pory"
	return
# 363 "data/maps/RustboroCity/scripts.pory"

# 364 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 365 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 366 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 367 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/RustboroCity/scripts.pory"
	return
# 369 "data/maps/RustboroCity/scripts.pory"

# 370 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 372 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 373 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/RustboroCity/scripts.pory"
	return
# 375 "data/maps/RustboroCity/scripts.pory"

# 376 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 377 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 378 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 379 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 380 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 381 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/RustboroCity/scripts.pory"
	return
# 383 "data/maps/RustboroCity/scripts.pory"

# 384 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 385 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	step_end
# 404 "data/maps/RustboroCity/scripts.pory"

# 405 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 422 "data/maps/RustboroCity/scripts.pory"
	step_end
# 423 "data/maps/RustboroCity/scripts.pory"

# 424 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 432 "data/maps/RustboroCity/scripts.pory"
	step_end
# 433 "data/maps/RustboroCity/scripts.pory"

# 434 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 442 "data/maps/RustboroCity/scripts.pory"
	step_end
# 443 "data/maps/RustboroCity/scripts.pory"

# 444 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 445 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 449 "data/maps/RustboroCity/scripts.pory"
	step_end
# 450 "data/maps/RustboroCity/scripts.pory"

# 451 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 452 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 457 "data/maps/RustboroCity/scripts.pory"
	step_end
# 458 "data/maps/RustboroCity/scripts.pory"

# 459 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 461 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 463 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 465 "data/maps/RustboroCity/scripts.pory"
	step_end
# 466 "data/maps/RustboroCity/scripts.pory"

# 467 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 468 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 471 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 472 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 473 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 474 "data/maps/RustboroCity/scripts.pory"
	step_end
# 475 "data/maps/RustboroCity/scripts.pory"

# 476 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 477 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 478 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 479 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 480 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 481 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 482 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 483 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 484 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 485 "data/maps/RustboroCity/scripts.pory"
	step_end
# 486 "data/maps/RustboroCity/scripts.pory"

# 487 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 488 "data/maps/RustboroCity/scripts.pory"
	lock
# 489 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 490 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 491 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 492 "data/maps/RustboroCity/scripts.pory"
	release
# 493 "data/maps/RustboroCity/scripts.pory"
	end
# 494 "data/maps/RustboroCity/scripts.pory"

# 495 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 496 "data/maps/RustboroCity/scripts.pory"
	waitse
# 497 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 498 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 499 "data/maps/RustboroCity/scripts.pory"
	end
# 500 "data/maps/RustboroCity/scripts.pory"

# 501 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 502 "data/maps/RustboroCity/scripts.pory"
	lockall
# 503 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 504 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 505 "data/maps/RustboroCity/scripts.pory"
	end
# 506 "data/maps/RustboroCity/scripts.pory"

# 507 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 508 "data/maps/RustboroCity/scripts.pory"
	lockall
# 509 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 510 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 511 "data/maps/RustboroCity/scripts.pory"
	end
# 512 "data/maps/RustboroCity/scripts.pory"

# 513 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 514 "data/maps/RustboroCity/scripts.pory"
	lockall
# 515 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 516 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 517 "data/maps/RustboroCity/scripts.pory"
	end
# 518 "data/maps/RustboroCity/scripts.pory"

# 519 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 520 "data/maps/RustboroCity/scripts.pory"
	lockall
# 521 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 522 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 523 "data/maps/RustboroCity/scripts.pory"
	end
# 524 "data/maps/RustboroCity/scripts.pory"

# 525 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 526 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 527 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 528 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 529 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 530 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 531 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 532 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 533 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 534 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 535 "data/maps/RustboroCity/scripts.pory"
	end
# 536 "data/maps/RustboroCity/scripts.pory"

# 537 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 538 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 539 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 540 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 545 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 547 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/RustboroCity/scripts.pory"
	return
# 549 "data/maps/RustboroCity/scripts.pory"

# 550 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 551 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 552 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 554 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 555 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 557 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 559 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/RustboroCity/scripts.pory"
	return
# 561 "data/maps/RustboroCity/scripts.pory"

# 562 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 563 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 564 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 566 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 567 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 569 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 571 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/RustboroCity/scripts.pory"
	return
# 573 "data/maps/RustboroCity/scripts.pory"

# 574 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 575 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 576 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 577 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 578 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 579 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 581 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 582 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 583 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 585 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/RustboroCity/scripts.pory"
	return
# 587 "data/maps/RustboroCity/scripts.pory"

# 588 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 589 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 590 "data/maps/RustboroCity/scripts.pory"
	step_end
# 591 "data/maps/RustboroCity/scripts.pory"

# 592 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 593 "data/maps/RustboroCity/scripts.pory"
	lockall
# 594 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 595 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 596 "data/maps/RustboroCity/scripts.pory"
	end
# 597 "data/maps/RustboroCity/scripts.pory"

# 598 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 599 "data/maps/RustboroCity/scripts.pory"
	lockall
# 600 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 601 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 602 "data/maps/RustboroCity/scripts.pory"
	end
# 603 "data/maps/RustboroCity/scripts.pory"

# 604 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 605 "data/maps/RustboroCity/scripts.pory"
	lockall
# 606 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 607 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 608 "data/maps/RustboroCity/scripts.pory"
	end
# 609 "data/maps/RustboroCity/scripts.pory"

# 610 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 611 "data/maps/RustboroCity/scripts.pory"
	lockall
# 612 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 613 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 614 "data/maps/RustboroCity/scripts.pory"
	end
# 615 "data/maps/RustboroCity/scripts.pory"

# 616 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 617 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 618 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 619 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 620 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 621 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 622 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 623 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 624 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 625 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 626 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 627 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 628 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 629 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 630 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 631 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 632 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 633 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 634 "data/maps/RustboroCity/scripts.pory"
	end
# 635 "data/maps/RustboroCity/scripts.pory"

# 636 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 637 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 638 "data/maps/RustboroCity/scripts.pory"
	return
# 639 "data/maps/RustboroCity/scripts.pory"

# 640 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 644 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 645 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 647 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	return
# 651 "data/maps/RustboroCity/scripts.pory"

# 652 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 657 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 659 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	return
# 663 "data/maps/RustboroCity/scripts.pory"

# 664 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 668 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 669 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 671 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	return
# 675 "data/maps/RustboroCity/scripts.pory"

# 676 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 683 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 684 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 685 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	return
# 689 "data/maps/RustboroCity/scripts.pory"

# 690 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 691 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 692 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 693 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 694 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 695 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 696 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 697 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 698 "data/maps/RustboroCity/scripts.pory"
	return
# 699 "data/maps/RustboroCity/scripts.pory"

# 700 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 701 "data/maps/RustboroCity/scripts.pory"
	lockall
# 702 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 703 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 704 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 705 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 706 "data/maps/RustboroCity/scripts.pory"

# 707 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 708 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 709 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 710 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 711 "data/maps/RustboroCity/scripts.pory"
	return
# 712 "data/maps/RustboroCity/scripts.pory"

# 713 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 714 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 715 "data/maps/RustboroCity/scripts.pory"
	return
# 716 "data/maps/RustboroCity/scripts.pory"

# 717 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 718 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 719 "data/maps/RustboroCity/scripts.pory"
	return
# 720 "data/maps/RustboroCity/scripts.pory"

# 721 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 722 "data/maps/RustboroCity/scripts.pory"
	lockall
# 723 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 725 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 736 "data/maps/RustboroCity/scripts.pory"

# 737 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 738 "data/maps/RustboroCity/scripts.pory"
	lockall
# 739 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 740 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 741 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 750 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 752 "data/maps/RustboroCity/scripts.pory"

# 753 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 754 "data/maps/RustboroCity/scripts.pory"
	lockall
# 755 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 756 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 757 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 768 "data/maps/RustboroCity/scripts.pory"

# 769 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 770 "data/maps/RustboroCity/scripts.pory"
	lockall
# 771 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 772 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 773 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 784 "data/maps/RustboroCity/scripts.pory"

# 785 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 786 "data/maps/RustboroCity/scripts.pory"
	lockall
# 787 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 788 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 789 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 798 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 800 "data/maps/RustboroCity/scripts.pory"

# 801 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 802 "data/maps/RustboroCity/scripts.pory"
	lockall
# 803 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 804 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 805 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 814 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 816 "data/maps/RustboroCity/scripts.pory"

# 817 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 818 "data/maps/RustboroCity/scripts.pory"
	lockall
# 819 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 820 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 821 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 822 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 823 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 824 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 828 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 829 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 830 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 832 "data/maps/RustboroCity/scripts.pory"

# 833 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 834 "data/maps/RustboroCity/scripts.pory"
	lockall
# 835 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 836 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 837 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 839 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 840 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 841 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 842 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 844 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 845 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 846 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 847 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 848 "data/maps/RustboroCity/scripts.pory"

# 849 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 850 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 851 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 852 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 853 "data/maps/RustboroCity/scripts.pory"
	end
# 854 "data/maps/RustboroCity/scripts.pory"

# 855 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 856 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 857 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 858 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 859 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 860 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 861 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 862 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 863 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 864 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 865 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 866 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 867 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 868 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 869 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 870 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 871 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 872 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 873 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 874 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 875 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 876 "data/maps/RustboroCity/scripts.pory"
	end
# 877 "data/maps/RustboroCity/scripts.pory"

# 878 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 879 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 880 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 881 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 882 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 883 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 884 "data/maps/RustboroCity/scripts.pory"
	end
# 885 "data/maps/RustboroCity/scripts.pory"

# 886 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 887 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 888 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 889 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 890 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 891 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 892 "data/maps/RustboroCity/scripts.pory"
	end
# 893 "data/maps/RustboroCity/scripts.pory"

# 894 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 895 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 896 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 897 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 898 "data/maps/RustboroCity/scripts.pory"
	end
# 899 "data/maps/RustboroCity/scripts.pory"

# 900 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 901 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 902 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 903 "data/maps/RustboroCity/scripts.pory"
	return
# 904 "data/maps/RustboroCity/scripts.pory"

# 905 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 906 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 907 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 908 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 909 "data/maps/RustboroCity/scripts.pory"
	end
# 910 "data/maps/RustboroCity/scripts.pory"

# 911 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 912 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 913 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 914 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 915 "data/maps/RustboroCity/scripts.pory"
	end
# 916 "data/maps/RustboroCity/scripts.pory"

# 917 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 918 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 919 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 920 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 921 "data/maps/RustboroCity/scripts.pory"
	end
# 922 "data/maps/RustboroCity/scripts.pory"

# 923 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 924 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 925 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 926 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 927 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 928 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 929 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 930 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 931 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 932 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 933 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 934 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 935 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 936 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 937 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 938 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 939 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 940 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 941 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 942 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 943 "data/maps/RustboroCity/scripts.pory"
	end
# 944 "data/maps/RustboroCity/scripts.pory"

# 945 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 946 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 947 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 948 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 949 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 950 "data/maps/RustboroCity/scripts.pory"
	end
# 951 "data/maps/RustboroCity/scripts.pory"

# 952 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 953 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 954 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 955 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 956 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 957 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 958 "data/maps/RustboroCity/scripts.pory"
	end
# 959 "data/maps/RustboroCity/scripts.pory"

# 960 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 961 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 962 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 963 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 964 "data/maps/RustboroCity/scripts.pory"
	end
# 965 "data/maps/RustboroCity/scripts.pory"

# 966 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 967 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 968 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 969 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 970 "data/maps/RustboroCity/scripts.pory"
	end
# 971 "data/maps/RustboroCity/scripts.pory"

# 972 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 973 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 974 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 975 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 976 "data/maps/RustboroCity/scripts.pory"
	end
# 977 "data/maps/RustboroCity/scripts.pory"

# 978 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 979 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 980 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 981 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 982 "data/maps/RustboroCity/scripts.pory"
	end
# 983 "data/maps/RustboroCity/scripts.pory"

# 984 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 985 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 989 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 990 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 991 "data/maps/RustboroCity/scripts.pory"
	step_end
# 992 "data/maps/RustboroCity/scripts.pory"

# 993 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 996 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 997 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 998 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 999 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1000 "data/maps/RustboroCity/scripts.pory"

# 1001 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1002 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1003 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1004 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1006 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1007 "data/maps/RustboroCity/scripts.pory"

# 1008 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1009 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1010 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1011 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1012 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1015 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1017 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1018 "data/maps/RustboroCity/scripts.pory"

# 1019 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1020 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1021 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1022 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1023 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1024 "data/maps/RustboroCity/scripts.pory"

# 1025 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1026 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1027 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1028 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1029 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1030 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1031 "data/maps/RustboroCity/scripts.pory"

# 1032 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1033 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1034 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1035 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1036 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1037 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1038 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1039 "data/maps/RustboroCity/scripts.pory"

# 1040 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1041 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1042 "data/maps/RustboroCity/scripts.pory"
	end
# 1043 "data/maps/RustboroCity/scripts.pory"

# 1044 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVAN CORPORATION…\n"
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVCO.\p"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1049 "data/maps/RustboroCity/scripts.pory"

# 1050 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1054 "data/maps/RustboroCity/scripts.pory"

# 1055 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1061 "data/maps/RustboroCity/scripts.pory"

# 1062 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1066 "data/maps/RustboroCity/scripts.pory"

# 1067 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1072 "data/maps/RustboroCity/scripts.pory"

# 1073 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1079 "data/maps/RustboroCity/scripts.pory"

# 1080 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1085 "data/maps/RustboroCity/scripts.pory"

# 1086 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1093 "data/maps/RustboroCity/scripts.pory"

# 1094 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1098 "data/maps/RustboroCity/scripts.pory"

# 1099 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1103 "data/maps/RustboroCity/scripts.pory"

# 1104 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1112 "data/maps/RustboroCity/scripts.pory"

# 1113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1118 "data/maps/RustboroCity/scripts.pory"

# 1119 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1122 "data/maps/RustboroCity/scripts.pory"

# 1123 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1126 "data/maps/RustboroCity/scripts.pory"

# 1127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVCO GOODS back!\p"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1135 "data/maps/RustboroCity/scripts.pory"

# 1136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1139 "data/maps/RustboroCity/scripts.pory"

# 1140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVCO GOODS?\p"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1148 "data/maps/RustboroCity/scripts.pory"

# 1149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1152 "data/maps/RustboroCity/scripts.pory"

# 1153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1156 "data/maps/RustboroCity/scripts.pory"

# 1157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1164 "data/maps/RustboroCity/scripts.pory"

# 1165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1168 "data/maps/RustboroCity/scripts.pory"

# 1169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1178 "data/maps/RustboroCity/scripts.pory"

# 1179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1184 "data/maps/RustboroCity/scripts.pory"

# 1185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1188 "data/maps/RustboroCity/scripts.pory"

# 1189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1192 "data/maps/RustboroCity/scripts.pory"

# 1193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1196 "data/maps/RustboroCity/scripts.pory"

# 1197 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1203 "data/maps/RustboroCity/scripts.pory"

# 1204 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1211 "data/maps/RustboroCity/scripts.pory"

# 1212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1215 "data/maps/RustboroCity/scripts.pory"

# 1216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1226 "data/maps/RustboroCity/scripts.pory"

# 1227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1234 "data/maps/RustboroCity/scripts.pory"

# 1235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1238 "data/maps/RustboroCity/scripts.pory"

# 1239 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1242 "data/maps/RustboroCity/scripts.pory"

# 1243 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1249 "data/maps/RustboroCity/scripts.pory"

# 1250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1256 "data/maps/RustboroCity/scripts.pory"

# 1257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "DEVCO\p"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1261 "data/maps/RustboroCity/scripts.pory"

# 1262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: SIERRA\p"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1266 "data/maps/RustboroCity/scripts.pory"

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "DEVCO BRANCH OFFICE\p"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVCO employees\n"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1271 "data/maps/RustboroCity/scripts.pory"

# 1272 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1276 "data/maps/RustboroCity/scripts.pory"

# 1277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1281 "data/maps/RustboroCity/scripts.pory"

# 1282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1284 "data/maps/RustboroCity/scripts.pory"

# 1285 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1291 "data/maps/RustboroCity/scripts.pory"

# 1292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1303 "data/maps/RustboroCity/scripts.pory"

# 1304 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1306 "data/maps/RustboroCity/scripts.pory"

# 1307 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1310 "data/maps/RustboroCity/scripts.pory"

# 1311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1316 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

# 22 "data/maps/RustboroCity/scripts.pory"
Rustboro_BlockGym_Movement_0:
# 22 "data/maps/RustboroCity/scripts.pory"
	face_down
	step_end

Rustboro_BlockGym_Text_0:
# 21 "data/maps/RustboroCity/scripts.pory"
	.string "Sorry, the Gym Leader is away.\n"
	.string "They should be returning soon.$"

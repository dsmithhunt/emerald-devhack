RusturfTunnel_AquaGruntsChat::
# 2 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 3 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 4 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_AquaGruntsChat_Text_0
# 7 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_BOO
# 8 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_AquaGruntsChat_Movement_0
# 11 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_AquaGruntsChat_Text_1
# 16 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 17 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_AquaGruntsChat_Movement_1
# 21 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_AquaGruntsChat_Movement_2
# 24 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 25 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_AquaGruntsChat_Text_2
# 31 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 32 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 7, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 33 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 34 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 35 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm 6
# 36 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm 7
# 37 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm 11
# 38 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 6
# 39 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	return


RusturfTunnel_AquaTrigger0::
# 43 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 0
# 44 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_SierraArrive
	return


RusturfTunnel_AquaTrigger1::
# 48 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 49 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_SierraArrive
	return


RusturfTunnel_SierraArrive::
# 53 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 54 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 55 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_SierraArrive_Movement_0
# 56 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_SierraArrive_Movement_0
	checkplayergender
# 0 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RusturfTunnel_SierraArrive_2
# 60 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_1
RusturfTunnel_SierraArrive_1:
# 62 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_2
# 63 "data/maps/RusturfTunnel/scripts.pory"
	addobject 12
# 64 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_SierraArrive_Movement_1
# 67 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 68 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RusturfTunnel_SierraArrive_6
RusturfTunnel_SierraArrive_5:
# 74 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_SierraArrive_Movement_3
# 77 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 78 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_3
# 81 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_SierraArrive_Movement_4
# 84 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_SierraArrive_Movement_5
# 87 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 88 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_4
# 91 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_PartySelect
	return

RusturfTunnel_SierraArrive_2:
# 58 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_0
	goto RusturfTunnel_SierraArrive_1

RusturfTunnel_SierraArrive_6:
# 69 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_SierraArrive_Movement_2
	goto RusturfTunnel_SierraArrive_5


RusturfTunnel_PartySelect::
# 95 "data/maps/RusturfTunnel/scripts.pory"
	special SavePlayerParty
# 96 "data/maps/RusturfTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/RusturfTunnel/scripts.pory"
	special ChooseHalfPartyForBattle
# 98 "data/maps/RusturfTunnel/scripts.pory"
	waitstate
# 99 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_ne VAR_RESULT, 0, RusturfTunnel_GruntsBattle
# 100 "data/maps/RusturfTunnel/scripts.pory"
	special LoadPlayerParty
# 101 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_PartySelect_Text_0
# 102 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_PartySelect
	return


RusturfTunnel_GruntsBattle::
# 106 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_GruntsBattle_Movement_0
# 109 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_0
# 112 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_GruntsBattle_Text_0
# 117 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, TRUE
# 118 "data/maps/RusturfTunnel/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_WEATHER_INST_4, RusturfTunnel_Text_GruntDefeat, TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat, PARTNER_SIERRA
# 119 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage
# 120 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 121 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 122 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_1
# 128 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 129 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_GruntsBattle_Movement_2
# 130 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_GruntsBattle_Movement_3
# 131 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 132 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_Movement_GruntEscape
# 134 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 135 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 136 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 11
# 137 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_4
# 138 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_GruntsBattle_Text_1
# 142 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 143 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_5
# 146 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 147 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 12
# 148 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 149 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 150 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 151 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 152 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 153 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_GruntsBattle_Movement_6
# 154 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 155 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 156 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe
# 157 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 158 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 159 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 160 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 161 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 162 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 163 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 164 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 165 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 166 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 167 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyExit
# 168 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_PeekoExit
# 169 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 170 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 171 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 172 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 173 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 174 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 175 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 176 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 177 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 178 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 179 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	return


# 182 "data/maps/RusturfTunnel/scripts.pory"

# 183 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 184 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 185 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 186 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 187 "data/maps/RusturfTunnel/scripts.pory"

# 188 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 189 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 190 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 191 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 192 "data/maps/RusturfTunnel/scripts.pory"

# 193 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 194 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 195 "data/maps/RusturfTunnel/scripts.pory"
	end
# 196 "data/maps/RusturfTunnel/scripts.pory"

# 197 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 198 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 14, 4
# 199 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 200 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm 11, 13, 4
# 201 "data/maps/RusturfTunnel/scripts.pory"
	return
# 202 "data/maps/RusturfTunnel/scripts.pory"

# 203 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 204 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 205 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 206 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 207 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 208 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 209 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 210 "data/maps/RusturfTunnel/scripts.pory"
	release
# 211 "data/maps/RusturfTunnel/scripts.pory"
	end
# 212 "data/maps/RusturfTunnel/scripts.pory"

# 213 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 214 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 215 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 216 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 217 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 218 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 219 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 220 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 221 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 222 "data/maps/RusturfTunnel/scripts.pory"
	release
# 223 "data/maps/RusturfTunnel/scripts.pory"
	end
# 224 "data/maps/RusturfTunnel/scripts.pory"

# 225 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 226 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 227 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 228 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 229 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 230 "data/maps/RusturfTunnel/scripts.pory"
	release
# 231 "data/maps/RusturfTunnel/scripts.pory"
	end
# 232 "data/maps/RusturfTunnel/scripts.pory"

# 233 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 234 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 235 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 236 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 237 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 238 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 239 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 240 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 241 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 242 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 243 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 244 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 245 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 246 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 247 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 248 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 249 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 250 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 251 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 252 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 253 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 254 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 255 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 256 "data/maps/RusturfTunnel/scripts.pory"
	end
# 257 "data/maps/RusturfTunnel/scripts.pory"

# 258 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 259 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 260 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 261 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 262 "data/maps/RusturfTunnel/scripts.pory"
	return
# 263 "data/maps/RusturfTunnel/scripts.pory"

# 264 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 265 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 266 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 267 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 268 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 269 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 270 "data/maps/RusturfTunnel/scripts.pory"
	return
# 271 "data/maps/RusturfTunnel/scripts.pory"

# 272 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 273 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 274 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 275 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 276 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 277 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 278 "data/maps/RusturfTunnel/scripts.pory"
	return
# 279 "data/maps/RusturfTunnel/scripts.pory"

# 280 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 281 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 282 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 283 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 284 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 285 "data/maps/RusturfTunnel/scripts.pory"
	return
# 286 "data/maps/RusturfTunnel/scripts.pory"

# 287 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 288 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 289 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 290 "data/maps/RusturfTunnel/scripts.pory"
	return
# 291 "data/maps/RusturfTunnel/scripts.pory"

# 292 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 293 "data/maps/RusturfTunnel/scripts.pory"
	return
# 294 "data/maps/RusturfTunnel/scripts.pory"

# 295 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 296 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 297 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 298 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 299 "data/maps/RusturfTunnel/scripts.pory"
	return
# 300 "data/maps/RusturfTunnel/scripts.pory"

# 301 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 302 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit1
# 303 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 304 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 305 "data/maps/RusturfTunnel/scripts.pory"
	return
# 306 "data/maps/RusturfTunnel/scripts.pory"

# 307 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 308 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 309 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 310 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 311 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 312 "data/maps/RusturfTunnel/scripts.pory"
	return
# 313 "data/maps/RusturfTunnel/scripts.pory"

# 314 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 315 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 316 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 317 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 318 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 319 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 320 "data/maps/RusturfTunnel/scripts.pory"
	return
# 321 "data/maps/RusturfTunnel/scripts.pory"

# 322 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 323 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 324 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 325 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 326 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 327 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 328 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 329 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 330 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 331 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 332 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 333 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 334 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 335 "data/maps/RusturfTunnel/scripts.pory"

# 336 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 337 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 338 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 339 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 340 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 341 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 342 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 343 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 344 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 345 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 346 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 347 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 348 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 349 "data/maps/RusturfTunnel/scripts.pory"

# 350 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 351 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 352 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 353 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 354 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 355 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 356 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 357 "data/maps/RusturfTunnel/scripts.pory"

# 358 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 359 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 360 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 361 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 362 "data/maps/RusturfTunnel/scripts.pory"

# 363 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 364 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 365 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 366 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 368 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 369 "data/maps/RusturfTunnel/scripts.pory"

# 370 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 373 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 374 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 375 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 376 "data/maps/RusturfTunnel/scripts.pory"

# 377 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 380 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 381 "data/maps/RusturfTunnel/scripts.pory"

# 382 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 384 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 385 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 386 "data/maps/RusturfTunnel/scripts.pory"

# 387 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 390 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 391 "data/maps/RusturfTunnel/scripts.pory"

# 392 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 397 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 398 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 399 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 400 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 401 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 402 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 403 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 404 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 405 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 406 "data/maps/RusturfTunnel/scripts.pory"

# 407 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 408 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 409 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 410 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 411 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 412 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 413 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 414 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 415 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 416 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 417 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 418 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 419 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 420 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 421 "data/maps/RusturfTunnel/scripts.pory"

# 422 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 423 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 424 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 425 "data/maps/RusturfTunnel/scripts.pory"

# 426 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 427 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 428 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 429 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 430 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 431 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 432 "data/maps/RusturfTunnel/scripts.pory"

# 433 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 434 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 435 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 436 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 437 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 438 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 439 "data/maps/RusturfTunnel/scripts.pory"

# 440 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 441 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 442 "data/maps/RusturfTunnel/scripts.pory"
	end
# 443 "data/maps/RusturfTunnel/scripts.pory"

# 444 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 445 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 446 "data/maps/RusturfTunnel/scripts.pory"
	end
# 447 "data/maps/RusturfTunnel/scripts.pory"

# 448 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 449 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 450 "data/maps/RusturfTunnel/scripts.pory"
	end
# 451 "data/maps/RusturfTunnel/scripts.pory"

# 452 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 453 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 454 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 455 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 456 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 457 "data/maps/RusturfTunnel/scripts.pory"

# 458 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 459 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 460 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 461 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 462 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 463 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 464 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 465 "data/maps/RusturfTunnel/scripts.pory"
	release
# 466 "data/maps/RusturfTunnel/scripts.pory"
	end
# 467 "data/maps/RusturfTunnel/scripts.pory"

# 468 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 469 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 470 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 471 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 472 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 473 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 474 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 475 "data/maps/RusturfTunnel/scripts.pory"

# 476 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 477 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 478 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 479 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 480 "data/maps/RusturfTunnel/scripts.pory"

# 481 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 482 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 483 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 484 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 485 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 486 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 487 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 488 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 489 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 490 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 491 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 492 "data/maps/RusturfTunnel/scripts.pory"

# 493 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 494 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 495 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 496 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 497 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 498 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 499 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 500 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 501 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 502 "data/maps/RusturfTunnel/scripts.pory"

# 503 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 504 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 505 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 506 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 507 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 508 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 509 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 510 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 511 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 512 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 513 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 514 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 515 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 516 "data/maps/RusturfTunnel/scripts.pory"

# 517 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 518 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 519 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 520 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 521 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 522 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 523 "data/maps/RusturfTunnel/scripts.pory"

# 524 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 525 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 526 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 527 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 528 "data/maps/RusturfTunnel/scripts.pory"

# 529 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 530 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 531 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 532 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 533 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 534 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 535 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 536 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 537 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 538 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 539 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 540 "data/maps/RusturfTunnel/scripts.pory"

# 541 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 542 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 543 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 544 "data/maps/RusturfTunnel/scripts.pory"
	end
# 545 "data/maps/RusturfTunnel/scripts.pory"

# 546 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 547 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 548 "data/maps/RusturfTunnel/scripts.pory"

# 549 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 550 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 551 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 552 "data/maps/RusturfTunnel/scripts.pory"

# 553 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 554 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 555 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 556 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 557 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 558 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVCO.\p"
# 559 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 560 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 561 "data/maps/RusturfTunnel/scripts.pory"

# 562 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 563 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 564 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 565 "data/maps/RusturfTunnel/scripts.pory"

# 566 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 567 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 568 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 569 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 570 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 571 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 572 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 573 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 574 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 575 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 576 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 577 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 578 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 579 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 580 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 581 "data/maps/RusturfTunnel/scripts.pory"

# 582 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 583 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 584 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 585 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 586 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 587 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 588 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 589 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 590 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 591 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 592 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 593 "data/maps/RusturfTunnel/scripts.pory"

# 594 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 595 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 596 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 597 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 598 "data/maps/RusturfTunnel/scripts.pory"

# 599 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 600 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 601 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 602 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 603 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 604 "data/maps/RusturfTunnel/scripts.pory"

# 605 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 606 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 607 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 608 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 609 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 610 "data/maps/RusturfTunnel/scripts.pory"

# 611 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 612 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 613 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 614 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 615 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 616 "data/maps/RusturfTunnel/scripts.pory"

# 617 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 618 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 619 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 620 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 621 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 622 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 623 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 624 "data/maps/RusturfTunnel/scripts.pory"

# 625 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 626 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 627 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 628 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 629 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 630 "data/maps/RusturfTunnel/scripts.pory"

# 631 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 632 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 633 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 634 "data/maps/RusturfTunnel/scripts.pory"

# 635 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 636 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 637 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 638 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"

# 8 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_AquaGruntsChat_Movement_0:
# 9 "data/maps/RusturfTunnel/scripts.pory"
	emote_question_mark
	step_end

# 17 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_AquaGruntsChat_Movement_1:
# 18 "data/maps/RusturfTunnel/scripts.pory"
	emote_exclamation_mark
# 19 "data/maps/RusturfTunnel/scripts.pory"
	face_left
	step_end

# 21 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_AquaGruntsChat_Movement_2:
# 22 "data/maps/RusturfTunnel/scripts.pory"
	face_left
	step_end

# 55 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_0:
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_left
	step_end

# 64 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_1:
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
	step_end

# 69 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_2:
# 70 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
# 71 "data/maps/RusturfTunnel/scripts.pory"
	face_right
	step_end

# 74 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_3:
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 81 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_4:
# 82 "data/maps/RusturfTunnel/scripts.pory"
	face_player
	step_end

# 84 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_5:
# 85 "data/maps/RusturfTunnel/scripts.pory"
	face_up
	step_end

# 106 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_0:
# 107 "data/maps/RusturfTunnel/scripts.pory"
	face_right
	step_end

# 122 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_1:
# 123 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 124 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 125 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 126 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_left
	step_end

# 129 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_2:
# 129 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
	step_end

# 130 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_3:
# 130 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
	step_end

# 137 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_4:
# 137 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
	step_end

# 143 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_5:
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

# 153 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_6:
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

RusturfTunnel_AquaGruntsChat_Text_0:
# 5 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: Great, you got the parts! I\n"
	.string "got a hostage.$"

RusturfTunnel_AquaGruntsChat_Text_1:
# 12 "data/maps/RusturfTunnel/scripts.pory"
	.string "FEMALE GRUNT: What do you mean you got\n"
	.string "a hostage?!\p"
	.string "MALE GRUNT: Some geezer had this\n"
	.string "Wingull at the park. I grabbed it\l"
	.string "so no one would chase us.\p"
	.string "FEMALE GRUNT: What if they chase us\n"
	.string "because you took it? These are just\l"
	.string "parts; that's someone's POKéMON!$"

RusturfTunnel_AquaGruntsChat_Text_2:
# 26 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: Uh oh, someone's coming!\n"
	.string "Shelly said Rustboro was wide open…\p"
	.string "Wait, it's just some kid.\p"
	.string "Hey, kid, stay back! I'm warning you…$"

RusturfTunnel_SierraArrive_Text_0:
# 58 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: We warned you not to stick\n"
	.string "your nose where it doesn't belong!\p"
	.string "Come on, let's get him!$"

RusturfTunnel_SierraArrive_Text_1:
# 60 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: We warned you not to stick\n"
	.string "your nose where it doesn't belong!\p"
	.string "Come on, let's get her!$"

RusturfTunnel_SierraArrive_Text_2:
# 62 "data/maps/RusturfTunnel/scripts.pory"
	.string "???: Stop!$"

RusturfTunnel_SierraArrive_Text_3:
# 79 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: I don't want to have to deal\n"
	.string "with this right now.\p"
	.string "I go visit my brother for one day and\n"
	.string "some criminals attack the city?$"

RusturfTunnel_SierraArrive_Text_4:
# 89 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: Hey, you, help me with these\n"
	.string "two.$"

RusturfTunnel_PartySelect_Text_0:
# 101 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: This is no time to doubt\n"
	.string "yourself. Ready your POKéMON!$"

RusturfTunnel_GruntsBattle_Text_0:
# 113 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: Grah, keelhaul it all!\n"
	.string "That hostage POKéMON was worthless!\p"
	.string "FEMALE GRUNT: I can't believe you\n"
	.string "decided we'd hide in this dead-end cave.\p"
	.string "MALE GRUNT: Nothing to do now but fight\n"
	.string "our way out!$"

RusturfTunnel_GruntsBattle_Text_1:
# 139 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: Sorry you got caught up in\n"
	.string "that, but you seem like a good trainer.\l"
	.string "You should challenge the Rustboro Gym.\p"
	.string "I'll see you around.$"

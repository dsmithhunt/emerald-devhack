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
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 39 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	return


RusturfTunnel_SierraArrive::
# 43 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 44 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 45 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_SierraArrive_Movement_0
# 46 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_SierraArrive_Movement_0
	checkplayergender
# 0 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RusturfTunnel_SierraArrive_2
# 50 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_1
RusturfTunnel_SierraArrive_1:
# 52 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_2
# 53 "data/maps/RusturfTunnel/scripts.pory"
	addobject 12
# 54 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_SierraArrive_Movement_1
# 57 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 58 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_3
# 61 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_SierraArrive_Movement_2
# 64 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_SierraArrive_Movement_3
# 67 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 68 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_4
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_PartySelect
	return

RusturfTunnel_SierraArrive_2:
# 48 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_SierraArrive_Text_0
	goto RusturfTunnel_SierraArrive_1


RusturfTunnel_PartySelect::
# 75 "data/maps/RusturfTunnel/scripts.pory"
	special SavePlayerParty
# 76 "data/maps/RusturfTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/RusturfTunnel/scripts.pory"
	special ChooseHalfPartyForBattle
# 78 "data/maps/RusturfTunnel/scripts.pory"
	waitstate
# 79 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_ne VAR_RESULT, 0, RusturfTunnel_GruntsBattle
# 80 "data/maps/RusturfTunnel/scripts.pory"
	special LoadPlayerParty
# 81 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_PartySelect_Text_0
# 82 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_PartySelect
	return


RusturfTunnel_GruntsBattle::
# 86 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_GruntsBattle_Movement_0
# 89 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_0
# 92 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_GruntsBattle_Text_0
# 97 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, TRUE
# 98 "data/maps/RusturfTunnel/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_WEATHER_INST_4, RusturfTunnel_Text_GruntDefeat, TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat, PARTNER_SIERRA
# 99 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage
# 100 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 101 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 102 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_1
# 108 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 109 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_GruntsBattle_Movement_2
# 110 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_GruntsBattle_Movement_3
# 111 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 112 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 113 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 11, RusturfTunnel_Movement_GruntEscape
# 114 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 115 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 116 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 11
# 117 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_4
# 118 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_GruntsBattle_Text_1
# 122 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 123 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 12, RusturfTunnel_GruntsBattle_Movement_5
# 126 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 127 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 12
# 128 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 129 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 130 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 131 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 132 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_GruntsBattle_Movement_6
# 134 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 135 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 136 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe
# 137 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 138 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 139 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 140 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 141 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 142 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 143 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 144 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 145 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 146 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 147 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyExit
# 148 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_PeekoExit
# 149 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 150 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 151 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 152 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 153 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 154 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 155 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 156 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 157 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 158 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	return


# 161 "data/maps/RusturfTunnel/scripts.pory"

# 162 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 163 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 164 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 165 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 166 "data/maps/RusturfTunnel/scripts.pory"

# 167 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 168 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 169 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 170 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 171 "data/maps/RusturfTunnel/scripts.pory"

# 172 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 173 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 174 "data/maps/RusturfTunnel/scripts.pory"
	end
# 175 "data/maps/RusturfTunnel/scripts.pory"

# 176 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 177 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 14, 4
# 178 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 179 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm 11, 13, 4
# 180 "data/maps/RusturfTunnel/scripts.pory"
	return
# 181 "data/maps/RusturfTunnel/scripts.pory"

# 182 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 183 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 184 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 185 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 186 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 187 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 188 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 189 "data/maps/RusturfTunnel/scripts.pory"
	release
# 190 "data/maps/RusturfTunnel/scripts.pory"
	end
# 191 "data/maps/RusturfTunnel/scripts.pory"

# 192 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 193 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 194 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 195 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 196 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 197 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 198 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 199 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 200 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 201 "data/maps/RusturfTunnel/scripts.pory"
	release
# 202 "data/maps/RusturfTunnel/scripts.pory"
	end
# 203 "data/maps/RusturfTunnel/scripts.pory"

# 204 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 205 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 206 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 207 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 208 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 209 "data/maps/RusturfTunnel/scripts.pory"
	release
# 210 "data/maps/RusturfTunnel/scripts.pory"
	end
# 211 "data/maps/RusturfTunnel/scripts.pory"

# 212 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 213 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 214 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 215 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 216 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 217 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 218 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 219 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 220 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 221 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 222 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 223 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 224 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 225 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 226 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 227 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 228 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 229 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 230 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 231 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 232 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 233 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 234 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 235 "data/maps/RusturfTunnel/scripts.pory"
	end
# 236 "data/maps/RusturfTunnel/scripts.pory"

# 237 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 238 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 239 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 240 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 241 "data/maps/RusturfTunnel/scripts.pory"
	return
# 242 "data/maps/RusturfTunnel/scripts.pory"

# 243 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 244 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 245 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 246 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 247 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 249 "data/maps/RusturfTunnel/scripts.pory"
	return
# 250 "data/maps/RusturfTunnel/scripts.pory"

# 251 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 252 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 253 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 254 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 255 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 257 "data/maps/RusturfTunnel/scripts.pory"
	return
# 258 "data/maps/RusturfTunnel/scripts.pory"

# 259 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 260 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 261 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 262 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 263 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 264 "data/maps/RusturfTunnel/scripts.pory"
	return
# 265 "data/maps/RusturfTunnel/scripts.pory"

# 266 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 267 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 268 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 269 "data/maps/RusturfTunnel/scripts.pory"
	return
# 270 "data/maps/RusturfTunnel/scripts.pory"

# 271 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 272 "data/maps/RusturfTunnel/scripts.pory"
	return
# 273 "data/maps/RusturfTunnel/scripts.pory"

# 274 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 275 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 276 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 277 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 278 "data/maps/RusturfTunnel/scripts.pory"
	return
# 279 "data/maps/RusturfTunnel/scripts.pory"

# 280 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 281 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit1
# 282 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 283 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 284 "data/maps/RusturfTunnel/scripts.pory"
	return
# 285 "data/maps/RusturfTunnel/scripts.pory"

# 286 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 287 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 288 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 289 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 290 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 291 "data/maps/RusturfTunnel/scripts.pory"
	return
# 292 "data/maps/RusturfTunnel/scripts.pory"

# 293 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 294 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 295 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 296 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 297 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 298 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 299 "data/maps/RusturfTunnel/scripts.pory"
	return
# 300 "data/maps/RusturfTunnel/scripts.pory"

# 301 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 302 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 303 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 304 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 305 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 306 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 307 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 310 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 311 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 312 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 313 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 314 "data/maps/RusturfTunnel/scripts.pory"

# 315 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 316 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 317 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 318 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 319 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 320 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 321 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 322 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 323 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 324 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 325 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 326 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 327 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 328 "data/maps/RusturfTunnel/scripts.pory"

# 329 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 330 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 331 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 332 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 333 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 334 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 335 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 336 "data/maps/RusturfTunnel/scripts.pory"

# 337 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 338 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 339 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 340 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 341 "data/maps/RusturfTunnel/scripts.pory"

# 342 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 343 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 344 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 345 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 346 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 347 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 348 "data/maps/RusturfTunnel/scripts.pory"

# 349 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 350 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 351 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 352 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 353 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 354 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 355 "data/maps/RusturfTunnel/scripts.pory"

# 356 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 357 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 358 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 359 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 360 "data/maps/RusturfTunnel/scripts.pory"

# 361 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 362 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 363 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 364 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 365 "data/maps/RusturfTunnel/scripts.pory"

# 366 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 369 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 370 "data/maps/RusturfTunnel/scripts.pory"

# 371 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 373 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 374 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 375 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 377 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 380 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 382 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 384 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 385 "data/maps/RusturfTunnel/scripts.pory"

# 386 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 387 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 397 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 398 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 399 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 400 "data/maps/RusturfTunnel/scripts.pory"

# 401 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 402 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 403 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 404 "data/maps/RusturfTunnel/scripts.pory"

# 405 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 406 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 407 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 408 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 409 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 410 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 411 "data/maps/RusturfTunnel/scripts.pory"

# 412 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 413 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 414 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 415 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 416 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 417 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 418 "data/maps/RusturfTunnel/scripts.pory"

# 419 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 420 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 421 "data/maps/RusturfTunnel/scripts.pory"
	end
# 422 "data/maps/RusturfTunnel/scripts.pory"

# 423 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 424 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 425 "data/maps/RusturfTunnel/scripts.pory"
	end
# 426 "data/maps/RusturfTunnel/scripts.pory"

# 427 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 428 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 429 "data/maps/RusturfTunnel/scripts.pory"
	end
# 430 "data/maps/RusturfTunnel/scripts.pory"

# 431 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 432 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 433 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 434 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 435 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 436 "data/maps/RusturfTunnel/scripts.pory"

# 437 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 438 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 439 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 440 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 441 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 442 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 443 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 444 "data/maps/RusturfTunnel/scripts.pory"
	release
# 445 "data/maps/RusturfTunnel/scripts.pory"
	end
# 446 "data/maps/RusturfTunnel/scripts.pory"

# 447 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 448 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 449 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 450 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 451 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 452 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 453 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 454 "data/maps/RusturfTunnel/scripts.pory"

# 455 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 456 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 457 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 458 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 459 "data/maps/RusturfTunnel/scripts.pory"

# 460 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 461 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 462 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 463 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 464 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 465 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 466 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 467 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 468 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 469 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 470 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 471 "data/maps/RusturfTunnel/scripts.pory"

# 472 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 473 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 474 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 475 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 476 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 477 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 478 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 479 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 480 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 481 "data/maps/RusturfTunnel/scripts.pory"

# 482 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 483 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 484 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 485 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 486 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 487 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 488 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 489 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 490 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 491 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 492 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 493 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 494 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 495 "data/maps/RusturfTunnel/scripts.pory"

# 496 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 497 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 498 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 499 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 500 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 501 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 502 "data/maps/RusturfTunnel/scripts.pory"

# 503 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 504 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 505 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 506 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 507 "data/maps/RusturfTunnel/scripts.pory"

# 508 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
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
	walk_left
# 516 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 517 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 518 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 519 "data/maps/RusturfTunnel/scripts.pory"

# 520 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 521 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 522 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/RusturfTunnel/scripts.pory"
	end
# 524 "data/maps/RusturfTunnel/scripts.pory"

# 525 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 526 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 527 "data/maps/RusturfTunnel/scripts.pory"

# 528 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 529 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 530 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 531 "data/maps/RusturfTunnel/scripts.pory"

# 532 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 533 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 534 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 535 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 536 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 537 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVCO.\p"
# 538 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 539 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 540 "data/maps/RusturfTunnel/scripts.pory"

# 541 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 542 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 543 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 544 "data/maps/RusturfTunnel/scripts.pory"

# 545 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 546 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 547 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 548 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 549 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 550 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 551 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 552 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 553 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 554 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 555 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 556 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 557 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 558 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 559 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 560 "data/maps/RusturfTunnel/scripts.pory"

# 561 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 562 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 563 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 564 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 565 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 566 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 567 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 568 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 569 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 570 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 571 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 572 "data/maps/RusturfTunnel/scripts.pory"

# 573 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 574 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 575 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 576 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 577 "data/maps/RusturfTunnel/scripts.pory"

# 578 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 579 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 580 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 581 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 582 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 583 "data/maps/RusturfTunnel/scripts.pory"

# 584 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 585 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 586 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 587 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 588 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 589 "data/maps/RusturfTunnel/scripts.pory"

# 590 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 591 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 592 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 593 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 594 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 595 "data/maps/RusturfTunnel/scripts.pory"

# 596 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 597 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 598 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 599 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 600 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 601 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 602 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 603 "data/maps/RusturfTunnel/scripts.pory"

# 604 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 605 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 606 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 607 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 608 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 609 "data/maps/RusturfTunnel/scripts.pory"

# 610 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 611 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 612 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 613 "data/maps/RusturfTunnel/scripts.pory"

# 614 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 615 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 616 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 617 "data/maps/RusturfTunnel/scripts.pory"
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

# 45 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_0:
# 45 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_left
	step_end

# 54 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_1:
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 55 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
	step_end

# 61 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_2:
# 62 "data/maps/RusturfTunnel/scripts.pory"
	face_player
	step_end

# 64 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_SierraArrive_Movement_3:
# 65 "data/maps/RusturfTunnel/scripts.pory"
	face_up
	step_end

# 86 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_0:
# 87 "data/maps/RusturfTunnel/scripts.pory"
	face_right
	step_end

# 102 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_1:
# 103 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 104 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 105 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 106 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_left
	step_end

# 109 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_2:
# 109 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
	step_end

# 110 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_3:
# 110 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
	step_end

# 117 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_4:
# 117 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
	step_end

# 123 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_5:
# 124 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

# 133 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_GruntsBattle_Movement_6:
# 133 "data/maps/RusturfTunnel/scripts.pory"
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
	.string "Wingull at the park. I grabbed it so no\l"
	.string "one would chase us.\p"
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
# 48 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: We warned you not to stick\n"
	.string "your nose where it doesn't belong!\p"
	.string "Come on, let's get him!$"

RusturfTunnel_SierraArrive_Text_1:
# 50 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: We warned you not to stick\n"
	.string "your nose where it doesn't belong!\p"
	.string "Come on, let's get her!$"

RusturfTunnel_SierraArrive_Text_2:
# 52 "data/maps/RusturfTunnel/scripts.pory"
	.string "???: Stop!$"

RusturfTunnel_SierraArrive_Text_3:
# 59 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: I don't want to have to deal\n"
	.string "with this right now.\p"
	.string "I go visit my brother for one day and\n"
	.string "some criminals attack the city?$"

RusturfTunnel_SierraArrive_Text_4:
# 69 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: Hey, you, help me with these\n"
	.string "two.$"

RusturfTunnel_PartySelect_Text_0:
# 81 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: This is no time to doubt\n"
	.string "yourself. Ready your POKéMON!$"

RusturfTunnel_GruntsBattle_Text_0:
# 93 "data/maps/RusturfTunnel/scripts.pory"
	.string "MALE GRUNT: Grah, keelhaul it all!\n"
	.string "That hostage POKéMON was worthless!\p"
	.string "FEMALE GRUNT: I can't believe you\n"
	.string "decided we'd hide in this dead-end cave.\p"
	.string "MALE GRUNT: Nothing to do now but fight\n"
	.string "our way out!$"

RusturfTunnel_GruntsBattle_Text_1:
# 119 "data/maps/RusturfTunnel/scripts.pory"
	.string "SIERRA: Sorry you got caught up in\n"
	.string "that, but you seem like a good trainer.\l"
	.string "You should challenge the Rustboro Gym.\p"
	.string "I'll see you around.$"

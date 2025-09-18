# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 3 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 4 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 7 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 8 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 9 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 10 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 11 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 12 "data/maps/MauvilleCity/scripts.pory"
	end
# 13 "data/maps/MauvilleCity/scripts.pory"

# 14 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 15 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 16 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 17 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 18 "data/maps/MauvilleCity/scripts.pory"
	return
# 19 "data/maps/MauvilleCity/scripts.pory"

# 20 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 21 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 22 "data/maps/MauvilleCity/scripts.pory"
	end
# 23 "data/maps/MauvilleCity/scripts.pory"

# 24 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 25 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 26 "data/maps/MauvilleCity/scripts.pory"
	end
# 27 "data/maps/MauvilleCity/scripts.pory"

# 28 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 29 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 30 "data/maps/MauvilleCity/scripts.pory"
	end
# 31 "data/maps/MauvilleCity/scripts.pory"

# 32 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 33 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 34 "data/maps/MauvilleCity/scripts.pory"
	end
# 35 "data/maps/MauvilleCity/scripts.pory"

# 36 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 37 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 38 "data/maps/MauvilleCity/scripts.pory"
	end
# 39 "data/maps/MauvilleCity/scripts.pory"

# 40 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 41 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 42 "data/maps/MauvilleCity/scripts.pory"
	end
# 43 "data/maps/MauvilleCity/scripts.pory"

# 44 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 45 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 46 "data/maps/MauvilleCity/scripts.pory"
	end
# 47 "data/maps/MauvilleCity/scripts.pory"

# 48 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 49 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 50 "data/maps/MauvilleCity/scripts.pory"
	end
# 51 "data/maps/MauvilleCity/scripts.pory"

# 52 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 53 "data/maps/MauvilleCity/scripts.pory"
	lock
# 54 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 55 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 57 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 58 "data/maps/MauvilleCity/scripts.pory"
	release
# 59 "data/maps/MauvilleCity/scripts.pory"
	end
# 60 "data/maps/MauvilleCity/scripts.pory"

# 61 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 62 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 63 "data/maps/MauvilleCity/scripts.pory"
	release
# 64 "data/maps/MauvilleCity/scripts.pory"
	end
# 65 "data/maps/MauvilleCity/scripts.pory"

# 66 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 67 "data/maps/MauvilleCity/scripts.pory"
	lock
# 68 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 69 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 70 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 71 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 72 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 73 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/MauvilleCity/scripts.pory"
	release
# 75 "data/maps/MauvilleCity/scripts.pory"
	end
# 76 "data/maps/MauvilleCity/scripts.pory"

# 77 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 78 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 79 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 80 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 81 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/MauvilleCity/scripts.pory"
	release
# 83 "data/maps/MauvilleCity/scripts.pory"
	end
# 84 "data/maps/MauvilleCity/scripts.pory"

# 85 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 86 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 87 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 88 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 94 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 96 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 97 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 99 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 101 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 102 "data/maps/MauvilleCity/scripts.pory"
	end
# 103 "data/maps/MauvilleCity/scripts.pory"

# 104 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 105 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 106 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 107 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 108 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 109 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 110 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 111 "data/maps/MauvilleCity/scripts.pory"
	end
# 112 "data/maps/MauvilleCity/scripts.pory"

# 113 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 114 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 115 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 116 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 117 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 119 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 123 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 124 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 125 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 128 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 129 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 130 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 131 "data/maps/MauvilleCity/scripts.pory"
	end
# 132 "data/maps/MauvilleCity/scripts.pory"

# 133 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 137 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 142 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 144 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 145 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 148 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 150 "data/maps/MauvilleCity/scripts.pory"
	end
# 151 "data/maps/MauvilleCity/scripts.pory"

# 152 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 153 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 154 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 155 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 156 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 157 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 158 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 159 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 160 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 161 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 162 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 163 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 165 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 166 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 167 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 168 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 169 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 170 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 171 "data/maps/MauvilleCity/scripts.pory"
	end
# 172 "data/maps/MauvilleCity/scripts.pory"

# 173 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 174 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 175 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 176 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/MauvilleCity/scripts.pory"
	return
# 178 "data/maps/MauvilleCity/scripts.pory"

# 179 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 180 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 181 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 182 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 183 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 184 "data/maps/MauvilleCity/scripts.pory"
	return
# 185 "data/maps/MauvilleCity/scripts.pory"

# 186 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 188 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 189 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 190 "data/maps/MauvilleCity/scripts.pory"
	return
# 191 "data/maps/MauvilleCity/scripts.pory"

# 192 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 193 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 195 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 196 "data/maps/MauvilleCity/scripts.pory"
	return
# 197 "data/maps/MauvilleCity/scripts.pory"

# 198 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 199 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 200 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 202 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 204 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 205 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 207 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 208 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 210 "data/maps/MauvilleCity/scripts.pory"
	return
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 213 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 214 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity/scripts.pory"
	release
# 216 "data/maps/MauvilleCity/scripts.pory"
	end
# 217 "data/maps/MauvilleCity/scripts.pory"

# 218 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 219 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 220 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 222 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 223 "data/maps/MauvilleCity/scripts.pory"
	end
# 224 "data/maps/MauvilleCity/scripts.pory"

# 225 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 226 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 227 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 228 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 229 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 230 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 231 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 232 "data/maps/MauvilleCity/scripts.pory"

# 233 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 234 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 235 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 236 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 237 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 238 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 239 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 240 "data/maps/MauvilleCity/scripts.pory"

# 241 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 242 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 243 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 252 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 253 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 254 "data/maps/MauvilleCity/scripts.pory"

# 255 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 256 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 257 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 267 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 268 "data/maps/MauvilleCity/scripts.pory"

# 269 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 270 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 271 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 274 "data/maps/MauvilleCity/scripts.pory"

# 275 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 276 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 277 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 278 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 280 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 281 "data/maps/MauvilleCity/scripts.pory"

# 282 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 283 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 284 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 285 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 286 "data/maps/MauvilleCity/scripts.pory"

# 287 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 289 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 292 "data/maps/MauvilleCity/scripts.pory"

# 293 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 296 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 297 "data/maps/MauvilleCity/scripts.pory"

# 298 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 299 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 300 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 301 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 302 "data/maps/MauvilleCity/scripts.pory"

# 303 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 304 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 305 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 306 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 307 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 308 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 309 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 310 "data/maps/MauvilleCity/scripts.pory"

# 311 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 313 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 317 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 318 "data/maps/MauvilleCity/scripts.pory"

# 319 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 320 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 321 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 322 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 324 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 325 "data/maps/MauvilleCity/scripts.pory"

# 326 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 330 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 331 "data/maps/MauvilleCity/scripts.pory"

# 332 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 335 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 336 "data/maps/MauvilleCity/scripts.pory"

# 337 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 347 "data/maps/MauvilleCity/scripts.pory"

# 348 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 358 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 359 "data/maps/MauvilleCity/scripts.pory"

# 360 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 372 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 373 "data/maps/MauvilleCity/scripts.pory"

# 374 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 386 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 387 "data/maps/MauvilleCity/scripts.pory"

# 388 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 398 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 399 "data/maps/MauvilleCity/scripts.pory"

# 400 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 412 "data/maps/MauvilleCity/scripts.pory"

# 413 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 414 "data/maps/MauvilleCity/scripts.pory"
	lock
# 415 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 416 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 417 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 418 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 419 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 420 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 421 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 422 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 423 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 424 "data/maps/MauvilleCity/scripts.pory"
	release
# 425 "data/maps/MauvilleCity/scripts.pory"
	end
# 426 "data/maps/MauvilleCity/scripts.pory"

# 427 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 428 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 429 "data/maps/MauvilleCity/scripts.pory"
	release
# 430 "data/maps/MauvilleCity/scripts.pory"
	end
# 431 "data/maps/MauvilleCity/scripts.pory"

# 432 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 433 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 434 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 435 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 436 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 437 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 438 "data/maps/MauvilleCity/scripts.pory"
	release
# 439 "data/maps/MauvilleCity/scripts.pory"
	end
# 440 "data/maps/MauvilleCity/scripts.pory"

# 441 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 442 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 443 "data/maps/MauvilleCity/scripts.pory"
	release
# 444 "data/maps/MauvilleCity/scripts.pory"
	end
# 445 "data/maps/MauvilleCity/scripts.pory"

# 446 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 447 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 448 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 449 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 450 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 451 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 452 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 453 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 454 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 455 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 456 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 457 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 458 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 459 "data/maps/MauvilleCity/scripts.pory"
	end
# 460 "data/maps/MauvilleCity/scripts.pory"

# 461 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 462 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 463 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 464 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 465 "data/maps/MauvilleCity/scripts.pory"

# 466 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 467 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 468 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 469 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 470 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 471 "data/maps/MauvilleCity/scripts.pory"

# 472 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 473 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 474 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 475 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 476 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 477 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 478 "data/maps/MauvilleCity/scripts.pory"

# 479 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 482 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 483 "data/maps/MauvilleCity/scripts.pory"

# 484 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 488 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 489 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 492 "data/maps/MauvilleCity/scripts.pory"

# 493 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 497 "data/maps/MauvilleCity/scripts.pory"

# 498 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 504 "data/maps/MauvilleCity/scripts.pory"

# 505 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 508 "data/maps/MauvilleCity/scripts.pory"

# 509 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 512 "data/maps/MauvilleCity/scripts.pory"

# 513 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 517 "data/maps/MauvilleCity/scripts.pory"

# 518 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 521 "data/maps/MauvilleCity/scripts.pory"

# 522 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 528 "data/maps/MauvilleCity/scripts.pory"

# 529 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 536 "data/maps/MauvilleCity/scripts.pory"

# 537 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 545 "data/maps/MauvilleCity/scripts.pory"

# 546 "data/maps/MauvilleCity/scripts.pory"

# 547 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 557 "data/maps/MauvilleCity/scripts.pory"

# 558 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 561 "data/maps/MauvilleCity/scripts.pory"

# 562 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 574 "data/maps/MauvilleCity/scripts.pory"

# 575 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 589 "data/maps/MauvilleCity/scripts.pory"

# 590 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 597 "data/maps/MauvilleCity/scripts.pory"

# 598 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 605 "data/maps/MauvilleCity/scripts.pory"

# 606 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 610 "data/maps/MauvilleCity/scripts.pory"

# 611 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 616 "data/maps/MauvilleCity/scripts.pory"

# 617 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 622 "data/maps/MauvilleCity/scripts.pory"

# 623 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 627 "data/maps/MauvilleCity/scripts.pory"

# 628 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 631 "data/maps/MauvilleCity/scripts.pory"

# 632 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 635 "data/maps/MauvilleCity/scripts.pory"

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 640 "data/maps/MauvilleCity/scripts.pory"

# 641 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 645 "data/maps/MauvilleCity/scripts.pory"

# 646 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 649 "data/maps/MauvilleCity/scripts.pory"

# 650 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 661 "data/maps/MauvilleCity/scripts.pory"

# 662 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

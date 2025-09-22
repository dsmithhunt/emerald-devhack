# 1 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts::
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame
# 4 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 7 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnTransition:
# 8 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 10 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 11 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 12 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnFrame:
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 16 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
# 17 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lockall
# 18 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 21 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 22 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
# 23 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 24 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 26 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
# 27 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 28 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
# 29 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene::
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitfanfare
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 59 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 61 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
# 62 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 63 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	releaseall
# 65 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 66 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 67 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 71 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 72 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 73 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 74 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 78 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 79 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 80 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 81 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 82 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
@ Unused
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_WalkDown:
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottEnter:
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 98 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottExit:
# 99 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_right
# 100 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 102 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 103 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 104 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 105 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
# 109 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 110 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 111 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 112 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_left
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Greeter::
# 125 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 126 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 127 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 129 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 130 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 131 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 135 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
# 136 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 137 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 138 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowScrollableMultichoice
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitstate
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower
# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace
# 149 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena
# 150 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike
# 152 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid
# 153 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall
# 154 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 156 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 157 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 158 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 159 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleTower::
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 162 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 163 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 164 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleDome::
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 167 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 169 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePalace::
# 170 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 172 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 174 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleArena::
# 175 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 177 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 178 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 179 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleFactory::
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 182 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 183 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 184 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePike::
# 185 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 187 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 188 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 189 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
# 190 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 192 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 194 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RankingHall::
# 195 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
# 196 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 197 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 198 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 199 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
# 200 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
# 201 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 202 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 203 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 204 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
# 205 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 207 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 208 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 209 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RulesGuide::
# 210 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 211 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 212 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
# 213 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 214 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 215 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 216 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
# 217 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
# 218 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 219 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
# 220 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode
# 222 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel
# 224 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry
# 225 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems
# 226 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 227 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 228 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 229 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 230 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_LevelMode::
# 231 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 233 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 235 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Level50::
# 236 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
# 237 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 238 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 239 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 240 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_OpenLevel::
# 241 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
# 242 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 243 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 244 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 245 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_MonEntry::
# 246 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
# 247 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 248 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 249 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 250 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_HoldItems::
# 251 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 253 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 254 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 255 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
# 256 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 257 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 258 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 260 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 262 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 263 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
# 264 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 265 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 266 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 267 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
# 268 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
# 269 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 270 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
# 271 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 272 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols
# 273 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle
# 274 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints
# 275 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 276 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 277 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 278 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 279 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Symbols::
# 280 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
# 281 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 282 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 283 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 284 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RecordBattle::
# 285 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
# 286 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 287 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 288 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 289 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePoints::
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 292 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 293 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 294 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
# 295 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 296 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 297 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 299 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay:
# 300 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Is it your first time here?\n"
# 301 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please step this way!$"
# 302 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 303 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier:
# 304 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The front lines of POKéMON battling!\n"
# 305 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Welcome to the BATTLE FRONTIER!$"
# 306 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 307 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IssueFrontierPass:
# 308 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "For a first-time visitor, we issue\n"
# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the FRONTIER PASS.\p"
# 310 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It's for use at all the facilities\n"
# 311 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the BATTLE FRONTIER.\p"
# 312 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Here you are!$"
# 313 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 314 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass:
# 315 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} obtained\n"
# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the FRONTIER PASS.$"
# 317 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 318 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass:
# 319 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} placed the TRAINER CARD\n"
# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the FRONTIER PASS.$"
# 321 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 322 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier:
# 323 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "We hope you enjoy all that the BATTLE\n"
# 324 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER has to offer!$"
# 325 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame:
# 327 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "???: Well, if it isn't {PLAYER}{KUN}!\n"
# 328 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You came out here!$"
# 329 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 330 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay:
# 331 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "GUIDE: Oh! MR. SCOTT, sir!\n"
# 332 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Good day to you, sir!$"
# 333 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 334 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere:
# 335 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "SCOTT: It's great to see you here,\n"
# 336 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "it really is!\p"
# 337 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I hope you'll take your time and\n"
# 338 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "explore everywhere.\p"
# 339 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Naturally, I hope you'll also experience\n"
# 340 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the pure essence of battling.\p"
# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I also have my quarters here, so feel\n"
# 342 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "free to visit if you have time.$"
# 343 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 344 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFacilities:
# 345 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the various facilities\n"
# 346 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "here in the BATTLE FRONTIER.$"
# 347 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 348 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich2:
# 349 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"
# 350 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 351 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleTowerInfo:
# 352 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is the gigantic tower considered\n"
# 353 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "to be the BATTLE FRONTIER's symbol.\p"
# 354 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are four kinds of BATTLE ROOMS\n"
# 355 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the tower for SINGLE, DOUBLE, MULTI,\l"
# 356 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "and LINK MULTI BATTLES.$"
# 357 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 358 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleDomeInfo:
# 359 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE DOME is the large building\n"
# 360 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "shaped like a huge egg.\p"
# 361 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Events named Battle Tourneys are held\n"
# 362 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in this facility.\p"
# 363 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Tourneys are offered in\n"
# 364 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses--for SINGLE and DOUBLE\l"
# 365 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "BATTLES.$"
# 366 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 367 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePalaceInfo:
# 368 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PALACE is the red building\n"
# 369 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the right of the BATTLE FRONTIER.\p"
# 370 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are two kinds of BATTLE HALLS\n"
# 371 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for SINGLE and DOUBLE BATTLES.$"
# 372 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 373 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleArenaInfo:
# 374 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE ARENA is the dojo-like\n"
# 375 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "building at the center-right of\l"
# 376 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 377 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Set KO Tourney\n"
# 378 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "takes place at the BATTLE ARENA.$"
# 379 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 380 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleFactoryInfo:
# 381 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE FACTORY is the large\n"
# 382 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "building that is the closest to us.\p"
# 383 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Swap\n"
# 384 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.\p"
# 385 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Swap event is offered in\n"
# 386 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses for SINGLE and DOUBLE\l"
# 387 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "BATTLES.$"
# 388 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 389 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePikeInfo:
# 390 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PIKE is the building shaped\n"
# 391 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "like a POKéMON at the center-left of\l"
# 392 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 393 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Choice\n"
# 394 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.$"
# 395 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 396 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePyramidInfo:
# 397 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PYRAMID is the enormous\n"
# 398 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "pyramid.\p"
# 399 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Quest\n"
# 400 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.$"
# 401 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 402 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RankingHallInfo:
# 403 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The RANKING HALL is located near\n"
# 404 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE TOWER.\p"
# 405 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There, you may see the most fantastic\n"
# 406 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "records left by the TRAINERS that\l"
# 407 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "took on the many challenges of\l"
# 408 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.$"
# 409 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 410 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo:
# 411 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The EXCHANGE SERVICE CORNER is near\n"
# 412 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE TOWER.\p"
# 413 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Points you have earned in\n"
# 414 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER may be exchanged\l"
# 415 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for fabulous prizes there.$"
# 416 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 417 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToRules:
# 418 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the basic rules that\n"
# 419 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "are common to all the challenges\l"
# 420 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "offered by the facilities in the BATTLE\l"
# 421 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER.$"
# 422 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 423 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhat:
# 424 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "What would you like to learn about?$"
# 425 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 426 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LevelModeInfo:
# 427 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "All the challenges at the BATTLE\n"
# 428 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER's facilities come in\l"
# 429 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses--Level 50 and Open Level.$"
# 430 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 431 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_Level50Info:
# 432 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Level 50 course is open to POKéMON\n"
# 433 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "up to and including Level 50.\p"
# 434 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please keep in mind, however, that\n"
# 435 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "no TRAINER you face will have any\l"
# 436 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "POKéMON below Level 50.\p"
# 437 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "This course is the entry level for\n"
# 438 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "battles at the BATTLE FRONTIER.\p"
# 439 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "To begin, we hope you will challenge\n"
# 440 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "this course.$"
# 441 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 442 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OpenLevelInfo:
# 443 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Open Level course places no limit\n"
# 444 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the levels of POKéMON entering\l"
# 445 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "challenges.\p"
# 446 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The levels of your opponents will\n"
# 447 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "be adjusted to match the levels of\l"
# 448 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "your POKéMON.\p"
# 449 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "However, no TRAINER you face will\n"
# 450 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "have any POKéMON below Level 60.$"
# 451 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 452 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_MonEntryInfo:
# 453 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Virtually any kind of POKéMON may take\n"
# 454 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the challenges at all facilities.\p"
# 455 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "EGGS and certain kinds of POKéMON,\n"
# 456 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "however, are not permitted.\p"
# 457 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The numbers of POKéMON required for\n"
# 458 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "challenges will depend on the facility.\p"
# 459 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "At all facilities, however, two or more\n"
# 460 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "of the same kind of POKéMON are not\l"
# 461 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "permitted.$"
# 462 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 463 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_HoldItemsInfo:
# 464 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "When entering a challenge at a BATTLE\n"
# 465 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER facility, POKéMON may not\l"
# 466 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "be holding the same kind of item.\p"
# 467 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please make sure that all POKéMON\n"
# 468 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "entering a challenge are holding\l"
# 469 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "different items.$"
# 470 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 471 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass:
# 472 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the FRONTIER PASS.$"
# 473 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 474 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich1:
# 475 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"
# 476 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 477 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_SymbolsInfo:
# 478 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are seven facilities at\n"
# 479 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 480 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TRAINERS who gain recognition for\n"
# 481 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "their abilities may be rewarded with\l"
# 482 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "symbols from each of the facilities.\p"
# 483 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "To earn a symbol, TRAINERS may need\n"
# 484 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "to defeat other TRAINERS in a row,\l"
# 485 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "and may need to win events repeatedly.\p"
# 486 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It's certainly not easy to win symbols.\n"
# 487 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I wish you the best of luck!$"
# 488 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 489 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RecordedBattleInfo:
# 490 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is possible to record one battle\n"
# 491 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on your FRONTIER PASS.\p"
# 492 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may record a battle you had with\n"
# 493 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "a friend or friends.\p"
# 494 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Or you may record a battle conducted\n"
# 495 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the BATTLE FRONTIER excluding\l"
# 496 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "matches at the BATTLE PIKE or\l"
# 497 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE PYRAMID.\p"
# 498 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may choose to record your match\n"
# 499 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the end of a battle.$"
# 500 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 501 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePointsInfo:
# 502 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Battle Points are rewards given to\n"
# 503 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TRAINERS who battled outstandingly\l"
# 504 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the BATTLE FRONTIER.\p"
# 505 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may trade in your Battle Points\n"
# 506 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for prizes at the EXCHANGE SERVICE\l"
# 507 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "CORNER.$"

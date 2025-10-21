# 17 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 18 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_MapScripts::
# 19 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentLobby_OnFrame
# 20 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentLobby_OnWarp
# 21 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.byte 0
# 22 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 23 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_OnWarp:
# 24 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth
# 25 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 26 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 27 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth::
# 28 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 30 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 31 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 32 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_OnFrame:
# 33 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus
# 34 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 35 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge
# 36 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, VerdanturfTown_BattleTentLobby_EventScript_WonChallenge
# 37 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, VerdanturfTown_BattleTentLobby_EventScript_LostChallenge
# 38 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 39 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 40 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus::
# 41 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 42 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 43 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 44 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving::
# 45 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 46 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 47 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 48 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 49 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 50 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 51 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 52 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 53 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 54 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WonChallenge::
# 55 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 56 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 57 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
# 58 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 59 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_setrandomprize
# 60 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 61 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 62 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 63 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 64 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 65 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GivePrize::
# 66 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 67 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_giveprize
# 68 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FALSE, VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize
# 70 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 71 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReceivedPrize  @ Odd that it used Dome's copy instead of Palace's
# 72 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 73 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 75 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 76 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 77 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 78 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 79 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 80 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 81 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize::
# 82 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize, MSGBOX_DEFAULT
# 83 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 84 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 85 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 86 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 87 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 88 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 89 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting::
# 90 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 91 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 92 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_GivePrize
# 93 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 94 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 95 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LostChallenge::
# 96 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 97 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_ResultsWillBeRecorded
# 98 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 99 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 100 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 101 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 102 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 103 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 104 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 105 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 106 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 107 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 108 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 109 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge::
# 110 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 111 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 112 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 113 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 114 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_SAVING
# 115 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 116 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 117 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 118 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 119 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge
# 120 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 121 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Attendant::
# 122 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 123 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 124 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_getprize
# 125 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting
# 126 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 127 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 128 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge::
# 129 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_TakeChallenge
# 130 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 131 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 132 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge
# 134 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge
# 135 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 136 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 137 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 138 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge::
# 139 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 140 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 141 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 142 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 143 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons
# 144 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 145 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 146 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 147 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 1
# 148 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 149 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 150 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 151 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 152 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 153 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case NO, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 155 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case YES, VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge
# 156 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 157 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 158 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 159 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 160 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 161 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_init
# 162 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 163 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 164 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 165 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 166 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	delay 2
# 167 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 168 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 169 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 170 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge::
# 171 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 172 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 173 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NowFollowMe, MSGBOX_DEFAULT
# 174 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 175 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor
# 176 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR, 2, 7
# 177 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 179 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 180 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 181 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge::
# 182 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent, MSGBOX_DEFAULT
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge
# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 185 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons::
# 186 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50
# 188 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 189 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 190 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50::
# 191 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 192 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 193 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 194 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen::
# 195 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 196 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 197 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 198 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 199 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 200 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 201 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 202 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 203 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 204 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge::
# 205 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 206 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge::
# 207 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 208 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 209 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 210 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor::
# 211 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 212 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 213 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 214 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 215 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 216 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor
# 217 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor
# 218 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 219 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 220 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 221 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 222 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 223 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_WalkToDoor:
# 224 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 225 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 226 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 227 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 228 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 229 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor:
# 230 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 231 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 232 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 233 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 234 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor:
# 235 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 236 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 237 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 238 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 239 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 240 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver::
# 241 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 242 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 243 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ATTRACT, VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract
# 244 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep, MSGBOX_DEFAULT
# 245 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	giveitem ITEM_TM_ATTRACT
# 246 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 247 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_ATTRACT
# 248 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 249 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 250 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 251 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 252 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract::
# 253 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 254 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 255 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 256 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 257 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy1::
# 258 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves, MSGBOX_NPC
# 259 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 260 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 261 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy2::
# 262 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 263 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves, MSGBOX_DEFAULT
# 264 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 265 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 266 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 267 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Scott::
# 268 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 269 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 270 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_VERDANTURF, VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo
# 271 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers, MSGBOX_DEFAULT
# 272 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 273 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_VERDANTURF
# 274 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 275 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 276 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 277 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo::
# 278 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly, MSGBOX_DEFAULT
# 279 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 280 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 281 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 282 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LittleBoy::
# 283 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 284 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry, MSGBOX_DEFAULT
# 285 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 286 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 287 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 288 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBoard::
# 289 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 290 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 291 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 292 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 293 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 294 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard::
# 295 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 296 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 297 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BATTLE_TENT_RULES
# 298 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ShowScrollableMultichoice
# 299 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 300 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 301 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_RulesLevel
# 302 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_RulesBasics
# 303 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_RulesNature
# 304 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 3, VerdanturfTown_BattleTentLobby_EventScript_RulesMoves
# 305 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 4, VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered
# 306 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 5, VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger
# 307 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 6, VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 308 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 309 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 310 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 311 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesLevel::
# 312 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
# 313 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 314 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 315 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 316 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBasics::
# 317 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 318 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 319 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 320 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 321 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesNature::
# 322 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 323 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 324 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 325 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 326 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesMoves::
# 327 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 328 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 329 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 330 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 331 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered::
# 332 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 333 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 334 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 335 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 336 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger::
# 337 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 338 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 339 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 340 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 341 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExitRules::
# 342 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 343 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 344 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 345 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves:
# 346 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it doesn't like a certain move,\n"
# 347 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "a POKéMON will be reluctant to use it.\p"
# 348 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "It doesn't matter how strong it is,\n"
# 349 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "either.\p"
# 350 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "For example, a POKéMON with a GENTLE\n"
# 351 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "nature probably won't enjoy hurting\l"
# 352 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "its opponents.\p"
# 353 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it can't seem to live up to its\n"
# 354 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "potential, it's probably failing at\l"
# 355 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "using a disliked move against its will.$"
# 356 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 357 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry:
# 358 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My big sister is gentle usually.\n"
# 359 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "But when she gets angry,\l"
# 360 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "she's really, really scary!\p"
# 361 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I bet a gentle POKéMON will be scary\n"
# 362 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "if it gets angry!$"
# 363 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 364 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep:
# 365 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my POKéMON…\n"
# 366 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "The attraction runs deep…\p"
# 367 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Oh, hi, you didn't see that, did you?\n"
# 368 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Well, it doesn't matter.\p"
# 369 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "How would you like this TM for\n"
# 370 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your POKéMON?$"
# 371 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 372 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionMutual:
# 373 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my POKéMON…\n"
# 374 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I'm sure the attraction is mutual!\p"
# 375 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "They battle exactly the way I want\n"
# 376 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "them to!$"
# 377 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 378 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves:
# 379 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "What kind of moves have you taught\n"
# 380 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your POKéMON?\p"
# 381 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I think you would give yourself\n"
# 382 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "an advantage if they knew how to\l"
# 383 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "heal or protect themselves.$"

VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers::
# 1 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu\p"
	.string "These BATTLE TENTS are places\n"
	.string "you can meet tough TRAINERS.\p"
	.string "Each one has special rules for\n"
	.string "how battles are waged, too.\p"
	.string "{PLAYER}{KUN}, I expect you to do\n"
	.string "the best you can!$"

VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly::
# 12 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu$"

# 21 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 22 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_MapScripts::
# 23 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentLobby_OnFrame
# 24 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FallarborTown_BattleTentLobby_OnWarp
# 25 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.byte 0
# 26 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 27 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_OnWarp:
# 28 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FallarborTown_BattleTentLobby_EventScript_TurnPlayerNorth
# 29 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 30 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 31 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TurnPlayerNorth::
# 32 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 34 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 35 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 36 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_OnFrame:
# 37 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, FallarborTown_BattleTentLobby_EventScript_GetChallengeStatus
# 38 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, FallarborTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 39 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, FallarborTown_BattleTentLobby_EventScript_ResumeChallenge
# 40 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, FallarborTown_BattleTentLobby_EventScript_WonChallenge
# 41 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, FallarborTown_BattleTentLobby_EventScript_LostChallenge
# 42 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 43 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 44 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_GetChallengeStatus::
# 45 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 46 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 47 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 48 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_QuitWithoutSaving::
# 49 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 50 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 51 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 52 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 53 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 54 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 55 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 56 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 57 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 58 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_WonChallenge::
# 59 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 60 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
# 61 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
# 62 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 63 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_setrandomprize
# 64 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 65 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save 0
# 66 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 67 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 68 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 69 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_GivePrize::
# 70 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 71 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_giveprize
# 72 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FALSE, FallarborTown_BattleTentLobby_EventScript_NoRoomForPrize
# 74 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 75 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_ReceivedPrize
# 76 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 77 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 79 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 80 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 81 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 82 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 83 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 84 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 85 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NoRoomForPrize::
# 86 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BagFullReturnForPrize, MSGBOX_DEFAULT
# 87 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 88 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 89 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 90 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 91 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 92 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 93 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_PrizeWaiting::
# 94 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 95 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
# 96 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_GivePrize
# 97 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 98 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 99 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_LostChallenge::
# 100 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 101 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
# 102 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 103 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 104 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save 0
# 105 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 106 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 107 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 108 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 109 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 110 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 111 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 112 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 113 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ResumeChallenge::
# 114 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 115 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_LookingForwardToArrival
# 116 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 117 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save CHALLENGE_STATUS_SAVING
# 118 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 119 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 120 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 121 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 122 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EnterChallenge
# 123 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 124 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Attendant::
# 125 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lock
# 126 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	faceplayer
# 127 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_getprize
# 128 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, FallarborTown_BattleTentLobby_EventScript_PrizeWaiting
# 129 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 130 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 131 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge::
# 132 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_TakeChallenge
# 133 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 134 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 135 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 0, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge
# 137 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 1, FallarborTown_BattleTentLobby_EventScript_ExplainChallenge
# 138 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 2, FallarborTown_BattleTentLobby_EventScript_CancelChallenge
# 139 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_CancelChallenge
# 140 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 141 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge::
# 142 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 143 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 144 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 145 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 146 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons
# 147 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 148 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 149 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 150 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 2
# 151 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 152 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 153 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitstate
# 154 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 155 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 156 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 157 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case NO, FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 158 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case YES, FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge
# 159 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 160 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 161 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 162 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 163 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 164 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_init
# 165 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 166 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 167 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 168 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 169 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	delay 2
# 170 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 171 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 172 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FallarborTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 173 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_EnterChallenge::
# 174 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 175 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 176 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent, MSGBOX_DEFAULT
# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 178 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	call FallarborTown_BattleTentLobby_EventScript_WalkToDoor
# 179 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_CORRIDOR, 2, 7
# 180 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 181 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitstate
# 182 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 183 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 184 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ExplainChallenge::
# 185 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ExplainFallarborTent, MSGBOX_DEFAULT
# 186 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge
# 187 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 188 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons::
# 189 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50
# 191 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 192 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50::
# 193 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 194 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EndCancelChallenge
# 195 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 196 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen::
# 197 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 198 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EndCancelChallenge
# 199 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 200 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 201 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 202 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallenge
# 203 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 204 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 205 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 206 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_CancelChallenge::
# 207 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 208 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_EndCancelChallenge::
# 209 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	release
# 210 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 211 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 212 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_WalkToDoor::
# 213 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_ATTENDANT, FallarborTown_BattleTentLobby_Movement_AttendantWalkToDoor
# 214 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentLobby_Movement_PlayerWalkToDoor
# 215 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 216 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 217 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 218 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_ATTENDANT, FallarborTown_BattleTentLobby_Movement_AttendantEnterDoor
# 219 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentLobby_Movement_PlayerEnterDoor
# 220 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 221 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 222 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 223 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 224 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 225 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_AttendantWalkToDoor:
# 226 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 227 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 228 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 229 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 230 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 231 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_AttendantEnterDoor:
# 232 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 233 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	set_invisible
# 234 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 235 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 236 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_PlayerWalkToDoor:
# 237 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 238 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 239 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 240 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 241 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 242 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_PlayerEnterDoor:
# 243 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 244 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 245 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	set_invisible
# 246 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 247 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 248 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Hiker::
# 249 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_CameToCampOut, MSGBOX_NPC
# 250 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 251 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 252 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_LittleBoy::
# 253 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_MakeThinkImJustKid, MSGBOX_NPC
# 254 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 255 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 256 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Lass::
# 257 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_FallarborTentMyFavorite, MSGBOX_NPC
# 258 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 259 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 260 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Scott::
# 261 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lock
# 262 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	faceplayer
# 263 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_FALLARBOR, FallarborTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo
# 264 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ScottLookingForSomeone, MSGBOX_DEFAULT
# 265 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 266 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_FALLARBOR
# 267 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	release
# 268 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 269 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 270 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo::
# 271 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ScottMakeChallenge, MSGBOX_DEFAULT
# 272 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	release
# 273 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 274 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 275 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesBoard::
# 276 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 277 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 278 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 279 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 280 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 281 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard::
# 282 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 283 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 284 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	multichoice 17, 0, MULTI_FALLARBOR_TENT_RULES, FALSE
# 285 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 0, FallarborTown_BattleTentLobby_EventScript_RulesLevel
# 287 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 1, FallarborTown_BattleTentLobby_EventScript_RulesBattle
# 288 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 2, FallarborTown_BattleTentLobby_EventScript_RulesMind
# 289 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 3, FallarborTown_BattleTentLobby_EventScript_RulesSkill
# 290 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 4, FallarborTown_BattleTentLobby_EventScript_RulesBody
# 291 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 5, FallarborTown_BattleTentLobby_EventScript_ExitRules
# 292 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_ExitRules
# 293 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 294 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 295 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesLevel::
# 296 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
# 297 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 298 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 299 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 300 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesBattle::
# 301 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 302 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 303 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 304 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 305 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesMind::
# 306 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 307 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 308 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 309 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 310 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesSkill::
# 311 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 312 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 313 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 314 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 315 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesBody::
# 316 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 317 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 318 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 319 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 320 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ExitRules::
# 321 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 322 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 323 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 324 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_MakeThinkImJustKid:
# 325 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Fufufufufu.\p"
# 326 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I'm going to make everyone think\n"
# 327 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I'm just a kid and let them play down.\p"
# 328 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Then, I'll shock them and grab\n"
# 329 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "the title!$"
# 330 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 331 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_FallarborTentMyFavorite:
# 332 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "You know how BATTLE TENTS offer\n"
# 333 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "different events in different towns?\p"
# 334 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "My favorite is definitely the BATTLE\n"
# 335 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "TENT in FALLARBOR TOWN.\p"
# 336 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I think it's fantastic how TRAINERS\n"
# 337 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "try to win with all their faith in\l"
# 338 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "their POKéMON.$"
# 339 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 340 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_CameToCampOut:
# 341 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I heard something about some tent,\n"
# 342 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "so I came to camp out.\p"
# 343 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I didn't know that tents these days\n"
# 344 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "are so luxurious!\p"
# 345 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Since I'm here, I may as well try\n"
# 346 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "my hand at battling!$"

FallarborTown_BattleTentLobby_Text_ScottLookingForSomeone::
# 1 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu\p"
	.string "The people in these parts tend to be\n"
	.string "easygoing and laid-back.\p"
	.string "But, you see, what I'm looking for are\n"
	.string "people with…\p"
	.string "How should I say this?\p"
	.string "Someone bursting with the desire\n"
	.string "and the drive to win.\p"
	.string "A TRAINER like that…\n"
	.string "Whoops! Never mind!\l"
	.string "Keep working at it!$"

FallarborTown_BattleTentLobby_Text_ScottMakeChallenge::
# 16 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu$"

LittlerootTown_ProfessorBirchsLab_RivalBattle::
# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_EXIT
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
	checkplayergender
# 0 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_ProfessorBirchsLab_RivalBattle_2
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
LittlerootTown_ProfessorBirchsLab_RivalBattle_1:
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 3, LittlerootTown_ProfessorBirchsLab_RivalBattle_Movement_0
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_RivalBattle_Movement_1
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_ProfessorBirchsLab_RivalBattle_5
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalBrendan
	return

LittlerootTown_ProfessorBirchsLab_RivalBattle_2:
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto LittlerootTown_ProfessorBirchsLab_RivalBattle_1

LittlerootTown_ProfessorBirchsLab_RivalBattle_5:
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalMay
	return


LittlerootTown_ProfessorBirchsLab_RivalMay::
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_RivalMay_Text_0
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	savebgm MUS_BIRCH_LAB
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_MON
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_RivalMay_2
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_RivalMay_3
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_RivalMay_4
	return

LittlerootTown_ProfessorBirchsLab_RivalMay_2:
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LAB_CHESPIN, RivalOutro
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalBattleOver
	return

LittlerootTown_ProfessorBirchsLab_RivalMay_3:
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LAB_TEPIG, RivalOutro
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalBattleOver
	return

LittlerootTown_ProfessorBirchsLab_RivalMay_4:
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LAB_SOBBLE, RivalOutro
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalBattleOver
	return


LittlerootTown_ProfessorBirchsLab_RivalBrendan::
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_RivalMay_Text_0
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	savebgm MUS_BIRCH_LAB
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_MON
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_RivalBrendan_2
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_RivalBrendan_3
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_RivalBrendan_4
	return

LittlerootTown_ProfessorBirchsLab_RivalBrendan_2:
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LAB_CHESPIN, RivalOutro
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalBattleOver
	return

LittlerootTown_ProfessorBirchsLab_RivalBrendan_3:
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LAB_TEPIG, RivalOutro
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalBattleOver
	return

LittlerootTown_ProfessorBirchsLab_RivalBrendan_4:
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LAB_SOBBLE, RivalOutro
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_RivalBattleOver
	return


LittlerootTown_ProfessorBirchsLab_RivalBattleOver::
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_RivalBattleOver_Movement_0
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_RivalBattleOver_Text_0
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_BIRCH
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_NORTH
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_AIDE, DIR_EAST
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_AIDE, 10, 10
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, DIR_SOUTH
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, 8, 4
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_TOTODILE_BALL, DIR_SOUTH
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_TOTODILE_BALL, 9, 4
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL, DIR_SOUTH
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_CHIKORITA_BALL, 10, 4
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_EAST
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_RivalBattle
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd heard from your father that you\n"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "don't have your own POKéMON yet…\p"
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you definitely have talent!\p"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Also, if you're going on an adventure,\n"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're going to want a POKéDEX.\p"
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The POKéDEX is a high-tech\n"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this POKéDEX\n"
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for my research, but you can have it.$"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever {RIVAL} catches a new POKéMON\n"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data, they find me, even\l"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "while I'm out doing fieldwork, to shows me.$"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_RivalBattle_Movement_0:
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	player_run_up
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	player_run_up
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	player_run_up
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	player_run_up
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	player_run_up
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	player_run_up
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_RivalBattle_Movement_1:
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_right
	step_end

# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_RivalBattleOver_Movement_0:
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_up
	step_end

LittlerootTown_ProfessorBirchsLab_RivalMay_Text_0:
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I hear you're a natural when it comes to\n"
	.string "POKéMON battles! Let's battle.$"

LittlerootTown_ProfessorBirchsLab_RivalBattleOver_Text_0:
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, wow, {PLAYER}{KUN}!\p"
	.string "You beat {RIVAL} on your first try;\n"
	.string "that's excellent!\p"
	.string "{RIVAL}'s been helping with my\n"
	.string "research for a long time.$"

RivalOutro::
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Wow, you are good.$"

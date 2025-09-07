LittlerootTown_EventScript_Deoxys_Gift::
# 2 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 3 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Deoxys_Gift_Text_0
# 4 "data/maps/LittlerootTown/scripts.pory"
	GiveMon SPECIES_MOLTIN, 10, ITEM_NONE, ITEM_GREAT_BALL, 3, 0, 1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYCHO_BOOST, MOVE_NIGHT_SLASH, MOVE_EXTREME_SPEED, MOVE_PROTECT
# 5 "data/maps/LittlerootTown/scripts.pory"
	removeobject 9
# 6 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_Deoxys::
# 10 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 11 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 12 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 13 "data/maps/LittlerootTown/scripts.pory"
	delay 40
# 14 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 15 "data/maps/LittlerootTown/scripts.pory"
	setwildbattle SPECIES_DEOXYS, 12, ITEM_NONE
# 17 "data/maps/LittlerootTown/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 20 "data/maps/LittlerootTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 21 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LittlerootTown_EventScript_Deoxys_1
# 24 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LittlerootTown_EventScript_Deoxys_2
# 27 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LittlerootTown_EventScript_Deoxys_3
# 30 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq LittlerootTown_EventScript_Deoxys_4
	return

LittlerootTown_EventScript_Deoxys_1:
# 22 "data/maps/LittlerootTown/scripts.pory"
	call Won_or_Caught
	return

LittlerootTown_EventScript_Deoxys_2:
# 25 "data/maps/LittlerootTown/scripts.pory"
	call Won_or_Caught
	return

LittlerootTown_EventScript_Deoxys_3:
# 28 "data/maps/LittlerootTown/scripts.pory"
	call RanAway
	return

LittlerootTown_EventScript_Deoxys_4:
# 31 "data/maps/LittlerootTown/scripts.pory"
	call RanAway
	return


Won_or_Caught::
# 36 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 38 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 39 "data/maps/LittlerootTown/scripts.pory"
	msgbox Won_or_Caught_Text_0
	return


RanAway::
# 44 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 45 "data/maps/LittlerootTown/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 47 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 49 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 50 "data/maps/LittlerootTown/scripts.pory"
	msgbox RanAway_Text_1
	return


# 54 "data/maps/LittlerootTown/scripts.pory"

# 55 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 56 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 57 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 58 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 59 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 62 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 63 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 64 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 65 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 68 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 69 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 70 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 71 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 72 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 73 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 74 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 75 "data/maps/LittlerootTown/scripts.pory"

# 76 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 77 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 78 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 79 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 80 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 81 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 82 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 85 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 86 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 87 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 88 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 92 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 93 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 94 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 95 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 96 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 97 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 98 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 99 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 100 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 101 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 102 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 103 "data/maps/LittlerootTown/scripts.pory"
	end
# 104 "data/maps/LittlerootTown/scripts.pory"

# 105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 106 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 110 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 111 "data/maps/LittlerootTown/scripts.pory"
	return
# 112 "data/maps/LittlerootTown/scripts.pory"

# 113 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 114 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 115 "data/maps/LittlerootTown/scripts.pory"
	return
# 116 "data/maps/LittlerootTown/scripts.pory"

# 117 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 118 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 119 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 120 "data/maps/LittlerootTown/scripts.pory"
	return
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 123 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 124 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 125 "data/maps/LittlerootTown/scripts.pory"
	return
# 126 "data/maps/LittlerootTown/scripts.pory"

# 127 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 128 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 129 "data/maps/LittlerootTown/scripts.pory"
	return
# 130 "data/maps/LittlerootTown/scripts.pory"

# 131 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 132 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 133 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 134 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 135 "data/maps/LittlerootTown/scripts.pory"
	return
# 136 "data/maps/LittlerootTown/scripts.pory"

# 137 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 138 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 139 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 140 "data/maps/LittlerootTown/scripts.pory"
	return
# 141 "data/maps/LittlerootTown/scripts.pory"

# 142 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 143 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 144 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 145 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 146 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 147 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 148 "data/maps/LittlerootTown/scripts.pory"
	return
# 149 "data/maps/LittlerootTown/scripts.pory"

# 150 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 151 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 152 "data/maps/LittlerootTown/scripts.pory"
	return
# 153 "data/maps/LittlerootTown/scripts.pory"

# 154 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 155 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 156 "data/maps/LittlerootTown/scripts.pory"
	return
# 157 "data/maps/LittlerootTown/scripts.pory"

# 158 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 159 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 160 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 161 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 162 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 163 "data/maps/LittlerootTown/scripts.pory"

# 164 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 165 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 166 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 167 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 168 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 169 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 170 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 171 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 172 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 173 "data/maps/LittlerootTown/scripts.pory"
	end
# 174 "data/maps/LittlerootTown/scripts.pory"

# 175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 176 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 177 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 178 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 179 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 180 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 181 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 182 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 183 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 184 "data/maps/LittlerootTown/scripts.pory"
	end
# 185 "data/maps/LittlerootTown/scripts.pory"

# 186 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 187 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 188 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 189 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 190 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 192 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 193 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 194 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 195 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 197 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 198 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 199 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 200 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 202 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 203 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 204 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 205 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 207 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 208 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 209 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 210 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 212 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 213 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 214 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 215 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 216 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 217 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 218 "data/maps/LittlerootTown/scripts.pory"
	return
# 219 "data/maps/LittlerootTown/scripts.pory"

# 220 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 221 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 222 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 223 "data/maps/LittlerootTown/scripts.pory"

# 224 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 225 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 226 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 227 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 228 "data/maps/LittlerootTown/scripts.pory"

# 229 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 230 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 232 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 233 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 236 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 238 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 241 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 243 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 244 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 245 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 246 "data/maps/LittlerootTown/scripts.pory"

# 247 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 248 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 249 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 251 "data/maps/LittlerootTown/scripts.pory"

# 252 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 253 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 254 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 255 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 256 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 257 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 258 "data/maps/LittlerootTown/scripts.pory"

# 259 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 260 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 261 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 262 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 263 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 264 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 267 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 268 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 269 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 270 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 271 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 272 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 273 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 274 "data/maps/LittlerootTown/scripts.pory"
	end
# 275 "data/maps/LittlerootTown/scripts.pory"

# 276 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 277 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 278 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 279 "data/maps/LittlerootTown/scripts.pory"

# 280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 281 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 282 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 283 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 284 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 285 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 286 "data/maps/LittlerootTown/scripts.pory"
	end
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 289 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 290 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 291 "data/maps/LittlerootTown/scripts.pory"
	end
# 292 "data/maps/LittlerootTown/scripts.pory"

# 293 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 294 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 295 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 296 "data/maps/LittlerootTown/scripts.pory"
	end
# 297 "data/maps/LittlerootTown/scripts.pory"

# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 299 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 300 "data/maps/LittlerootTown/scripts.pory"
	end
# 301 "data/maps/LittlerootTown/scripts.pory"

# 302 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 303 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 304 "data/maps/LittlerootTown/scripts.pory"
	end
# 305 "data/maps/LittlerootTown/scripts.pory"

# 306 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 307 "data/maps/LittlerootTown/scripts.pory"
	lock
# 308 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 309 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 310 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 311 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 312 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 313 "data/maps/LittlerootTown/scripts.pory"
	release
# 314 "data/maps/LittlerootTown/scripts.pory"
	end
# 315 "data/maps/LittlerootTown/scripts.pory"

# 316 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 317 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 318 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 319 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 320 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 321 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 323 "data/maps/LittlerootTown/scripts.pory"
	release
# 324 "data/maps/LittlerootTown/scripts.pory"
	end
# 325 "data/maps/LittlerootTown/scripts.pory"

# 326 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 327 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 328 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 329 "data/maps/LittlerootTown/scripts.pory"
	release
# 330 "data/maps/LittlerootTown/scripts.pory"
	end
# 331 "data/maps/LittlerootTown/scripts.pory"

# 332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 333 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 334 "data/maps/LittlerootTown/scripts.pory"
	release
# 335 "data/maps/LittlerootTown/scripts.pory"
	end
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 338 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 339 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 340 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 341 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 342 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 343 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 344 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 345 "data/maps/LittlerootTown/scripts.pory"
	end
# 346 "data/maps/LittlerootTown/scripts.pory"

# 347 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 348 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 349 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 350 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 351 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 352 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 354 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 355 "data/maps/LittlerootTown/scripts.pory"
	return
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 358 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 360 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 361 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 362 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 370 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 371 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 372 "data/maps/LittlerootTown/scripts.pory"

# 373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 375 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 376 "data/maps/LittlerootTown/scripts.pory"

# 377 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 383 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 387 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 388 "data/maps/LittlerootTown/scripts.pory"

# 389 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 390 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 392 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 393 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 396 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 397 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 398 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 399 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 400 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 401 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 402 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 403 "data/maps/LittlerootTown/scripts.pory"
	end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 406 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 407 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 408 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 409 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 410 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 411 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 412 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 413 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 414 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 415 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 416 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 417 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 418 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 419 "data/maps/LittlerootTown/scripts.pory"

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 421 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 422 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 423 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 424 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 425 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 426 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 427 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 430 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 431 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 432 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 433 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 434 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 435 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 436 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 437 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 438 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 439 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 440 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 441 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 442 "data/maps/LittlerootTown/scripts.pory"
	end
# 443 "data/maps/LittlerootTown/scripts.pory"

# 444 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 445 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 446 "data/maps/LittlerootTown/scripts.pory"
	end
# 447 "data/maps/LittlerootTown/scripts.pory"

# 448 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 449 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 450 "data/maps/LittlerootTown/scripts.pory"
	end
# 451 "data/maps/LittlerootTown/scripts.pory"

# 452 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 453 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 454 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 455 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 456 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 457 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 461 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 462 "data/maps/LittlerootTown/scripts.pory"
	return
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 465 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 466 "data/maps/LittlerootTown/scripts.pory"
	return
# 467 "data/maps/LittlerootTown/scripts.pory"

# 468 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 469 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 470 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 471 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 472 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 473 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 474 "data/maps/LittlerootTown/scripts.pory"
	end
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 477 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 478 "data/maps/LittlerootTown/scripts.pory"
	return
# 479 "data/maps/LittlerootTown/scripts.pory"

# 480 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 481 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 482 "data/maps/LittlerootTown/scripts.pory"
	return
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 485 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 486 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 487 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 488 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 489 "data/maps/LittlerootTown/scripts.pory"
	end
# 490 "data/maps/LittlerootTown/scripts.pory"

# 491 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 492 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 493 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 494 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 495 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 496 "data/maps/LittlerootTown/scripts.pory"
	end
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 499 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 500 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 501 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 502 "data/maps/LittlerootTown/scripts.pory"
	end
# 503 "data/maps/LittlerootTown/scripts.pory"

# 504 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 505 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 506 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 507 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 508 "data/maps/LittlerootTown/scripts.pory"
	end
# 509 "data/maps/LittlerootTown/scripts.pory"

# 510 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 511 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 512 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 513 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 514 "data/maps/LittlerootTown/scripts.pory"
	end
# 515 "data/maps/LittlerootTown/scripts.pory"

# 516 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 517 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 518 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 519 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 520 "data/maps/LittlerootTown/scripts.pory"
	end
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 523 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 525 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 526 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 529 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 530 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 531 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 534 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 535 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 538 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 539 "data/maps/LittlerootTown/scripts.pory"
	end
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 542 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 543 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 544 "data/maps/LittlerootTown/scripts.pory"
	return
# 545 "data/maps/LittlerootTown/scripts.pory"

# 546 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 547 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 548 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 549 "data/maps/LittlerootTown/scripts.pory"
	return
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	return
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 557 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/LittlerootTown/scripts.pory"
	return
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 562 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 563 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 564 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 565 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 566 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 567 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 568 "data/maps/LittlerootTown/scripts.pory"
	return
# 569 "data/maps/LittlerootTown/scripts.pory"

# 570 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 571 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 572 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 573 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 574 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 575 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 576 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 577 "data/maps/LittlerootTown/scripts.pory"
	return
# 578 "data/maps/LittlerootTown/scripts.pory"

# 579 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 583 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 584 "data/maps/LittlerootTown/scripts.pory"
	return
# 585 "data/maps/LittlerootTown/scripts.pory"

# 586 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 590 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 591 "data/maps/LittlerootTown/scripts.pory"
	return
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 594 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 595 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 596 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 597 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 598 "data/maps/LittlerootTown/scripts.pory"
	return
# 599 "data/maps/LittlerootTown/scripts.pory"

# 600 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 601 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 602 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 603 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 604 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 605 "data/maps/LittlerootTown/scripts.pory"
	return
# 606 "data/maps/LittlerootTown/scripts.pory"

# 607 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 608 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 609 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 610 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 611 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 612 "data/maps/LittlerootTown/scripts.pory"
	return
# 613 "data/maps/LittlerootTown/scripts.pory"

# 614 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 615 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 616 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 617 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 618 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 619 "data/maps/LittlerootTown/scripts.pory"
	return
# 620 "data/maps/LittlerootTown/scripts.pory"

# 621 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 622 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 623 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 624 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 626 "data/maps/LittlerootTown/scripts.pory"
	return
# 627 "data/maps/LittlerootTown/scripts.pory"

# 628 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	return
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 636 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 638 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 639 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 640 "data/maps/LittlerootTown/scripts.pory"
	return
# 641 "data/maps/LittlerootTown/scripts.pory"

# 642 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 643 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	return
# 648 "data/maps/LittlerootTown/scripts.pory"

# 649 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 650 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 651 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 652 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 653 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 654 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 655 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 656 "data/maps/LittlerootTown/scripts.pory"
	return
# 657 "data/maps/LittlerootTown/scripts.pory"

# 658 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 659 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 660 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 661 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 662 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 663 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 664 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 665 "data/maps/LittlerootTown/scripts.pory"
	return
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	return
# 671 "data/maps/LittlerootTown/scripts.pory"

# 672 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 673 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 675 "data/maps/LittlerootTown/scripts.pory"
	return
# 676 "data/maps/LittlerootTown/scripts.pory"

# 677 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 678 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 680 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 685 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 687 "data/maps/LittlerootTown/scripts.pory"
	return
# 688 "data/maps/LittlerootTown/scripts.pory"

# 689 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 690 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 694 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 696 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 697 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 699 "data/maps/LittlerootTown/scripts.pory"
	return
# 700 "data/maps/LittlerootTown/scripts.pory"

# 701 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 702 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 704 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 706 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 709 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 711 "data/maps/LittlerootTown/scripts.pory"
	return
# 712 "data/maps/LittlerootTown/scripts.pory"

# 713 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 714 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 716 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 718 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 720 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 721 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 723 "data/maps/LittlerootTown/scripts.pory"
	return
# 724 "data/maps/LittlerootTown/scripts.pory"

# 725 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 726 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 728 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 729 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 730 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 731 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 732 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 733 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 734 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 735 "data/maps/LittlerootTown/scripts.pory"
	return
# 736 "data/maps/LittlerootTown/scripts.pory"

# 737 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 738 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 740 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 741 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 742 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 743 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 744 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 745 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 746 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 747 "data/maps/LittlerootTown/scripts.pory"
	return
# 748 "data/maps/LittlerootTown/scripts.pory"

# 749 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 750 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 751 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 752 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 754 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 756 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 757 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 758 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 759 "data/maps/LittlerootTown/scripts.pory"
	return
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 762 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 763 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 764 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 765 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 766 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 767 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 768 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 769 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 770 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 771 "data/maps/LittlerootTown/scripts.pory"
	return
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 780 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 781 "data/maps/LittlerootTown/scripts.pory"

# 782 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 789 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 796 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 797 "data/maps/LittlerootTown/scripts.pory"

# 798 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 804 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 805 "data/maps/LittlerootTown/scripts.pory"

# 806 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 809 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 810 "data/maps/LittlerootTown/scripts.pory"

# 811 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 815 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 816 "data/maps/LittlerootTown/scripts.pory"

# 817 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 821 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 822 "data/maps/LittlerootTown/scripts.pory"

# 823 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 827 "data/maps/LittlerootTown/scripts.pory"

# 828 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 835 "data/maps/LittlerootTown/scripts.pory"

# 836 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 842 "data/maps/LittlerootTown/scripts.pory"

# 843 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 849 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 857 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 865 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 874 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 880 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 881 "data/maps/LittlerootTown/scripts.pory"

# 882 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 887 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 888 "data/maps/LittlerootTown/scripts.pory"

# 889 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 894 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 895 "data/maps/LittlerootTown/scripts.pory"

# 896 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 900 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 901 "data/maps/LittlerootTown/scripts.pory"

# 902 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 904 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 909 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 910 "data/maps/LittlerootTown/scripts.pory"

# 911 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 917 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 918 "data/maps/LittlerootTown/scripts.pory"

# 919 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 921 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 924 "data/maps/LittlerootTown/scripts.pory"
	lock
# 925 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 926 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 927 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 928 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 929 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 930 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 931 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 932 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 933 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 934 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 935 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 936 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 937 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 938 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 939 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 940 "data/maps/LittlerootTown/scripts.pory"
	release
# 941 "data/maps/LittlerootTown/scripts.pory"
	end
# 942 "data/maps/LittlerootTown/scripts.pory"

# 943 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 944 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 945 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 946 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 947 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 948 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 949 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 950 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 951 "data/maps/LittlerootTown/scripts.pory"
	return
# 952 "data/maps/LittlerootTown/scripts.pory"

# 953 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomGoodbye::
# 954 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_MomGoodbye, MSGBOX_DEFAULT
# 955 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 956 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 957 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 958 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 959 "data/maps/LittlerootTown/scripts.pory"
	return
# 960 "data/maps/LittlerootTown/scripts.pory"

# 961 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN. It seems to\n"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "be a good place to live, don't you think?\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 969 "data/maps/LittlerootTown/scripts.pory"

# 970 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 972 "data/maps/LittlerootTown/scripts.pory"

# 973 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out,\n"
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "wear these RUNNING SHOES.\p"
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 977 "data/maps/LittlerootTown/scripts.pory"

# 978 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 981 "data/maps/LittlerootTown/scripts.pory"

# 982 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!”$"
# 987 "data/maps/LittlerootTown/scripts.pory"

# 988 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MomGoodbye:
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 1003 "data/maps/LittlerootTown/scripts.pory"

# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1008 "data/maps/LittlerootTown/scripts.pory"

# 1009 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1015 "data/maps/LittlerootTown/scripts.pory"

# 1016 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 1020 "data/maps/LittlerootTown/scripts.pory"

# 1021 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1022 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1024 "data/maps/LittlerootTown/scripts.pory"

# 1025 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1031 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1032 "data/maps/LittlerootTown/scripts.pory"

# 1033 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1034 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1035 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1036 "data/maps/LittlerootTown/scripts.pory"

# 1037 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1038 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1040 "data/maps/LittlerootTown/scripts.pory"

# 1041 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1044 "data/maps/LittlerootTown/scripts.pory"

# 1045 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1046 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1047 "data/maps/LittlerootTown/scripts.pory"

# 1048 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1050 "data/maps/LittlerootTown/scripts.pory"

# 1051 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1053 "data/maps/LittlerootTown/scripts.pory"

# 1054 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1055 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1058 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1059 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1061 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1062 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_Deoxys_Gift_Text_0:
# 3 "data/maps/LittlerootTown/scripts.pory"
	.string "Here. You'll need this.$"

Won_or_Caught_Text_0:
# 39 "data/maps/LittlerootTown/scripts.pory"
	.string "You are the POKéMON Master!$"

RanAway_Text_0:
# 45 "data/maps/LittlerootTown/scripts.pory"
	.string "Xyyyyyssss...$"

RanAway_Text_1:
# 50 "data/maps/LittlerootTown/scripts.pory"
	.string "You are not the POKéMON Master...$"

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


LittlerootTownTest_EventScript_Trader::
# 55 "data/maps/LittlerootTown/scripts.pory"
	lock
# 56 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 57 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, LittlerootTownTest_EventScript_TradeCompleted
# 58 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SANDILE
# 59 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 60 "data/maps/LittlerootTown/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 61 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 62 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 63 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTownTest_EventScript_DeclineTrade
# 64 "data/maps/LittlerootTown/scripts.pory"
	special ChoosePartyMon
# 65 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 66 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 67 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTownTest_EventScript_DeclineTrade
# 68 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 69 "data/maps/LittlerootTown/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 70 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 71 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTownTest_EventScript_NotRequestedMon
# 72 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 73 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 74 "data/maps/LittlerootTown/scripts.pory"
	special CreateInGameTradePokemon
# 75 "data/maps/LittlerootTown/scripts.pory"
	special DoInGameTradeScene
# 76 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 77 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 78 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 79 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTownTest_EventScript_DeclineTrade::
# 83 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 84 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTownTest_EventScript_NotRequestedMon::
# 88 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 89 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 90 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTownTest_EventScript_TradeCompleted::
# 94 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 95 "data/maps/LittlerootTown/scripts.pory"
	release
	return


# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 130 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 131 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 132 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 133 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 134 "data/maps/LittlerootTown/scripts.pory"

# 135 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 136 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 137 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 138 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 139 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 140 "data/maps/LittlerootTown/scripts.pory"

# 141 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 142 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 143 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 144 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 145 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 146 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 147 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 148 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 149 "data/maps/LittlerootTown/scripts.pory"

# 150 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 151 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 152 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 153 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 154 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 155 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 156 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 157 "data/maps/LittlerootTown/scripts.pory"

# 158 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 159 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 160 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 161 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 162 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 163 "data/maps/LittlerootTown/scripts.pory"

# 164 "data/maps/LittlerootTown/scripts.pory"

# 165 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 166 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 167 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 168 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 169 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 170 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 171 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 172 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 173 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 174 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 175 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 176 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 177 "data/maps/LittlerootTown/scripts.pory"
	end
# 178 "data/maps/LittlerootTown/scripts.pory"

# 179 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 180 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 181 "data/maps/LittlerootTown/scripts.pory"
	return
# 182 "data/maps/LittlerootTown/scripts.pory"

# 183 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 184 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 185 "data/maps/LittlerootTown/scripts.pory"
	return
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 188 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 189 "data/maps/LittlerootTown/scripts.pory"
	return
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 192 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 193 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 194 "data/maps/LittlerootTown/scripts.pory"
	return
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 197 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 198 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 199 "data/maps/LittlerootTown/scripts.pory"
	return
# 200 "data/maps/LittlerootTown/scripts.pory"

# 201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 202 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 203 "data/maps/LittlerootTown/scripts.pory"
	return
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 206 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 207 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 208 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 209 "data/maps/LittlerootTown/scripts.pory"
	return
# 210 "data/maps/LittlerootTown/scripts.pory"

# 211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 212 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 213 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 214 "data/maps/LittlerootTown/scripts.pory"
	return
# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 217 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 218 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 219 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 220 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 221 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 222 "data/maps/LittlerootTown/scripts.pory"
	return
# 223 "data/maps/LittlerootTown/scripts.pory"

# 224 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 225 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 226 "data/maps/LittlerootTown/scripts.pory"
	return
# 227 "data/maps/LittlerootTown/scripts.pory"

# 228 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 229 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 230 "data/maps/LittlerootTown/scripts.pory"
	return
# 231 "data/maps/LittlerootTown/scripts.pory"

# 232 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 233 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 234 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 235 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 236 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 237 "data/maps/LittlerootTown/scripts.pory"

# 238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 239 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 240 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 241 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 242 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 243 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 244 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 245 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 246 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 247 "data/maps/LittlerootTown/scripts.pory"
	end
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 250 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 251 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 252 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 253 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 254 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 255 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 256 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 257 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 258 "data/maps/LittlerootTown/scripts.pory"
	end
# 259 "data/maps/LittlerootTown/scripts.pory"

# 260 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 261 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 262 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 263 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 264 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 265 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 266 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 267 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 268 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 269 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 270 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 271 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 272 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 273 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 274 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 275 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 277 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 278 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 279 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 281 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 282 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 283 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 284 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 285 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 286 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 287 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 288 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 289 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 290 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 291 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 292 "data/maps/LittlerootTown/scripts.pory"
	return
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 295 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 296 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 297 "data/maps/LittlerootTown/scripts.pory"

# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 299 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 300 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 301 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 304 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 305 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 306 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 308 "data/maps/LittlerootTown/scripts.pory"

# 309 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 310 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 311 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 312 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 315 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 316 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 319 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 320 "data/maps/LittlerootTown/scripts.pory"

# 321 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 324 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 325 "data/maps/LittlerootTown/scripts.pory"

# 326 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 327 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 328 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 329 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 330 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 331 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 334 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 335 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 336 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 337 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 338 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 339 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 340 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 341 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 342 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 343 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 344 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 345 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 346 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 347 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 348 "data/maps/LittlerootTown/scripts.pory"
	end
# 349 "data/maps/LittlerootTown/scripts.pory"

# 350 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 351 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 352 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 353 "data/maps/LittlerootTown/scripts.pory"

# 354 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 355 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 356 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 357 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 358 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 359 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 360 "data/maps/LittlerootTown/scripts.pory"
	end
# 361 "data/maps/LittlerootTown/scripts.pory"

# 362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 363 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 364 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 365 "data/maps/LittlerootTown/scripts.pory"
	end
# 366 "data/maps/LittlerootTown/scripts.pory"

# 367 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 368 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 369 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 370 "data/maps/LittlerootTown/scripts.pory"
	end
# 371 "data/maps/LittlerootTown/scripts.pory"

# 372 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 373 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 374 "data/maps/LittlerootTown/scripts.pory"
	end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 377 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 378 "data/maps/LittlerootTown/scripts.pory"
	end
# 379 "data/maps/LittlerootTown/scripts.pory"

# 380 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 381 "data/maps/LittlerootTown/scripts.pory"
	lock
# 382 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 383 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 384 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 385 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 386 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 387 "data/maps/LittlerootTown/scripts.pory"
	release
# 388 "data/maps/LittlerootTown/scripts.pory"
	end
# 389 "data/maps/LittlerootTown/scripts.pory"

# 390 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 391 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 392 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 393 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 394 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 395 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 397 "data/maps/LittlerootTown/scripts.pory"
	release
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 401 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 402 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 403 "data/maps/LittlerootTown/scripts.pory"
	release
# 404 "data/maps/LittlerootTown/scripts.pory"
	end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 407 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 408 "data/maps/LittlerootTown/scripts.pory"
	release
# 409 "data/maps/LittlerootTown/scripts.pory"
	end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 412 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 413 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 414 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 415 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 416 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 417 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 418 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 419 "data/maps/LittlerootTown/scripts.pory"
	end
# 420 "data/maps/LittlerootTown/scripts.pory"

# 421 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 422 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 423 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 424 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 425 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 426 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 427 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 429 "data/maps/LittlerootTown/scripts.pory"
	return
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 432 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 433 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 434 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 435 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 436 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 437 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 438 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 439 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 440 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 442 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 443 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 444 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 445 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 448 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 449 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 450 "data/maps/LittlerootTown/scripts.pory"

# 451 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 452 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 453 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 454 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 455 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 456 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 457 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 458 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 459 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 460 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 461 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 462 "data/maps/LittlerootTown/scripts.pory"

# 463 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 464 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 465 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 466 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 467 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 468 "data/maps/LittlerootTown/scripts.pory"

# 469 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 470 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 471 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 472 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 473 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 474 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 475 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 476 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 477 "data/maps/LittlerootTown/scripts.pory"
	end
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 480 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 481 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 482 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 483 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 484 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 485 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 486 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 487 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 488 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 489 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 490 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 491 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 492 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 493 "data/maps/LittlerootTown/scripts.pory"

# 494 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 495 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 496 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 497 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 498 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 499 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 500 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 501 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 502 "data/maps/LittlerootTown/scripts.pory"

# 503 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 504 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 505 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 506 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 507 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 508 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 509 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 510 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 511 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 512 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 513 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 515 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 516 "data/maps/LittlerootTown/scripts.pory"
	end
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 519 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 520 "data/maps/LittlerootTown/scripts.pory"
	end
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 523 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 524 "data/maps/LittlerootTown/scripts.pory"
	end
# 525 "data/maps/LittlerootTown/scripts.pory"

# 526 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 527 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 528 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 531 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 532 "data/maps/LittlerootTown/scripts.pory"
	end
# 533 "data/maps/LittlerootTown/scripts.pory"

# 534 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 535 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 536 "data/maps/LittlerootTown/scripts.pory"
	return
# 537 "data/maps/LittlerootTown/scripts.pory"

# 538 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 539 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 540 "data/maps/LittlerootTown/scripts.pory"
	return
# 541 "data/maps/LittlerootTown/scripts.pory"

# 542 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 543 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 544 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 545 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 546 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 547 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 548 "data/maps/LittlerootTown/scripts.pory"
	end
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 551 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 552 "data/maps/LittlerootTown/scripts.pory"
	return
# 553 "data/maps/LittlerootTown/scripts.pory"

# 554 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 555 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 556 "data/maps/LittlerootTown/scripts.pory"
	return
# 557 "data/maps/LittlerootTown/scripts.pory"

# 558 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 559 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 560 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 561 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 562 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 563 "data/maps/LittlerootTown/scripts.pory"
	end
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 566 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 567 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 568 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 569 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 570 "data/maps/LittlerootTown/scripts.pory"
	end
# 571 "data/maps/LittlerootTown/scripts.pory"

# 572 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 573 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 574 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 575 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 576 "data/maps/LittlerootTown/scripts.pory"
	end
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 579 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 580 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 581 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 582 "data/maps/LittlerootTown/scripts.pory"
	end
# 583 "data/maps/LittlerootTown/scripts.pory"

# 584 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 585 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 586 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 587 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 588 "data/maps/LittlerootTown/scripts.pory"
	end
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 591 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 592 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 593 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 594 "data/maps/LittlerootTown/scripts.pory"
	end
# 595 "data/maps/LittlerootTown/scripts.pory"

# 596 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 597 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 598 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 599 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 600 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 601 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 602 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 603 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 604 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 605 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 608 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 609 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 612 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 613 "data/maps/LittlerootTown/scripts.pory"
	end
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 617 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 621 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 622 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	return
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 636 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 637 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 638 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 639 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 640 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 641 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 642 "data/maps/LittlerootTown/scripts.pory"
	return
# 643 "data/maps/LittlerootTown/scripts.pory"

# 644 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 645 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 646 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 647 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 648 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 649 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 650 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 651 "data/maps/LittlerootTown/scripts.pory"
	return
# 652 "data/maps/LittlerootTown/scripts.pory"

# 653 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 654 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	return
# 659 "data/maps/LittlerootTown/scripts.pory"

# 660 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 661 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 663 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown/scripts.pory"
	return
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 672 "data/maps/LittlerootTown/scripts.pory"
	return
# 673 "data/maps/LittlerootTown/scripts.pory"

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 675 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown/scripts.pory"
	return
# 680 "data/maps/LittlerootTown/scripts.pory"

# 681 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	return
# 687 "data/maps/LittlerootTown/scripts.pory"

# 688 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 689 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 691 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 693 "data/maps/LittlerootTown/scripts.pory"
	return
# 694 "data/maps/LittlerootTown/scripts.pory"

# 695 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 700 "data/maps/LittlerootTown/scripts.pory"
	return
# 701 "data/maps/LittlerootTown/scripts.pory"

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 703 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/LittlerootTown/scripts.pory"
	return
# 708 "data/maps/LittlerootTown/scripts.pory"

# 709 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	return
# 715 "data/maps/LittlerootTown/scripts.pory"

# 716 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 721 "data/maps/LittlerootTown/scripts.pory"
	return
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 724 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 725 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 726 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 727 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 728 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 729 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 730 "data/maps/LittlerootTown/scripts.pory"
	return
# 731 "data/maps/LittlerootTown/scripts.pory"

# 732 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 733 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 734 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 735 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 736 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 737 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 738 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 739 "data/maps/LittlerootTown/scripts.pory"
	return
# 740 "data/maps/LittlerootTown/scripts.pory"

# 741 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 742 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 743 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 744 "data/maps/LittlerootTown/scripts.pory"
	return
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 747 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 748 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 749 "data/maps/LittlerootTown/scripts.pory"
	return
# 750 "data/maps/LittlerootTown/scripts.pory"

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 752 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 754 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 756 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 757 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 758 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 759 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 760 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 761 "data/maps/LittlerootTown/scripts.pory"
	return
# 762 "data/maps/LittlerootTown/scripts.pory"

# 763 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 764 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 765 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 766 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 767 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 768 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 769 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 770 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 771 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 772 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 773 "data/maps/LittlerootTown/scripts.pory"
	return
# 774 "data/maps/LittlerootTown/scripts.pory"

# 775 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 776 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 777 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 778 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 779 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 780 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 781 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 782 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 783 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 784 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 785 "data/maps/LittlerootTown/scripts.pory"
	return
# 786 "data/maps/LittlerootTown/scripts.pory"

# 787 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 788 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 789 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 790 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 791 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 792 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 793 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 794 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 795 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 796 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 797 "data/maps/LittlerootTown/scripts.pory"
	return
# 798 "data/maps/LittlerootTown/scripts.pory"

# 799 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 800 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 801 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 803 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 804 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 805 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 806 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 807 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 809 "data/maps/LittlerootTown/scripts.pory"
	return
# 810 "data/maps/LittlerootTown/scripts.pory"

# 811 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 812 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 813 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 814 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 815 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 816 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 817 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 818 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 819 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 820 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 821 "data/maps/LittlerootTown/scripts.pory"
	return
# 822 "data/maps/LittlerootTown/scripts.pory"

# 823 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 824 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 825 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 826 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 827 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 828 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 829 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 831 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 832 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 833 "data/maps/LittlerootTown/scripts.pory"
	return
# 834 "data/maps/LittlerootTown/scripts.pory"

# 835 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 836 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 837 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 838 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 839 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 840 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 841 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 842 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 843 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 844 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 845 "data/maps/LittlerootTown/scripts.pory"
	return
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 854 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 855 "data/maps/LittlerootTown/scripts.pory"

# 856 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 863 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 864 "data/maps/LittlerootTown/scripts.pory"

# 865 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 871 "data/maps/LittlerootTown/scripts.pory"

# 872 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 879 "data/maps/LittlerootTown/scripts.pory"

# 880 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 883 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 889 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 890 "data/maps/LittlerootTown/scripts.pory"

# 891 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 895 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 896 "data/maps/LittlerootTown/scripts.pory"

# 897 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 900 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 901 "data/maps/LittlerootTown/scripts.pory"

# 902 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 904 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 908 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 909 "data/maps/LittlerootTown/scripts.pory"

# 910 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 915 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 916 "data/maps/LittlerootTown/scripts.pory"

# 917 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 923 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 924 "data/maps/LittlerootTown/scripts.pory"

# 925 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 927 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 929 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 931 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 932 "data/maps/LittlerootTown/scripts.pory"

# 933 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 935 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 936 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 939 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 940 "data/maps/LittlerootTown/scripts.pory"

# 941 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 943 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 944 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 948 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 949 "data/maps/LittlerootTown/scripts.pory"

# 950 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 954 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 955 "data/maps/LittlerootTown/scripts.pory"

# 956 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 957 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 958 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 961 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 962 "data/maps/LittlerootTown/scripts.pory"

# 963 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 964 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 965 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 968 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 969 "data/maps/LittlerootTown/scripts.pory"

# 970 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 971 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 973 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 974 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 975 "data/maps/LittlerootTown/scripts.pory"

# 976 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 977 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 978 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 979 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 980 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 981 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 983 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 984 "data/maps/LittlerootTown/scripts.pory"

# 985 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 986 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 987 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 988 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 989 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 990 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 991 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 992 "data/maps/LittlerootTown/scripts.pory"

# 993 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 994 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 995 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 996 "data/maps/LittlerootTown/scripts.pory"

# 997 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 998 "data/maps/LittlerootTown/scripts.pory"
	lock
# 999 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1000 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1001 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1002 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1003 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 1004 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 1005 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1006 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1007 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1008 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1009 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1010 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 1011 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1012 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1013 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 1014 "data/maps/LittlerootTown/scripts.pory"
	release
# 1015 "data/maps/LittlerootTown/scripts.pory"
	end
# 1016 "data/maps/LittlerootTown/scripts.pory"

# 1017 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1018 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1019 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1020 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1021 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1022 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1023 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1024 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1025 "data/maps/LittlerootTown/scripts.pory"
	return
# 1026 "data/maps/LittlerootTown/scripts.pory"

# 1027 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomGoodbye::
# 1028 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_MomGoodbye, MSGBOX_DEFAULT
# 1029 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1030 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1031 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1032 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1033 "data/maps/LittlerootTown/scripts.pory"
	return
# 1034 "data/maps/LittlerootTown/scripts.pory"

# 1035 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1038 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN. It seems to\n"
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "be a good place to live, don't you think?\p"
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1043 "data/maps/LittlerootTown/scripts.pory"

# 1044 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1046 "data/maps/LittlerootTown/scripts.pory"

# 1047 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out,\n"
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "wear these RUNNING SHOES.\p"
# 1050 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 1051 "data/maps/LittlerootTown/scripts.pory"

# 1052 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1053 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1054 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 1055 "data/maps/LittlerootTown/scripts.pory"

# 1056 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1058 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 1059 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!”$"
# 1061 "data/maps/LittlerootTown/scripts.pory"

# 1062 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MomGoodbye:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1064 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 1065 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 1066 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 1067 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 1068 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 1069 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1070 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1071 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1072 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 1074 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1075 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1076 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 1077 "data/maps/LittlerootTown/scripts.pory"

# 1078 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1079 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 1080 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 1081 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1082 "data/maps/LittlerootTown/scripts.pory"

# 1083 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1084 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 1085 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1087 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 1088 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1089 "data/maps/LittlerootTown/scripts.pory"

# 1090 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1091 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1092 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1093 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 1094 "data/maps/LittlerootTown/scripts.pory"

# 1095 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1096 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1097 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1098 "data/maps/LittlerootTown/scripts.pory"

# 1099 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1100 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1102 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1103 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1104 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1105 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1106 "data/maps/LittlerootTown/scripts.pory"

# 1107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1108 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1109 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1110 "data/maps/LittlerootTown/scripts.pory"

# 1111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1112 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1113 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1114 "data/maps/LittlerootTown/scripts.pory"

# 1115 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1116 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1117 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1118 "data/maps/LittlerootTown/scripts.pory"

# 1119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1120 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1121 "data/maps/LittlerootTown/scripts.pory"

# 1122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1123 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1124 "data/maps/LittlerootTown/scripts.pory"

# 1125 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1126 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1127 "data/maps/LittlerootTown/scripts.pory"

# 1128 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1129 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1130 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1131 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1132 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1133 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1134 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1135 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1136 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1137 "data/maps/LittlerootTown/scripts.pory"
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

LittlerootTownTest_Text_IllTradeIfYouWant::
# 98 "data/maps/LittlerootTown/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
	.string "Sure, I knew that.\p"
	.string "But if you really want, I'm willing\n"
	.string "to trade it to you.\p"
	.string "I'll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"

LittlerootTownTest_Text_PleaseBeGoodToMyPokemon::
# 107 "data/maps/LittlerootTown/scripts.pory"
	.string "Eheheh…\n"
	.string "Please be good to my POKéMON.$"

LittlerootTownTest_Text_DoesntLookLikeMonToMe::
# 112 "data/maps/LittlerootTown/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"

LittlerootTownTest_Text_YouDontWantToThatsOkay::
# 117 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
	.string "But my POKéMON is cute, you know…$"

LittlerootTownTest_Text_AnyPokemonCanBeCute::
# 122 "data/maps/LittlerootTown/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
	.string "it with care and kindness.$"

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


TestBattleDeltaTwins::
# 128 "data/maps/LittlerootTown/scripts.pory"
	lock
# 129 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 130 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_LYLE, RusturfTunnel_Text_GruntDefeat, TRAINER_IVAN, RusturfTunnel_Text_GruntDefeat
# 131 "data/maps/LittlerootTown/scripts.pory"
	release
	return


ZooGirafarig::
# 135 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 136 "data/maps/LittlerootTown/scripts.pory"
	showmonpic SPECIES_GIRAFARIG, 10, 3
# 137 "data/maps/LittlerootTown/scripts.pory"
	setseenmon SPECIES_GIRAFARIG
# 138 "data/maps/LittlerootTown/scripts.pory"
	msgbox ZooGirafarig_Text_0
# 139 "data/maps/LittlerootTown/scripts.pory"
	hidemonpic
# 140 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


# 143 "data/maps/LittlerootTown/scripts.pory"

# 144 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 145 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 146 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 147 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 148 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 149 "data/maps/LittlerootTown/scripts.pory"

# 150 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 151 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 152 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 153 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 154 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 155 "data/maps/LittlerootTown/scripts.pory"

# 156 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 157 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 158 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 159 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 160 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 161 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 162 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 163 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 164 "data/maps/LittlerootTown/scripts.pory"

# 165 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 166 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 167 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 168 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 169 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 170 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 171 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 172 "data/maps/LittlerootTown/scripts.pory"

# 173 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 174 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 175 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 176 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 177 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 178 "data/maps/LittlerootTown/scripts.pory"

# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 181 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 182 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 183 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 184 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 185 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 186 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 187 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 188 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 189 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 190 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 191 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 192 "data/maps/LittlerootTown/scripts.pory"
	end
# 193 "data/maps/LittlerootTown/scripts.pory"

# 194 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 195 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 196 "data/maps/LittlerootTown/scripts.pory"
	return
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 199 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 200 "data/maps/LittlerootTown/scripts.pory"
	return
# 201 "data/maps/LittlerootTown/scripts.pory"

# 202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 203 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 204 "data/maps/LittlerootTown/scripts.pory"
	return
# 205 "data/maps/LittlerootTown/scripts.pory"

# 206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 207 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 208 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 209 "data/maps/LittlerootTown/scripts.pory"
	return
# 210 "data/maps/LittlerootTown/scripts.pory"

# 211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 212 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 213 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 214 "data/maps/LittlerootTown/scripts.pory"
	return
# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 217 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 218 "data/maps/LittlerootTown/scripts.pory"
	return
# 219 "data/maps/LittlerootTown/scripts.pory"

# 220 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 221 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 222 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 223 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 224 "data/maps/LittlerootTown/scripts.pory"
	return
# 225 "data/maps/LittlerootTown/scripts.pory"

# 226 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 227 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 228 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 229 "data/maps/LittlerootTown/scripts.pory"
	return
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 232 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 233 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 234 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 235 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 236 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 237 "data/maps/LittlerootTown/scripts.pory"
	return
# 238 "data/maps/LittlerootTown/scripts.pory"

# 239 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 240 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 241 "data/maps/LittlerootTown/scripts.pory"
	return
# 242 "data/maps/LittlerootTown/scripts.pory"

# 243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 244 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 245 "data/maps/LittlerootTown/scripts.pory"
	return
# 246 "data/maps/LittlerootTown/scripts.pory"

# 247 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 248 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 249 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 250 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 251 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 254 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 255 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 256 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 257 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 258 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 259 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 260 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 261 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 262 "data/maps/LittlerootTown/scripts.pory"
	end
# 263 "data/maps/LittlerootTown/scripts.pory"

# 264 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 265 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 266 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 267 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 268 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 269 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 270 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 271 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 272 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 273 "data/maps/LittlerootTown/scripts.pory"
	end
# 274 "data/maps/LittlerootTown/scripts.pory"

# 275 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 276 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 277 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 278 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 279 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 281 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 282 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 283 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 284 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 285 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 286 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 287 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 288 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 289 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 292 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 293 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 294 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 295 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 296 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 298 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 299 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 301 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 302 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 303 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 304 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 305 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 306 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 307 "data/maps/LittlerootTown/scripts.pory"
	return
# 308 "data/maps/LittlerootTown/scripts.pory"

# 309 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 310 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 311 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 312 "data/maps/LittlerootTown/scripts.pory"

# 313 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 314 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 317 "data/maps/LittlerootTown/scripts.pory"

# 318 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 319 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 320 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 322 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 323 "data/maps/LittlerootTown/scripts.pory"

# 324 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 326 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 327 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 330 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 331 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 339 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 340 "data/maps/LittlerootTown/scripts.pory"

# 341 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 342 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 343 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 344 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 345 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 346 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 347 "data/maps/LittlerootTown/scripts.pory"

# 348 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 349 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 350 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 351 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 352 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 354 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 355 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 356 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 357 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 358 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 359 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 360 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 361 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 362 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 363 "data/maps/LittlerootTown/scripts.pory"
	end
# 364 "data/maps/LittlerootTown/scripts.pory"

# 365 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 366 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 367 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 370 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 371 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 372 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 373 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 374 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 375 "data/maps/LittlerootTown/scripts.pory"
	end
# 376 "data/maps/LittlerootTown/scripts.pory"

# 377 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 378 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 379 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 380 "data/maps/LittlerootTown/scripts.pory"
	end
# 381 "data/maps/LittlerootTown/scripts.pory"

# 382 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 383 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 384 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 385 "data/maps/LittlerootTown/scripts.pory"
	end
# 386 "data/maps/LittlerootTown/scripts.pory"

# 387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 388 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 389 "data/maps/LittlerootTown/scripts.pory"
	end
# 390 "data/maps/LittlerootTown/scripts.pory"

# 391 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 392 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 393 "data/maps/LittlerootTown/scripts.pory"
	end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 396 "data/maps/LittlerootTown/scripts.pory"
	lock
# 397 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 398 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 399 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 400 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 401 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 402 "data/maps/LittlerootTown/scripts.pory"
	release
# 403 "data/maps/LittlerootTown/scripts.pory"
	end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 406 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 407 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 408 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 409 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 410 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 411 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 412 "data/maps/LittlerootTown/scripts.pory"
	release
# 413 "data/maps/LittlerootTown/scripts.pory"
	end
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 416 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 417 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 418 "data/maps/LittlerootTown/scripts.pory"
	release
# 419 "data/maps/LittlerootTown/scripts.pory"
	end
# 420 "data/maps/LittlerootTown/scripts.pory"

# 421 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 422 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 423 "data/maps/LittlerootTown/scripts.pory"
	release
# 424 "data/maps/LittlerootTown/scripts.pory"
	end
# 425 "data/maps/LittlerootTown/scripts.pory"

# 426 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 427 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 428 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 429 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 430 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 431 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 432 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 433 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 434 "data/maps/LittlerootTown/scripts.pory"
	end
# 435 "data/maps/LittlerootTown/scripts.pory"

# 436 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 437 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 438 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 439 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 440 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 441 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 442 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 443 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 444 "data/maps/LittlerootTown/scripts.pory"
	return
# 445 "data/maps/LittlerootTown/scripts.pory"

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 447 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 448 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 449 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 450 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 451 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 452 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 453 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 454 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 455 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 456 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 457 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 458 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 459 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 460 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 463 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 464 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 467 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 468 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 469 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 470 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 471 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 472 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 473 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 474 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 475 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 476 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 479 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 480 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 481 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 482 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 485 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 486 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 487 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 488 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 489 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 490 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 491 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 492 "data/maps/LittlerootTown/scripts.pory"
	end
# 493 "data/maps/LittlerootTown/scripts.pory"

# 494 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 495 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 496 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 497 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 498 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 499 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 500 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 501 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 502 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 503 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 504 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 505 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 506 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 507 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 508 "data/maps/LittlerootTown/scripts.pory"

# 509 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 510 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 511 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 512 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 513 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 514 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 515 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 516 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 519 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 520 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 521 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 522 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 523 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 524 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 525 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 526 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 527 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 528 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 529 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 530 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 531 "data/maps/LittlerootTown/scripts.pory"
	end
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 534 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 535 "data/maps/LittlerootTown/scripts.pory"
	end
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 538 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 539 "data/maps/LittlerootTown/scripts.pory"
	end
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 542 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 543 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 544 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 545 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 546 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 547 "data/maps/LittlerootTown/scripts.pory"
	end
# 548 "data/maps/LittlerootTown/scripts.pory"

# 549 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 550 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 551 "data/maps/LittlerootTown/scripts.pory"
	return
# 552 "data/maps/LittlerootTown/scripts.pory"

# 553 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 554 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 555 "data/maps/LittlerootTown/scripts.pory"
	return
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 558 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 559 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 560 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 561 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 562 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 563 "data/maps/LittlerootTown/scripts.pory"
	end
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 566 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 567 "data/maps/LittlerootTown/scripts.pory"
	return
# 568 "data/maps/LittlerootTown/scripts.pory"

# 569 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 570 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 571 "data/maps/LittlerootTown/scripts.pory"
	return
# 572 "data/maps/LittlerootTown/scripts.pory"

# 573 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 574 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 575 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 577 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 578 "data/maps/LittlerootTown/scripts.pory"
	end
# 579 "data/maps/LittlerootTown/scripts.pory"

# 580 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 581 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 582 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 583 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 584 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 585 "data/maps/LittlerootTown/scripts.pory"
	end
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 588 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 589 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 590 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 591 "data/maps/LittlerootTown/scripts.pory"
	end
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 594 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 595 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 596 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 597 "data/maps/LittlerootTown/scripts.pory"
	end
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 600 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 601 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 602 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 603 "data/maps/LittlerootTown/scripts.pory"
	end
# 604 "data/maps/LittlerootTown/scripts.pory"

# 605 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 606 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 607 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 608 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 609 "data/maps/LittlerootTown/scripts.pory"
	end
# 610 "data/maps/LittlerootTown/scripts.pory"

# 611 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 612 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 615 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 618 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 619 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 620 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 623 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 624 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 625 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 626 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 627 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 628 "data/maps/LittlerootTown/scripts.pory"
	end
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 631 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 632 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 633 "data/maps/LittlerootTown/scripts.pory"
	return
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 636 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 637 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 638 "data/maps/LittlerootTown/scripts.pory"
	return
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	return
# 644 "data/maps/LittlerootTown/scripts.pory"

# 645 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 646 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown/scripts.pory"
	return
# 649 "data/maps/LittlerootTown/scripts.pory"

# 650 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 651 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 652 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 653 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 654 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 655 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 656 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 657 "data/maps/LittlerootTown/scripts.pory"
	return
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 660 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 661 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 662 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 663 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 664 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 665 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 666 "data/maps/LittlerootTown/scripts.pory"
	return
# 667 "data/maps/LittlerootTown/scripts.pory"

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 673 "data/maps/LittlerootTown/scripts.pory"
	return
# 674 "data/maps/LittlerootTown/scripts.pory"

# 675 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 680 "data/maps/LittlerootTown/scripts.pory"
	return
# 681 "data/maps/LittlerootTown/scripts.pory"

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 687 "data/maps/LittlerootTown/scripts.pory"
	return
# 688 "data/maps/LittlerootTown/scripts.pory"

# 689 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 690 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 694 "data/maps/LittlerootTown/scripts.pory"
	return
# 695 "data/maps/LittlerootTown/scripts.pory"

# 696 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 697 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 699 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 700 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 701 "data/maps/LittlerootTown/scripts.pory"
	return
# 702 "data/maps/LittlerootTown/scripts.pory"

# 703 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 704 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 706 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/LittlerootTown/scripts.pory"
	return
# 709 "data/maps/LittlerootTown/scripts.pory"

# 710 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 711 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 712 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 713 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/LittlerootTown/scripts.pory"
	return
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 718 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 720 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/LittlerootTown/scripts.pory"
	return
# 723 "data/maps/LittlerootTown/scripts.pory"

# 724 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 725 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 726 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 727 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 729 "data/maps/LittlerootTown/scripts.pory"
	return
# 730 "data/maps/LittlerootTown/scripts.pory"

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 732 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 733 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 734 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 735 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 736 "data/maps/LittlerootTown/scripts.pory"
	return
# 737 "data/maps/LittlerootTown/scripts.pory"

# 738 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 739 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 740 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 741 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 742 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 743 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 744 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 745 "data/maps/LittlerootTown/scripts.pory"
	return
# 746 "data/maps/LittlerootTown/scripts.pory"

# 747 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 748 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 749 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 750 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 751 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 752 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 753 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 754 "data/maps/LittlerootTown/scripts.pory"
	return
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 757 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 758 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 759 "data/maps/LittlerootTown/scripts.pory"
	return
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 762 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 763 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 764 "data/maps/LittlerootTown/scripts.pory"
	return
# 765 "data/maps/LittlerootTown/scripts.pory"

# 766 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 767 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 769 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 770 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 771 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 772 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 773 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 774 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 776 "data/maps/LittlerootTown/scripts.pory"
	return
# 777 "data/maps/LittlerootTown/scripts.pory"

# 778 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 779 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 781 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 782 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 783 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 784 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 785 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 786 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 788 "data/maps/LittlerootTown/scripts.pory"
	return
# 789 "data/maps/LittlerootTown/scripts.pory"

# 790 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 791 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 793 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 794 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 795 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 796 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 797 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 798 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 800 "data/maps/LittlerootTown/scripts.pory"
	return
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 803 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 805 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 806 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 807 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 809 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 810 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 811 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 812 "data/maps/LittlerootTown/scripts.pory"
	return
# 813 "data/maps/LittlerootTown/scripts.pory"

# 814 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 815 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 816 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 817 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 818 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 819 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 820 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 821 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 822 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 823 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 824 "data/maps/LittlerootTown/scripts.pory"
	return
# 825 "data/maps/LittlerootTown/scripts.pory"

# 826 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 827 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 828 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 829 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 830 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 831 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 832 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 833 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 834 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 835 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 836 "data/maps/LittlerootTown/scripts.pory"
	return
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 839 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 840 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 841 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 842 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 843 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 844 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 845 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 846 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 847 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 848 "data/maps/LittlerootTown/scripts.pory"
	return
# 849 "data/maps/LittlerootTown/scripts.pory"

# 850 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 851 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 852 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 853 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 854 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 855 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 856 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 857 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 858 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 859 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 860 "data/maps/LittlerootTown/scripts.pory"
	return
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 869 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 870 "data/maps/LittlerootTown/scripts.pory"

# 871 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 878 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 879 "data/maps/LittlerootTown/scripts.pory"

# 880 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 885 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 886 "data/maps/LittlerootTown/scripts.pory"

# 887 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 893 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 894 "data/maps/LittlerootTown/scripts.pory"

# 895 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 898 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 899 "data/maps/LittlerootTown/scripts.pory"

# 900 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 904 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 910 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 911 "data/maps/LittlerootTown/scripts.pory"

# 912 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 915 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 916 "data/maps/LittlerootTown/scripts.pory"

# 917 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 923 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 924 "data/maps/LittlerootTown/scripts.pory"

# 925 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 927 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 929 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 930 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 931 "data/maps/LittlerootTown/scripts.pory"

# 932 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 935 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 936 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 938 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 939 "data/maps/LittlerootTown/scripts.pory"

# 940 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 943 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 944 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 946 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 947 "data/maps/LittlerootTown/scripts.pory"

# 948 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 949 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 950 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
LittlerootTown_Movement_MomReturnHomeMale3:
# 957 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 958 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 961 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 963 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 964 "data/maps/LittlerootTown/scripts.pory"

# 965 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 969 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 973 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 974 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 975 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 976 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 977 "data/maps/LittlerootTown/scripts.pory"

# 978 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
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
LittlerootTown_Movement_MomReturnHomeFemale3:
# 986 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 987 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 988 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 989 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 990 "data/maps/LittlerootTown/scripts.pory"

# 991 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 992 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 993 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 994 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 995 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 996 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 997 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 998 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 999 "data/maps/LittlerootTown/scripts.pory"

# 1000 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1001 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1002 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1003 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1006 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1007 "data/maps/LittlerootTown/scripts.pory"

# 1008 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1009 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1010 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1013 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1014 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1015 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1016 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1017 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1018 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 1019 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 1020 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1021 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1022 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1023 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1024 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1025 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 1026 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1027 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1028 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 1029 "data/maps/LittlerootTown/scripts.pory"
	release
# 1030 "data/maps/LittlerootTown/scripts.pory"
	end
# 1031 "data/maps/LittlerootTown/scripts.pory"

# 1032 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1033 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1034 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1035 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1036 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1037 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1038 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1039 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1040 "data/maps/LittlerootTown/scripts.pory"
	return
# 1041 "data/maps/LittlerootTown/scripts.pory"

# 1042 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomGoodbye::
# 1043 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_MomGoodbye, MSGBOX_DEFAULT
# 1044 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1045 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1046 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1047 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1048 "data/maps/LittlerootTown/scripts.pory"
	return
# 1049 "data/maps/LittlerootTown/scripts.pory"

# 1050 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1052 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1053 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1054 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN. It seems to\n"
# 1055 "data/maps/LittlerootTown/scripts.pory"
	.string "be a good place to live, don't you think?\p"
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1058 "data/maps/LittlerootTown/scripts.pory"

# 1059 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1061 "data/maps/LittlerootTown/scripts.pory"

# 1062 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out,\n"
# 1064 "data/maps/LittlerootTown/scripts.pory"
	.string "wear these RUNNING SHOES.\p"
# 1065 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 1066 "data/maps/LittlerootTown/scripts.pory"

# 1067 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1068 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1069 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 1070 "data/maps/LittlerootTown/scripts.pory"

# 1071 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1072 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 1074 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1075 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!”$"
# 1076 "data/maps/LittlerootTown/scripts.pory"

# 1077 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MomGoodbye:
# 1078 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1079 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 1080 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 1081 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 1082 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 1083 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 1084 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1085 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1087 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 1088 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 1089 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1090 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1091 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 1092 "data/maps/LittlerootTown/scripts.pory"

# 1093 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1094 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 1095 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 1096 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1097 "data/maps/LittlerootTown/scripts.pory"

# 1098 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1099 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 1100 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1102 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 1103 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1104 "data/maps/LittlerootTown/scripts.pory"

# 1105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1106 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1107 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1108 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 1109 "data/maps/LittlerootTown/scripts.pory"

# 1110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1111 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1112 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1113 "data/maps/LittlerootTown/scripts.pory"

# 1114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1115 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1116 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1117 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1118 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1119 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1120 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1121 "data/maps/LittlerootTown/scripts.pory"

# 1122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1123 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1124 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1125 "data/maps/LittlerootTown/scripts.pory"

# 1126 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1127 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1128 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1129 "data/maps/LittlerootTown/scripts.pory"

# 1130 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1131 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1132 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1133 "data/maps/LittlerootTown/scripts.pory"

# 1134 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1135 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1136 "data/maps/LittlerootTown/scripts.pory"

# 1137 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1138 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1139 "data/maps/LittlerootTown/scripts.pory"

# 1140 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1141 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1142 "data/maps/LittlerootTown/scripts.pory"

# 1143 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1144 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1145 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1146 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1147 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1148 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1149 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1150 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1151 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1152 "data/maps/LittlerootTown/scripts.pory"
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

ZooGirafarig_Text_0:
# 138 "data/maps/LittlerootTown/scripts.pory"
	.string "There is a Giarafarig.$"

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

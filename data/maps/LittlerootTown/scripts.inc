Debug_Script_1::
# 2 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_CHARIZARD, 100, , , , , , , , , , , , , , , , , , MOVE_FLAMETHROWER, MOVE_FLY, MOVE_HEAT_WAVE, MOVE_SCORCHING_SANDS
# 3 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_VENUSAUR, 100, , , , , , , , , , , , , , , , , , MOVE_CUT, MOVE_FLASH, MOVE_SEED_BOMB, MOVE_SLUDGE_BOMB
# 4 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_BLASTOISE, 100, , , , , , , , , , , , , , , , , , MOVE_WATERFALL, MOVE_AURA_SPHERE, MOVE_SKULL_BASH, MOVE_PROTECT
# 5 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SNORLAX, 100, , , , , , , , , , , , , , , , , , MOVE_STRENGTH, MOVE_ROCK_SMASH, MOVE_BODY_SLAM, MOVE_EARTHQUAKE
# 6 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_LAPRAS, 100, , , , , , , , , , , , , , , , , , MOVE_SURF, MOVE_DIVE, MOVE_ICE_BEAM, MOVE_KINESIS
# 7 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE01_GET
# 8 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE02_GET
# 9 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE03_GET
# 10 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE04_GET
# 11 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE05_GET
# 12 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE06_GET
# 13 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE07_GET
# 14 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BADGE08_GET
	return


LittlerootTown_EventScript_Deoxys_Gift::
# 19 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Deoxys_Gift_Text_0
# 21 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_REGICE, 10, ITEM_NONE, ITEM_GREAT_BALL, 3, 0, 1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYCHO_BOOST, MOVE_NIGHT_SLASH, MOVE_EXTREME_SPEED, MOVE_PROTECT
# 22 "data/maps/LittlerootTown/scripts.pory"
	removeobject 9
# 23 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_Deoxys::
# 27 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 28 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 29 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 30 "data/maps/LittlerootTown/scripts.pory"
	delay 40
# 31 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 32 "data/maps/LittlerootTown/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 12, ITEM_NONE
# 34 "data/maps/LittlerootTown/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 37 "data/maps/LittlerootTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LittlerootTown_EventScript_Deoxys_1
# 41 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LittlerootTown_EventScript_Deoxys_2
# 44 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LittlerootTown_EventScript_Deoxys_3
# 47 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq LittlerootTown_EventScript_Deoxys_4
	return

LittlerootTown_EventScript_Deoxys_1:
# 39 "data/maps/LittlerootTown/scripts.pory"
	call Won_or_Caught
	return

LittlerootTown_EventScript_Deoxys_2:
# 42 "data/maps/LittlerootTown/scripts.pory"
	call Won_or_Caught
	return

LittlerootTown_EventScript_Deoxys_3:
# 45 "data/maps/LittlerootTown/scripts.pory"
	call RanAway
	return

LittlerootTown_EventScript_Deoxys_4:
# 48 "data/maps/LittlerootTown/scripts.pory"
	call RanAway
	return


Won_or_Caught::
# 53 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 55 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 56 "data/maps/LittlerootTown/scripts.pory"
	msgbox Won_or_Caught_Text_0
	return


RanAway::
# 61 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 62 "data/maps/LittlerootTown/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 63 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 64 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 66 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 67 "data/maps/LittlerootTown/scripts.pory"
	msgbox RanAway_Text_1
	return


LittlerootTownTest_EventScript_Trader::
# 72 "data/maps/LittlerootTown/scripts.pory"
	lock
# 73 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 74 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, LittlerootTownTest_EventScript_TradeCompleted
# 75 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SANDILE
# 76 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 77 "data/maps/LittlerootTown/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 78 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 79 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 80 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTownTest_EventScript_DeclineTrade
# 81 "data/maps/LittlerootTown/scripts.pory"
	special ChoosePartyMon
# 82 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 83 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 84 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTownTest_EventScript_DeclineTrade
# 85 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 86 "data/maps/LittlerootTown/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 87 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 88 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTownTest_EventScript_NotRequestedMon
# 89 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 90 "data/maps/LittlerootTown/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 91 "data/maps/LittlerootTown/scripts.pory"
	special CreateInGameTradePokemon
# 92 "data/maps/LittlerootTown/scripts.pory"
	special DoInGameTradeScene
# 93 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 94 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 95 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 96 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTownTest_EventScript_DeclineTrade::
# 100 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 101 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTownTest_EventScript_NotRequestedMon::
# 105 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 106 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 107 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTownTest_EventScript_TradeCompleted::
# 111 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownTest_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 112 "data/maps/LittlerootTown/scripts.pory"
	release
	return


TestBattleDeltaTwins::
# 145 "data/maps/LittlerootTown/scripts.pory"
	lock
# 146 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 147 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, RusturfTunnel_Text_GruntDefeat, RusturfTunnel_Text_GruntDefeat, RusturfTunnel_Text_GruntDefeat
# 148 "data/maps/LittlerootTown/scripts.pory"
	release
	return


BattleAgainstTwoTrainers::
# 152 "data/maps/LittlerootTown/scripts.pory"
	lock
# 153 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 154 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_PETALBURG_LYLE, RusturfTunnel_Text_GruntDefeat, TRAINER_IVAN, RusturfTunnel_Text_GruntDefeat
# 155 "data/maps/LittlerootTown/scripts.pory"
	release
	return


ZooGirafarig::
# 159 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 160 "data/maps/LittlerootTown/scripts.pory"
	showmonpic SPECIES_GIRAFARIG, 10, 3
# 161 "data/maps/LittlerootTown/scripts.pory"
	setseenmon SPECIES_GIRAFARIG
# 162 "data/maps/LittlerootTown/scripts.pory"
	msgbox ZooGirafarig_Text_0
# 163 "data/maps/LittlerootTown/scripts.pory"
	hidemonpic
# 164 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


# 167 "data/maps/LittlerootTown/scripts.pory"

# 168 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 169 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 170 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 171 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 172 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 173 "data/maps/LittlerootTown/scripts.pory"

# 174 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 175 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 176 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 177 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 178 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 181 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 182 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 183 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 184 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 185 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 186 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 187 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 188 "data/maps/LittlerootTown/scripts.pory"

# 189 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 190 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 191 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 192 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 193 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 194 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 195 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 198 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 199 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 200 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 201 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 202 "data/maps/LittlerootTown/scripts.pory"

# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 205 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 206 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 207 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 208 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 209 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 210 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 211 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 212 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 213 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 214 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 215 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 216 "data/maps/LittlerootTown/scripts.pory"
	end
# 217 "data/maps/LittlerootTown/scripts.pory"

# 218 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 219 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 220 "data/maps/LittlerootTown/scripts.pory"
	return
# 221 "data/maps/LittlerootTown/scripts.pory"

# 222 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 223 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 224 "data/maps/LittlerootTown/scripts.pory"
	return
# 225 "data/maps/LittlerootTown/scripts.pory"

# 226 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 227 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 228 "data/maps/LittlerootTown/scripts.pory"
	return
# 229 "data/maps/LittlerootTown/scripts.pory"

# 230 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 231 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 232 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 233 "data/maps/LittlerootTown/scripts.pory"
	return
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 236 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 237 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 238 "data/maps/LittlerootTown/scripts.pory"
	return
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 241 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 242 "data/maps/LittlerootTown/scripts.pory"
	return
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 245 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 246 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 248 "data/maps/LittlerootTown/scripts.pory"
	return
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 251 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 252 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 253 "data/maps/LittlerootTown/scripts.pory"
	return
# 254 "data/maps/LittlerootTown/scripts.pory"

# 255 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 256 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 257 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 258 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 259 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 260 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 261 "data/maps/LittlerootTown/scripts.pory"
	return
# 262 "data/maps/LittlerootTown/scripts.pory"

# 263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 264 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 265 "data/maps/LittlerootTown/scripts.pory"
	return
# 266 "data/maps/LittlerootTown/scripts.pory"

# 267 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 268 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 269 "data/maps/LittlerootTown/scripts.pory"
	return
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 272 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 273 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 274 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 275 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 276 "data/maps/LittlerootTown/scripts.pory"

# 277 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 278 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 279 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 280 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 281 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 282 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 283 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 284 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 285 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 286 "data/maps/LittlerootTown/scripts.pory"
	end
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 289 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 290 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 291 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 292 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 293 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 294 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 295 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 296 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 297 "data/maps/LittlerootTown/scripts.pory"
	end
# 298 "data/maps/LittlerootTown/scripts.pory"

# 299 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 300 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 301 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 302 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 303 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 306 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 307 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 308 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 311 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 312 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 313 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 314 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 315 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 316 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 317 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 318 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 319 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 320 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 321 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 322 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 323 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 325 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 326 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 327 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 328 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 329 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 330 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 331 "data/maps/LittlerootTown/scripts.pory"
	return
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 335 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 340 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 343 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 344 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 346 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 347 "data/maps/LittlerootTown/scripts.pory"

# 348 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 350 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 351 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 352 "data/maps/LittlerootTown/scripts.pory"

# 353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 354 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 355 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 357 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 358 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 363 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 364 "data/maps/LittlerootTown/scripts.pory"

# 365 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 366 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 368 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 369 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 370 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 371 "data/maps/LittlerootTown/scripts.pory"

# 372 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 373 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 374 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 375 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 376 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 377 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 378 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 379 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 380 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 381 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 382 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 383 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 384 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 385 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 386 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 387 "data/maps/LittlerootTown/scripts.pory"
	end
# 388 "data/maps/LittlerootTown/scripts.pory"

# 389 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 390 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 391 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 392 "data/maps/LittlerootTown/scripts.pory"

# 393 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 394 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 395 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 396 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 397 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 398 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 399 "data/maps/LittlerootTown/scripts.pory"
	end
# 400 "data/maps/LittlerootTown/scripts.pory"

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 402 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 403 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 404 "data/maps/LittlerootTown/scripts.pory"
	end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 407 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 408 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 409 "data/maps/LittlerootTown/scripts.pory"
	end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 412 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 413 "data/maps/LittlerootTown/scripts.pory"
	end
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 416 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 417 "data/maps/LittlerootTown/scripts.pory"
	end
# 418 "data/maps/LittlerootTown/scripts.pory"

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 420 "data/maps/LittlerootTown/scripts.pory"
	lock
# 421 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 422 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 423 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 424 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 425 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 426 "data/maps/LittlerootTown/scripts.pory"
	release
# 427 "data/maps/LittlerootTown/scripts.pory"
	end
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 430 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 431 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 432 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 433 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 434 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 435 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 436 "data/maps/LittlerootTown/scripts.pory"
	release
# 437 "data/maps/LittlerootTown/scripts.pory"
	end
# 438 "data/maps/LittlerootTown/scripts.pory"

# 439 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 440 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 441 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 442 "data/maps/LittlerootTown/scripts.pory"
	release
# 443 "data/maps/LittlerootTown/scripts.pory"
	end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 446 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown/scripts.pory"
	release
# 448 "data/maps/LittlerootTown/scripts.pory"
	end
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 451 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 452 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 453 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 454 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 455 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 456 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 457 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 461 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 462 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 463 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 464 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 465 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 466 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 467 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 468 "data/maps/LittlerootTown/scripts.pory"
	return
# 469 "data/maps/LittlerootTown/scripts.pory"

# 470 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 471 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 472 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 473 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 474 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 475 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 476 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 477 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 478 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 479 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 480 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 481 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 482 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 483 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 484 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 485 "data/maps/LittlerootTown/scripts.pory"

# 486 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 487 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 488 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 489 "data/maps/LittlerootTown/scripts.pory"

# 490 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 491 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 492 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 493 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 494 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 495 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 496 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 497 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 498 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 499 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 500 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 501 "data/maps/LittlerootTown/scripts.pory"

# 502 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 503 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 504 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 505 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 506 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 509 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 510 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 511 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 512 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 513 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 514 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 516 "data/maps/LittlerootTown/scripts.pory"
	end
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 519 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 520 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 521 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 522 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 523 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 524 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 525 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 526 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 527 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 528 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 529 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 530 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 531 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 534 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 535 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 536 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 537 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 538 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 539 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 540 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 541 "data/maps/LittlerootTown/scripts.pory"

# 542 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 543 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 549 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 550 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 554 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 555 "data/maps/LittlerootTown/scripts.pory"
	end
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 558 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 559 "data/maps/LittlerootTown/scripts.pory"
	end
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 562 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 563 "data/maps/LittlerootTown/scripts.pory"
	end
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 566 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 567 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 568 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 569 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 570 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 571 "data/maps/LittlerootTown/scripts.pory"
	end
# 572 "data/maps/LittlerootTown/scripts.pory"

# 573 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 574 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 575 "data/maps/LittlerootTown/scripts.pory"
	return
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 578 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 579 "data/maps/LittlerootTown/scripts.pory"
	return
# 580 "data/maps/LittlerootTown/scripts.pory"

# 581 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 582 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 583 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 584 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 585 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 586 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 587 "data/maps/LittlerootTown/scripts.pory"
	end
# 588 "data/maps/LittlerootTown/scripts.pory"

# 589 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 590 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 591 "data/maps/LittlerootTown/scripts.pory"
	return
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 594 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 595 "data/maps/LittlerootTown/scripts.pory"
	return
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 598 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 599 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 600 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 601 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 602 "data/maps/LittlerootTown/scripts.pory"
	end
# 603 "data/maps/LittlerootTown/scripts.pory"

# 604 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 605 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 606 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 607 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 608 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 609 "data/maps/LittlerootTown/scripts.pory"
	end
# 610 "data/maps/LittlerootTown/scripts.pory"

# 611 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 612 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 613 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 614 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 615 "data/maps/LittlerootTown/scripts.pory"
	end
# 616 "data/maps/LittlerootTown/scripts.pory"

# 617 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 618 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 619 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 620 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 621 "data/maps/LittlerootTown/scripts.pory"
	end
# 622 "data/maps/LittlerootTown/scripts.pory"

# 623 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 624 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 625 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 626 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 627 "data/maps/LittlerootTown/scripts.pory"
	end
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 630 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 631 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 632 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 633 "data/maps/LittlerootTown/scripts.pory"
	end
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 636 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 637 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 638 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 639 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 640 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 641 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 642 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 643 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 644 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 645 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 646 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 647 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 648 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 649 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 650 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 651 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 652 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 653 "data/maps/LittlerootTown/scripts.pory"
	end
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 656 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 657 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 658 "data/maps/LittlerootTown/scripts.pory"
	return
# 659 "data/maps/LittlerootTown/scripts.pory"

# 660 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 661 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 662 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 663 "data/maps/LittlerootTown/scripts.pory"
	return
# 664 "data/maps/LittlerootTown/scripts.pory"

# 665 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 666 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 668 "data/maps/LittlerootTown/scripts.pory"
	return
# 669 "data/maps/LittlerootTown/scripts.pory"

# 670 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 671 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 673 "data/maps/LittlerootTown/scripts.pory"
	return
# 674 "data/maps/LittlerootTown/scripts.pory"

# 675 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 676 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 677 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 678 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 679 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 680 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 681 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 682 "data/maps/LittlerootTown/scripts.pory"
	return
# 683 "data/maps/LittlerootTown/scripts.pory"

# 684 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 685 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 686 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 687 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 688 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 689 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 690 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 691 "data/maps/LittlerootTown/scripts.pory"
	return
# 692 "data/maps/LittlerootTown/scripts.pory"

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 694 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	return
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 701 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 703 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/LittlerootTown/scripts.pory"
	return
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	return
# 713 "data/maps/LittlerootTown/scripts.pory"

# 714 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 715 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	return
# 720 "data/maps/LittlerootTown/scripts.pory"

# 721 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 722 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	return
# 727 "data/maps/LittlerootTown/scripts.pory"

# 728 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 729 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 730 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 731 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 733 "data/maps/LittlerootTown/scripts.pory"
	return
# 734 "data/maps/LittlerootTown/scripts.pory"

# 735 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 736 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 738 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 740 "data/maps/LittlerootTown/scripts.pory"
	return
# 741 "data/maps/LittlerootTown/scripts.pory"

# 742 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 743 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 744 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 745 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 746 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 747 "data/maps/LittlerootTown/scripts.pory"
	return
# 748 "data/maps/LittlerootTown/scripts.pory"

# 749 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 750 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 751 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 752 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 754 "data/maps/LittlerootTown/scripts.pory"
	return
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 757 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 758 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 759 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 760 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 761 "data/maps/LittlerootTown/scripts.pory"
	return
# 762 "data/maps/LittlerootTown/scripts.pory"

# 763 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 764 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 765 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 766 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 767 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 768 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 769 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 770 "data/maps/LittlerootTown/scripts.pory"
	return
# 771 "data/maps/LittlerootTown/scripts.pory"

# 772 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 773 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 774 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 775 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 776 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 777 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 778 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 779 "data/maps/LittlerootTown/scripts.pory"
	return
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 782 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 783 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 784 "data/maps/LittlerootTown/scripts.pory"
	return
# 785 "data/maps/LittlerootTown/scripts.pory"

# 786 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 787 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 788 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 789 "data/maps/LittlerootTown/scripts.pory"
	return
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 792 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 793 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 794 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 795 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 799 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 801 "data/maps/LittlerootTown/scripts.pory"
	return
# 802 "data/maps/LittlerootTown/scripts.pory"

# 803 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 804 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 805 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 806 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 807 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 808 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 810 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 811 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 812 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 813 "data/maps/LittlerootTown/scripts.pory"
	return
# 814 "data/maps/LittlerootTown/scripts.pory"

# 815 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 816 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 817 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 818 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 819 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 820 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 821 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 822 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 823 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 824 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 825 "data/maps/LittlerootTown/scripts.pory"
	return
# 826 "data/maps/LittlerootTown/scripts.pory"

# 827 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 828 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 829 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 831 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 832 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 833 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 834 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 835 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 836 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 837 "data/maps/LittlerootTown/scripts.pory"
	return
# 838 "data/maps/LittlerootTown/scripts.pory"

# 839 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 840 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 841 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 842 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 843 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 844 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 845 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 846 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 847 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 848 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 849 "data/maps/LittlerootTown/scripts.pory"
	return
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 852 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 853 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 854 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 855 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 856 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 857 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 858 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 859 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 860 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 861 "data/maps/LittlerootTown/scripts.pory"
	return
# 862 "data/maps/LittlerootTown/scripts.pory"

# 863 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 864 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 865 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 866 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 867 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 868 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 869 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 870 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 871 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 872 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 873 "data/maps/LittlerootTown/scripts.pory"
	return
# 874 "data/maps/LittlerootTown/scripts.pory"

# 875 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 876 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 877 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 878 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 879 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 880 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 881 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 882 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 883 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 884 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 885 "data/maps/LittlerootTown/scripts.pory"
	return
# 886 "data/maps/LittlerootTown/scripts.pory"

# 887 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 894 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 895 "data/maps/LittlerootTown/scripts.pory"

# 896 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 903 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 904 "data/maps/LittlerootTown/scripts.pory"

# 905 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 910 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 911 "data/maps/LittlerootTown/scripts.pory"

# 912 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 918 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 919 "data/maps/LittlerootTown/scripts.pory"

# 920 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 923 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 924 "data/maps/LittlerootTown/scripts.pory"

# 925 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 927 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 929 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 935 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 936 "data/maps/LittlerootTown/scripts.pory"

# 937 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 939 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 940 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 941 "data/maps/LittlerootTown/scripts.pory"

# 942 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 943 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 944 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 948 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 949 "data/maps/LittlerootTown/scripts.pory"

# 950 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 955 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 956 "data/maps/LittlerootTown/scripts.pory"

# 957 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 958 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 961 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 963 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 964 "data/maps/LittlerootTown/scripts.pory"

# 965 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 969 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 970 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 971 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 972 "data/maps/LittlerootTown/scripts.pory"

# 973 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 974 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 975 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 976 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 977 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 978 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 979 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 980 "data/maps/LittlerootTown/scripts.pory"

# 981 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 983 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 984 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 985 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 986 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 987 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 988 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 989 "data/maps/LittlerootTown/scripts.pory"

# 990 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 991 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 992 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 993 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 994 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 995 "data/maps/LittlerootTown/scripts.pory"

# 996 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 997 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 998 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 999 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1000 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1001 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1002 "data/maps/LittlerootTown/scripts.pory"

# 1003 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1006 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1007 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1008 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1009 "data/maps/LittlerootTown/scripts.pory"

# 1010 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 1011 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1012 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1013 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1014 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1015 "data/maps/LittlerootTown/scripts.pory"

# 1016 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 1017 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1018 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1020 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1021 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1022 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1023 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1024 "data/maps/LittlerootTown/scripts.pory"

# 1025 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1026 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1027 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1028 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1029 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1030 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1031 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1032 "data/maps/LittlerootTown/scripts.pory"

# 1033 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1034 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1035 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1036 "data/maps/LittlerootTown/scripts.pory"

# 1037 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1038 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1039 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1040 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1041 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1042 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1043 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1044 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomGoodbye
# 1045 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 1046 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1047 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1048 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1049 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1050 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1051 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 1052 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1053 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1054 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 1055 "data/maps/LittlerootTown/scripts.pory"
	release
# 1056 "data/maps/LittlerootTown/scripts.pory"
	end
# 1057 "data/maps/LittlerootTown/scripts.pory"

# 1058 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1059 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1060 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1061 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1062 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1063 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1064 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1065 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1066 "data/maps/LittlerootTown/scripts.pory"
	return
# 1067 "data/maps/LittlerootTown/scripts.pory"

# 1068 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomGoodbye::
# 1069 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_MomGoodbye, MSGBOX_DEFAULT
# 1070 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1071 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1072 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1073 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1074 "data/maps/LittlerootTown/scripts.pory"
	return
# 1075 "data/maps/LittlerootTown/scripts.pory"

# 1076 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1077 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1078 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1079 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1080 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN. It seems to\n"
# 1081 "data/maps/LittlerootTown/scripts.pory"
	.string "be a good place to live, don't you think?\p"
# 1082 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1083 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1084 "data/maps/LittlerootTown/scripts.pory"

# 1085 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1087 "data/maps/LittlerootTown/scripts.pory"

# 1088 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1089 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out,\n"
# 1090 "data/maps/LittlerootTown/scripts.pory"
	.string "wear these RUNNING SHOES.\p"
# 1091 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 1092 "data/maps/LittlerootTown/scripts.pory"

# 1093 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1094 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1095 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 1096 "data/maps/LittlerootTown/scripts.pory"

# 1097 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1098 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1099 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 1100 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!”$"
# 1102 "data/maps/LittlerootTown/scripts.pory"

# 1103 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MomGoodbye:
# 1104 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1105 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 1106 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 1107 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 1108 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 1109 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 1110 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1111 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1112 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1113 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 1114 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 1115 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1116 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1117 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 1118 "data/maps/LittlerootTown/scripts.pory"

# 1119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1120 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 1121 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 1122 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1123 "data/maps/LittlerootTown/scripts.pory"

# 1124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1125 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 1126 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1127 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1128 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 1129 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1130 "data/maps/LittlerootTown/scripts.pory"

# 1131 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1132 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1133 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1134 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 1135 "data/maps/LittlerootTown/scripts.pory"

# 1136 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1137 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1138 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1139 "data/maps/LittlerootTown/scripts.pory"

# 1140 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1141 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1142 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1143 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1144 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1145 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1146 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1147 "data/maps/LittlerootTown/scripts.pory"

# 1148 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1149 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1150 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1151 "data/maps/LittlerootTown/scripts.pory"

# 1152 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1153 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1154 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1155 "data/maps/LittlerootTown/scripts.pory"

# 1156 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1157 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1158 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1159 "data/maps/LittlerootTown/scripts.pory"

# 1160 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1161 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1162 "data/maps/LittlerootTown/scripts.pory"

# 1163 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1164 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1165 "data/maps/LittlerootTown/scripts.pory"

# 1166 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1167 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1168 "data/maps/LittlerootTown/scripts.pory"

# 1169 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1170 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1171 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1172 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1173 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1174 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1175 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1176 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1177 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1178 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_Deoxys_Gift_Text_0:
# 20 "data/maps/LittlerootTown/scripts.pory"
	.string "Here. You'll need this.$"

Won_or_Caught_Text_0:
# 56 "data/maps/LittlerootTown/scripts.pory"
	.string "You are the POKéMON Master!$"

RanAway_Text_0:
# 62 "data/maps/LittlerootTown/scripts.pory"
	.string "Xyyyyyssss...$"

RanAway_Text_1:
# 67 "data/maps/LittlerootTown/scripts.pory"
	.string "You are not the POKéMON Master...$"

ZooGirafarig_Text_0:
# 162 "data/maps/LittlerootTown/scripts.pory"
	.string "There is a Giarafarig.$"

LittlerootTownTest_Text_IllTradeIfYouWant::
# 115 "data/maps/LittlerootTown/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
	.string "Sure, I knew that.\p"
	.string "But if you really want, I'm willing\n"
	.string "to trade it to you.\p"
	.string "I'll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"

LittlerootTownTest_Text_PleaseBeGoodToMyPokemon::
# 124 "data/maps/LittlerootTown/scripts.pory"
	.string "Eheheh…\n"
	.string "Please be good to my POKéMON.$"

LittlerootTownTest_Text_DoesntLookLikeMonToMe::
# 129 "data/maps/LittlerootTown/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"

LittlerootTownTest_Text_YouDontWantToThatsOkay::
# 134 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
	.string "But my POKéMON is cute, you know…$"

LittlerootTownTest_Text_AnyPokemonCanBeCute::
# 139 "data/maps/LittlerootTown/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
	.string "it with care and kindness.$"

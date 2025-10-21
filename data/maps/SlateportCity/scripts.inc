# 49 "data/maps/SlateportCity/scripts.pory"

# 50 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 51 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 52 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 53 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 54 "data/maps/SlateportCity/scripts.pory"

# 55 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 56 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 57 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 58 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 59 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 60 "data/maps/SlateportCity/scripts.pory"
	end
# 61 "data/maps/SlateportCity/scripts.pory"

# 62 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 63 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 64 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 65 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 66 "data/maps/SlateportCity/scripts.pory"
	return
# 67 "data/maps/SlateportCity/scripts.pory"

# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 71 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 72 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 73 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 74 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 75 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 76 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 77 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 78 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 79 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 80 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 81 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 82 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 83 "data/maps/SlateportCity/scripts.pory"
	return
# 84 "data/maps/SlateportCity/scripts.pory"

# 85 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 86 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 88 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 89 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 90 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 91 "data/maps/SlateportCity/scripts.pory"
	return
# 92 "data/maps/SlateportCity/scripts.pory"

# 93 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 94 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 95 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 96 "data/maps/SlateportCity/scripts.pory"
	return
# 97 "data/maps/SlateportCity/scripts.pory"

# 98 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 99 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 100 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 101 "data/maps/SlateportCity/scripts.pory"

# 102 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 103 "data/maps/SlateportCity/scripts.pory"
	lockall
# 104 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 105 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 106 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 107 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 109 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 110 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 111 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 113 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 114 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 115 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 117 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 118 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 119 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 120 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 121 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 122 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 123 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 124 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 125 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 126 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 127 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 128 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 130 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 131 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 132 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 133 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 134 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 135 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 136 "data/maps/SlateportCity/scripts.pory"
	end
# 137 "data/maps/SlateportCity/scripts.pory"

# 138 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 139 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 140 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 141 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 142 "data/maps/SlateportCity/scripts.pory"
	step_end
# 143 "data/maps/SlateportCity/scripts.pory"

# 144 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 145 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 146 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 147 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 148 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 149 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 150 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 151 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 152 "data/maps/SlateportCity/scripts.pory"
	step_end
# 153 "data/maps/SlateportCity/scripts.pory"

# 154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 155 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 156 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 157 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 158 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 159 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 160 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 161 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 162 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 163 "data/maps/SlateportCity/scripts.pory"
	step_end
# 164 "data/maps/SlateportCity/scripts.pory"

# 165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 166 "data/maps/SlateportCity/scripts.pory"
	lock
# 167 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 168 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 169 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 170 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	release
# 173 "data/maps/SlateportCity/scripts.pory"
	end
# 174 "data/maps/SlateportCity/scripts.pory"

# 175 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 176 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 177 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 178 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 179 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 180 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 181 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 182 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 183 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 186 "data/maps/SlateportCity/scripts.pory"
	lock
# 187 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 188 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 189 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 190 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 191 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 192 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 193 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 194 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 196 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 197 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 198 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 199 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 200 "data/maps/SlateportCity/scripts.pory"
	release
# 201 "data/maps/SlateportCity/scripts.pory"
	end
# 202 "data/maps/SlateportCity/scripts.pory"

# 203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 204 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity/scripts.pory"
	release
# 206 "data/maps/SlateportCity/scripts.pory"
	end
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 209 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 210 "data/maps/SlateportCity/scripts.pory"
	release
# 211 "data/maps/SlateportCity/scripts.pory"
	end
# 212 "data/maps/SlateportCity/scripts.pory"

# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 214 "data/maps/SlateportCity/scripts.pory"
	lock
# 215 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 216 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 217 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 218 "data/maps/SlateportCity/scripts.pory"
	release
# 219 "data/maps/SlateportCity/scripts.pory"
	end
# 220 "data/maps/SlateportCity/scripts.pory"

# 221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 223 "data/maps/SlateportCity/scripts.pory"
	release
# 224 "data/maps/SlateportCity/scripts.pory"
	end
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 227 "data/maps/SlateportCity/scripts.pory"
	lock
# 228 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 229 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 230 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 231 "data/maps/SlateportCity/scripts.pory"
	release
# 232 "data/maps/SlateportCity/scripts.pory"
	end
# 233 "data/maps/SlateportCity/scripts.pory"

# 234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 235 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 236 "data/maps/SlateportCity/scripts.pory"
	release
# 237 "data/maps/SlateportCity/scripts.pory"
	end
# 238 "data/maps/SlateportCity/scripts.pory"

# 239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 240 "data/maps/SlateportCity/scripts.pory"
	lock
# 241 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 242 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 243 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 245 "data/maps/SlateportCity/scripts.pory"
	release
# 246 "data/maps/SlateportCity/scripts.pory"
	end
# 247 "data/maps/SlateportCity/scripts.pory"

# 248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 249 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 250 "data/maps/SlateportCity/scripts.pory"
	release
# 251 "data/maps/SlateportCity/scripts.pory"
	end
# 252 "data/maps/SlateportCity/scripts.pory"

# 253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 254 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 255 "data/maps/SlateportCity/scripts.pory"
	release
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 259 "data/maps/SlateportCity/scripts.pory"
	lock
# 260 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 261 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 262 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 263 "data/maps/SlateportCity/scripts.pory"
	release
# 264 "data/maps/SlateportCity/scripts.pory"
	end
# 265 "data/maps/SlateportCity/scripts.pory"

# 266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 267 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 268 "data/maps/SlateportCity/scripts.pory"
	release
# 269 "data/maps/SlateportCity/scripts.pory"
	end
# 270 "data/maps/SlateportCity/scripts.pory"

# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 272 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 273 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 274 "data/maps/SlateportCity/scripts.pory"
	end
# 275 "data/maps/SlateportCity/scripts.pory"

# 276 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 277 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 278 "data/maps/SlateportCity/scripts.pory"
	end
# 279 "data/maps/SlateportCity/scripts.pory"

# 280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 281 "data/maps/SlateportCity/scripts.pory"
	lock
# 282 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 283 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 285 "data/maps/SlateportCity/scripts.pory"
	release
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 289 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 290 "data/maps/SlateportCity/scripts.pory"
	release
# 291 "data/maps/SlateportCity/scripts.pory"
	end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 294 "data/maps/SlateportCity/scripts.pory"
	lock
# 295 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 296 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 297 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 298 "data/maps/SlateportCity/scripts.pory"
	release
# 299 "data/maps/SlateportCity/scripts.pory"
	end
# 300 "data/maps/SlateportCity/scripts.pory"

# 301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 302 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 303 "data/maps/SlateportCity/scripts.pory"
	release
# 304 "data/maps/SlateportCity/scripts.pory"
	end
# 305 "data/maps/SlateportCity/scripts.pory"

# 306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 311 "data/maps/SlateportCity/scripts.pory"
	lockall
# 312 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 313 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 314 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 315 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 320 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 321 "data/maps/SlateportCity/scripts.pory"
	end
# 322 "data/maps/SlateportCity/scripts.pory"

# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 325 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 326 "data/maps/SlateportCity/scripts.pory"
	end
# 327 "data/maps/SlateportCity/scripts.pory"

# 328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 329 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 330 "data/maps/SlateportCity/scripts.pory"
	end
# 331 "data/maps/SlateportCity/scripts.pory"

# 332 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 333 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 334 "data/maps/SlateportCity/scripts.pory"
	end
# 335 "data/maps/SlateportCity/scripts.pory"

# 336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 338 "data/maps/SlateportCity/scripts.pory"
	end
# 339 "data/maps/SlateportCity/scripts.pory"

# 340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 341 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 342 "data/maps/SlateportCity/scripts.pory"
	end
# 343 "data/maps/SlateportCity/scripts.pory"

# 344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 345 "data/maps/SlateportCity/scripts.pory"
	lockall
# 346 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 347 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 348 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 349 "data/maps/SlateportCity/scripts.pory"
	end
# 350 "data/maps/SlateportCity/scripts.pory"

# 351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 352 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 353 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 354 "data/maps/SlateportCity/scripts.pory"
	end
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 358 "data/maps/SlateportCity/scripts.pory"
	end
# 359 "data/maps/SlateportCity/scripts.pory"

# 360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 361 "data/maps/SlateportCity/scripts.pory"
	lock
# 362 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 363 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 364 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 365 "data/maps/SlateportCity/scripts.pory"
	release
# 366 "data/maps/SlateportCity/scripts.pory"
	end
# 367 "data/maps/SlateportCity/scripts.pory"

# 368 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 369 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 370 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 371 "data/maps/SlateportCity/scripts.pory"
	release
# 372 "data/maps/SlateportCity/scripts.pory"
	end
# 373 "data/maps/SlateportCity/scripts.pory"

# 374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 375 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 376 "data/maps/SlateportCity/scripts.pory"
	end
# 377 "data/maps/SlateportCity/scripts.pory"

# 378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 379 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 380 "data/maps/SlateportCity/scripts.pory"
	end
# 381 "data/maps/SlateportCity/scripts.pory"

# 382 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 383 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 384 "data/maps/SlateportCity/scripts.pory"
	end
# 385 "data/maps/SlateportCity/scripts.pory"

# 386 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 387 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 388 "data/maps/SlateportCity/scripts.pory"
	end
# 389 "data/maps/SlateportCity/scripts.pory"

# 390 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 391 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 392 "data/maps/SlateportCity/scripts.pory"
	end
# 393 "data/maps/SlateportCity/scripts.pory"

# 394 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 395 "data/maps/SlateportCity/scripts.pory"
	lock
# 396 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 397 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 398 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 399 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 400 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 401 "data/maps/SlateportCity/scripts.pory"
	release
# 402 "data/maps/SlateportCity/scripts.pory"
	end
# 403 "data/maps/SlateportCity/scripts.pory"

# 404 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 405 "data/maps/SlateportCity/scripts.pory"
	lock
# 406 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 407 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 408 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 409 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 410 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 411 "data/maps/SlateportCity/scripts.pory"
	release
# 412 "data/maps/SlateportCity/scripts.pory"
	end
# 413 "data/maps/SlateportCity/scripts.pory"

# 414 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 415 "data/maps/SlateportCity/scripts.pory"
	lock
# 416 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 417 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 418 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 419 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 420 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 421 "data/maps/SlateportCity/scripts.pory"
	release
# 422 "data/maps/SlateportCity/scripts.pory"
	end
# 423 "data/maps/SlateportCity/scripts.pory"

# 424 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 425 "data/maps/SlateportCity/scripts.pory"
	lock
# 426 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 427 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 428 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 429 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 430 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 431 "data/maps/SlateportCity/scripts.pory"
	release
# 432 "data/maps/SlateportCity/scripts.pory"
	end
# 433 "data/maps/SlateportCity/scripts.pory"

# 434 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 435 "data/maps/SlateportCity/scripts.pory"
	lock
# 436 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 437 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 438 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 439 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 440 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 441 "data/maps/SlateportCity/scripts.pory"
	release
# 442 "data/maps/SlateportCity/scripts.pory"
	end
# 443 "data/maps/SlateportCity/scripts.pory"

# 444 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 445 "data/maps/SlateportCity/scripts.pory"
	lock
# 446 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 447 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 448 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 449 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 450 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 451 "data/maps/SlateportCity/scripts.pory"
	release
# 452 "data/maps/SlateportCity/scripts.pory"
	end
# 453 "data/maps/SlateportCity/scripts.pory"

# 454 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 455 "data/maps/SlateportCity/scripts.pory"
	lock
# 456 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 457 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 458 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 459 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 460 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 461 "data/maps/SlateportCity/scripts.pory"
	release
# 462 "data/maps/SlateportCity/scripts.pory"
	end
# 463 "data/maps/SlateportCity/scripts.pory"

# 464 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 465 "data/maps/SlateportCity/scripts.pory"
	lock
# 466 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 467 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 468 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 469 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 470 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/SlateportCity/scripts.pory"
	release
# 472 "data/maps/SlateportCity/scripts.pory"
	end
# 473 "data/maps/SlateportCity/scripts.pory"

# 474 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 475 "data/maps/SlateportCity/scripts.pory"
	lock
# 476 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 477 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 481 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 483 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 484 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 485 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 486 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 487 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 488 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 489 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 490 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 491 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 492 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 493 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 494 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 495 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 497 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 501 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 502 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 503 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 504 "data/maps/SlateportCity/scripts.pory"
	release
# 505 "data/maps/SlateportCity/scripts.pory"
	end
# 506 "data/maps/SlateportCity/scripts.pory"

# 507 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 508 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 509 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 510 "data/maps/SlateportCity/scripts.pory"
	step_end
# 511 "data/maps/SlateportCity/scripts.pory"

# 512 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 513 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 514 "data/maps/SlateportCity/scripts.pory"
	end
# 515 "data/maps/SlateportCity/scripts.pory"

# 516 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 517 "data/maps/SlateportCity/scripts.pory"
	lock
# 518 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 519 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 520 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 521 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 522 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/SlateportCity/scripts.pory"
	release
# 524 "data/maps/SlateportCity/scripts.pory"
	end
# 525 "data/maps/SlateportCity/scripts.pory"

# 526 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 527 "data/maps/SlateportCity/scripts.pory"
	lock
# 528 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 529 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 530 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 531 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 532 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 533 "data/maps/SlateportCity/scripts.pory"
	release
# 534 "data/maps/SlateportCity/scripts.pory"
	end
# 535 "data/maps/SlateportCity/scripts.pory"

# 536 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 537 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 538 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 539 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 540 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 541 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 542 "data/maps/SlateportCity/scripts.pory"

# 543 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 544 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 545 "data/maps/SlateportCity/scripts.pory"
	release
# 546 "data/maps/SlateportCity/scripts.pory"
	end
# 547 "data/maps/SlateportCity/scripts.pory"

# 548 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 549 "data/maps/SlateportCity/scripts.pory"
	lock
# 550 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 551 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 552 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 553 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 554 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 555 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 556 "data/maps/SlateportCity/scripts.pory"
	release
# 557 "data/maps/SlateportCity/scripts.pory"
	end
# 558 "data/maps/SlateportCity/scripts.pory"

# 559 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 560 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 561 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 562 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 563 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 565 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 566 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 567 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 568 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 569 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 570 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 571 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 572 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 573 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 574 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 575 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 576 "data/maps/SlateportCity/scripts.pory"

# 577 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 578 "data/maps/SlateportCity/scripts.pory"
	lock
# 579 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 580 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 581 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 582 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 583 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 584 "data/maps/SlateportCity/scripts.pory"
	release
# 585 "data/maps/SlateportCity/scripts.pory"
	end
# 586 "data/maps/SlateportCity/scripts.pory"

# 587 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 588 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 589 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 590 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 591 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 592 "data/maps/SlateportCity/scripts.pory"

# 593 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 594 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 595 "data/maps/SlateportCity/scripts.pory"
	lockall
# 596 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 597 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 598 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 599 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 603 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 605 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 607 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 608 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 609 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 611 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 612 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 613 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 614 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 616 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 617 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 618 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 620 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 621 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 622 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 623 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 625 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 627 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 628 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 629 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 631 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 633 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 635 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 636 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 637 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 638 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 639 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 641 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 642 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 643 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 644 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 645 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 646 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 647 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 648 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 649 "data/maps/SlateportCity/scripts.pory"
	end
# 650 "data/maps/SlateportCity/scripts.pory"

# 651 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 652 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 653 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 654 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 656 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 657 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 659 "data/maps/SlateportCity/scripts.pory"
	step_end
# 660 "data/maps/SlateportCity/scripts.pory"

# 661 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 662 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 663 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 664 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 666 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 667 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 668 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 669 "data/maps/SlateportCity/scripts.pory"
	step_end
# 670 "data/maps/SlateportCity/scripts.pory"

# 671 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 672 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 683 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 684 "data/maps/SlateportCity/scripts.pory"
	step_end
# 685 "data/maps/SlateportCity/scripts.pory"

# 686 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 689 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 695 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 697 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 698 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 699 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 700 "data/maps/SlateportCity/scripts.pory"
	step_end
# 701 "data/maps/SlateportCity/scripts.pory"

# 702 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 704 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 705 "data/maps/SlateportCity/scripts.pory"
	step_end
# 706 "data/maps/SlateportCity/scripts.pory"

# 707 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 708 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 709 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 710 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 711 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 712 "data/maps/SlateportCity/scripts.pory"
	step_end
# 713 "data/maps/SlateportCity/scripts.pory"

# 714 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 717 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 718 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 719 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 720 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 721 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 722 "data/maps/SlateportCity/scripts.pory"
	step_end
# 723 "data/maps/SlateportCity/scripts.pory"

# 724 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 725 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 726 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 727 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 728 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 729 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 730 "data/maps/SlateportCity/scripts.pory"
	step_end
# 731 "data/maps/SlateportCity/scripts.pory"

# 732 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 733 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 734 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 735 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 736 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 737 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 738 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 739 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 740 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 741 "data/maps/SlateportCity/scripts.pory"
	step_end
# 742 "data/maps/SlateportCity/scripts.pory"

# 743 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 744 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 745 "data/maps/SlateportCity/scripts.pory"
	end
# 746 "data/maps/SlateportCity/scripts.pory"

# 747 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 748 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 749 "data/maps/SlateportCity/scripts.pory"
	end
# 750 "data/maps/SlateportCity/scripts.pory"

# 751 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 752 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 753 "data/maps/SlateportCity/scripts.pory"
	end
# 754 "data/maps/SlateportCity/scripts.pory"

# 755 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 756 "data/maps/SlateportCity/scripts.pory"
	lock
# 757 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 758 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 759 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 760 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 761 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 762 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 763 "data/maps/SlateportCity/scripts.pory"
	release
# 764 "data/maps/SlateportCity/scripts.pory"
	end
# 765 "data/maps/SlateportCity/scripts.pory"

# 766 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 767 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 768 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 769 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 770 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 771 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 772 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 773 "data/maps/SlateportCity/scripts.pory"
	end
# 774 "data/maps/SlateportCity/scripts.pory"

# 775 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 776 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 777 "data/maps/SlateportCity/scripts.pory"
	release
# 778 "data/maps/SlateportCity/scripts.pory"
	end
# 779 "data/maps/SlateportCity/scripts.pory"

# 780 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 781 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 782 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 783 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 784 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 785 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 786 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 787 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 788 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 789 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 790 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 791 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 792 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 793 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 794 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 795 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 796 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 797 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 798 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 799 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 800 "data/maps/SlateportCity/scripts.pory"
	end
# 801 "data/maps/SlateportCity/scripts.pory"

# 802 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 803 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 804 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 805 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 806 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 807 "data/maps/SlateportCity/scripts.pory"
	end
# 808 "data/maps/SlateportCity/scripts.pory"

# 809 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 810 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 811 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 812 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 813 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 814 "data/maps/SlateportCity/scripts.pory"
	end
# 815 "data/maps/SlateportCity/scripts.pory"

# 816 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 817 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 818 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 819 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 820 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 821 "data/maps/SlateportCity/scripts.pory"
	end
# 822 "data/maps/SlateportCity/scripts.pory"

# 823 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 824 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 825 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 826 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 827 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 828 "data/maps/SlateportCity/scripts.pory"
	end
# 829 "data/maps/SlateportCity/scripts.pory"

# 830 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 831 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 832 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 833 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 834 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 835 "data/maps/SlateportCity/scripts.pory"
	end
# 836 "data/maps/SlateportCity/scripts.pory"

# 837 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 838 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 839 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 840 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 841 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 842 "data/maps/SlateportCity/scripts.pory"
	end
# 843 "data/maps/SlateportCity/scripts.pory"

# 844 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 845 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 846 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 847 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 848 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 849 "data/maps/SlateportCity/scripts.pory"
	end
# 850 "data/maps/SlateportCity/scripts.pory"

# 851 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 852 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 853 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 854 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 855 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 856 "data/maps/SlateportCity/scripts.pory"
	end
# 857 "data/maps/SlateportCity/scripts.pory"

# 858 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 859 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 860 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 861 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 862 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 863 "data/maps/SlateportCity/scripts.pory"
	end
# 864 "data/maps/SlateportCity/scripts.pory"

# 865 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 866 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 867 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 868 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 869 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 870 "data/maps/SlateportCity/scripts.pory"
	end
# 871 "data/maps/SlateportCity/scripts.pory"

# 872 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 873 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 874 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 875 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 876 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 877 "data/maps/SlateportCity/scripts.pory"
	end
# 878 "data/maps/SlateportCity/scripts.pory"

# 879 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 880 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 881 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 882 "data/maps/SlateportCity/scripts.pory"
	release
# 883 "data/maps/SlateportCity/scripts.pory"
	end
# 884 "data/maps/SlateportCity/scripts.pory"

# 885 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 886 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 887 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 888 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 889 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 890 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 891 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 892 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 893 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 894 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 895 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 896 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 897 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 898 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 899 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 900 "data/maps/SlateportCity/scripts.pory"
	release
# 901 "data/maps/SlateportCity/scripts.pory"
	end
# 902 "data/maps/SlateportCity/scripts.pory"

# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 904 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 905 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 906 "data/maps/SlateportCity/scripts.pory"
	release
# 907 "data/maps/SlateportCity/scripts.pory"
	end
# 908 "data/maps/SlateportCity/scripts.pory"

# 909 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 910 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 911 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 912 "data/maps/SlateportCity/scripts.pory"
	end
# 913 "data/maps/SlateportCity/scripts.pory"

# 914 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 915 "data/maps/SlateportCity/scripts.pory"
	lockall
# 916 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 917 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 918 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 919 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 920 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 921 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 922 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 923 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 924 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 925 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 926 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 927 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 928 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 929 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 930 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 931 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 932 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 933 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 934 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 935 "data/maps/SlateportCity/scripts.pory"
	end
# 936 "data/maps/SlateportCity/scripts.pory"

# 937 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 938 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 939 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 940 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 941 "data/maps/SlateportCity/scripts.pory"
	step_end
# 942 "data/maps/SlateportCity/scripts.pory"

# 943 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 944 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 945 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 946 "data/maps/SlateportCity/scripts.pory"
	step_end
# 947 "data/maps/SlateportCity/scripts.pory"

# 948 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 949 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 950 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 951 "data/maps/SlateportCity/scripts.pory"
	step_end
# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 954 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 955 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 956 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 957 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 958 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 959 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 960 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 961 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 962 "data/maps/SlateportCity/scripts.pory"
	step_end
# 963 "data/maps/SlateportCity/scripts.pory"

# 964 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 965 "data/maps/SlateportCity/scripts.pory"
	lockall
# 966 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 967 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 968 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 969 "data/maps/SlateportCity/scripts.pory"
	end
# 970 "data/maps/SlateportCity/scripts.pory"

# 971 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 972 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 974 "data/maps/SlateportCity/scripts.pory"

# 975 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 978 "data/maps/SlateportCity/scripts.pory"

# 979 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 980 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 983 "data/maps/SlateportCity/scripts.pory"

# 984 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 986 "data/maps/SlateportCity/scripts.pory"

# 987 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 990 "data/maps/SlateportCity/scripts.pory"

# 991 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 995 "data/maps/SlateportCity/scripts.pory"

# 996 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 997 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 999 "data/maps/SlateportCity/scripts.pory"

# 1000 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1005 "data/maps/SlateportCity/scripts.pory"

# 1006 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1012 "data/maps/SlateportCity/scripts.pory"

# 1013 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1019 "data/maps/SlateportCity/scripts.pory"

# 1020 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1024 "data/maps/SlateportCity/scripts.pory"

# 1025 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1028 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1031 "data/maps/SlateportCity/scripts.pory"

# 1032 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1037 "data/maps/SlateportCity/scripts.pory"

# 1038 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1044 "data/maps/SlateportCity/scripts.pory"

# 1045 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1050 "data/maps/SlateportCity/scripts.pory"

# 1051 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1054 "data/maps/SlateportCity/scripts.pory"

# 1055 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1060 "data/maps/SlateportCity/scripts.pory"

# 1061 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1079 "data/maps/SlateportCity/scripts.pory"

# 1080 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1083 "data/maps/SlateportCity/scripts.pory"

# 1084 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1087 "data/maps/SlateportCity/scripts.pory"

# 1088 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1089 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1092 "data/maps/SlateportCity/scripts.pory"

# 1093 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1096 "data/maps/SlateportCity/scripts.pory"

# 1097 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1100 "data/maps/SlateportCity/scripts.pory"

# 1101 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1111 "data/maps/SlateportCity/scripts.pory"

# 1112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1117 "data/maps/SlateportCity/scripts.pory"

# 1118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1123 "data/maps/SlateportCity/scripts.pory"

# 1124 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1128 "data/maps/SlateportCity/scripts.pory"

# 1129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1138 "data/maps/SlateportCity/scripts.pory"

# 1139 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1143 "data/maps/SlateportCity/scripts.pory"

# 1144 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1149 "data/maps/SlateportCity/scripts.pory"

# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1157 "data/maps/SlateportCity/scripts.pory"

# 1158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1163 "data/maps/SlateportCity/scripts.pory"

# 1164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1169 "data/maps/SlateportCity/scripts.pory"

# 1170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1175 "data/maps/SlateportCity/scripts.pory"

# 1176 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1180 "data/maps/SlateportCity/scripts.pory"

# 1181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1184 "data/maps/SlateportCity/scripts.pory"

# 1185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1188 "data/maps/SlateportCity/scripts.pory"

# 1189 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1192 "data/maps/SlateportCity/scripts.pory"

# 1193 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1196 "data/maps/SlateportCity/scripts.pory"

# 1197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1200 "data/maps/SlateportCity/scripts.pory"

# 1201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1207 "data/maps/SlateportCity/scripts.pory"

# 1208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1212 "data/maps/SlateportCity/scripts.pory"

# 1213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1222 "data/maps/SlateportCity/scripts.pory"

# 1223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1233 "data/maps/SlateportCity/scripts.pory"

# 1234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1239 "data/maps/SlateportCity/scripts.pory"

# 1240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1244 "data/maps/SlateportCity/scripts.pory"

# 1245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1248 "data/maps/SlateportCity/scripts.pory"

# 1249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1252 "data/maps/SlateportCity/scripts.pory"

# 1253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1263 "data/maps/SlateportCity/scripts.pory"

# 1264 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1269 "data/maps/SlateportCity/scripts.pory"

# 1270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1273 "data/maps/SlateportCity/scripts.pory"

# 1274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1278 "data/maps/SlateportCity/scripts.pory"

# 1279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1283 "data/maps/SlateportCity/scripts.pory"

# 1284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1287 "data/maps/SlateportCity/scripts.pory"

# 1288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1294 "data/maps/SlateportCity/scripts.pory"

# 1295 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1318 "data/maps/SlateportCity/scripts.pory"

# 1319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1337 "data/maps/SlateportCity/scripts.pory"

# 1338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1341 "data/maps/SlateportCity/scripts.pory"

# 1342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1345 "data/maps/SlateportCity/scripts.pory"

# 1346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1351 "data/maps/SlateportCity/scripts.pory"

# 1352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1355 "data/maps/SlateportCity/scripts.pory"

# 1356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"

SlateportCity_Text_YouDroveTeamAquaAway::
# 1 "data/maps/SlateportCity/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu\p"
	.string "Have I introduced myself to you?\n"
	.string "If not, my name's ANTHONY.\p"
	.string "I just saw TEAM AQUA run away from\n"
	.string "here like they were stung.\p"
	.string "Let me guess--you drove them away?$"

SlateportCity_Text_MaybeThisTrainer::
# 11 "data/maps/SlateportCity/scripts.pory"
	.string "ANTHONY: Hmm…\n"
	.string "Maybe, just maybe, this TRAINER…$"

SlateportCity_Text_LetsRegisterEachOther::
# 16 "data/maps/SlateportCity/scripts.pory"
	.string "ANTHONY: All right! I think you're\n"
	.string "going to become a good friend.\p"
	.string "So, let's register each other in our\n"
	.string "POKéNAVS.\p"
	.string "… … … … … …$"

SlateportCity_Text_RegisteredScott::
# 24 "data/maps/SlateportCity/scripts.pory"
	.string "Registered ANTHONY\n"
	.string "in the POKéNAV.$"

SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou::
# 29 "data/maps/SlateportCity/scripts.pory"
	.string "ANTHONY: While I'd like to tag along to\n"
	.string "see your skills, I need to keep an eye\l"
	.string "on the talents of other people, too.\p"
	.string "So, I'll be off to other towns.\n"
	.string "Be seeing you, {PLAYER}{KUN}!$"

SlateportCity_Text_TakingBattleTentChallenge::
# 37 "data/maps/SlateportCity/scripts.pory"
	.string "ANTHONY: Hello, hello, wazzup, wazzup!\n"
	.string "Good to see ya! Huhuhuhu\p"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
	.string "to take the BATTLE TENT challenge?\p"
	.string "Yeah! That's a good idea!\n"
	.string "That's a really great idea!\p"
	.string "After all, a tough TRAINER is\n"
	.string "the perfect fit for the BATTLE TENT!\p"
	.string "Give it your best effort!$"

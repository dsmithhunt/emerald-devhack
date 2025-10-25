Route105_CloseRegiEntrance::
	return


# 7 "data/maps/Route105/scripts.pory"

# 8 "data/maps/Route105/scripts.pory"
Route105_MapScripts::
# 9 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 10 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 11 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 12 "data/maps/Route105/scripts.pory"
	.byte 0
# 13 "data/maps/Route105/scripts.pory"

# 14 "data/maps/Route105/scripts.pory"
Route105_OnLoad:
# 15 "data/maps/Route105/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
# 16 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
# 17 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
# 18 "data/maps/Route105/scripts.pory"
	end
# 19 "data/maps/Route105/scripts.pory"

# 20 "data/maps/Route105/scripts.pory"
Route105_OnTransition:
# 21 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 22 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 23 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 24 "data/maps/Route105/scripts.pory"
	end
# 25 "data/maps/Route105/scripts.pory"

# 26 "data/maps/Route105/scripts.pory"
Route105_OnFrame:
# 27 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 28 "data/maps/Route105/scripts.pory"
	.2byte 0
# 29 "data/maps/Route105/scripts.pory"

# 30 "data/maps/Route105/scripts.pory"
Route105_EventScript_Foster::
# 31 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 32 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route105/scripts.pory"
	end
# 34 "data/maps/Route105/scripts.pory"

# 35 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 36 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 37 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route105/scripts.pory"
	end
# 39 "data/maps/Route105/scripts.pory"

# 40 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 41 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 42 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route105/scripts.pory"
	end
# 44 "data/maps/Route105/scripts.pory"

# 45 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 46 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 47 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route105/scripts.pory"
	end
# 49 "data/maps/Route105/scripts.pory"

# 50 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 51 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 52 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route105/scripts.pory"
	end
# 54 "data/maps/Route105/scripts.pory"

# 55 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 56 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 57 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route105/scripts.pory"
	end
# 59 "data/maps/Route105/scripts.pory"

# 60 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 61 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 62 "data/maps/Route105/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 63 "data/maps/Route105/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 64 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 65 "data/maps/Route105/scripts.pory"
	release
# 66 "data/maps/Route105/scripts.pory"
	end
# 67 "data/maps/Route105/scripts.pory"

# 68 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 69 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 70 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 72 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 73 "data/maps/Route105/scripts.pory"
	release
# 74 "data/maps/Route105/scripts.pory"
	end
# 75 "data/maps/Route105/scripts.pory"

# 76 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 77 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 78 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route105/scripts.pory"
	end
# 80 "data/maps/Route105/scripts.pory"

# 81 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall:
# 82 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 83 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 84 "data/maps/Route105/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 85 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 86 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 87 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 88 "data/maps/Route105/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 89 "data/maps/Route105/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 90 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 91 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 92 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 93 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 94 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 95 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 96 "data/maps/Route105/scripts.pory"

# 97 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 98 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 99 "data/maps/Route105/scripts.pory"
	.string "in the POKéNAV.$"

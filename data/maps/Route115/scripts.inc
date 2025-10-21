Route115_GruntBlockMeteorFalls::
# 2 "data/maps/Route115/scripts.pory"
	lock
# 3 "data/maps/Route115/scripts.pory"
	faceplayer
# 4 "data/maps/Route115/scripts.pory"
	msgbox Route115_GruntBlockMeteorFalls_Text_0
# 8 "data/maps/Route115/scripts.pory"
	closemessage
# 9 "data/maps/Route115/scripts.pory"
	applymovement ROUTE_115_AQUA_GRUNT, Common_Movement_WalkInPlaceFasterRight
# 10 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route115/scripts.pory"
	release
	return


Route115_MattBlockMeteorFalls::
# 15 "data/maps/Route115/scripts.pory"
	lock
# 16 "data/maps/Route115/scripts.pory"
	faceplayer
# 17 "data/maps/Route115/scripts.pory"
	msgbox Route115_MattBlockMeteorFalls_Text_0
# 21 "data/maps/Route115/scripts.pory"
	closemessage
# 22 "data/maps/Route115/scripts.pory"
	applymovement ROUTE_115_MATT, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route115/scripts.pory"
	release
	return


# 27 "data/maps/Route115/scripts.pory"

# 28 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 29 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 30 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 31 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 32 "data/maps/Route115/scripts.pory"
	.byte 0
# 33 "data/maps/Route115/scripts.pory"

# 34 "data/maps/Route115/scripts.pory"
Route115_OnLoad:
# 35 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 36 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 37 "data/maps/Route115/scripts.pory"
	end
# 38 "data/maps/Route115/scripts.pory"

# 39 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 40 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 41 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 42 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 43 "data/maps/Route115/scripts.pory"
	end
# 44 "data/maps/Route115/scripts.pory"

# 45 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 46 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 47 "data/maps/Route115/scripts.pory"
	.2byte 0
# 48 "data/maps/Route115/scripts.pory"

# 49 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 50 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 51 "data/maps/Route115/scripts.pory"
	end
# 52 "data/maps/Route115/scripts.pory"

# 53 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 54 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 55 "data/maps/Route115/scripts.pory"
	end
# 56 "data/maps/Route115/scripts.pory"

# 57 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 58 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 59 "data/maps/Route115/scripts.pory"
	end
# 60 "data/maps/Route115/scripts.pory"

# 61 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 62 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 63 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 64 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
# 65 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 66 "data/maps/Route115/scripts.pory"
	release
# 67 "data/maps/Route115/scripts.pory"
	end
# 68 "data/maps/Route115/scripts.pory"

# 69 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 70 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 71 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 73 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 74 "data/maps/Route115/scripts.pory"
	release
# 75 "data/maps/Route115/scripts.pory"
	end
# 76 "data/maps/Route115/scripts.pory"

# 77 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 78 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 79 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route115/scripts.pory"
	end
# 81 "data/maps/Route115/scripts.pory"

# 82 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 83 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 84 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route115/scripts.pory"
	end
# 86 "data/maps/Route115/scripts.pory"

# 87 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 88 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
# 89 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 90 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchNob
# 91 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 92 "data/maps/Route115/scripts.pory"
	release
# 93 "data/maps/Route115/scripts.pory"
	end
# 94 "data/maps/Route115/scripts.pory"

# 95 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 96 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 97 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 99 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 100 "data/maps/Route115/scripts.pory"
	release
# 101 "data/maps/Route115/scripts.pory"
	end
# 102 "data/maps/Route115/scripts.pory"

# 103 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 104 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 105 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route115/scripts.pory"
	end
# 107 "data/maps/Route115/scripts.pory"

# 108 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 109 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 110 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 111 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 112 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 113 "data/maps/Route115/scripts.pory"
	release
# 114 "data/maps/Route115/scripts.pory"
	end
# 115 "data/maps/Route115/scripts.pory"

# 116 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 117 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 118 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 120 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 121 "data/maps/Route115/scripts.pory"
	release
# 122 "data/maps/Route115/scripts.pory"
	end
# 123 "data/maps/Route115/scripts.pory"

# 124 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 125 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 126 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route115/scripts.pory"
	end
# 128 "data/maps/Route115/scripts.pory"

# 129 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 130 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 131 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route115/scripts.pory"
	end
# 133 "data/maps/Route115/scripts.pory"

# 134 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 135 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 136 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route115/scripts.pory"
	end
# 138 "data/maps/Route115/scripts.pory"

# 139 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 140 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 141 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route115/scripts.pory"
	end
# 143 "data/maps/Route115/scripts.pory"

# 144 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 145 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 146 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route115/scripts.pory"
	end
# 148 "data/maps/Route115/scripts.pory"

# 149 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 150 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 151 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route115/scripts.pory"
	end
# 153 "data/maps/Route115/scripts.pory"

# 154 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 155 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 156 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/Route115/scripts.pory"
	end
# 158 "data/maps/Route115/scripts.pory"

# 159 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 160 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 161 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 162 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 163 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 164 "data/maps/Route115/scripts.pory"

# 165 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 166 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 167 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 168 "data/maps/Route115/scripts.pory"

# 169 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 170 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 171 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"

Route115_GruntBlockMeteorFalls_Text_0:
# 5 "data/maps/Route115/scripts.pory"
	.string "AQUA GRUNT: We can't let you pass.\n"
	.string "You might blow our cover…$"

Route115_MattBlockMeteorFalls_Text_0:
# 18 "data/maps/Route115/scripts.pory"
	.string "MATT: Beat it kid!\n"
	.string "We're preparing an ambush!$"

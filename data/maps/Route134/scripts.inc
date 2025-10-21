Route134_RuinManiacHint::
# 2 "data/maps/Route134/scripts.pory"
	lock
# 3 "data/maps/Route134/scripts.pory"
	faceplayer
# 4 "data/maps/Route134/scripts.pory"
	msgbox Route134_RuinManiacHint_Text_0
# 12 "data/maps/Route134/scripts.pory"
	checkitem ITEM_ANCIENT_CYPHER
# 13 "data/maps/Route134/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route134_RuinManiacHint_2
Route134_RuinManiacHint_1:
# 25 "data/maps/Route134/scripts.pory"
	closemessage
# 26 "data/maps/Route134/scripts.pory"
	applymovement ROUTE_134_RUIN_MANIAC, Common_Movement_FaceOriginalDirection
# 27 "data/maps/Route134/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route134/scripts.pory"
	release
	return

Route134_RuinManiacHint_2:
# 14 "data/maps/Route134/scripts.pory"
	msgbox Route134_RuinManiacHint_Text_1, MSGBOX_YESNO
# 19 "data/maps/Route134/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route134_RuinManiacHint_4
# 23 "data/maps/Route134/scripts.pory"
	msgbox Route134_RuinManiacHint_Text_3
	goto Route134_RuinManiacHint_1

Route134_RuinManiacHint_4:
# 20 "data/maps/Route134/scripts.pory"
	giveitem ITEM_ANCIENT_CYPHER
# 21 "data/maps/Route134/scripts.pory"
	msgbox Route134_RuinManiacHint_Text_2
	goto Route134_RuinManiacHint_1


# 31 "data/maps/Route134/scripts.pory"

# 32 "data/maps/Route134/scripts.pory"
Route134_MapScripts::
# 33 "data/maps/Route134/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route134_OnResume
# 34 "data/maps/Route134/scripts.pory"
	.byte 0
# 35 "data/maps/Route134/scripts.pory"

# 36 "data/maps/Route134/scripts.pory"
Route134_OnResume:
# 37 "data/maps/Route134/scripts.pory"
	setdivewarp MAP_UNDERWATER_ROUTE134, 8, 6
# 38 "data/maps/Route134/scripts.pory"
	end
# 39 "data/maps/Route134/scripts.pory"

# 40 "data/maps/Route134/scripts.pory"
Route134_EventScript_Jack::
# 41 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_JACK, Route134_Text_JackIntro, Route134_Text_JackDefeat
# 42 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_JackPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route134/scripts.pory"
	end
# 44 "data/maps/Route134/scripts.pory"

# 45 "data/maps/Route134/scripts.pory"
Route134_EventScript_Laurel::
# 46 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_LAUREL, Route134_Text_LaurelIntro, Route134_Text_LaurelDefeat
# 47 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route134/scripts.pory"
	end
# 49 "data/maps/Route134/scripts.pory"

# 50 "data/maps/Route134/scripts.pory"
Route134_EventScript_Alex::
# 51 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_ALEX, Route134_Text_AlexIntro, Route134_Text_AlexDefeat
# 52 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route134/scripts.pory"
	end
# 54 "data/maps/Route134/scripts.pory"

# 55 "data/maps/Route134/scripts.pory"
Route134_EventScript_Aaron::
# 56 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_AARON, Route134_Text_AaronIntro, Route134_Text_AaronDefeat
# 57 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route134/scripts.pory"
	end
# 59 "data/maps/Route134/scripts.pory"

# 60 "data/maps/Route134/scripts.pory"
Route134_EventScript_Hitoshi::
# 61 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_HITOSHI, Route134_Text_HitoshiIntro, Route134_Text_HitoshiDefeat
# 62 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route134/scripts.pory"
	end
# 64 "data/maps/Route134/scripts.pory"

# 65 "data/maps/Route134/scripts.pory"
Route134_EventScript_Hudson::
# 66 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_HUDSON, Route134_Text_HudsonIntro, Route134_Text_HudsonDefeat
# 67 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HudsonPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route134/scripts.pory"
	end
# 69 "data/maps/Route134/scripts.pory"

# 70 "data/maps/Route134/scripts.pory"
Route134_EventScript_Reyna::
# 71 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_REYNA, Route134_Text_ReynaIntro, Route134_Text_ReynaDefeat
# 72 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_ReynaPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route134/scripts.pory"
	end
# 74 "data/maps/Route134/scripts.pory"

# 75 "data/maps/Route134/scripts.pory"
Route134_EventScript_Marley::
# 76 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_MARLEY, Route134_Text_MarleyIntro, Route134_Text_MarleyDefeat
# 77 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_MarleyPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route134/scripts.pory"
	end
# 79 "data/maps/Route134/scripts.pory"

# 80 "data/maps/Route134/scripts.pory"
Route134_EventScript_Kelvin::
# 81 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_KELVIN, Route134_Text_KelvinIntro, Route134_Text_KelvinDefeat
# 82 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_KelvinPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route134/scripts.pory"
	end

Route134_RuinManiacHint_Text_0:
# 5 "data/maps/Route134/scripts.pory"
	.string "It's here, I know it is…\n"
	.string "Directly west of here are ancient,\l"
	.string "sunken ruins, older than even the Sky\l"
	.string "Pillar.$"

Route134_RuinManiacHint_Text_1:
# 15 "data/maps/Route134/scripts.pory"
	.string "I've spent years researching ancient\n"
	.string "languages, and I've created a cypher to\l"
	.string "decode the inscriptions on the walls of\l"
	.string "those ruins. Would you like a copy?$"

Route134_RuinManiacHint_Text_2:
# 21 "data/maps/Route134/scripts.pory"
	.string "Here you go! Take good care of it.$"

Route134_RuinManiacHint_Text_3:
# 23 "data/maps/Route134/scripts.pory"
	.string "No? You must be confident in your\n"
	.string "talents. If you change your mind, just\l"
	.string "come back and ask.$"

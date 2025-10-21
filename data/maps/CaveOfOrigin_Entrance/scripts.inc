CaveOfOrigin_Entrance_Zinnia::
# 2 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	lock
# 3 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	faceplayer
# 4 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	msgbox CaveOfOrigin_Entrance_Zinnia_Text_0
# 10 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	applymovement 1, CaveOfOrigin_Entrance_Zinnia_Movement_0
# 11 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	waitmovement 0
# 12 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	removeobject 1
# 13 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	playse SE_EXIT
# 14 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	release
	return


# 17 "data/maps/CaveOfOrigin_Entrance/scripts.pory"

# 18 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
CaveOfOrigin_Entrance_MapScripts::
# 19 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CaveOfOrigin_Entrance_OnResume
# 20 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	.byte 0
# 21 "data/maps/CaveOfOrigin_Entrance/scripts.pory"

# 22 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
CaveOfOrigin_Entrance_OnResume:
# 23 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	setescapewarp MAP_SOOTOPOLIS_CITY, 31, 17
# 24 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	end

# 10 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
CaveOfOrigin_Entrance_Zinnia_Movement_0:
# 10 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	walk_up
	step_end

CaveOfOrigin_Entrance_Zinnia_Text_0:
# 5 "data/maps/CaveOfOrigin_Entrance/scripts.pory"
	.string "ZINNIA: I am going to tell you a story.\p"
	.string "In the super-ancient past, two POKéMON\n"
	.string "shaped the world in relative harmony.\p"
	.string "They were rivals, but they were also\n"
	.string "friends.\l"
	.string "They balanced each other, and their\l"
	.string "competition made the various natural\l"
	.string "wonders of the world.$"

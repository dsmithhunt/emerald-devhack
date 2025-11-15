DesertPass_1F_MapScripts::
# 2 "data/maps/DesertPass_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/DesertPass_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 4 "data/maps/DesertPass_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0


DesertPass_1F_SetHoleWarp::
# 8 "data/maps/DesertPass_1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 9 "data/maps/DesertPass_1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
	return


DesertPass_1F_StuckGuy::
# 13 "data/maps/DesertPass_1F/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_JAMES, DesertPass_1F_StuckGuy_Text_0, DesertPass_1F_StuckGuy_Text_1
# 18 "data/maps/DesertPass_1F/scripts.pory"
	msgbox DesertPass_1F_StuckGuy_Text_2, MSGBOX_AUTOCLOSE
# 19 "data/maps/DesertPass_1F/scripts.pory"
	waitmessage
	return


DesertPass_1F_CantCrossGuy::
# 23 "data/maps/DesertPass_1F/scripts.pory"
	lock
# 24 "data/maps/DesertPass_1F/scripts.pory"
	faceplayer
# 25 "data/maps/DesertPass_1F/scripts.pory"
	msgbox DesertPass_1F_CantCrossGuy_Text_0
# 26 "data/maps/DesertPass_1F/scripts.pory"
	closemessage
# 27 "data/maps/DesertPass_1F/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 28 "data/maps/DesertPass_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/DesertPass_1F/scripts.pory"
	release
	return


DesertPass_1F_StuckGuy_Text_0:
# 15 "data/maps/DesertPass_1F/scripts.pory"
	.string "I got trapped by these rocks.\n"
	.string "We can battle to pass the time!$"

DesertPass_1F_StuckGuy_Text_1:
# 16 "data/maps/DesertPass_1F/scripts.pory"
	.string "I can't be popular if I lose.$"

DesertPass_1F_StuckGuy_Text_2:
# 18 "data/maps/DesertPass_1F/scripts.pory"
	.string "You moved the rocks so I can escape,\n"
	.string "but I kinda like it here now…$"

DesertPass_1F_CantCrossGuy_Text_0:
# 25 "data/maps/DesertPass_1F/scripts.pory"
	.string "I feel like I could cross the rocks if I\n"
	.string "tried.\l"
	.string "But I don't want to get all dirty.$"

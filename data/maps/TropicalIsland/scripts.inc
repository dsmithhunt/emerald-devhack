TropicalIsland_MapScripts::
	.byte 0


OgerponWarp::
# 4 "data/maps/TropicalIsland/scripts.pory"
	warp MAP_FARAWAY_ISLAND_INTERIOR, 13, 19
# 5 "data/maps/TropicalIsland/scripts.pory"
	waitstate
	return


FarawayIsland_NinjaBoy::
# 9 "data/maps/TropicalIsland/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, FarawayIsland_NinjaBoy_Text_0, FarawayIsland_NinjaBoy_Text_1
# 14 "data/maps/TropicalIsland/scripts.pory"
	msgbox FarawayIsland_NinjaBoy_Text_2, MSGBOX_AUTOCLOSE
# 15 "data/maps/TropicalIsland/scripts.pory"
	waitmessage
	return


FarawayIsland_Kecleon0::
# 19 "data/maps/TropicalIsland/scripts.pory"
	lock
# 20 "data/maps/TropicalIsland/scripts.pory"
	faceplayer
# 21 "data/maps/TropicalIsland/scripts.pory"
	setvar VAR_0x8009, 8
# 22 "data/maps/TropicalIsland/scripts.pory"
	goto EventScript_Kecleon
	return


FishingRodTest::
# 26 "data/maps/TropicalIsland/scripts.pory"
	lock
# 27 "data/maps/TropicalIsland/scripts.pory"
	faceplayer
# 28 "data/maps/TropicalIsland/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 29 "data/maps/TropicalIsland/scripts.pory"
	release
	return


FarawayIsland_NinjaBoy_Text_0:
# 11 "data/maps/TropicalIsland/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My bug POKéMON team!$"

FarawayIsland_NinjaBoy_Text_1:
# 12 "data/maps/TropicalIsland/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

FarawayIsland_NinjaBoy_Text_2:
# 14 "data/maps/TropicalIsland/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

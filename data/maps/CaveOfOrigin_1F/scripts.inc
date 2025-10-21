CaveOfOrigin_1F_Zinnia::
# 2 "data/maps/CaveOfOrigin_1F/scripts.pory"
	lock
# 3 "data/maps/CaveOfOrigin_1F/scripts.pory"
	msgbox CaveOfOrigin_1F_Zinnia_Text_0
# 11 "data/maps/CaveOfOrigin_1F/scripts.pory"
	applymovement 1, CaveOfOrigin_1F_Zinnia_Movement_0
# 12 "data/maps/CaveOfOrigin_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/CaveOfOrigin_1F/scripts.pory"
	removeobject 1
# 14 "data/maps/CaveOfOrigin_1F/scripts.pory"
	playse SE_EXIT
# 15 "data/maps/CaveOfOrigin_1F/scripts.pory"
	release
	return


# 18 "data/maps/CaveOfOrigin_1F/scripts.pory"

# 19 "data/maps/CaveOfOrigin_1F/scripts.pory"
CaveOfOrigin_1F_MapScripts::
# 20 "data/maps/CaveOfOrigin_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_1F_OnTransition
# 21 "data/maps/CaveOfOrigin_1F/scripts.pory"
	.byte 0
# 22 "data/maps/CaveOfOrigin_1F/scripts.pory"

# 23 "data/maps/CaveOfOrigin_1F/scripts.pory"
CaveOfOrigin_1F_OnTransition:
# 24 "data/maps/CaveOfOrigin_1F/scripts.pory"
	call_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_EventScript_DisableTriggers
# 25 "data/maps/CaveOfOrigin_1F/scripts.pory"
	end

# 11 "data/maps/CaveOfOrigin_1F/scripts.pory"
CaveOfOrigin_1F_Zinnia_Movement_0:
# 11 "data/maps/CaveOfOrigin_1F/scripts.pory"
	walk_up
	step_end

CaveOfOrigin_1F_Zinnia_Text_0:
# 4 "data/maps/CaveOfOrigin_1F/scripts.pory"
	.string "ZINNIA: In time, however, people came\n"
	.string "about and began to fight amongst\l"
	.string "themselves.\p"
	.string "These people were blinded by their\n"
	.string "conflict, and their leaders stole the\l"
	.string "people's most sacred relics,\l"
	.string "the eggs of the super-ancient POKéMON.\p"
	.string "They used the eggs to force KYOGRE and\n"
	.string "GROUDON to fight for them, bringing\l"
	.string "about unimaginable devastation.\p"
	.string "Although the POKéMON were being forced\n"
	.string "to fight,\p"
	.string "each clash grew resentment towards the\n"
	.string "other until their violence was\l"
	.string "voluntary, beyond the will of their\l"
	.string "masters.$"

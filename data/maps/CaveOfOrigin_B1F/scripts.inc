CaveOfOrigin_ZinniaStory::
# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_ZinniaStory_Text_0
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_ZinniaStory_Text_1
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_ZinniaStory_Text_2
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
	return


# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_ExclamationMark
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_Delay48
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}?\n"
# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I've heard tales of your exploits.\p"
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "My name is WALLACE.\p"
# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I was once the GYM LEADER of\n"
# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "SOOTOPOLIS, but something came up.\p"
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "So now, I've entrusted my mentor JUAN\n"
# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "with the GYM's operation.\p"
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 120 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "GROUDON and KYOGRE, the two POKéMON\n"
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "wreaking havoc here, are considered\l"
# 122 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "to be super-ancient POKéMON.\p"
# 123 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But there aren't just two super-\n"
# 124 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON.\p"
# 125 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "There is one more somewhere.\p"
# 126 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Somewhere, there is a super-\n"
# 127 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON named RAYQUAZA.\p"
# 128 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's said that it was RAYQUAZA that\n"
# 129 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "becalmed the two combatants in\l"
# 130 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "the distant past.\p"
# 131 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But even I have no clue as to\n"
# 132 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "RAYQUAZA's whereabouts…$"
# 133 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 134 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 135 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}, do you perhaps\n"
# 136 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "know where RAYQUAZA is now?\p"
# 137 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "If you do, please tell me.$"
# 138 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 139 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 140 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN?\p"
# 141 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But that's right here!\n"
# 142 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I need you to do better than that!\p"
# 143 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Please, I need you to think about\n"
# 144 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "where RAYQUAZA might be right now.$"
# 145 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 146 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 147 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: MT. PYRE?\p"
# 148 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But when I met the old lady there\n"
# 149 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "earlier, she made no mention of it.\p"
# 150 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I very much doubt that the old lady\n"
# 151 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "would try to hide something from me…\p"
# 152 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, could you think about this\n"
# 153 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "more carefully for me?$"
# 154 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 155 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 156 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: Huh? You don't remember?\n"
# 157 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Hmm… That's a problem…\p"
# 158 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Can't you remember somehow?$"
# 159 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 160 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 161 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The SKY PILLAR?\p"
# 162 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "That's it!\n"
# 163 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It must be the SKY PILLAR!\p"
# 164 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, there's not a moment to lose!\n"
# 165 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "We'll head to the SKY PILLAR right away!$"

CaveOfOrigin_ZinniaStory_Text_0:
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ZINNIA: So, this is the CAVE OF ORIGIN.\p"
	.string "This is where the SUPER-ANCIENT\n"
	.string "POKéMON were born and from where their\l"
	.string "eggs, the RED and BLUE ORBS were\l"
	.string "taken…$"

CaveOfOrigin_ZinniaStory_Text_1:
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "This story, however, does not end with\n"
	.string "mutual destruction…\p"
	.string "Eventually, the people realized the\n"
	.string "error of their ways and regretted what\l"
	.string "they had done,\l"
	.string "but when they tried to come to a truce,\l"
	.string "it was too late…\p"
	.string "KYOGRE and GROUDON had been driven to\n"
	.string "madness by their endless fighting and\l"
	.string "would not stop.\p"
	.string "In their desperation, these people, my\n"
	.string "ancestors, shared a wish to stop the\l"
	.string "war.\p"
	.string "Their wish shot across the sky like a\n"
	.string "comet and the DRAGON LORD, the planet's\l"
	.string "protector, descended from the heavens\l"
	.string "and quelled the fighting.\p"
	.string "The people were shaken by what they\n"
	.string "had done, but they would recover…\n"
	.string "Together, the two sides would inter the\l"
	.string "ORBS on MT. PYRE, which would serve as a\l"
	.string "memorial to the people and POKéMON who\l"
	.string "perished in the conflict.$"

CaveOfOrigin_ZinniaStory_Text_2:
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ZINNIA: This mighty POKéMON, RAYQUAZA,\n"
	.string "stopped the fighting and restored\l"
	.string "peace to the world.\p"
	.string "After that, the ancient people built a\n"
	.string "sealed monument to the DRAGON LORD,\l"
	.string "SKY PILLAR.\p"
	.string "Atop this tower, RAYQUAZA could rest\n"
	.string "and watch over the world, aloof from\l"
	.string "petty requests. {PLAYER}{KUN}, it is my\l"
	.string "ancestral duty to unseal the SKY\l"
	.string "PILLAR when things are at their most\l"
	.string "dire.\p"
	.string "There's not a moment to lose!\n"
	.string "Meet me at SKY PILLAR right away!$"

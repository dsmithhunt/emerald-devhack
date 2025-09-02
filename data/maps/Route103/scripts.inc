# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 3 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 4 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 5 "data/maps/Route103/scripts.pory"
	.byte 0
# 6 "data/maps/Route103/scripts.pory"

# 7 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 8 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 10 "data/maps/Route103/scripts.pory"
	end
# 11 "data/maps/Route103/scripts.pory"

# 12 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 13 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 14 "data/maps/Route103/scripts.pory"
	end
# 15 "data/maps/Route103/scripts.pory"

# 16 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 17 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 18 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 19 "data/maps/Route103/scripts.pory"
	return
# 20 "data/maps/Route103/scripts.pory"

# 21 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 22 "data/maps/Route103/scripts.pory"
	lockall
# 23 "data/maps/Route103/scripts.pory"
	checkplayergender
# 24 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 25 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 26 "data/maps/Route103/scripts.pory"
	end
# 27 "data/maps/Route103/scripts.pory"

# 28 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 29 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 30 "data/maps/Route103/scripts.pory"
	closemessage
# 31 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 32 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 33 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 34 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 35 "data/maps/Route103/scripts.pory"
	end
# 36 "data/maps/Route103/scripts.pory"

# 37 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 38 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 39 "data/maps/Route103/scripts.pory"
	closemessage
# 40 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 41 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 42 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 43 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 44 "data/maps/Route103/scripts.pory"
	end
# 45 "data/maps/Route103/scripts.pory"

# 46 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 47 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LAB_CHESPIN, Route103_Text_MayDefeated
# 48 "data/maps/Route103/scripts.pory"
	end
# 49 "data/maps/Route103/scripts.pory"

# 50 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 51 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LAB_TEPIG, Route103_Text_MayDefeated
# 52 "data/maps/Route103/scripts.pory"
	end
# 53 "data/maps/Route103/scripts.pory"

# 54 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 55 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LAB_SOBBLE, Route103_Text_MayDefeated
# 56 "data/maps/Route103/scripts.pory"
	end
# 57 "data/maps/Route103/scripts.pory"

# 58 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 59 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LAB_CHESPIN, Route103_Text_BrendanDefeated
# 60 "data/maps/Route103/scripts.pory"
	end
# 61 "data/maps/Route103/scripts.pory"

# 62 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 63 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LAB_TEPIG, Route103_Text_BrendanDefeated
# 64 "data/maps/Route103/scripts.pory"
	end
# 65 "data/maps/Route103/scripts.pory"

# 66 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 67 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LAB_SOBBLE, Route103_Text_BrendanDefeated
# 68 "data/maps/Route103/scripts.pory"
	end
# 69 "data/maps/Route103/scripts.pory"

# 70 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 71 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 72 "data/maps/Route103/scripts.pory"
	end
# 73 "data/maps/Route103/scripts.pory"

# 74 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 75 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 76 "data/maps/Route103/scripts.pory"
	end
# 77 "data/maps/Route103/scripts.pory"

# 78 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 79 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 80 "data/maps/Route103/scripts.pory"
	end
# 81 "data/maps/Route103/scripts.pory"

# 82 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 83 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 84 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route103/scripts.pory"
	end
# 86 "data/maps/Route103/scripts.pory"

# 87 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 88 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 89 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 90 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 91 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route103/scripts.pory"
	end
# 93 "data/maps/Route103/scripts.pory"

# 94 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 95 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 96 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 97 "data/maps/Route103/scripts.pory"
	release
# 98 "data/maps/Route103/scripts.pory"
	end
# 99 "data/maps/Route103/scripts.pory"

# 100 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 101 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 102 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route103/scripts.pory"
	end
# 104 "data/maps/Route103/scripts.pory"

# 105 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 106 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 107 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 108 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 109 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route103/scripts.pory"
	end
# 111 "data/maps/Route103/scripts.pory"

# 112 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 113 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 114 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 115 "data/maps/Route103/scripts.pory"
	release
# 116 "data/maps/Route103/scripts.pory"
	end
# 117 "data/maps/Route103/scripts.pory"

# 118 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 119 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 120 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route103/scripts.pory"
	end
# 122 "data/maps/Route103/scripts.pory"

# 123 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 124 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 125 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route103/scripts.pory"
	end
# 127 "data/maps/Route103/scripts.pory"

# 128 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 129 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 130 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 131 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 132 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 133 "data/maps/Route103/scripts.pory"
	release
# 134 "data/maps/Route103/scripts.pory"
	end
# 135 "data/maps/Route103/scripts.pory"

# 136 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 137 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 138 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 140 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 141 "data/maps/Route103/scripts.pory"
	release
# 142 "data/maps/Route103/scripts.pory"
	end
# 143 "data/maps/Route103/scripts.pory"

# 144 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 145 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 146 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route103/scripts.pory"
	end
# 148 "data/maps/Route103/scripts.pory"

# 149 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 150 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 151 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route103/scripts.pory"
	end
# 153 "data/maps/Route103/scripts.pory"

# 154 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 155 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 156 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/Route103/scripts.pory"
	end
# 158 "data/maps/Route103/scripts.pory"

# 159 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 160 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 161 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route103/scripts.pory"
	end
# 163 "data/maps/Route103/scripts.pory"

# 164 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 165 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 166 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route103/scripts.pory"
	end
# 168 "data/maps/Route103/scripts.pory"

# 169 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 170 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 171 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 172 "data/maps/Route103/scripts.pory"

# 173 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 174 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 175 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 176 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 177 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 178 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 179 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 180 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 183 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 184 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 185 "data/maps/Route103/scripts.pory"

# 186 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 187 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 188 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 189 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 190 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 191 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 192 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 193 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 194 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 195 "data/maps/Route103/scripts.pory"

# 196 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 197 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 198 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 199 "data/maps/Route103/scripts.pory"

# 200 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 201 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 202 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 203 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 204 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 205 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 206 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 207 "data/maps/Route103/scripts.pory"

# 208 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 209 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 210 "data/maps/Route103/scripts.pory"

# 211 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 212 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 213 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 214 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 215 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 216 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 217 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 218 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 219 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 220 "data/maps/Route103/scripts.pory"

# 221 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 222 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 223 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 224 "data/maps/Route103/scripts.pory"

# 225 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 226 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 227 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 228 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 229 "data/maps/Route103/scripts.pory"

# 230 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 231 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 232 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

SandileTrade::
# 2 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 3 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 4 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, SandileTrade_TradeCompleted
# 5 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SANDILE
# 6 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 7 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 8 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileTrade_Text_0, MSGBOX_YESNO
# 14 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SandileTrade_DeclineTrade
# 15 "data/maps/RustboroCity_House1/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 18 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SandileTrade_DeclineTrade
# 19 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 20 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SandileTrade_NotRequestedMon
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 24 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/RustboroCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 26 "data/maps/RustboroCity_House1/scripts.pory"
	special DoInGameTradeScene
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileTrade_Text_1
# 31 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	release
	return


SandileTrade_DeclineTrade::
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileTrade_DeclineTrade_Text_0
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	release
	return


SandileTrade_NotRequestedMon::
# 44 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 45 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileTrade_NotRequestedMon_Text_0
# 49 "data/maps/RustboroCity_House1/scripts.pory"
	release
	return


SandileTrade_TradeCompleted::
# 53 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileTrade_TradeCompleted_Text_0
# 56 "data/maps/RustboroCity_House1/scripts.pory"
	release
	return


SandileMom::
# 60 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 61 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 62 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, SandileMom_1
# 78 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileMom_Text_2
# 79 "data/maps/RustboroCity_House1/scripts.pory"
	release
	return

SandileMom_1:
# 63 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, SandileMom_4
# 69 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileMom_Text_1
# 73 "data/maps/RustboroCity_House1/scripts.pory"
	giveitem ITEM_PROTEIN
# 74 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 75 "data/maps/RustboroCity_House1/scripts.pory"
	release
	return

SandileMom_4:
# 64 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox SandileMom_Text_0
# 67 "data/maps/RustboroCity_House1/scripts.pory"
	release
	return


# 83 "data/maps/RustboroCity_House1/scripts.pory"

# 84 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 85 "data/maps/RustboroCity_House1/scripts.pory"
	.byte 0
# 86 "data/maps/RustboroCity_House1/scripts.pory"

# 87 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 88 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 89 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 90 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 91 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEDOT
# 92 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 93 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 94 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 95 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 96 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_House1_EventScript_DeclineTrade
# 97 "data/maps/RustboroCity_House1/scripts.pory"
	special ChoosePartyMon
# 98 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 99 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 100 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_House1_EventScript_DeclineTrade
# 101 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 102 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 103 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 104 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, RustboroCity_House1_EventScript_NotRequestedMon
# 105 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 106 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 107 "data/maps/RustboroCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 108 "data/maps/RustboroCity_House1/scripts.pory"
	special DoInGameTradeScene
# 109 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 110 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 111 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 112 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 113 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 114 "data/maps/RustboroCity_House1/scripts.pory"

# 115 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 116 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 117 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 118 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 119 "data/maps/RustboroCity_House1/scripts.pory"

# 120 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 121 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 122 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 123 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 124 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 125 "data/maps/RustboroCity_House1/scripts.pory"

# 126 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 127 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 128 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 129 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 130 "data/maps/RustboroCity_House1/scripts.pory"

# 131 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 132 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 133 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 134 "data/maps/RustboroCity_House1/scripts.pory"

# 135 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 136 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
# 137 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Sure, I knew that.\p"
# 138 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But if you really want, I'm willing\n"
# 139 "data/maps/RustboroCity_House1/scripts.pory"
	.string "to trade it to you.\p"
# 140 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I'll trade you my {STR_VAR_2} for\n"
# 141 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} if you want.$"
# 142 "data/maps/RustboroCity_House1/scripts.pory"

# 143 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 144 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 145 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Please be good to my POKéMON.$"
# 146 "data/maps/RustboroCity_House1/scripts.pory"

# 147 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 148 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 149 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 150 "data/maps/RustboroCity_House1/scripts.pory"

# 151 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 152 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 153 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But my POKéMON is cute, you know…$"
# 154 "data/maps/RustboroCity_House1/scripts.pory"

# 155 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 156 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
# 157 "data/maps/RustboroCity_House1/scripts.pory"
	.string "it with care and kindness.$"
# 158 "data/maps/RustboroCity_House1/scripts.pory"

# 159 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 160 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
# 161 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of POKéMON and people.\p"
# 162 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I find that fascinating, so I go to all\n"
# 163 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of places.$"

SandileTrade_Text_0:
# 10 "data/maps/RustboroCity_House1/scripts.pory"
	.string "My mom says I have to get rid of my\n"
	.string "POKéMON because he bites people,\l"
	.string "but I still want a POKéMON.\p"
	.string "If you get a {STR_VAR_1} for me, you\n"
	.string "can have my {STR_VAR_2} if you want.\l"
	.string "He's really cool, I promise.$"

SandileTrade_Text_1:
# 29 "data/maps/RustboroCity_House1/scripts.pory"
	.string "This is such a cute POKéMON!\p"
	.string "I'll miss Chomper, but now, he can\n"
	.string "bite as much as he wants.$"

SandileTrade_DeclineTrade_Text_0:
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, that's okay. I guess I could\n"
	.string "let him go in the park…$"

SandileTrade_NotRequestedMon_Text_0:
# 46 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? I don't know if my mom will like\n"
	.string "that one…\p"
	.string "I want a {STR_VAR_1}.$"

SandileTrade_TradeCompleted_Text_0:
# 54 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I love my new Skitty! My mom doesn't get\n"
	.string "mad when it bites.$"

SandileMom_Text_0:
# 65 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I'm so glad we can have guests without\n"
	.string "having to worry.$"

SandileMom_Text_1:
# 70 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Thank you for trading with my son. I\n"
	.string "didn't have the heart to take away his\l"
	.string "POKéMON.\p"
	.string "Here, hopefully this helps you take\n"
	.string "care of him.$"

SandileMom_Text_2:
# 78 "data/maps/RustboroCity_House1/scripts.pory"
	.string "My son wants to bring his POKéMON to\n"
	.string "school, but he'll be suspended… again…$"

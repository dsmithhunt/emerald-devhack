MauvilleCity_BikeShop_Rydel::
# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_Rydel_1
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Rydel_Text_1
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_MachroBike
	return

MauvilleCity_BikeShop_Rydel_1:
# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Rydel_Text_0
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	return


MauvilleCity_BikeShop_MachroBike::
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_MachroBike_Text_0
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_MachroBike_Text_1
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	return


# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_GetMachBike
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_GetAcroBike
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_SwitchBikes
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_KeepBike
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me RYDEL.\n"
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES…\n"
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?$"
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Is that right?\p"
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Then, I guess you have no need for\n"
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "any of my BIKES.$"
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm, hm… … … … …\p"
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from LITTLEROOT?\p"
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my BIKES, you could\n"
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a BIKE!\p"
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, wait a second!\p"
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I forgot to tell you that there are\n"
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "two kinds of BIKES!\p"
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They are the MACH BIKE and\n"
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the ACRO BIKE!\p"
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The MACH BIKE is for cyclists who want\n"
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an ACRO BIKE is for those who\n"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm a real sweetheart, so you can\n"
# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "have whichever one you like!\p"
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which one will you choose?$"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: If you get the urge to switch\n"
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKES, just come see me!$"
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Oh? Were you thinking about\n"
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "switching BIKES?$"
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Okay, no problem!\n"
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch BIKES for you!$"
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\n"
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an ACRO BIKE.$"
# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\n"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a MACH BIKE.$"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Good, good!\n"
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that BIKE\n"
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about BIKES while\n"
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKE, there're a couple handbooks in\l"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the MACH BIKE.\p"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A BIKE moves in the direction that\n"
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The BIKE will slow to a stop.\p"
# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A MACH BIKE is speedy, but it can't\n"
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 321 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 322 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 325 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the HOENN region.\p"
# 326 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 327 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 328 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a MACH BIKE, you can\n"
# 329 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 330 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 331 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 332 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 333 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the ACRO BIKE.\p"
# 334 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 335 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 336 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 337 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 338 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 339 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 340 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 341 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 342 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 343 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 344 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 345 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 346 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your BIKE can hop on the spot.\p"
# 347 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 348 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 349 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 350 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 351 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 352 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 353 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 354 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 355 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 356 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the BIKE\n"
# 357 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 358 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_Rydel_Text_0:
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hey there, {PLAYER}!\n"
	.string "I hope you're enjoying your bike.\l"
	.string "Interest is already picking up!$"

MauvilleCity_BikeShop_Rydel_Text_1:
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: You're the kid from Littleroot?\n"
	.string "Some bushy-haired guy was just in here\l"
	.string "saying you're the next big thing.\l"
	.string "So, you need a bike?$"

MauvilleCity_BikeShop_MachroBike_Text_0:
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Usually, I offer the Acro Bike for\n"
	.string "tricks and the Mach Bike for speed…\l"
	.string "but with that recommendation, I think\l"
	.string "you'll be the spokesperson for the\l"
	.string "all-new Machro Bike!$"

MauvilleCity_BikeShop_MachroBike_Text_1:
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The Machro Bike has all the best\n"
	.string "features in one versatile package!\p"
	.string "Make sure to tell everyone how much\n"
	.string "you love it!$"

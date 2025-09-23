SlateportMuseum_GruntBattle::
# 2 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 3 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportMuseum_GruntsDefeated
	return


SlateportMuseum_Archie::
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportMuseum_Archie_Text_0
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_ELITE
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportMuseum_Archie_Text_1
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportMuseum_Archie_Movement_0
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ELITE, SlateportMuseum_Archie_Movement_1
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportMuseum_Archie_Text_2
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ELITE, SlateportMuseum_Archie_Movement_2
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportMuseum_Archie_Text_3
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportMuseum_Archie_Movement_3
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportMuseum_Archie_Text_4
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportMuseum_PostArchie
	return


SlateportMuseum_Roshi::
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportMuseum_Roshi_Text_0
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	return


# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportMuseum_GruntBattle
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportMuseum_GruntsDefeated::
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportMuseum_Archie
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportMuseum_PostArchie::
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_ELITE
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DevCo.\p"
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can prepare for our expedition now.$"
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those parts!\n"
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shut your yap and fork them over!$"
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A kid beat me!$"
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I lost, too!$"
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kid!$"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "long to snatch some parts, and you\l"
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "scurvy dogs are held up by a mere child?$"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are TEAM AQUA,\n"
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "and we love the sea!\p"
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And I am TEAM AQUA's leader,\n"
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE!\p"
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not one of TEAM MAGMA?\p"
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, TEAM AQUA is dedicated to\n"
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you agree? What we are doing\n"
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "is a magnificent undertaking.\p"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "But, I warn you, don't even consider\n"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "interfering with our plans again.\p"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The consequences will cost you\n"
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dearly!\p"
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And don't you forget it!$"
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anyway, that was a tense situation!\n"
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you for saving us!\p"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, yes, I almost forgot that you\n"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "even brought the parts from DevCo!$"
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Whoops!\n"
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "There's no time to lose!\p"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thanks again, but now I've got\n"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "to go!\p"
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Feel free to wander around and check\n"
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "out our facilities, though.$"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 476 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 477 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 478 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 479 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 480 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 481 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 482 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 483 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 484 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 485 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 486 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 487 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 488 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 489 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 490 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 491 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"

# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportMuseum_Archie_Movement_0:
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	face_left
	step_end

# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportMuseum_Archie_Movement_1:
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportMuseum_Archie_Movement_2:
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportMuseum_Archie_Movement_3:
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	face_right
	step_end

SlateportMuseum_Archie_Text_0:
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE: So, you're the one getting in\n"
	.string "the way?\p"
	.string "I'm sorry, but I'll be taking those parts\n"
	.string "now, whippersnapper.$"

SlateportMuseum_Archie_Text_1:
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ROSHI: Don't think that will be so\n"
	.string "simple Archie…$"

SlateportMuseum_Archie_Text_2:
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE: Arr, Roshi!\n"
	.string "Aye, your being here complicates\l"
	.string "things.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Well, seeing as our battle could\n"
	.string "sink this city I hold so dearly,\l"
	.string "I'll concede those parts.$"

SlateportMuseum_Archie_Text_3:
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ROSHI: Bold to think I'd even give your\n"
	.string "POKéMON a chance to splash.\p"
	.string "ARCHIE: Ha! I wish I could still be so\n"
	.string "reckless…$"

SlateportMuseum_Archie_Text_4:
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE: Those parts are yours. Team\n"
	.string "Aqua will find another way.\p"
	.string "Let's go!$"

SlateportMuseum_Roshi_Text_0:
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ROSHI: You did good keeping those\n"
	.string "grunts occupied until I could arrive.\p"
	.string "Remember, knowing your opponent is as\n"
	.string "important to victory as knowing their\l"
	.string "POKéMON.$"

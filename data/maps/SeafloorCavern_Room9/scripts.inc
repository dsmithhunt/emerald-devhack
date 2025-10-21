SeafloorCavern_NewArchie::
# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_NewArchie_Text_0
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_NewArchie_Text_1
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_NewArchie_Text_2
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
	return


# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient POKéMON KYOGRE!\p"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The BLUE ORB suddenly began shining\n"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hm? It's a message from our\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yes, what is it?\p"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened KYOGRE,\l"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB is supposed to awaken\n"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control KYOGRE…\p"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did KYOGRE disappear?\p"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this RED ORB,\n"
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control KYOGRE…\p"
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: {PLAYER}, come on, you have\n"
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"

SeafloorCavern_NewArchie_Text_0:
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: To think…\n"
	.string "You, some kid, would be the one to stand\l"
	.string "against me at this date with destiny!\p"
	.string "Yohoho! I knew you were a brave one!\n"
	.string "My POKéMON once saved me from a watery\l"
	.string "grave!\l"
	.string "Let's see if yours will do the same!$"

SeafloorCavern_NewArchie_Text_1:
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yarr…\n"
	.string "You really are impressive.\p"
	.string "I wish you could understand why this\n"
	.string "must be done…$"

SeafloorCavern_NewArchie_Text_2:
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this BLUE ORB, I call upon KYOGRE!\n"
	.string "Arise! Restore balance to this world!$"

ZinniaEnterSkyPillar::
# 2 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, ZinniaEnterSkyPillar_Movement_0
# 3 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 4 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_SKY_PILLAR_WALLACE
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 6 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 7 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 8 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
	return


# 11 "data/maps/SkyPillar_Outside/scripts.pory"

# 12 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_MapScripts::
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_OnTransition
# 14 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_OnLoad
# 15 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_OnFrame
# 16 "data/maps/SkyPillar_Outside/scripts.pory"
	.byte 0
# 17 "data/maps/SkyPillar_Outside/scripts.pory"

# 18 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition:
# 19 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_HideMapNamePopup
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, SkyPillar_Outside_EventScript_CheckSetAbnormalWeather
# 21 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 22 "data/maps/SkyPillar_Outside/scripts.pory"

# 23 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_HideMapNamePopup::
# 24 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 25 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 26 "data/maps/SkyPillar_Outside/scripts.pory"

# 27 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather::
# 28 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 29 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 30 "data/maps/SkyPillar_Outside/scripts.pory"

# 31 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad:
# 32 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_EventScript_OpenDoor
# 33 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 34 "data/maps/SkyPillar_Outside/scripts.pory"

# 35 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_OpenDoor::
# 36 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 37 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
# 38 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 39 "data/maps/SkyPillar_Outside/scripts.pory"

# 40 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnFrame:
# 41 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_WallaceScene
# 42 "data/maps/SkyPillar_Outside/scripts.pory"
	.2byte 0
# 43 "data/maps/SkyPillar_Outside/scripts.pory"

# 44 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene::
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceApproachPlayer
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, SkyPillar_Outside_Movement_PlayerClimbSkyPillar
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceClimbSkyPillar
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3   @ horizontal pan
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20  @ num shakes
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5   @ shake delay
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 84 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 85 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 88 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 90 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
	call ZinniaEnterSkyPillar
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 93 "data/maps/SkyPillar_Outside/scripts.pory"

# 94 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceApproachPlayer:
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 97 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 98 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 99 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 100 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 101 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 102 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 103 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 104 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 106 "data/maps/SkyPillar_Outside/scripts.pory"

# 107 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceClimbSkyPillar:
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 112 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 113 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 114 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 115 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 116 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 118 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 121 "data/maps/SkyPillar_Outside/scripts.pory"

# 122 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_PlayerClimbSkyPillar:
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 127 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 128 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 130 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 131 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 132 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 133 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 134 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 135 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 136 "data/maps/SkyPillar_Outside/scripts.pory"

# 137 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_Wallace::
# 138 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 139 "data/maps/SkyPillar_Outside/scripts.pory"

# 140 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_ClosedDoor::
# 141 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
# 142 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 143 "data/maps/SkyPillar_Outside/scripts.pory"

# 144 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_DoorIsClosed:
# 145 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"
# 146 "data/maps/SkyPillar_Outside/scripts.pory"

# 147 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_OpenedDoorToSkyPillar:
# 148 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "ZINNIA: Oh, my, I'm so sorry!\p"
# 149 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "In my haste, I didn't consider\n"
# 150 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'd left you behind when I flew off!\p"
# 151 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've opened the locked door of\n"
# 152 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "the SKY PILLAR.$"
# 153 "data/maps/SkyPillar_Outside/scripts.pory"

# 154 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_EarthquakeNotMomentToWaste:
# 155 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "ZINNIA: It's an earthquake!\p"
# 156 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "There's not a moment to waste!\n"
# 157 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "We've got to hurry!$"
# 158 "data/maps/SkyPillar_Outside/scripts.pory"

# 159 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_SituationGettingWorse:
# 160 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "ZINNIA: Hmm…\n"
# 161 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The situation is getting worse…$"
# 162 "data/maps/SkyPillar_Outside/scripts.pory"

# 163 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_GotToGoBackForSootopolis:
# 164 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "ZINNIA: This isn't good…\p"
# 165 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The weather distortion is spreading\n"
# 166 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "even here…\p"
# 167 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 168 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "RAYQUAZA should be at the top\n"
# 169 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "of the tower.\p"
# 170 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'll see you up there!$"

# 2 "data/maps/SkyPillar_Outside/scripts.pory"
ZinniaEnterSkyPillar_Movement_0:
# 2 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
	step_end

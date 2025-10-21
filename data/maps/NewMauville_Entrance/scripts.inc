NewMauville_EventScript_CloseRuins::
# 2 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 28, 11, METATILE_General_RockWall_RockBase, TRUE
# 3 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 28, 12, METATILE_General_RockWall_SandBase, TRUE
	return


# 7 "data/maps/NewMauville_Entrance/scripts.pory"

# 8 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_MapScripts::
# 9 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Entrance_OnLoad
# 10 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Entrance_OnTransition
# 11 "data/maps/NewMauville_Entrance/scripts.pory"
	.byte 0
# 12 "data/maps/NewMauville_Entrance/scripts.pory"

# 13 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnLoad:
# 14 "data/maps/NewMauville_Entrance/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, NewMauville_EventScript_CloseRuins
# 15 "data/maps/NewMauville_Entrance/scripts.pory"
	call_if_eq VAR_NEW_MAUVILLE_STATE, 0, NewMauville_Entrance_EventScript_CloseDoor
# 16 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 17 "data/maps/NewMauville_Entrance/scripts.pory"

# 18 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_CloseDoor::
# 19 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile0, TRUE
# 20 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile1, TRUE
# 21 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile2, TRUE
# 22 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile3, TRUE
# 23 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile4, TRUE
# 24 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile5, TRUE
# 25 "data/maps/NewMauville_Entrance/scripts.pory"
	return
# 26 "data/maps/NewMauville_Entrance/scripts.pory"

# 27 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnTransition:
# 28 "data/maps/NewMauville_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_NEW_MAUVILLE
# 29 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 30 "data/maps/NewMauville_Entrance/scripts.pory"

# 31 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_Door::
# 32 "data/maps/NewMauville_Entrance/scripts.pory"
	lockall
# 33 "data/maps/NewMauville_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/NewMauville_Entrance/scripts.pory"
	waitmovement 0
# 35 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_DoorIsLocked, MSGBOX_DEFAULT
# 36 "data/maps/NewMauville_Entrance/scripts.pory"
	checkitem ITEM_BASEMENT_KEY
# 37 "data/maps/NewMauville_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, NewMauville_Entrance_EventScript_DontOpenDoor
# 38 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UseBasementKey, MSGBOX_YESNO
# 39 "data/maps/NewMauville_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewMauville_Entrance_EventScript_DontOpenDoor
# 40 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UsedBasementKey, MSGBOX_DEFAULT
# 41 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile0, FALSE
# 42 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile1, FALSE
# 43 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile2, FALSE
# 44 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile3, TRUE
# 45 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile4, FALSE
# 46 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile5, TRUE
# 47 "data/maps/NewMauville_Entrance/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/NewMauville_Entrance/scripts.pory"
	playse SE_BANG
# 49 "data/maps/NewMauville_Entrance/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 1
# 50 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
# 51 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 52 "data/maps/NewMauville_Entrance/scripts.pory"

# 53 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_DontOpenDoor::
# 54 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
# 55 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 56 "data/maps/NewMauville_Entrance/scripts.pory"

# 57 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_DoorIsLocked:
# 58 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door is locked.$"
# 59 "data/maps/NewMauville_Entrance/scripts.pory"

# 60 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_UseBasementKey:
# 61 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "Use the BASEMENT KEY?$"
# 62 "data/maps/NewMauville_Entrance/scripts.pory"

# 63 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_UsedBasementKey:
# 64 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "{PLAYER} used the BASEMENT KEY.\p"
# 65 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door opened!$"

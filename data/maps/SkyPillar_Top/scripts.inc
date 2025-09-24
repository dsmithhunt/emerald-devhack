SkyPillar_Top_Zinnia::
# 2 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 3 "data/maps/SkyPillar_Top/scripts.pory"
	special IsJirachiInParty
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkyPillar_Top_Zinnia_1
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_TEMP_2, SkyPillar_Top_Zinnia_2
# 18 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Zinnia_Text_2
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCAL_ID_ZINNIA, SkyPillar_Top_Zinnia_Movement_0
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Zinnia_Text_3
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_2
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCAL_ID_ZINNIA, SkyPillar_Top_Zinnia_Movement_1
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
	return

SkyPillar_Top_Zinnia_1:
# 5 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_JirachiAwaken
	return

SkyPillar_Top_Zinnia_2:
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Zinnia_Text_0
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCAL_ID_ZINNIA, SkyPillar_Top_Zinnia_Movement_0
# 11 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Zinnia_Text_1
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCAL_ID_ZINNIA, SkyPillar_Top_Zinnia_Movement_1
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
	return


SkyPillar_Top_JirachiAwaken::
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCAL_ID_ZINNIA, SkyPillar_Top_JirachiAwaken_Movement_0
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_JirachiAwaken_Text_0
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCAL_ID_ZINNIA, SkyPillar_Top_JirachiAwaken_Movement_1
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
	return


# 49 "data/maps/SkyPillar_Top/scripts.pory"

# 50 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 55 "data/maps/SkyPillar_Top/scripts.pory"

# 56 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 59 "data/maps/SkyPillar_Top/scripts.pory"

# 60 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 65 "data/maps/SkyPillar_Top/scripts.pory"

# 66 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 70 "data/maps/SkyPillar_Top/scripts.pory"

# 71 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 75 "data/maps/SkyPillar_Top/scripts.pory"

# 76 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 79 "data/maps/SkyPillar_Top/scripts.pory"

# 80 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 83 "data/maps/SkyPillar_Top/scripts.pory"

# 84 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 87 "data/maps/SkyPillar_Top/scripts.pory"

# 88 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 91 "data/maps/SkyPillar_Top/scripts.pory"

# 92 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 110 "data/maps/SkyPillar_Top/scripts.pory"

# 111 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 115 "data/maps/SkyPillar_Top/scripts.pory"

# 116 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 120 "data/maps/SkyPillar_Top/scripts.pory"

# 121 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 127 "data/maps/SkyPillar_Top/scripts.pory"

# 128 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 136 "data/maps/SkyPillar_Top/scripts.pory"

# 137 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 181 "data/maps/SkyPillar_Top/scripts.pory"

# 182 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 183 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 184 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 202 "data/maps/SkyPillar_Top/scripts.pory"

# 203 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 205 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 206 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 207 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 216 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 217 "data/maps/SkyPillar_Top/scripts.pory"

# 218 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 220 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 223 "data/maps/SkyPillar_Top/scripts.pory"

# 224 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 225 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 226 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 227 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 229 "data/maps/SkyPillar_Top/scripts.pory"

# 230 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 231 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"

# 10 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Zinnia_Movement_0:
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down
	step_end

# 15 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Zinnia_Movement_1:
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_up
	step_end

# 35 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_JirachiAwaken_Movement_0:
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	emote_exclamation_mark
	step_end

# 43 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_JirachiAwaken_Movement_1:
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
	step_end

SkyPillar_Top_Zinnia_Text_0:
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ZINNIA: Without Rayquaza, we have no\n"
	.string "hope of stopping the LEGENDARY\l"
	.string "POKéMON…$"

SkyPillar_Top_Zinnia_Text_1:
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}{KUN}, you need to find the WISH\n"
	.string "POKéMON!$"

SkyPillar_Top_Zinnia_Text_2:
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ZINNIA: RAYQUAZA is still dormant…$"

SkyPillar_Top_Zinnia_Text_3:
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}{KUN}, there is another part to\n"
	.string "Rayquaza's legend. I thought it was\l"
	.string "metaphorical, but I must now\l"
	.string "reconsider.\p"
	.string "When the people are at their most\n"
	.string "desperate, their wishes will coalesce\l"
	.string "into a comet that will awaken the WISH\l"
	.string "POKéMON.\p"
	.string "If we can find this WISH POKéMON, we\n"
	.string "may be able to awaken Rayquaza.$"

SkyPillar_Top_JirachiAwaken_Text_0:
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}{KUN}, you have Jirachi!\n"
	.string "Use its power to awaken Rayquaza!$"

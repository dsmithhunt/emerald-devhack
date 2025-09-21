PetalburgWoods_EventScript_BugCatcher01::
# 2 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, BugCatcher01_Intro, BugCatcher01_Outro
# 3 "data/maps/PetalburgWoods/scripts.pory"
	msgbox BugCatcher01_PostBattle, MSGBOX_AUTOCLOSE
# 4 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	end


# 21 "data/maps/PetalburgWoods/scripts.pory"

# 22 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 23 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 24 "data/maps/PetalburgWoods/scripts.pory"

# 25 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 26 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 27 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 28 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 29 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 30 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 31 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 32 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 33 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 34 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 35 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 36 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 37 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 38 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 39 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 42 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 43 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 47 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 48 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 51 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 52 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 56 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 58 "data/maps/PetalburgWoods/scripts.pory"
	end
# 59 "data/maps/PetalburgWoods/scripts.pory"

# 60 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 61 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 62 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 69 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 73 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 74 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 75 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 84 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 86 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 87 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 88 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 90 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 94 "data/maps/PetalburgWoods/scripts.pory"
	end
# 95 "data/maps/PetalburgWoods/scripts.pory"

# 96 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 97 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 98 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 99 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 101 "data/maps/PetalburgWoods/scripts.pory"
	return
# 102 "data/maps/PetalburgWoods/scripts.pory"

# 103 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 104 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 105 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 106 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 107 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 109 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 110 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 113 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 114 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 115 "data/maps/PetalburgWoods/scripts.pory"
	end
# 116 "data/maps/PetalburgWoods/scripts.pory"

# 117 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 118 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 119 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 120 "data/maps/PetalburgWoods/scripts.pory"
	end
# 121 "data/maps/PetalburgWoods/scripts.pory"

# 122 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 123 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 124 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 125 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 126 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 127 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 128 "data/maps/PetalburgWoods/scripts.pory"
	return
# 129 "data/maps/PetalburgWoods/scripts.pory"

# 130 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 131 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 132 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 133 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 134 "data/maps/PetalburgWoods/scripts.pory"
	end
# 135 "data/maps/PetalburgWoods/scripts.pory"

# 136 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 137 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 138 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 139 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 140 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 141 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 142 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 143 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 144 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 145 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 146 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 147 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 148 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 149 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 150 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 151 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 152 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 153 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 154 "data/maps/PetalburgWoods/scripts.pory"

# 155 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 164 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 165 "data/maps/PetalburgWoods/scripts.pory"

# 166 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 167 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 168 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 172 "data/maps/PetalburgWoods/scripts.pory"

# 173 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 175 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 177 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 180 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 181 "data/maps/PetalburgWoods/scripts.pory"

# 182 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 191 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 192 "data/maps/PetalburgWoods/scripts.pory"

# 193 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 194 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 198 "data/maps/PetalburgWoods/scripts.pory"

# 199 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 200 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 201 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 202 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 205 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 206 "data/maps/PetalburgWoods/scripts.pory"

# 207 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 208 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 209 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 211 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 212 "data/maps/PetalburgWoods/scripts.pory"

# 213 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 214 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 215 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 216 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 217 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 222 "data/maps/PetalburgWoods/scripts.pory"

# 223 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 226 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 227 "data/maps/PetalburgWoods/scripts.pory"

# 228 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 229 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 231 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 232 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 233 "data/maps/PetalburgWoods/scripts.pory"

# 234 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 235 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 236 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 240 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 241 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 242 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 243 "data/maps/PetalburgWoods/scripts.pory"

# 244 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 245 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 246 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 247 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 248 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 249 "data/maps/PetalburgWoods/scripts.pory"

# 250 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 251 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 252 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 253 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 254 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 255 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 256 "data/maps/PetalburgWoods/scripts.pory"

# 257 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 258 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 259 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 260 "data/maps/PetalburgWoods/scripts.pory"

# 261 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 262 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 263 "data/maps/PetalburgWoods/scripts.pory"
	end
# 264 "data/maps/PetalburgWoods/scripts.pory"

# 265 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 266 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 267 "data/maps/PetalburgWoods/scripts.pory"
	end
# 268 "data/maps/PetalburgWoods/scripts.pory"

# 269 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 270 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 271 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 272 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 273 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 274 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 275 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 276 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 277 "data/maps/PetalburgWoods/scripts.pory"
	release
# 278 "data/maps/PetalburgWoods/scripts.pory"
	end
# 279 "data/maps/PetalburgWoods/scripts.pory"

# 280 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 281 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 282 "data/maps/PetalburgWoods/scripts.pory"
	release
# 283 "data/maps/PetalburgWoods/scripts.pory"
	end
# 284 "data/maps/PetalburgWoods/scripts.pory"

# 285 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 286 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 287 "data/maps/PetalburgWoods/scripts.pory"
	end
# 288 "data/maps/PetalburgWoods/scripts.pory"

# 289 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 290 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 291 "data/maps/PetalburgWoods/scripts.pory"
	end
# 292 "data/maps/PetalburgWoods/scripts.pory"

# 293 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 294 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 295 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 296 "data/maps/PetalburgWoods/scripts.pory"
	end
# 297 "data/maps/PetalburgWoods/scripts.pory"

# 298 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 299 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_JAMES, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 300 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 301 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 302 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_PETALBURG_JAMES
# 303 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 304 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 305 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 306 "data/maps/PetalburgWoods/scripts.pory"
	release
# 307 "data/maps/PetalburgWoods/scripts.pory"
	end
# 308 "data/maps/PetalburgWoods/scripts.pory"

# 309 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 310 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 311 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 313 "data/maps/PetalburgWoods/scripts.pory"
	release
# 314 "data/maps/PetalburgWoods/scripts.pory"
	end
# 315 "data/maps/PetalburgWoods/scripts.pory"

# 316 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 317 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 318 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_PETALBURG_JAMES
# 319 "data/maps/PetalburgWoods/scripts.pory"
	release
# 320 "data/maps/PetalburgWoods/scripts.pory"
	end
# 321 "data/maps/PetalburgWoods/scripts.pory"

# 322 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 323 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 324 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 325 "data/maps/PetalburgWoods/scripts.pory"
	release
# 326 "data/maps/PetalburgWoods/scripts.pory"
	end
# 327 "data/maps/PetalburgWoods/scripts.pory"

# 328 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 329 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 330 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_PETALBURG_JAMES
# 331 "data/maps/PetalburgWoods/scripts.pory"
	release
# 332 "data/maps/PetalburgWoods/scripts.pory"
	end
# 333 "data/maps/PetalburgWoods/scripts.pory"

# 334 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 335 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_PETALBURG_JAMES, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 336 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 337 "data/maps/PetalburgWoods/scripts.pory"
	end
# 338 "data/maps/PetalburgWoods/scripts.pory"

# 339 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 347 "data/maps/PetalburgWoods/scripts.pory"

# 348 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 353 "data/maps/PetalburgWoods/scripts.pory"

# 354 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVCO RESEARCHER!\p"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 362 "data/maps/PetalburgWoods/scripts.pory"

# 363 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 369 "data/maps/PetalburgWoods/scripts.pory"

# 370 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 372 "data/maps/PetalburgWoods/scripts.pory"

# 373 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 382 "data/maps/PetalburgWoods/scripts.pory"

# 383 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 390 "data/maps/PetalburgWoods/scripts.pory"

# 391 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 395 "data/maps/PetalburgWoods/scripts.pory"

# 396 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 399 "data/maps/PetalburgWoods/scripts.pory"

# 400 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 403 "data/maps/PetalburgWoods/scripts.pory"

# 404 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 408 "data/maps/PetalburgWoods/scripts.pory"

# 409 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 412 "data/maps/PetalburgWoods/scripts.pory"

# 413 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 416 "data/maps/PetalburgWoods/scripts.pory"

# 417 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 427 "data/maps/PetalburgWoods/scripts.pory"

# 428 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 432 "data/maps/PetalburgWoods/scripts.pory"

# 433 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 437 "data/maps/PetalburgWoods/scripts.pory"

# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 441 "data/maps/PetalburgWoods/scripts.pory"

# 442 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 444 "data/maps/PetalburgWoods/scripts.pory"

# 445 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 449 "data/maps/PetalburgWoods/scripts.pory"

# 450 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 456 "data/maps/PetalburgWoods/scripts.pory"

# 457 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 462 "data/maps/PetalburgWoods/scripts.pory"

# 463 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 468 "data/maps/PetalburgWoods/scripts.pory"

# 469 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 476 "data/maps/PetalburgWoods/scripts.pory"

# 477 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 482 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 483 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 484 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 486 "data/maps/PetalburgWoods/scripts.pory"

# 487 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 488 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 490 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 491 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 492 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 493 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

BugCatcher01_Intro::
# 8 "data/maps/PetalburgWoods/scripts.pory"
	.string "...$"

BugCatcher01_Outro::
# 12 "data/maps/PetalburgWoods/scripts.pory"
	.string "...$"

BugCatcher01_PostBattle::
# 16 "data/maps/PetalburgWoods/scripts.pory"
	.string "...$"

PetalburgWoods_BugCatcherJames::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_JAMES, PetalburgWoods_BugCatcherJames_Text_0, PetalburgWoods_BugCatcherJames_Text_1
# 8 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherJames_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugCatcherLyle::
# 13 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, PetalburgWoods_BugCatcherLyle_Text_0, PetalburgWoods_BugCatcherLyle_Text_1
# 18 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherLyle_Text_2, MSGBOX_AUTOCLOSE
# 19 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugCatcherEli::
# 23 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_ELI, PetalburgWoods_BugCatcherEli_Text_0, PetalburgWoods_BugCatcherEli_Text_1
# 28 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherEli_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugManiacNoah::
# 33 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_NOAH, PetalburgWoods_BugManiacNoah_Text_0, PetalburgWoods_BugManiacNoah_Text_1
# 38 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugManiacNoah_Text_2, MSGBOX_AUTOCLOSE
# 39 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugCatcherCody::
# 43 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_CODY, PetalburgWoods_BugCatcherCody_Text_0, PetalburgWoods_BugCatcherLyle_Text_1
# 48 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherCody_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugManiacAiden::
# 53 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_AIDEN, PetalburgWoods_BugManiacAiden_Text_0, PetalburgWoods_BugCatcherLyle_Text_1
# 58 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugManiacAiden_Text_1, MSGBOX_AUTOCLOSE
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugManiacNeil::
# 63 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, PetalburgWoods_BugManiacNeil_Text_0, PetalburgWoods_BugManiacNeil_Text_1
# 68 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugManiacNeil_Text_2, MSGBOX_AUTOCLOSE
# 69 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_Sign1::
# 73 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	return


PetalburgWoods_Sign2::
# 77 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	return


PetalburgWoods_Sign3::
# 81 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	return


# 84 "data/maps/PetalburgWoods/scripts.pory"

# 85 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 86 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 87 "data/maps/PetalburgWoods/scripts.pory"

# 88 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 89 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 90 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 95 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 96 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 97 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 98 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 100 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 101 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 103 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 105 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 106 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 107 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 109 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 110 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 111 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 112 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 113 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 114 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 115 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 116 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 117 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 118 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 119 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 120 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 121 "data/maps/PetalburgWoods/scripts.pory"
	end
# 122 "data/maps/PetalburgWoods/scripts.pory"

# 123 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 124 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 125 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 126 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 127 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 128 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 130 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 131 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 132 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 133 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 134 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 135 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 136 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 137 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 138 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 139 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 140 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 141 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 142 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 143 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 144 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 145 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 146 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 147 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 148 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 149 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 150 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 151 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 152 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 153 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 154 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 155 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 156 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 157 "data/maps/PetalburgWoods/scripts.pory"
	end
# 158 "data/maps/PetalburgWoods/scripts.pory"

# 159 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 160 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 161 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 162 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 163 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 164 "data/maps/PetalburgWoods/scripts.pory"
	return
# 165 "data/maps/PetalburgWoods/scripts.pory"

# 166 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 167 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 168 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 169 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 170 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 171 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 172 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 173 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 174 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 176 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 177 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 178 "data/maps/PetalburgWoods/scripts.pory"
	end
# 179 "data/maps/PetalburgWoods/scripts.pory"

# 180 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 181 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 182 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 183 "data/maps/PetalburgWoods/scripts.pory"
	end
# 184 "data/maps/PetalburgWoods/scripts.pory"

# 185 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 186 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 187 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 188 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 189 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 190 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 191 "data/maps/PetalburgWoods/scripts.pory"
	return
# 192 "data/maps/PetalburgWoods/scripts.pory"

# 193 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 194 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 195 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 196 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 197 "data/maps/PetalburgWoods/scripts.pory"
	end
# 198 "data/maps/PetalburgWoods/scripts.pory"

# 199 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 200 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 203 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 204 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 205 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 206 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 207 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 208 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 209 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 210 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 211 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 212 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 213 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 214 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 215 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 216 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 217 "data/maps/PetalburgWoods/scripts.pory"

# 218 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 222 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 227 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 228 "data/maps/PetalburgWoods/scripts.pory"

# 229 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 230 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 231 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 234 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 235 "data/maps/PetalburgWoods/scripts.pory"

# 236 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 237 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 238 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 240 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 241 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 242 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 243 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 244 "data/maps/PetalburgWoods/scripts.pory"

# 245 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 246 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 247 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 248 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 249 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 250 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 251 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 252 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 253 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 254 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 255 "data/maps/PetalburgWoods/scripts.pory"

# 256 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 257 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 258 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 259 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 260 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 261 "data/maps/PetalburgWoods/scripts.pory"

# 262 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 263 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 264 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 265 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 268 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 269 "data/maps/PetalburgWoods/scripts.pory"

# 270 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 271 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 272 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 273 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 274 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 275 "data/maps/PetalburgWoods/scripts.pory"

# 276 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 277 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 278 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 279 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 280 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 281 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 282 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 284 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 285 "data/maps/PetalburgWoods/scripts.pory"

# 286 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 287 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 288 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 289 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 290 "data/maps/PetalburgWoods/scripts.pory"

# 291 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 292 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 293 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 294 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 295 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 296 "data/maps/PetalburgWoods/scripts.pory"

# 297 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 298 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 299 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 300 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 301 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 302 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 303 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 304 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 305 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 306 "data/maps/PetalburgWoods/scripts.pory"

# 307 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 308 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 309 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 310 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 311 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 312 "data/maps/PetalburgWoods/scripts.pory"

# 313 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 314 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 315 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 316 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 317 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 318 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 319 "data/maps/PetalburgWoods/scripts.pory"

# 320 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 321 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 322 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 323 "data/maps/PetalburgWoods/scripts.pory"

# 324 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 325 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 326 "data/maps/PetalburgWoods/scripts.pory"
	end
# 327 "data/maps/PetalburgWoods/scripts.pory"

# 328 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 329 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 330 "data/maps/PetalburgWoods/scripts.pory"
	end
# 331 "data/maps/PetalburgWoods/scripts.pory"

# 332 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 333 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 334 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 335 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 336 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 337 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 338 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 339 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 340 "data/maps/PetalburgWoods/scripts.pory"
	release
# 341 "data/maps/PetalburgWoods/scripts.pory"
	end
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 344 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 345 "data/maps/PetalburgWoods/scripts.pory"
	release
# 346 "data/maps/PetalburgWoods/scripts.pory"
	end
# 347 "data/maps/PetalburgWoods/scripts.pory"

# 348 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 349 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 350 "data/maps/PetalburgWoods/scripts.pory"
	end
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 353 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 354 "data/maps/PetalburgWoods/scripts.pory"
	end
# 355 "data/maps/PetalburgWoods/scripts.pory"

# 356 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 357 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 358 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 359 "data/maps/PetalburgWoods/scripts.pory"
	end
# 360 "data/maps/PetalburgWoods/scripts.pory"

# 361 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 362 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_JAMES, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 363 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 364 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 365 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_PETALBURG_JAMES
# 366 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 367 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 368 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 369 "data/maps/PetalburgWoods/scripts.pory"
	release
# 370 "data/maps/PetalburgWoods/scripts.pory"
	end
# 371 "data/maps/PetalburgWoods/scripts.pory"

# 372 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 373 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 374 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 375 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 376 "data/maps/PetalburgWoods/scripts.pory"
	release
# 377 "data/maps/PetalburgWoods/scripts.pory"
	end
# 378 "data/maps/PetalburgWoods/scripts.pory"

# 379 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 380 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 381 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_PETALBURG_JAMES
# 382 "data/maps/PetalburgWoods/scripts.pory"
	release
# 383 "data/maps/PetalburgWoods/scripts.pory"
	end
# 384 "data/maps/PetalburgWoods/scripts.pory"

# 385 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 386 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 387 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 388 "data/maps/PetalburgWoods/scripts.pory"
	release
# 389 "data/maps/PetalburgWoods/scripts.pory"
	end
# 390 "data/maps/PetalburgWoods/scripts.pory"

# 391 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 392 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 393 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_PETALBURG_JAMES
# 394 "data/maps/PetalburgWoods/scripts.pory"
	release
# 395 "data/maps/PetalburgWoods/scripts.pory"
	end
# 396 "data/maps/PetalburgWoods/scripts.pory"

# 397 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 398 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_PETALBURG_JAMES, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 399 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 400 "data/maps/PetalburgWoods/scripts.pory"
	end
# 401 "data/maps/PetalburgWoods/scripts.pory"

# 402 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 410 "data/maps/PetalburgWoods/scripts.pory"

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 416 "data/maps/PetalburgWoods/scripts.pory"

# 417 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVCO RESEARCHER!\p"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 425 "data/maps/PetalburgWoods/scripts.pory"

# 426 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 432 "data/maps/PetalburgWoods/scripts.pory"

# 433 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 435 "data/maps/PetalburgWoods/scripts.pory"

# 436 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 445 "data/maps/PetalburgWoods/scripts.pory"

# 446 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 453 "data/maps/PetalburgWoods/scripts.pory"

# 454 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 458 "data/maps/PetalburgWoods/scripts.pory"

# 459 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 462 "data/maps/PetalburgWoods/scripts.pory"

# 463 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 466 "data/maps/PetalburgWoods/scripts.pory"

# 467 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 471 "data/maps/PetalburgWoods/scripts.pory"

# 472 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 475 "data/maps/PetalburgWoods/scripts.pory"

# 476 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 479 "data/maps/PetalburgWoods/scripts.pory"

# 480 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 482 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 483 "data/maps/PetalburgWoods/scripts.pory"

# 484 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 486 "data/maps/PetalburgWoods/scripts.pory"

# 487 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 488 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 490 "data/maps/PetalburgWoods/scripts.pory"

# 491 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 492 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 493 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 494 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 495 "data/maps/PetalburgWoods/scripts.pory"

# 496 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 497 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 498 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 499 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 500 "data/maps/PetalburgWoods/scripts.pory"

# 501 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 502 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 503 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 504 "data/maps/PetalburgWoods/scripts.pory"

# 505 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 506 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 507 "data/maps/PetalburgWoods/scripts.pory"

# 508 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 509 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 510 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 511 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 512 "data/maps/PetalburgWoods/scripts.pory"

# 513 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 514 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 515 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 516 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 517 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 518 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 519 "data/maps/PetalburgWoods/scripts.pory"

# 520 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 521 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 522 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 523 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 524 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 525 "data/maps/PetalburgWoods/scripts.pory"

# 526 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 527 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 528 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 529 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 530 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 531 "data/maps/PetalburgWoods/scripts.pory"

# 532 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 533 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 534 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 535 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 536 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 537 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 538 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 539 "data/maps/PetalburgWoods/scripts.pory"

# 540 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 541 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 542 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 543 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 544 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 545 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 546 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 547 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 548 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 549 "data/maps/PetalburgWoods/scripts.pory"

# 550 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 551 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 552 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 553 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 554 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 555 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 556 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

PetalburgWoods_BugCatcherJames_Text_0:
# 5 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take bug POKéMON to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_BugCatcherJames_Text_1:
# 6 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_BugCatcherJames_Text_2:
# 8 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big bug POKéMON,\n"
	.string "people respect you for it.$"

PetalburgWoods_BugCatcherLyle_Text_0:
# 15 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My bug POKéMON team!$"

PetalburgWoods_BugCatcherLyle_Text_1:
# 16 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

PetalburgWoods_BugCatcherLyle_Text_2:
# 18 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_BugCatcherEli_Text_0:
# 25 "data/maps/PetalburgWoods/scripts.pory"
	.string "My big brother takes me with him to\n"
	.string "catch bugs!$"

PetalburgWoods_BugCatcherEli_Text_1:
# 26 "data/maps/PetalburgWoods/scripts.pory"
	.string "There's no way you beat my big brother…$"

PetalburgWoods_BugCatcherEli_Text_2:
# 28 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm so lucky to have a cool big brother.$"

PetalburgWoods_BugManiacNoah_Text_0:
# 35 "data/maps/PetalburgWoods/scripts.pory"
	.string "I love seeing my little brother's\n"
	.string "reactions to POKéMON!$"

PetalburgWoods_BugManiacNoah_Text_1:
# 36 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't believe you embarrassed me in\n"
	.string "front of my brother.$"

PetalburgWoods_BugManiacNoah_Text_2:
# 38 "data/maps/PetalburgWoods/scripts.pory"
	.string "I think my little brother is going to be\n"
	.string "a great trainer.$"

PetalburgWoods_BugCatcherCody_Text_0:
# 45 "data/maps/PetalburgWoods/scripts.pory"
	.string "There's a rare bug POKéMON in this\n"
	.string "forest.\p"
	.string "I need to see if you have one!$"

PetalburgWoods_BugCatcherCody_Text_1:
# 48 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught bug POKéMON from across\n"
	.string "Hoenn, but the bugs here always get\l"
	.string "away.$"

PetalburgWoods_BugManiacAiden_Text_0:
# 55 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're too weak to explore the\n"
	.string "Petalburg Mansion!$"

PetalburgWoods_BugManiacAiden_Text_1:
# 58 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I was brave enough to explore\n"
	.string "the haunted mansion.$"

PetalburgWoods_BugManiacNeil_Text_0:
# 65 "data/maps/PetalburgWoods/scripts.pory"
	.string "I knew someone would come looking for\n"
	.string "this item!\p"
	.string "You've been caught in my trap!$"

PetalburgWoods_BugManiacNeil_Text_1:
# 66 "data/maps/PetalburgWoods/scripts.pory"
	.string "You beat me in spite of my trap…$"

PetalburgWoods_BugManiacNeil_Text_2:
# 68 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm the only person I know with such a\n"
	.string "rare bug.$"

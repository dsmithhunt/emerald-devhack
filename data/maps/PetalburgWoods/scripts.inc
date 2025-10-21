PetalburgWoods_HiddenItemsExplanation::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_HiddenItemsExplanation_Text_0, MSGBOX_NPC
	return


PetalburgWoods_BugCatcherJames::
# 11 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_JAMES, PetalburgWoods_BugCatcherJames_Text_0, PetalburgWoods_BugCatcherJames_Text_1
# 16 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherJames_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugCatcherLyle::
# 21 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, PetalburgWoods_BugCatcherLyle_Text_0, PetalburgWoods_BugCatcherLyle_Text_1
# 26 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherLyle_Text_2, MSGBOX_AUTOCLOSE
# 27 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugCatcherEli::
# 31 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_ELI, PetalburgWoods_BugCatcherEli_Text_0, PetalburgWoods_BugCatcherEli_Text_1
# 36 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherEli_Text_2, MSGBOX_AUTOCLOSE
# 37 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugManiacNoah::
# 41 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_NOAH, PetalburgWoods_BugManiacNoah_Text_0, PetalburgWoods_BugManiacNoah_Text_1
# 46 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugManiacNoah_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugCatcherCody::
# 51 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_CODY, PetalburgWoods_BugCatcherCody_Text_0, PetalburgWoods_BugCatcherLyle_Text_1
# 56 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugCatcherCody_Text_1, MSGBOX_AUTOCLOSE
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugManiacAiden::
# 61 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_AIDEN, PetalburgWoods_BugManiacAiden_Text_0, PetalburgWoods_BugCatcherLyle_Text_1
# 66 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugManiacAiden_Text_1, MSGBOX_AUTOCLOSE
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_BugManiacNeil::
# 71 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, PetalburgWoods_BugManiacNeil_Text_0, PetalburgWoods_BugManiacNeil_Text_1
# 76 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_BugManiacNeil_Text_2, MSGBOX_AUTOCLOSE
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	return


PetalburgWoods_Sign1::
# 81 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	return


PetalburgWoods_Sign2::
# 85 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	return


PetalburgWoods_Sign3::
# 89 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	return


# 92 "data/maps/PetalburgWoods/scripts.pory"

# 93 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 94 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 95 "data/maps/PetalburgWoods/scripts.pory"

# 96 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 97 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 98 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 99 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 100 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 101 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 102 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 103 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 104 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 105 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 106 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 108 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 109 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 110 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 111 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 112 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 113 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 114 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 115 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 116 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 117 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 118 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 119 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 120 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 121 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 122 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 123 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 124 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 125 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 126 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 127 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 128 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 129 "data/maps/PetalburgWoods/scripts.pory"
	end
# 130 "data/maps/PetalburgWoods/scripts.pory"

# 131 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 132 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 133 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 134 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 135 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 136 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 137 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 138 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 139 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 140 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 141 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 142 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 143 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 144 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 145 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 146 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 147 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 148 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 149 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 150 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 151 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 152 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 153 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 155 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 156 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 157 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 158 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 159 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 160 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 161 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 162 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 163 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 164 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 165 "data/maps/PetalburgWoods/scripts.pory"
	end
# 166 "data/maps/PetalburgWoods/scripts.pory"

# 167 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 168 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 169 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 170 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 171 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 172 "data/maps/PetalburgWoods/scripts.pory"
	return
# 173 "data/maps/PetalburgWoods/scripts.pory"

# 174 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 175 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 176 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 177 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 178 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 179 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 180 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 181 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 182 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 183 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 184 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 185 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 186 "data/maps/PetalburgWoods/scripts.pory"
	end
# 187 "data/maps/PetalburgWoods/scripts.pory"

# 188 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 189 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 190 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 191 "data/maps/PetalburgWoods/scripts.pory"
	end
# 192 "data/maps/PetalburgWoods/scripts.pory"

# 193 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 194 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 195 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 196 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 197 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 198 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 199 "data/maps/PetalburgWoods/scripts.pory"
	return
# 200 "data/maps/PetalburgWoods/scripts.pory"

# 201 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 202 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 203 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 204 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 205 "data/maps/PetalburgWoods/scripts.pory"
	end
# 206 "data/maps/PetalburgWoods/scripts.pory"

# 207 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 208 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 209 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 210 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 211 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 212 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 213 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 214 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 215 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 216 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 217 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 218 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 220 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 222 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 223 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 225 "data/maps/PetalburgWoods/scripts.pory"

# 226 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 235 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 236 "data/maps/PetalburgWoods/scripts.pory"

# 237 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 238 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 239 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 240 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 241 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 242 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 243 "data/maps/PetalburgWoods/scripts.pory"

# 244 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 245 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 246 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 247 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 248 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 249 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 250 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 251 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 252 "data/maps/PetalburgWoods/scripts.pory"

# 253 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 254 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 255 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 256 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 257 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 258 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 259 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 261 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 262 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 263 "data/maps/PetalburgWoods/scripts.pory"

# 264 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 265 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 266 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 268 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 269 "data/maps/PetalburgWoods/scripts.pory"

# 270 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 271 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 272 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 273 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 274 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 275 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 276 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 277 "data/maps/PetalburgWoods/scripts.pory"

# 278 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 279 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 280 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 281 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 282 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 283 "data/maps/PetalburgWoods/scripts.pory"

# 284 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 285 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 286 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 287 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 288 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 289 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 290 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 291 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 292 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 293 "data/maps/PetalburgWoods/scripts.pory"

# 294 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 295 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 296 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 297 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 298 "data/maps/PetalburgWoods/scripts.pory"

# 299 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 300 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 301 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 302 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 303 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 304 "data/maps/PetalburgWoods/scripts.pory"

# 305 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 306 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 307 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 308 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 309 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 310 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 311 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 312 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 313 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 314 "data/maps/PetalburgWoods/scripts.pory"

# 315 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 316 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 317 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 318 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 319 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 320 "data/maps/PetalburgWoods/scripts.pory"

# 321 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 322 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 323 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 324 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 325 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 326 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 327 "data/maps/PetalburgWoods/scripts.pory"

# 328 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 329 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 330 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 331 "data/maps/PetalburgWoods/scripts.pory"

# 332 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 333 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 334 "data/maps/PetalburgWoods/scripts.pory"
	end
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 337 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 338 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 339 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 340 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 341 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 342 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 343 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 344 "data/maps/PetalburgWoods/scripts.pory"
	release
# 345 "data/maps/PetalburgWoods/scripts.pory"
	end
# 346 "data/maps/PetalburgWoods/scripts.pory"

# 347 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 348 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 349 "data/maps/PetalburgWoods/scripts.pory"
	release
# 350 "data/maps/PetalburgWoods/scripts.pory"
	end
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 353 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 354 "data/maps/PetalburgWoods/scripts.pory"
	end
# 355 "data/maps/PetalburgWoods/scripts.pory"

# 356 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 357 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 358 "data/maps/PetalburgWoods/scripts.pory"
	end
# 359 "data/maps/PetalburgWoods/scripts.pory"

# 360 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 361 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 362 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 363 "data/maps/PetalburgWoods/scripts.pory"
	end
# 364 "data/maps/PetalburgWoods/scripts.pory"

# 365 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 366 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_JAMES, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 367 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 368 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 369 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_PETALBURG_JAMES
# 370 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 371 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 372 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 373 "data/maps/PetalburgWoods/scripts.pory"
	release
# 374 "data/maps/PetalburgWoods/scripts.pory"
	end
# 375 "data/maps/PetalburgWoods/scripts.pory"

# 376 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 377 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 378 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 379 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 380 "data/maps/PetalburgWoods/scripts.pory"
	release
# 381 "data/maps/PetalburgWoods/scripts.pory"
	end
# 382 "data/maps/PetalburgWoods/scripts.pory"

# 383 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 384 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 385 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_PETALBURG_JAMES
# 386 "data/maps/PetalburgWoods/scripts.pory"
	release
# 387 "data/maps/PetalburgWoods/scripts.pory"
	end
# 388 "data/maps/PetalburgWoods/scripts.pory"

# 389 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 390 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 391 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 392 "data/maps/PetalburgWoods/scripts.pory"
	release
# 393 "data/maps/PetalburgWoods/scripts.pory"
	end
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 396 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 397 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_PETALBURG_JAMES
# 398 "data/maps/PetalburgWoods/scripts.pory"
	release
# 399 "data/maps/PetalburgWoods/scripts.pory"
	end
# 400 "data/maps/PetalburgWoods/scripts.pory"

# 401 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 402 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_PETALBURG_JAMES, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 403 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 404 "data/maps/PetalburgWoods/scripts.pory"
	end
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 409 "data/maps/PetalburgWoods/scripts.pory"

# 410 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 414 "data/maps/PetalburgWoods/scripts.pory"

# 415 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVCO RESEARCHER!\p"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 424 "data/maps/PetalburgWoods/scripts.pory"

# 425 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 436 "data/maps/PetalburgWoods/scripts.pory"

# 437 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 439 "data/maps/PetalburgWoods/scripts.pory"

# 440 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 449 "data/maps/PetalburgWoods/scripts.pory"

# 450 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 457 "data/maps/PetalburgWoods/scripts.pory"

# 458 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 462 "data/maps/PetalburgWoods/scripts.pory"

# 463 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 466 "data/maps/PetalburgWoods/scripts.pory"

# 467 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 470 "data/maps/PetalburgWoods/scripts.pory"

# 471 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 475 "data/maps/PetalburgWoods/scripts.pory"

# 476 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 479 "data/maps/PetalburgWoods/scripts.pory"

# 480 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 482 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 483 "data/maps/PetalburgWoods/scripts.pory"

# 484 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 487 "data/maps/PetalburgWoods/scripts.pory"

# 488 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 490 "data/maps/PetalburgWoods/scripts.pory"

# 491 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 492 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 493 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 494 "data/maps/PetalburgWoods/scripts.pory"

# 495 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 496 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 497 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 498 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 499 "data/maps/PetalburgWoods/scripts.pory"

# 500 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 501 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 502 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 503 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 504 "data/maps/PetalburgWoods/scripts.pory"

# 505 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 506 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 507 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 508 "data/maps/PetalburgWoods/scripts.pory"

# 509 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 510 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 511 "data/maps/PetalburgWoods/scripts.pory"

# 512 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 513 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 514 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 515 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 516 "data/maps/PetalburgWoods/scripts.pory"

# 517 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 518 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 519 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 520 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 521 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 522 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 523 "data/maps/PetalburgWoods/scripts.pory"

# 524 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 525 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 526 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 527 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 528 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 529 "data/maps/PetalburgWoods/scripts.pory"

# 530 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 531 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 532 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 533 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 534 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 535 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 536 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 537 "data/maps/PetalburgWoods/scripts.pory"

# 538 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 539 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 540 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 541 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 542 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 543 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 544 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 545 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 546 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 547 "data/maps/PetalburgWoods/scripts.pory"

# 548 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 549 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 550 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 551 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 552 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 553 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 554 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

PetalburgWoods_HiddenItemsExplanation_Text_0:
# 4 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "Make sure to pick them up to keep the\n"
	.string "environment clean.$"

PetalburgWoods_BugCatcherJames_Text_0:
# 13 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take bug POKéMON to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_BugCatcherJames_Text_1:
# 14 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_BugCatcherJames_Text_2:
# 16 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big bug POKéMON,\n"
	.string "people respect you for it.$"

PetalburgWoods_BugCatcherLyle_Text_0:
# 23 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My bug POKéMON team!$"

PetalburgWoods_BugCatcherLyle_Text_1:
# 24 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

PetalburgWoods_BugCatcherLyle_Text_2:
# 26 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_BugCatcherEli_Text_0:
# 33 "data/maps/PetalburgWoods/scripts.pory"
	.string "My big brother takes me with him to\n"
	.string "catch bugs!$"

PetalburgWoods_BugCatcherEli_Text_1:
# 34 "data/maps/PetalburgWoods/scripts.pory"
	.string "There's no way you beat my big brother…$"

PetalburgWoods_BugCatcherEli_Text_2:
# 36 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm so lucky to have a cool big brother.$"

PetalburgWoods_BugManiacNoah_Text_0:
# 43 "data/maps/PetalburgWoods/scripts.pory"
	.string "I love seeing my little brother's\n"
	.string "reactions to POKéMON!$"

PetalburgWoods_BugManiacNoah_Text_1:
# 44 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't believe you embarrassed me in\n"
	.string "front of my brother.$"

PetalburgWoods_BugManiacNoah_Text_2:
# 46 "data/maps/PetalburgWoods/scripts.pory"
	.string "I think my little brother is going to be\n"
	.string "a great trainer.$"

PetalburgWoods_BugCatcherCody_Text_0:
# 53 "data/maps/PetalburgWoods/scripts.pory"
	.string "There's a rare bug POKéMON in this\n"
	.string "forest.\p"
	.string "I need to see if you have one!$"

PetalburgWoods_BugCatcherCody_Text_1:
# 56 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught bug POKéMON from across\n"
	.string "Hoenn, but the bugs here always get\l"
	.string "away.$"

PetalburgWoods_BugManiacAiden_Text_0:
# 63 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're too weak to explore the\n"
	.string "Petalburg Mansion!$"

PetalburgWoods_BugManiacAiden_Text_1:
# 66 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I was brave enough to explore\n"
	.string "the haunted mansion.$"

PetalburgWoods_BugManiacNeil_Text_0:
# 73 "data/maps/PetalburgWoods/scripts.pory"
	.string "I knew someone would come looking for\n"
	.string "this item!\p"
	.string "You've been caught in my trap!$"

PetalburgWoods_BugManiacNeil_Text_1:
# 74 "data/maps/PetalburgWoods/scripts.pory"
	.string "You beat me in spite of my trap…$"

PetalburgWoods_BugManiacNeil_Text_2:
# 76 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm the only person I know with such a\n"
	.string "rare bug.$"

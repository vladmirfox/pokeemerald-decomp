AspirantDorms_MapScripts::
	.byte 0


AspirantDorms_EventScript_HasSlept::
# 6 "data/maps/AspirantDorms/scripts.pory"
	compare VAR_WYRMSHIRE_STATE, 0
	goto_if_ne AspirantDorms_EventScript_HasSlept_1
# 8 "data/maps/AspirantDorms/scripts.pory"
	compare VAR_WYRMSHIRE_STATE, 0
	goto_if_eq AspirantDorms_EventScript_HasSlept_2
	return

AspirantDorms_EventScript_HasSlept_1:
	return

AspirantDorms_EventScript_HasSlept_2:
# 9 "data/maps/AspirantDorms/scripts.pory"
	lockall
# 10 "data/maps/AspirantDorms/scripts.pory"
	msgbox AspirantDorms_Text_ShouldSleep, MSGBOX_DEFAULT
# 11 "data/maps/AspirantDorms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AspirantDorms_Movement_Stop
# 12 "data/maps/AspirantDorms/scripts.pory"
	waitmovement 0
# 13 "data/maps/AspirantDorms/scripts.pory"
	releaseall
	end


AspirantDorms_EventScript_Rival::
# 19 "data/maps/AspirantDorms/scripts.pory"
	lockall
# 20 "data/maps/AspirantDorms/scripts.pory"
	faceplayer
# 21 "data/maps/AspirantDorms/scripts.pory"
	msgbox AspirantDorms_Text_WhatThinking, MSGBOX_DEFAULT
# 22 "data/maps/AspirantDorms/scripts.pory"
	releaseall
	end


AspirantDorms_EventScript_BlockTV::
# 27 "data/maps/AspirantDorms/scripts.pory"
	lockall
# 28 "data/maps/AspirantDorms/scripts.pory"
	msgbox AspirantDorms_Text_WhatThinking, MSGBOX_DEFAULT
# 29 "data/maps/AspirantDorms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AspirantDorms_Movement_BlockTV
# 30 "data/maps/AspirantDorms/scripts.pory"
	waitmovement 0
# 31 "data/maps/AspirantDorms/scripts.pory"
	releaseall
	end


# 43 "data/maps/AspirantDorms/scripts.pory"
AspirantDorms_Movement_Stop:
# 44 "data/maps/AspirantDorms/scripts.pory"
	face_up
# 45 "data/maps/AspirantDorms/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/AspirantDorms/scripts.pory"
AspirantDorms_Movement_BlockTV:
# 49 "data/maps/AspirantDorms/scripts.pory"
	face_right
# 50 "data/maps/AspirantDorms/scripts.pory"
	walk_right
	step_end

AspirantDorms_Text_ShouldSleep::
# 35 "data/maps/AspirantDorms/scripts.pory"
	.string "Hmm... I should introduce myself to the\n"
	.string "others and then sleep so I'm ready for\l"
	.string "the Proving Trial tomorrow.$"

AspirantDorms_Text_WhatThinking::
# 39 "data/maps/AspirantDorms/scripts.pory"
	.string "Hey Dweb! What do you think your doing!\n"
	.string "It's CLEAR I'm the superior Applicant\l"
	.string "here soo just leave me alone until we're\l"
	.string "able to settle this tomorrow like\l"
	.string "Trainers.\l"
	.string ".....\l"
	.string "Go pester the OTHER dweb Upstairs if\l"
	.string "you insist on bothering someone.$"

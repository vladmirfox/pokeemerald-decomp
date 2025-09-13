AspirantDormsF2_MapScripts::
# 2 "data/maps/AspirantDormsF2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AspirantDormsF2_EventScript_AideSleeping
	.byte 0


AspirantDormsF2_EventScript_AideSleeping::
# 6 "data/maps/AspirantDormsF2/scripts.pory"
	goto_if_set FLAG_AIDE_AWAKE, AspirantDormsF2_EventScript_AideSleeping_1
# 10 "data/maps/AspirantDormsF2/scripts.pory"
	setflag FLAG_AIDE_ASLEEP
	return

AspirantDormsF2_EventScript_AideSleeping_1:
	return


AspirantDormsF2_EventScript_Aide::
# 16 "data/maps/AspirantDormsF2/scripts.pory"
	lockall
# 17 "data/maps/AspirantDormsF2/scripts.pory"
	msgbox AspirantDormsF2_Text_AideSleep, MSGBOX_DEFAULT
# 18 "data/maps/AspirantDormsF2/scripts.pory"
	releaseall
	end


AspirantDormsF2_EventScript_AideBack::
# 23 "data/maps/AspirantDormsF2/scripts.pory"
	lock
# 24 "data/maps/AspirantDormsF2/scripts.pory"
	msgbox AspirantDormsF2_Text_AideNerves, MSGBOX_DEFAULT
# 25 "data/maps/AspirantDormsF2/scripts.pory"
	applymovement 1, AspirantDormsF2_Movement_Shock
# 26 "data/maps/AspirantDormsF2/scripts.pory"
	waitmovement 1
# 27 "data/maps/AspirantDormsF2/scripts.pory"
	msgbox AspirantDormsF2_Text_AideHello, MSGBOX_DEFAULT
# 28 "data/maps/AspirantDormsF2/scripts.pory"
	applymovement 1, AspirantDormsF2_Movement_AideBack
# 29 "data/maps/AspirantDormsF2/scripts.pory"
	waitmovement 1
# 30 "data/maps/AspirantDormsF2/scripts.pory"
	setvar VAR_DORMS_STATE, 1
# 31 "data/maps/AspirantDormsF2/scripts.pory"
	setflag FLAG_AIDE_AWAKE
# 32 "data/maps/AspirantDormsF2/scripts.pory"
	clearflag FLAG_AIDE_ASLEEP
# 33 "data/maps/AspirantDormsF2/scripts.pory"
	releaseall
	end


AspirantDormsF2_EventScript_AideSide::
# 38 "data/maps/AspirantDormsF2/scripts.pory"
	lock
# 39 "data/maps/AspirantDormsF2/scripts.pory"
	msgbox AspirantDormsF2_Text_AideNerves, MSGBOX_DEFAULT
# 40 "data/maps/AspirantDormsF2/scripts.pory"
	applymovement 1, AspirantDormsF2_Movement_Shock
# 41 "data/maps/AspirantDormsF2/scripts.pory"
	waitmovement 1
# 42 "data/maps/AspirantDormsF2/scripts.pory"
	msgbox AspirantDormsF2_Text_AideHello, MSGBOX_DEFAULT
# 43 "data/maps/AspirantDormsF2/scripts.pory"
	applymovement 1, AspirantDormsF2_Movement_AideSide
# 44 "data/maps/AspirantDormsF2/scripts.pory"
	waitmovement 1
# 45 "data/maps/AspirantDormsF2/scripts.pory"
	setvar VAR_DORMS_STATE, 1
# 46 "data/maps/AspirantDormsF2/scripts.pory"
	setflag FLAG_AIDE_AWAKE
# 47 "data/maps/AspirantDormsF2/scripts.pory"
	clearflag FLAG_AIDE_ASLEEP
# 48 "data/maps/AspirantDormsF2/scripts.pory"
	releaseall
	end


# 64 "data/maps/AspirantDormsF2/scripts.pory"
AspirantDormsF2_Movement_Shock:
# 65 "data/maps/AspirantDormsF2/scripts.pory"
	emote_exclamation_mark
# 66 "data/maps/AspirantDormsF2/scripts.pory"
	face_player
	step_end

# 69 "data/maps/AspirantDormsF2/scripts.pory"
AspirantDormsF2_Movement_AideSide:
# 70 "data/maps/AspirantDormsF2/scripts.pory"
	face_down
# 71 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 71 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 71 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 71 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 72 "data/maps/AspirantDormsF2/scripts.pory"
	face_right
# 73 "data/maps/AspirantDormsF2/scripts.pory"
	walk_right
# 74 "data/maps/AspirantDormsF2/scripts.pory"
	face_down
	step_end

# 77 "data/maps/AspirantDormsF2/scripts.pory"
AspirantDormsF2_Movement_AideBack:
# 78 "data/maps/AspirantDormsF2/scripts.pory"
	face_right
# 79 "data/maps/AspirantDormsF2/scripts.pory"
	walk_right
# 79 "data/maps/AspirantDormsF2/scripts.pory"
	walk_right
# 80 "data/maps/AspirantDormsF2/scripts.pory"
	face_down
# 81 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 81 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 81 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 81 "data/maps/AspirantDormsF2/scripts.pory"
	walk_down
# 82 "data/maps/AspirantDormsF2/scripts.pory"
	walk_left
# 83 "data/maps/AspirantDormsF2/scripts.pory"
	face_down
	step_end

AspirantDormsF2_Text_AideNerves::
# 52 "data/maps/AspirantDormsF2/scripts.pory"
	.string "OK... Lets see I've read the primer on\n"
	.string "the Clans and I've reviewed my Items in\l"
	.string "the PC. Now I guess its time for bed so\l"
	.string "I'm well rested for tomorrow.$"

AspirantDormsF2_Text_AideHello::
# 56 "data/maps/AspirantDormsF2/scripts.pory"
	.string "Oh, Hello! I'm Aiden and I'm hoping to\n"
	.string "get a Starter Pokemon and work under\l"
	.string "Professor Popula in her research\l"
	.string "concerning Bond Phenomina.$"

AspirantDormsF2_Text_AideSleep::
# 60 "data/maps/AspirantDormsF2/scripts.pory"
	.string "Zzzzzzzz....\n"
	.string "Zzzzzzzz....$"

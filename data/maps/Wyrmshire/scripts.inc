Wyrmshire_MapScripts::
	.byte 0


Wyrmshire_EventScript_ShouldDo::
# 6 "data/maps/Wyrmshire/scripts.pory"
	lock
# 7 "data/maps/Wyrmshire/scripts.pory"
	msgbox Wyrmshire_Text_ShouldDo, MSGBOX_DEFAULT
# 8 "data/maps/Wyrmshire/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Wyrmshire_Movement_ShouldDo
# 9 "data/maps/Wyrmshire/scripts.pory"
	waitmovement 0
# 10 "data/maps/Wyrmshire/scripts.pory"
	release
	end


# 18 "data/maps/Wyrmshire/scripts.pory"
Wyrmshire_Movement_ShouldDo:
# 19 "data/maps/Wyrmshire/scripts.pory"
	face_up
# 20 "data/maps/Wyrmshire/scripts.pory"
	walk_up
	step_end

Wyrmshire_Text_ShouldDo::
# 14 "data/maps/Wyrmshire/scripts.pory"
	.string "I should do the Proving Trial and get a\n"
	.string "Starter.$"

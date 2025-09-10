TestAreaPTA4_MapScripts::
# 2 "data/maps/TestAreaPTA4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestAreaPTA4_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/TestAreaPTA4/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestAreaPTA4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestAreaPTA4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TestAreaPTA4/scripts.pory"
	goto PTOutsideA4_OnTransition
	return

TestAreaPTA4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TestAreaPTA4/scripts.pory"
	map_script_2 VAR_PT_STATE, 6, PTOutsideA4_EventScript_HideMon
# 7 "data/maps/TestAreaPTA4/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, PTOutsideA4_EventScript_SetExit
	.2byte 0


PTOutsideA4_OnTransition::
# 12 "data/maps/TestAreaPTA4/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 13 "data/maps/TestAreaPTA4/scripts.pory"
	compare VAR_SAFARI_ZONE_STATE, 2
	goto_if_eq PTOutsideA4_OnTransition_1
	end

PTOutsideA4_OnTransition_1:
# 14 "data/maps/TestAreaPTA4/scripts.pory"
	goto PTOutsideA4_EventScript_EnterPT
	return


PTOutsideA4_EventScript_HideMon::
# 22 "data/maps/TestAreaPTA4/scripts.pory"
	compare VAR_PT_STATE, 6
	goto_if_eq PTOutsideA4_EventScript_HideMon_1
	end

PTOutsideA4_EventScript_HideMon_1:
# 23 "data/maps/TestAreaPTA4/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 24 "data/maps/TestAreaPTA4/scripts.pory"
	setvar VAR_PT_STATE, 7
	return


PTOutsideA4_EventScript_EnterPT::
# 31 "data/maps/TestAreaPTA4/scripts.pory"
	lockall
# 32 "data/maps/TestAreaPTA4/scripts.pory"
	special EnterSafariMode
# 33 "data/maps/TestAreaPTA4/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 34 "data/maps/TestAreaPTA4/scripts.pory"
	releaseall
	end


PTOutsideA4_EventScript_SetExit::
# 39 "data/maps/TestAreaPTA4/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 1
# 40 "data/maps/TestAreaPTA4/scripts.pory"
	setvar VAR_PT_STATE, 4
# 41 "data/maps/TestAreaPTA4/scripts.pory"
	setflag FLAG_SYS_STARTER_GET
# 42 "data/maps/TestAreaPTA4/scripts.pory"
	special ExitSafariMode
# 43 "data/maps/TestAreaPTA4/scripts.pory"
	warp MAP_TEST_AREA_PTINTERIOR, 4, 1
# 44 "data/maps/TestAreaPTA4/scripts.pory"
	releaseall
# 45 "data/maps/TestAreaPTA4/scripts.pory"
	waitstate
	end


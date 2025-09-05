TestAreaPlayerHomeFloor2_MapScripts::
	.byte 0

TestAreaPlayerHomeFloor2_EventScripts_DoSleep::
	lock
	dynmultichoice(0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, "DoSleepMorning", "DoSleepDay", "DoSleepEvening", "DoSleepNight")
	buffernumberstring(STR_VAR_1, VAR_RESULT)
    msgbox("{STR_VAR_1}", MSGBOX_DEFAULT)
    closemessage
    release
    end
	

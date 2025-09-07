TestAreaPlayerHomeFloor2_MapScripts::
	.byte 0


DoSleepPrompt::
# 6 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	lock
# 7 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox DoSleep_Text, MSGBOX_DEFAULT
# 8 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, DoSleepMorning_Text, DoSleepDay_Text, DoSleepEvening_Text, DoSleepNight_Text
# 9 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	gettimeofday
# 10 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DoSleepPrompt_2
# 16 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DoSleepPrompt_3
# 22 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DoSleepPrompt_4
# 28 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DoSleepPrompt_5
DoSleepPrompt_1:
# 34 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	closemessage
# 35 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	release
	end

DoSleepPrompt_2:
# 12 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 13 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 8, 0
# 14 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_1

DoSleepPrompt_3:
# 18 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 19 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 12, 0
# 20 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_1

DoSleepPrompt_4:
# 24 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 25 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 20, 0
# 26 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_1

DoSleepPrompt_5:
# 30 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 31 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 22, 0
# 32 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_1


ClansLoreBook::
# 60 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	lock
# 61 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox BookPrompt_Text, MSGBOX_DEFAULT
# 62 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Insca_Text, Umbrum_Text, Wylkera_Text, Sprkwick_Text, Faesken_Text, Valknight_Text, Emburn_Text, Aeravis_Text, Mortus_Text, Gardia_Text, acTera_Text, Icisica_Text, Mansons_Text, Viadon_Text, Seera_Text, Bulduria_Text, Stelorum_Text, Aquiluma_Text
# 63 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ClansLoreBook_2
# 70 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ClansLoreBook_3
# 77 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ClansLoreBook_4
# 84 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ClansLoreBook_5
# 91 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ClansLoreBook_6
# 98 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ClansLoreBook_7
# 105 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ClansLoreBook_8
# 112 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ClansLoreBook_9
# 119 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq ClansLoreBook_10
# 126 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq ClansLoreBook_11
# 133 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq ClansLoreBook_12
# 140 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq ClansLoreBook_13
# 147 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq ClansLoreBook_14
# 154 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq ClansLoreBook_15
# 161 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq ClansLoreBook_16
# 168 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq ClansLoreBook_17
# 175 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq ClansLoreBook_18
# 182 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq ClansLoreBook_19
ClansLoreBook_1:
# 189 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	closemessage
# 190 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	release
	end

ClansLoreBook_2:
# 65 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan1_Text, MSGBOX_DEFAULT
# 66 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_VESPIQUEN, 10, 3
# 67 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan1_2_Text, MSGBOX_DEFAULT
# 68 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_3:
# 72 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan2_Text, MSGBOX_DEFAULT
# 73 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_HONCHKROW, 10, 3
# 74 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan2_2_Text, MSGBOX_DEFAULT
# 75 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_4:
# 79 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan3_Text, MSGBOX_DEFAULT
# 80 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_DRAGONITE, 10, 3
# 81 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan3_2_Text, MSGBOX_DEFAULT
# 82 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_5:
# 86 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan4_Text, MSGBOX_DEFAULT
# 87 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ELECTIVIRE, 10, 3
# 88 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan4_2_Text, MSGBOX_DEFAULT
# 89 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_6:
# 93 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan5_Text, MSGBOX_DEFAULT
# 94 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR, 10, 3
# 95 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan5_2_Text, MSGBOX_DEFAULT
# 96 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_7:
# 100 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan6_Text, MSGBOX_DEFAULT
# 101 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_LUCARIO, 10, 3
# 102 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan6_2_Text, MSGBOX_DEFAULT
# 103 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_8:
# 107 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan7_Text, MSGBOX_DEFAULT
# 108 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_MAGMORTAR, 10, 3
# 109 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan7_2_Text, MSGBOX_DEFAULT
# 110 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_9:
# 114 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan8_Text, MSGBOX_DEFAULT
# 115 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_PIDGEOT, 10, 3
# 116 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan8_2_Text, MSGBOX_DEFAULT
# 117 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_10:
# 121 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan9_Text, MSGBOX_DEFAULT
# 122 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_AEGISLASH, 10, 3
# 123 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan9_2_Text, MSGBOX_DEFAULT
# 124 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_11:
# 128 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan10_Text, MSGBOX_DEFAULT
# 129 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_TORTERRA, 10, 3
# 130 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan10_2_Text, MSGBOX_DEFAULT
# 131 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_12:
# 135 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan11_Text, MSGBOX_DEFAULT
# 136 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_GOLURK, 10, 3
# 137 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan11_2_Text, MSGBOX_DEFAULT
# 138 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_13:
# 142 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan12_Text, MSGBOX_DEFAULT
# 143 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ABOMASNOW, 10, 3
# 144 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan12_2_Text, MSGBOX_DEFAULT
# 145 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_14:
# 149 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan13_Text, MSGBOX_DEFAULT
# 150 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_URSALUNA, 10, 3
# 151 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan13_2_Text, MSGBOX_DEFAULT
# 152 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_15:
# 156 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan14_Text, MSGBOX_DEFAULT
# 157 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_SALAZZLE, 10, 3
# 158 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan14_2_Text, MSGBOX_DEFAULT
# 159 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_16:
# 163 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan15_Text, MSGBOX_DEFAULT
# 164 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ALAKAZAM, 10, 3
# 165 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan15_2_Text, MSGBOX_DEFAULT
# 166 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_17:
# 170 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan16_Text, MSGBOX_DEFAULT
# 171 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ONIX, 10, 3
# 172 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan16_2_Text, MSGBOX_DEFAULT
# 173 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_18:
# 177 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan17_Text, MSGBOX_DEFAULT
# 178 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_METAGROSS, 10, 3
# 179 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan17_2_Text, MSGBOX_DEFAULT
# 180 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_19:
# 184 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan18_Text, MSGBOX_DEFAULT
# 185 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 186 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan18_2_Text, MSGBOX_DEFAULT
# 187 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1


DoSleepMorning_Text::
# 39 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Morning$"

DoSleepDay_Text::
# 43 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Day$"

DoSleepEvening_Text::
# 47 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Evening$"

DoSleepNight_Text::
# 51 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Night$"

DoSleep_Text::
# 55 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Sleep unitl?$"

BookPrompt_Text::
# 194 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Which of the 18 Clans of Astralis do you\n"
	.string "wish to learn about?$"

Insca_Text::
# 198 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Incsa Clan$"

Umbrum_Text::
# 202 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Umbrum Clan$"

Wylkera_Text::
# 206 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Wylkera Clan$"

Sprkwick_Text::
# 210 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Sprkwick Clan$"

Faesken_Text::
# 214 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Faesken Clan$"

Valknight_Text::
# 218 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Valknight Clan$"

Emburn_Text::
# 222 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Emburn Clan$"

Aeravis_Text::
# 226 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aeravis Clan$"

Mortus_Text::
# 230 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mortus Clan$"

Gardia_Text::
# 234 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Gardia Clan$"

acTera_Text::
# 238 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "ac Tera Clan$"

Icisica_Text::
# 242 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Icisica Clan$"

Mansons_Text::
# 246 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mansons Clan$"

Viadon_Text::
# 250 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Viadon Clan$"

Seera_Text::
# 254 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Seera Clan$"

Bulduria_Text::
# 258 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Bulduria Clan$"

Stelorum_Text::
# 262 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Stelorum Clan$"

Aquiluma_Text::
# 266 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aquliuma Clan$"

Clan1_Text::
# 270 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Incsa Clan: Bug-Type\n"
	.string "Location: Hanaka Village\l"
	.string "$"

Clan2_Text::
# 274 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Umbrum Clan: Dark-Type\n"
	.string "Location: Fortuna City\l"
	.string "$"

Clan3_Text::
# 278 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Wylkera Clan: Dragon-Type\n"
	.string "Location: Wyrmshire & Wyrmspire Keep\l"
	.string "$"

Clan4_Text::
# 282 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Sprkwick Clan: Electric-Type\n"
	.string "Location: Hydroelectric Dam\l"
	.string "$"

Clan5_Text::
# 286 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Faesken Clan: Fairy-Type\n"
	.string "Location: Mysteria\l"
	.string "$"

Clan6_Text::
# 290 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Valknight Clan: Fighting-Type\n"
	.string "Location: Fort Valorite\l"
	.string "$"

Clan7_Text::
# 294 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Emburn Clan: Fire-Type\n"
	.string "Location: Cynderhail Sect\l"
	.string "$"

Clan8_Text::
# 298 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aeravis Clan: Flying-Type\n"
	.string "Location: Hanaka Village\l"
	.string "$"

Clan9_Text::
# 302 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mortus Clan: Ghost-Type\n"
	.string "Location: Great Desert\l"
	.string "$"

Clan10_Text::
# 306 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Gardia Clan: Grass-Type\n"
	.string "Location: Greensfield\l"
	.string "$"

Clan11_Text::
# 310 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "ac Tera Clan: Ground-Type\n"
	.string "Location: Desert Oasis\l"
	.string "$"

Clan12_Text::
# 314 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Icisica Clan: Ice-Type\n"
	.string "Location: Cynderhail Sect\l"
	.string "$"

Clan13_Text::
# 318 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mansons Clan: Normal-Type\n"
	.string "Location: Greensfield\l"
	.string "$"

Clan14_Text::
# 322 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Viadon Clan: Poison-Type\n"
	.string "Location: Fortuna City\l"
	.string "$"

Clan15_Text::
# 326 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Seera Clan: Psychic-Type\n"
	.string "Location: Mysteria\l"
	.string "$"

Clan16_Text::
# 330 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Bulduria Clan: Rock-Type\n"
	.string "Location: Nexium Caverns\l"
	.string "$"

Clan17_Text::
# 334 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Stelorum Clan: Steel-Type\n"
	.string "Location: Ironforge City\l"
	.string "$"

Clan18_Text::
# 338 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aquliuma Clan: Water-Type\n"
	.string "Location: Marina Port\l"
	.string "$"

Clan1_2_Text::
# 342 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Vespiquen\l"
	.string "Relic: Buginium Z$"

Clan2_2_Text::
# 346 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Honchkrow\l"
	.string "Relic: Darkinium Z$"

Clan3_2_Text::
# 350 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Dragonite\l"
	.string "Relic: Dragonium Z$"

Clan4_2_Text::
# 354 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Electivire\l"
	.string "Relic: Electrium Z$"

Clan5_2_Text::
# 358 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Gardevoir\l"
	.string "Relic: Fairium Z$"

Clan6_2_Text::
# 362 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Lucario\l"
	.string "Relic: Fightinium Z$"

Clan7_2_Text::
# 366 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Magmortar\l"
	.string "Relic: Firium Z$"

Clan8_2_Text::
# 370 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Pidgeot\l"
	.string "Relic: Flyinium Z$"

Clan9_2_Text::
# 374 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Aegislash\l"
	.string "Relic: Ghostium Z$"

Clan10_2_Text::
# 378 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Torterra\l"
	.string "Relic: Grassium Z$"

Clan11_2_Text::
# 382 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Golurk\l"
	.string "Relic: Groundium Z$"

Clan12_2_Text::
# 386 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Abomasnow\l"
	.string "Relic: Icium Z$"

Clan13_2_Text::
# 390 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Ursaluna\l"
	.string "Relic: Normalium Z$"

Clan14_2_Text::
# 394 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Salazzle\l"
	.string "Relic: Poisonium Z$"

Clan15_2_Text::
# 398 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Alakazam\l"
	.string "Relic: Psychium Z$"

Clan16_2_Text::
# 402 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Onix\l"
	.string "Relic: Rockium Z$"

Clan17_2_Text::
# 406 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Metagross\l"
	.string "Relic: Steelium Z$"

Clan18_2_Text::
# 410 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Lapras\l"
	.string "Relic: Waterium Z$"

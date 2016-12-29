264 4 596 544
TEXT 1 294 455 564 493  " 0x00 = CANopen Mode\r\n 0x01 = TMLCAN Mode" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 544 430 564 462  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 294 430 518 462  " Operating mode                     =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 473 430 556 454  0 "Select_CANmode" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "Select_CANmode" 0
TEXT 1 5 51 278 66  "" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 292 29 564 81  " 0x7F = Pre-operational\r\n 0x04 = Stopped\r\n 0x05 = Operational" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 544 4 564 36  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 292 4 516 36  " CiA301  NMT state                  =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 471 4 554 28  0 "NodeStateNMT" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "NodeStateNMT" 0
TEXT 1 284 0 571 87  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 5 441 279 493  " IMPORTANT! The information in this\r\n control panel is valid only when the\r\n drive is controlled by a CANopen master." "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 284 425 571 498  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 294 268 564 421  " 0xFB = Ext. Ref. Torque Mode\r\n 0xFC = Ext. Ref. Speed Mode\r\n 0xFD = Ext. Ref. Position Mode\r\n 0xFE = Electronic Camming Mode\r\n 0xFF = Electronic Gearing Mode\r\n 0x01 = Profile Position Mode\r\n 0x03 = Profile Velocity Mode\r\n 0x06 = Homing Mode\r\n 0x07 = Interpolated Position Mode" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 544 243 564 275  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 294 243 518 275  " Modes of operation display  =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 473 243 556 267  0 "ModesOpDisplay" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "ModesOpDisplay" 0
TEXT 1 284 238 571 427  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 292 117 564 233  " 0x00 = Not Ready to Switch On\r\n 0x01 = Switch On Disabled\r\n 0x02 = Ready to Switch On\r\n 0x03 = Switched On\r\n 0x04 = Operation Enable\r\n 0x05 = Quick Stop Active\r\n 0x06 = Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 544 92 564 124  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 292 92 516 124  " CiA402 Status machine          =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 471 92 554 116  0 "sts_ds402" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "sts_ds402" 0
TEXT 1 284 84 571 239  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 5 29 52 61  "Binary" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 39 29 67 53  0 "SRL" "SRL[bit 15]" 15 0 0 0
BIT 1 54 29 82 53  0 "SRL" "SRL[bit 14]" 14 0 0 0
BIT 1 68 29 96 53  0 "SRL" "SRL[bit 13]" 13 0 0 0
BIT 1 82 29 110 53  0 "SRL" "SRL[bit 12]" 12 0 0 0
BIT 1 96 29 124 53  0 "SRL" "SRL[bit 11]" 11 0 0 0
BIT 1 110 29 138 53  0 "SRL" "SRL[bit 10]" 10 0 0 0
BIT 1 124 29 152 53  0 "SRL" "SRL[bit 9]" 9 0 0 0
BIT 1 138 29 166 53  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 152 29 180 53  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 166 29 194 53  0 "SRL" "SRL[bit 6]" 6 0 0 0
BIT 1 180 29 208 53  0 "SRL" "SRL[bit 5]" 5 0 0 0
BIT 1 194 29 222 53  0 "SRL" "SRL[bit 4]" 4 0 0 0
BIT 1 208 29 236 53  0 "SRL" "SRL[bit 3]" 3 0 0 255
BIT 1 222 29 250 53  0 "SRL" "SRL[bit 2]" 2 0 0 0
BIT 1 236 29 264 53  0 "SRL" "SRL[bit 1]" 1 0 0 0
BIT 1 250 29 278 53  0 "SRL" "SRL[bit 0]" 0 0 0 0
TEXT 1 5 418 259 443  " 0 - Ready to switch on" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 396 259 420  " 1 - Switched on" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 373 259 398  " 2 - Operation enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 350 259 375  " 3 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 327 259 352  " 4 - Voltage enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 304 259 329  " 5 - Quick stop" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 281 259 306  " 6 - Switch on disabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 258 259 283  " 7 - Homing/CALLS warning" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 235 259 260  " 8 - Homing/CALLS active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 211 259 237  " 9 - Remote" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 189 259 214  "10 - Target reached" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 166 259 191  "11 - Internal limit active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 143 259 168  "12 - Set-point acknowledge/Speed is 0" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 120 259 145  "13 - Following/Max. slippage error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 98 259 122  "14 - Event has occured" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 251 418 279 442  0 "SRL" "SRL[bit 0]" 0 0 0 0
BIT 1 251 395 279 419  0 "SRL" "SRL[bit 1]" 1 0 0 0
BIT 1 251 373 279 397  0 "SRL" "SRL[bit 2]" 2 0 0 0
BIT 1 251 350 279 374  0 "SRL" "SRL[bit 3]" 3 0 0 255
BIT 1 251 327 279 351  0 "SRL" "SRL[bit 4]" 4 0 0 0
BIT 1 251 304 279 328  0 "SRL" "SRL[bit 5]" 5 0 0 0
BIT 1 251 281 279 305  0 "SRL" "SRL[bit 6]" 6 0 0 0
BIT 1 251 258 279 282  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 251 235 279 259  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 251 212 279 236  0 "SRL" "SRL[bit 9]" 9 0 0 0
BIT 1 251 189 279 213  0 "SRL" "SRL[bit 10]" 10 0 0 0
BIT 1 251 166 279 190  0 "SRL" "SRL[bit 11]" 11 0 0 0
BIT 1 251 143 279 167  0 "SRL" "SRL[bit 12]" 12 0 0 0
BIT 1 251 120 279 144  0 "SRL" "SRL[bit 13]" 13 0 0 0
TEXT 1 5 75 259 100  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 251 98 279 122  0 "SRL" "SRL[bit 14]" 14 0 0 0
BIT 1 251 75 279 99  0 "SRL" "SRL[bit 15]" 15 0 0 0
TEXT 1 -2 70 286 498  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 258 5 278 37  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 5 5 229 37  " Status word (Object 6041h)   =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 185 5 268 29  0 "SRL" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "SRL" 0
TEXT 1 0 0 286 73  "" "Courier New" 9 400 0 0 0 49 0 1 14212834

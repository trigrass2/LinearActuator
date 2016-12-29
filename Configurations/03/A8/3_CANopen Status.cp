289 2 596 544
TEXT 1 6 51 279 66  "" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 293 29 565 81  " 0x7F = Pre-operational\r\n 0x04 = Stopped\r\n 0x05 = Operational" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 545 4 565 36  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 293 4 517 36  " CiA301  NMT state                  =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 472 4 555 36  0 "NodeStateNMT" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "NodeStateNMT" 0
TEXT 1 285 0 572 87  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 6 441 280 493  " IMPORTANT! The information in this\r\n control panel is valid only when the\r\n drive is controlled by a CANopen master." "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 285 425 572 498  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 295 268 565 421  " 0x00 = No Mode Assigned\r\n 0x01 = Profile Position Mode\r\n 0x03 = Profile Velocity Mode\r\n 0x06 = Homing Mode\r\n 0x07 = Interpolated Position Mode" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 545 243 565 275  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 295 243 519 275  " Modes of operation display  =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 474 243 557 275  0 "ModesOpDisplay" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "ModesOpDisplay" 0
TEXT 1 285 238 572 427  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 293 117 565 233  " 0x00 = Not Ready to Switch On\r\n 0x01 = Switch On Disabled\r\n 0x02 = Ready to Switch On\r\n 0x03 = Switched On\r\n 0x04 = Operation Enable\r\n 0x05 = Quick Stop Active\r\n 0x06 = Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 545 92 565 124  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 293 92 517 124  " CiA402 Status machine          =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 472 92 555 124  0 "sts_ds402" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "sts_ds402" 0
TEXT 1 285 84 572 239  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 6 29 53 61  "Binary" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 40 29 68 61  0 "SRL" "SRL[bit 15]" 15 0 0 0
BIT 1 55 29 83 61  0 "SRL" "SRL[bit 14]" 14 0 0 0
BIT 1 69 29 97 61  0 "SRL" "SRL[bit 13]" 13 0 0 0
BIT 1 83 29 111 61  0 "SRL" "SRL[bit 12]" 12 0 0 0
BIT 1 97 29 125 61  0 "SRL" "SRL[bit 11]" 11 0 0 0
BIT 1 111 29 139 61  0 "SRL" "SRL[bit 10]" 10 0 0 0
BIT 1 125 29 153 61  0 "SRL" "SRL[bit 9]" 9 0 0 0
BIT 1 139 29 167 61  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 153 29 181 61  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 167 29 195 61  0 "SRL" "SRL[bit 6]" 6 0 0 0
BIT 1 181 29 209 61  0 "SRL" "SRL[bit 5]" 5 0 0 0
BIT 1 195 29 223 61  0 "SRL" "SRL[bit 4]" 4 0 0 0
BIT 1 209 29 237 61  0 "SRL" "SRL[bit 3]" 3 0 0 255
BIT 1 223 29 251 61  0 "SRL" "SRL[bit 2]" 2 0 0 0
BIT 1 237 29 265 61  0 "SRL" "SRL[bit 1]" 1 0 0 0
BIT 1 251 29 279 61  0 "SRL" "SRL[bit 0]" 0 0 0 0
TEXT 1 6 418 260 443  " 0 - Ready to switch on" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 396 260 420  " 1 - Switched on" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 373 260 398  " 2 - Operation enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 350 260 375  " 3 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 327 260 352  " 4 - Voltage enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 304 260 329  " 5 - Quick stop" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 281 260 306  " 6 - Switch on disabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 258 260 283  " 7 - Homing/CALLS warning" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 235 260 260  " 8 - Homing/CALLS active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 211 260 237  " 9 - Remote" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 189 260 214  "10 - Target reached" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 166 260 191  "11 - Internal limit active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 143 260 168  "12 - Set-point acknowledge/Speed is 0" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 120 260 145  "13 - Following/Max. slippage error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 98 260 122  "14 - Event has occured" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 252 418 280 450  0 "SRL" "SRL[bit 0]" 0 0 0 0
BIT 1 252 395 280 427  0 "SRL" "SRL[bit 1]" 1 0 0 0
BIT 1 252 373 280 405  0 "SRL" "SRL[bit 2]" 2 0 0 0
BIT 1 252 350 280 382  0 "SRL" "SRL[bit 3]" 3 0 0 255
BIT 1 252 327 280 359  0 "SRL" "SRL[bit 4]" 4 0 0 0
BIT 1 252 304 280 336  0 "SRL" "SRL[bit 5]" 5 0 0 0
BIT 1 252 281 280 313  0 "SRL" "SRL[bit 6]" 6 0 0 0
BIT 1 252 258 280 290  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 252 235 280 267  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 252 212 280 244  0 "SRL" "SRL[bit 9]" 9 0 0 0
BIT 1 252 189 280 221  0 "SRL" "SRL[bit 10]" 10 0 0 0
BIT 1 252 166 280 198  0 "SRL" "SRL[bit 11]" 11 0 0 0
BIT 1 252 143 280 175  0 "SRL" "SRL[bit 12]" 12 0 0 0
BIT 1 252 120 280 152  0 "SRL" "SRL[bit 13]" 13 0 0 0
TEXT 1 6 75 260 100  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 252 98 280 130  0 "SRL" "SRL[bit 14]" 14 0 0 0
BIT 1 252 75 280 107  0 "SRL" "SRL[bit 15]" 15 0 0 0
TEXT 1 -1 70 287 498  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 259 5 279 37  " h" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 6 5 230 37  " Status word (Object 6041h)   =" "Arial" 11 700 0 0 0 34 0 1 7397120
SHOWVAR 1 186 5 269 37  0 "SRL" "" 0.000000000e+000 1.000000000e+003 0 1 %0 "SRL" 0
TEXT 1 1 0 287 73  "" "Courier New" 9 400 0 0 0 49 0 1 14212834

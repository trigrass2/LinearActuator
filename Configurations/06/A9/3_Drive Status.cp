305 4 689 468
TEXT 1 447 406 661 420  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 406 221 420  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 11 387 120 412  "Supply voltage" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 187 387 216 413  " [V]" "Arial" 10 700 255 0 0 34 0 1 14212834
SHOWVAR 1 51 387 188 411  0 "DC_Supply_Motor" "V " 0.000000000e+000 1.000000000e+003 0 0 %3 "DC_Supp" 0
TEXT 1 0 376 221 420  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
CODE 0 371 157 443 217  "\r\nENDINIT"
TEXT 1 10 353 195 378  " 0 - ENDINIT executed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 332 195 356  " 1 - Over position trigger 1" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 310 195 334  " 2 - Over position trigger 2" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 287 195 311  " 3 - Over position trigger 3" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 266 195 290  " 4 - Over position trigger 4" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 243 195 267  " 5 - Autorun enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 221 195 245  " 6 - LSP event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 200 195 224  " 7 - LSN event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 178 195 202  " 8 - Capture event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 155 195 179  " 9 - Target reached" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 133 195 157  "10 - I2t warning - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 111 195 135  "11 - I2t warning - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 88 195 112  "12 - In Gear" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 64 195 89  "14 - In Cam" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 42 195 66  "15 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 354 216 378  0 "SRH" "SRH[bit 0]" 0 0 0 0
BIT 1 188 332 216 356  0 "SRH" "SRH[bit 1]" 1 0 0 0
BIT 1 188 309 216 333  0 "SRH" "SRH[bit 2]" 2 0 0 0
BIT 1 188 287 216 311  0 "SRH" "SRH[bit 3]" 3 0 0 0
BIT 1 188 266 216 290  0 "SRH" "SRH[bit 4]" 4 0 0 0
BIT 1 188 244 216 268  0 "SRH" "SRH[bit 5]" 5 0 0 0
BIT 1 188 223 216 247  0 "SRH" "SRH[bit 6]" 6 0 0 0
BIT 1 188 201 216 225  0 "SRH" "SRH[bit 7]" 7 0 0 0
BIT 1 188 179 216 203  0 "SRH" "SRH[bit 8]" 8 0 0 0
BIT 1 188 156 216 180  0 "SRH" "SRH[bit 9]" 9 0 0 0
BIT 1 188 133 216 157  0 "SRH" "SRH[bit 10]" 10 0 0 0
BIT 1 188 110 216 134  0 "SRH" "SRH[bit 11]" 11 0 0 0
BIT 1 188 89 216 113  0 "SRH" "SRH[bit 12]" 12 0 0 0
BIT 1 188 64 216 88  0 "SRH" "SRH[bit 14]" 14 0 0 255
BIT 1 188 42 216 66  0 "SRH" "SRH[bit 15]" 15 0 0 255
TEXT 1 460 386 641 410  " 0 - CANbus error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 364 641 387  " 1 - Short-circuit" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 341 641 365  " 2 - Invalid setup data" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 318 641 342  " 3 - Control error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 180 641 204  " 9 - I2t" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 295 641 319  " 4 - Serial comm. error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 272 641 296  " 5 - Position wraparound" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 249 641 273  " 6 - LSP (limit +) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 226 641 250  " 7 - LSN (limit -) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 203 641 227  " 8 - Over current" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 157 641 181  "10 - Over temp. - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 134 641 158  "11 - Over temp. - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 111 641 135  "12 - Over voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 88 641 112  "13 - Under voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 65 641 89  "14 - Command error" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 633 385 661 409  0 "MER" "MER[bit 0]" 0 0 0 255
BIT 1 633 362 661 386  0 "MER" "MER[bit 1]" 1 0 0 255
BIT 1 633 340 661 364  0 "MER" "MER[bit 2]" 2 0 0 255
BIT 1 633 317 661 341  0 "MER" "MER[bit 3]" 3 0 0 255
BIT 1 633 294 661 318  0 "MER" "MER[bit 4]" 4 0 0 255
BIT 1 633 271 661 295  0 "MER" "MER[bit 5]" 5 0 0 0
BIT 1 633 248 661 272  0 "MER" "MER[bit 6]" 6 0 0 255
BIT 1 633 225 661 249  0 "MER" "MER[bit 7]" 7 0 0 255
BIT 1 633 202 661 226  0 "MER" "MER[bit 8]" 8 0 0 255
BIT 1 633 179 661 203  0 "MER" "MER[bit 9]" 9 0 0 255
BIT 1 633 156 661 180  0 "MER" "MER[bit 10]" 10 0 0 255
BIT 1 633 133 661 157  0 "MER" "MER[bit 11]" 11 0 0 255
BIT 1 633 110 661 134  0 "MER" "MER[bit 12]" 12 0 0 255
BIT 1 633 87 661 111  0 "MER" "MER[bit 13]" 13 0 0 255
TEXT 1 234 133 419 157  " 7 - Homing/CALLS warning" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 110 419 134  " 8 - Homing/CALLS active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 87 419 112  "10 - Motion is completed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 64 419 88  "14 - Event set has occured" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 412 133 440 157  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 412 110 440 134  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 412 87 440 111  0 "SRL" "SRL[bit 10]" 10 0 0 0
TEXT 1 234 41 419 66  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 412 64 440 88  0 "SRL" "SRL[bit 14]" 14 0 0 0
TEXT 1 234 156 371 217  " Registers legend:\r\n       1 - Yes / True\r\n       0 - No / False" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 461 9 662 33  "     MER - Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 460 42 641 66  "15 - Enable input is inactive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 9 437 33  " SRL - Status Register Low" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 412 41 440 65  0 "SRL" "SRL[bit15]" 15 0 0 0
TEXT 1 10 9 215 33  " SRH - Status Register High" "Arial" 11 700 0 0 0 34 0 1 16776960
TEXT 1 221 -2 448 221  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 221 220 448 420  " IMPORTANT! Check SRH.0 ! \r\n Supply voltage and some status\r\n or error bits are set ONLY after \r\n ENDINIT is executed. \r\n If SRH.0 = 0 and you use \r\n EasySetUp, download a setup, \r\n reset the drive and press the \r\n nearby button to send an ENDINIT\r\n command. If you are using \r\n EasyMotion Studio, run a TML \r\n program. This includes execution\r\n of ENDINIT.    " "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 633 65 661 89  0 "MER" "MER[bit 14]" 14 0 0 255
BIT 1 633 42 661 66  0 "MER" "MER[bit 15]" 15 0 0 255
TEXT 1 447 -2 665 420  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 -2 222 383  "" "Courier New" 9 400 0 0 0 49 0 1 14212834

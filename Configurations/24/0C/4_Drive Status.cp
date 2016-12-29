358 4 908 502
TEXT 1 663 438 884 452  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 443 438 664 452  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 438 219 452  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 186 418 213 444  " [V]" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 8 418 123 443  "Supply voltage" "Arial" 10 700 255 0 0 34 0 1 14212834
SHOWVAR 1 54 418 191 450  0 "DC_Supply_Motor" "V " 0.000000000e+000 1.000000000e+003 0 0 %3 "DC_Supp" 0
TEXT 1 0 397 219 452  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 218 438 444 452  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 407 418 436 444  "[�C]" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 225 418 340 443  "Drive temperature" "Arial" 10 700 255 0 0 34 0 1 14212834
SHOWVAR 1 271 418 408 450  0 "AD7" "�C" 0.000000000e+000 1.000000000e+003 0 0 %3 "AD7[�C]" 0
TEXT 1 218 217 444 452  " IMPORTANT! Check SRH.0 ! \r\n Supply voltage and some status\r\n or error bits are set ONLY after \r\n ENDINIT is executed. \r\n If SRH.0 = 0 and you use \r\n EasySetUp, download a setup, \r\n reset the drive and press the \r\n nearby button to send an ENDINIT\r\n command. If you are using \r\n EasyMotion Studio, run a TML \r\n program. This includes execution\r\n of ENDINIT.    " "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 375 192 400  " 0 - ENDINIT executed" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 185 375 213 407  0 "SRH" "SRH[bit 0]" 0 0 0 0
TEXT 1 677 407 858 430  "" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 407 878 430  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 677 384 858 408  " 0 - TML stack overflow" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 362 858 385  " 1 - TML stack underflow" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 339 858 363  " 2 - Homing not available" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 316 858 340  " 3 - Function not available" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 178 858 202  " 9 - UPD ignored for S-curve" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 293 858 317  " 4 - UPD ignored" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 270 858 294  " 5 - Cancelable call ignored" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 247 858 271  " 6 - Software LSP active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 224 858 248  " 7 - Software LSN active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 201 858 225  " 8 - Invalid S-curve profile" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 155 858 179  "10 - Encoder broken wire" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 132 858 156  "11 - Start mode failed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 109 858 133  "12 - TML heartbeat ignored" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 86 858 110  "13 - Self check error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 63 858 87  "14 - ENA hardware error" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 850 383 878 415  0 "DER" "DER[bit 0]" 0 0 0 255
BIT 1 850 360 878 392  0 "DER" "DER[bit 1]" 1 0 0 255
BIT 1 850 338 878 370  0 "DER" "DER[bit 2]" 2 0 0 255
BIT 1 850 315 878 347  0 "DER" "DER[bit 3]" 3 0 0 255
BIT 1 850 292 878 324  0 "DER" "DER[bit 4]" 4 0 0 255
BIT 1 850 269 878 301  0 "DER" "DER[bit 5]" 5 0 0 255
BIT 1 850 246 878 278  0 "DER" "DER[bit 6]" 6 0 0 255
BIT 1 850 223 878 255  0 "DER" "DER[bit 7]" 7 0 0 255
BIT 1 850 200 878 232  0 "DER" "DER[bit 8]" 8 0 0 255
BIT 1 850 177 878 209  0 "DER" "DER[bit 0]" 9 0 0 255
BIT 1 850 154 878 186  0 "DER" "DER[bit 10]" 10 0 0 255
BIT 1 850 131 878 163  0 "DER" "DER[bit 11]" 11 0 0 255
BIT 1 850 108 878 140  0 "DER" "DER[bit 12]" 12 0 0 255
BIT 1 850 85 878 117  0 "DER" "DER[bit 13]" 13 0 0 255
TEXT 1 677 40 858 64  "15 - EEPROM Locked" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 850 63 878 95  0 "DER" "DER[bit 14]" 14 0 0 255
BIT 1 850 40 878 72  0 "DER" "DER[bit 15]" 15 0 0 255
TEXT 1 677 7 878 31  " DER - Detail Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 663 -4 884 452  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 457 407 638 430  "" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 407 658 430  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
CODE 0 368 155 440 215  "\r\nENDINIT"
TEXT 1 7 353 192 377  " 1 - Over position trigger 1" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 330 192 355  " 2 - Over position trigger 2" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 308 192 332  " 3 - Over position trigger 3" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 285 192 310  " 4 - Over position trigger 4" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 264 192 288  " 5 - Autorun enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 242 192 266  " 6 - LSP event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 221 192 245  " 7 - LSN event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 199 192 223  " 8 - Capture event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 177 192 201  " 9 - Target reached" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 154 192 179  "10 - I2t warning - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 131 192 156  "11 - I2t warning - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 108 192 133  "12 - In Gear" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 85 192 110  "13 - In freeze control" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 62 192 87  "14 - In Cam" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 40 192 64  "15 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 185 352 213 384  0 "SRH" "SRH[bit 1]" 1 0 0 0
BIT 1 185 330 213 362  0 "SRH" "SRH[bit 2]" 2 0 0 0
BIT 1 185 307 213 339  0 "SRH" "SRH[bit 3]" 3 0 0 0
BIT 1 185 285 213 317  0 "SRH" "SRH[bit 4]" 4 0 0 0
BIT 1 185 264 213 296  0 "SRH" "SRH[bit 5]" 5 0 0 0
BIT 1 185 242 213 274  0 "SRH" "SRH[bit 6]" 6 0 0 0
BIT 1 185 221 213 253  0 "SRH" "SRH[bit 7]" 7 0 0 0
BIT 1 185 199 213 231  0 "SRH" "SRH[bit 8]" 8 0 0 0
BIT 1 185 177 213 209  0 "SRH" "SRH[bit 9]" 9 0 0 0
BIT 1 185 154 213 186  0 "SRH" "SRH[bit 10]" 10 0 0 0
BIT 1 185 131 213 163  0 "SRH" "SRH[bit 11]" 11 0 0 0
BIT 1 185 108 213 140  0 "SRH" "SRH[bit 12]" 12 0 0 0
BIT 1 185 85 213 117  0 "SRH" "SRH[bit 13]" 13 0 0 0
BIT 1 185 62 213 94  0 "SRH" "SRH[bit 14]" 14 0 0 0
BIT 1 185 40 213 72  0 "SRH" "SRH[bit 15]" 15 0 0 255
TEXT 1 457 384 638 408  " 0 - CANbus error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 362 638 385  " 1 - Short-circuit" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 339 638 363  " 2 - Invalid setup data" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 316 638 340  " 3 - Control error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 178 638 202  " 9 - I2t" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 293 638 317  " 4 - Serial comm. error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 270 638 294  " 5 - Position wraparound" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 247 638 271  " 6 - LSP (limit +) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 224 638 248  " 7 - LSN (limit -) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 201 638 225  " 8 - Over current" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 155 638 179  "10 - Over temp. - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 132 638 156  "11 - Over temp. - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 109 638 133  "12 - Over voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 86 638 110  "13 - Under voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 63 638 87  "14 - Command error" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 630 383 658 415  0 "MER" "MER[bit 0]" 0 0 0 255
BIT 1 630 360 658 392  0 "MER" "MER[bit 1]" 1 0 0 255
BIT 1 630 338 658 370  0 "MER" "MER[bit 2]" 2 0 0 255
BIT 1 630 315 658 347  0 "MER" "MER[bit 3]" 3 0 0 255
BIT 1 630 292 658 324  0 "MER" "MER[bit 4]" 4 0 0 255
BIT 1 630 269 658 301  0 "MER" "MER[bit 5]" 5 0 0 0
BIT 1 630 246 658 278  0 "MER" "MER[bit 6]" 6 0 0 255
BIT 1 630 223 658 255  0 "MER" "MER[bit 7]" 7 0 0 255
BIT 1 630 200 658 232  0 "MER" "MER[bit 8]" 8 0 0 255
BIT 1 630 177 658 209  0 "MER" "MER[bit 9]" 9 0 0 255
BIT 1 630 154 658 186  0 "MER" "MER[bit 10]" 10 0 0 255
BIT 1 630 131 658 163  0 "MER" "MER[bit 11]" 11 0 0 255
BIT 1 630 108 658 140  0 "MER" "MER[bit 12]" 12 0 0 255
BIT 1 630 85 658 117  0 "MER" "MER[bit 13]" 13 0 0 255
TEXT 1 231 131 416 155  " 7 - Homing/CALLS warning" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 108 416 132  " 8 - Homing/CALLS active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 85 416 110  "10 - Motion is completed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 62 416 86  "14 - Event set has occured" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 409 131 437 163  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 409 108 437 140  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 409 85 437 117  0 "SRL" "SRL[bit 10]" 10 0 0 0
TEXT 1 231 39 416 64  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 409 62 437 94  0 "SRL" "SRL[bit 14]" 14 0 0 0
TEXT 1 231 154 368 215  " Registers legend:\r\n       1 - Yes / True\r\n       0 - No / False" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 458 7 659 31  "    MER - Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 457 40 638 64  "15 - Enable is inactive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 7 434 31  " SRL - Status Register Low" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 409 39 437 71  0 "SRL" "SRL[bit15]" 15 0 0 0
TEXT 1 7 7 212 31  " SRH - Status Register High" "Arial" 11 700 0 0 0 34 0 1 16776960
TEXT 1 218 -4 444 219  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
BIT 1 630 63 658 95  0 "MER" "MER[bit 14]" 14 0 0 255
BIT 1 630 40 658 72  0 "MER" "MER[bit 15]" 15 0 0 255
TEXT 1 443 -4 664 452  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 -4 219 414  "" "Courier New" 9 400 0 0 0 49 0 1 14212834

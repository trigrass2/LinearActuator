305 4 688 487
TEXT 1 457 411 638 434  "   * or Position wraparound" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 411 658 434  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 -3 420 219 441  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 7 396 116 421  "Supply voltage" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 183 396 212 422  " [V]" "Arial" 10 700 255 0 0 34 0 1 14212834
SHOWVAR 1 47 396 184 420  0 "DC_Supply_Motor" "V " 0.000000000e+000 1.000000000e+003 0 0 %3 "DC_Supp" 0
TEXT 1 -3 379 219 422  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
CODE 0 368 159 440 219  "\r\nENDINIT"
TEXT 1 7 355 192 380  " 0 - ENDINIT executed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 334 192 358  " 1 - Over position trigger 1" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 312 192 336  " 2 - Over position trigger 2" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 289 192 313  " 3 - Over position trigger 3" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 268 192 292  " 4 - Over position trigger 4" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 245 192 269  " 5 - Autorun enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 223 192 247  " 6 - LSP event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 202 192 226  " 7 - LSN event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 180 192 204  " 8 - Capture event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 157 192 181  " 9 - Target reached" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 135 192 159  "10 - I2t warning - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 113 192 137  "11 - I2t warning - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 90 192 114  "12 - In Gear" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 66 192 91  "14 - In Cam" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 44 192 68  "15 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 185 356 213 380  0 "SRH" "SRH[bit 0]" 0 0 0 0
BIT 1 185 334 213 358  0 "SRH" "SRH[bit 1]" 1 0 0 0
BIT 1 185 311 213 335  0 "SRH" "SRH[bit 2]" 2 0 0 0
BIT 1 185 289 213 313  0 "SRH" "SRH[bit 3]" 3 0 0 0
BIT 1 185 268 213 292  0 "SRH" "SRH[bit 4]" 4 0 0 0
BIT 1 185 246 213 270  0 "SRH" "SRH[bit 5]" 5 0 0 0
BIT 1 185 225 213 249  0 "SRH" "SRH[bit 6]" 6 0 0 0
BIT 1 185 203 213 227  0 "SRH" "SRH[bit 7]" 7 0 0 0
BIT 1 185 181 213 205  0 "SRH" "SRH[bit 8]" 8 0 0 0
BIT 1 185 158 213 182  0 "SRH" "SRH[bit 9]" 9 0 0 0
BIT 1 185 135 213 159  0 "SRH" "SRH[bit 10]" 10 0 0 0
BIT 1 185 112 213 136  0 "SRH" "SRH[bit 11]" 11 0 0 0
BIT 1 185 91 213 115  0 "SRH" "SRH[bit 12]" 12 0 0 0
BIT 1 185 66 213 90  0 "SRH" "SRH[bit 14]" 14 0 0 255
BIT 1 185 44 213 68  0 "SRH" "SRH[bit 15]" 15 0 0 255
TEXT 1 457 388 638 412  " 0 - CANbus error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 366 638 389  " 1 - Short-circuit" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 343 638 367  " 2 - Invalid setup data" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 320 638 344  " 3 - Control error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 182 638 206  " 9 - I2t" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 297 638 321  " 4 - Serial comm. error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 274 638 298  " 5 - Hall sensor missing *" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 251 638 275  " 6 - LSP (limit +) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 228 638 252  " 7 - LSN (limit -) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 205 638 229  " 8 - Over current" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 159 638 183  "10 - Over temp. - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 136 638 160  "11 - Over temp. - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 113 638 137  "12 - Over voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 90 638 114  "13 - Under voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 67 638 91  "14 - Command error" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 630 387 658 411  0 "MER" "MER[bit 0]" 0 0 0 255
BIT 1 630 364 658 388  0 "MER" "MER[bit 1]" 1 0 0 255
BIT 1 630 342 658 366  0 "MER" "MER[bit 2]" 2 0 0 255
BIT 1 630 319 658 343  0 "MER" "MER[bit 3]" 3 0 0 255
BIT 1 630 296 658 320  0 "MER" "MER[bit 4]" 4 0 0 255
BIT 1 630 273 658 297  0 "MER" "MER[bit 5]" 5 0 0 0
BIT 1 630 250 658 274  0 "MER" "MER[bit 6]" 6 0 0 255
BIT 1 630 227 658 251  0 "MER" "MER[bit 7]" 7 0 0 255
BIT 1 630 204 658 228  0 "MER" "MER[bit 8]" 8 0 0 255
BIT 1 630 181 658 205  0 "MER" "MER[bit 9]" 9 0 0 255
BIT 1 630 158 658 182  0 "MER" "MER[bit 10]" 10 0 0 255
BIT 1 630 135 658 159  0 "MER" "MER[bit 11]" 11 0 0 255
BIT 1 630 112 658 136  0 "MER" "MER[bit 12]" 12 0 0 255
BIT 1 630 89 658 113  0 "MER" "MER[bit 13]" 13 0 0 255
TEXT 1 231 135 416 159  " 7 - Homing/CALLS warning" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 112 416 136  " 8 - Homing/CALLS active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 89 416 114  "10 - Motion is completed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 66 416 90  "14 - Event set has occured" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 409 135 437 159  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 409 112 437 136  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 409 89 437 113  0 "SRL" "SRL[bit 10]" 10 0 0 0
TEXT 1 231 43 416 68  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 409 66 437 90  0 "SRL" "SRL[bit 14]" 14 0 0 0
TEXT 1 231 158 368 219  " Registers legend:\r\n       1 - Yes / True\r\n       0 - No / False" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 458 11 659 35  "     MER - Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 457 44 638 68  "15 - Enable input is inactive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 11 434 35  " SRL - Status Register Low" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 409 43 437 67  0 "SRL" "SRL[bit15]" 15 0 0 0
TEXT 1 7 11 212 35  " SRH - Status Register High" "Arial" 11 700 0 0 0 34 0 1 16776960
TEXT 1 218 0 445 223  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 218 222 445 441  " IMPORTANT! Check SRH.0 ! \r\n Supply voltage and some status\r\n or error bits are set ONLY after \r\n ENDINIT is executed. \r\n If SRH.0 = 0 and you use \r\n EasySetUp, download a setup, \r\n reset the drive and press the \r\n nearby button to send an ENDINIT\r\n command. If you are using \r\n EasyMotion Studio, run a TML \r\n program. This includes execution\r\n of ENDINIT.    " "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 630 67 658 91  0 "MER" "MER[bit 14]" 14 0 0 255
BIT 1 630 44 658 68  0 "MER" "MER[bit 15]" 15 0 0 255
TEXT 1 443 0 664 441  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 -3 0 219 385  "" "Courier New" 9 400 0 0 0 49 0 1 14212834

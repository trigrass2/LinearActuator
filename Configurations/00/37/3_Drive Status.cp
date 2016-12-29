305 4 691 465
TEXT 1 10 355 193 380  " 0 - ENDINIT executed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 334 193 358  " 1 - Over position trigger 1" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 312 193 336  " 2 - Over position trigger 2" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 289 193 313  " 3 - Over position trigger 3" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 268 193 292  " 4 - Over position trigger 4" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 356 214 380  0 "SRH" "SRH[bit 0]" 0 0 0 0
BIT 1 188 334 214 358  0 "SRH" "SRH[bit 1]" 1 0 0 0
BIT 1 188 311 214 335  0 "SRH" "SRH[bit 2]" 2 0 0 0
BIT 1 188 289 214 313  0 "SRH" "SRH[bit 3]" 3 0 0 0
BIT 1 188 268 214 292  0 "SRH" "SRH[bit 4]" 4 0 0 0
TEXT 1 10 245 193 269  " 5 - Autorun enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 246 214 270  0 "SRH" "SRH[bit 5]" 5 0 0 0
TEXT 1 10 66 193 91  "14 - In Cam" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 67 214 91  0 "SRH" "SRH[bit 14]" 14 0 0 255
TEXT 1 234 135 417 159  " 7 - Homing/CALLS warning" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 112 417 136  " 8 - Homing/CALLS active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 90 417 114  "10 - Motion is completed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 67 417 91  "14 - Event set has occured" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 412 135 438 159  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 412 112 438 136  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 412 89 438 113  0 "SRL" "SRL[bit 10]" 10 0 0 0
TEXT 1 234 43 417 68  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 412 66 438 90  0 "SRL" "SRL[bit 14]" 14 0 0 0
TEXT 1 10 44 193 68  "15 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 90 193 114  "12 - In Gear" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 89 214 113  0 "SRH" "SRH[bit 12]" 12 0 0 0
TEXT 1 460 136 643 160  "11 - Over temp. - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 159 643 183  "10 - Over temp. - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 67 643 91  "14 - Command error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 388 643 412  " 0 - CANbus error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 234 162 371 219  " Registers legend:\r\n       1 - Yes / True\r\n       0 - No / False" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 181 391 213 415  " [V]" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 11 391 114 415  "Supply voltage" "Arial" 10 700 255 0 0 34 0 1 14212834
SHOWVAR 1 46 391 183 415  0 "DC_Supply_Motor" "V " 0.000000000e+000 1.000000000e+003 0 0 "DC_Supp" 0
BIT 1 638 158 664 182  0 "MER" "MER[bit 10]" 10 0 0 255
TEXT 1 460 366 643 389  " 1 - Short-circuit" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 343 643 367  " 2 - Invalid setup data" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 320 643 344  " 3 - Control error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 297 643 321  " 4 - Serial comm. error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 274 643 298  " 5 - Position wraparound" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 251 643 275  " 6 - LSP (limit +) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 228 643 252  " 7 - LSN (limit -) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 182 643 206  " 9 - I2t" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 205 643 229  " 8 - Over current" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 113 643 137  "12 - Over voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 460 90 643 114  "13 - Under voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 638 388 664 412  0 "MER" "MER[bit 0]" 0 0 0 255
BIT 1 638 135 664 159  0 "MER" "MER[bit 11]" 11 0 0 255
BIT 1 638 273 664 297  0 "MER" "MER[bit 5]" 5 0 0 0
BIT 1 638 365 664 389  0 "MER" "MER[bit 1]" 1 0 0 255
BIT 1 638 342 664 366  0 "MER" "MER[bit 2]" 2 0 0 255
BIT 1 638 319 664 343  0 "MER" "MER[bit 3]" 3 0 0 255
BIT 1 638 296 664 320  0 "MER" "MER[bit 4]" 4 0 0 255
BIT 1 638 250 664 274  0 "MER" "MER[bit 6]" 6 0 0 255
BIT 1 638 89 664 113  0 "MER" "MER[bit 13]" 13 0 0 255
BIT 1 638 227 664 251  0 "MER" "MER[bit 7]" 7 0 0 255
BIT 1 638 181 664 205  0 "MER" "MER[bit 9]" 9 0 0 255
BIT 1 638 204 664 228  0 "MER" "MER[bit 8]" 8 0 0 255
BIT 1 638 112 664 136  0 "MER" "MER[bit 12]" 12 0 0 255
TEXT 1 461 11 662 35  "     MER - Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 460 43 643 68  "15 - Enable input is inactive" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 638 43 664 67  0 "MER" "MER[bit 15]" 15 0 0 255
TEXT 1 234 11 437 35  " SRL - Status Register Low" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 412 43 438 67  0 "SRL" "SRL[bit15]" 15 0 0 0
TEXT 1 10 223 193 247  " 6 - LSP event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 202 193 226  " 7 - LSN event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 180 193 204  " 8 - Capture event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 157 193 181  " 9 - Target reached" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 135 193 159  "10 - I2t warning - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 135 214 159  0 "SRH" "SRH[bit 10]" 10 0 0 0
BIT 1 188 225 214 249  0 "SRH" "SRH[bit 6]" 6 0 0 0
BIT 1 188 203 214 227  0 "SRH" "SRH[bit 7]" 7 0 0 0
BIT 1 188 181 214 205  0 "SRH" "SRH[bit 8]" 8 0 0 0
BIT 1 188 158 214 182  0 "SRH" "SRH[bit 9]" 9 0 0 0
TEXT 1 10 113 193 137  "11 - I2t warning - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 112 214 136  0 "SRH" "SRH[bit 11]" 11 0 0 0
TEXT 1 10 11 215 35  " SRH - Status Register High" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 188 44 214 68  0 "SRH" "SRH[bit 15]" 15 0 0 255
TEXT 1 0 2 222 385  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
BIT 1 638 67 664 91  0 "MER" "MER[bit 14]" 14 0 0 255
TEXT 1 447 2 675 422  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
CODE 0 374 162 438 219  "\r\nENDINIT"
TEXT 1 221 2 448 225  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 384 222 422  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 221 222 448 422  " IMPORTANT! Check SRH.0 ! \r\n Supply voltage and some status\r\n or error bits are set ONLY after \r\n ENDINIT is executed. \r\n If SRH.0 = 0 and you use \r\n EasySetUp, download a setup, \r\n reset the drive and press the \r\n nearby button to send an ENDINIT\r\n command. If you are using \r\n EasyMotion Studio, run a TML \r\n program. This includes execution\r\n of ENDINIT.    " "Arial" 10 700 0 0 0 34 0 1 14212834

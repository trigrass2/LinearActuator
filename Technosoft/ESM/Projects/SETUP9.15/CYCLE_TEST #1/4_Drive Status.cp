358 4 908 502
TEXT 1 663 449 884 463  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 443 449 664 463  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 449 219 463  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 186 429 213 455  " [V]" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 8 429 123 454  "Supply voltage" "Arial" 10 700 255 0 0 34 0 1 14212834
SHOWVAR 1 54 429 191 461  0 "DC_Supply_Motor" "V " 0.000000000e+000 1.000000000e+003 0 0 %3 "DC_Supp" 0
TEXT 1 0 408 219 463  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 218 449 444 463  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 407 429 436 455  "[°C]" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 225 429 340 454  "Drive temperature" "Arial" 10 700 255 0 0 34 0 1 14212834
SHOWVAR 1 271 429 408 461  0 "AD7" "°C" 0.000000000e+000 1.000000000e+003 0 0 %3 "AD7[°C]" 0
TEXT 1 218 228 444 463  " IMPORTANT! Check SRH.0 ! \r\n Supply voltage and some status\r\n or error bits are set ONLY after \r\n ENDINIT is executed. \r\n If SRH.0 = 0 and you use \r\n EasySetUp, download a setup, \r\n reset the drive and press the \r\n nearby button to send an ENDINIT\r\n command. If you are using \r\n EasyMotion Studio, run a TML \r\n program. This includes execution\r\n of ENDINIT.    " "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 386 192 411  " 0 - ENDINIT executed" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 185 386 213 418  0 "SRH" "SRH[bit 0]" 0 0 0 0
TEXT 1 677 418 858 441  "" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 418 878 441  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 677 395 858 419  " 0 - TML stack overflow" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 373 858 396  " 1 - TML stack underflow" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 350 858 374  " 2 - Homing not available" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 327 858 351  " 3 - Function not available" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 189 858 213  " 9 - UPD ignored for S-curve" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 304 858 328  " 4 - UPD ignored" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 281 858 305  " 5 - Cancelable call ignored" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 258 858 282  " 6 - Software LSP active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 235 858 259  " 7 - Software LSN active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 212 858 236  " 8 - Invalid S-curve profile" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 166 858 190  "10 - Encoder broken wire" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 143 858 167  "11 - Start mode failed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 120 858 144  "12 - TML heartbeat ignored" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 97 858 121  "13 - Self check error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 677 74 858 98  "14 - ENA hardware error" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 850 394 878 426  0 "DER" "DER[bit 0]" 0 0 0 255
BIT 1 850 371 878 403  0 "DER" "DER[bit 1]" 1 0 0 255
BIT 1 850 349 878 381  0 "DER" "DER[bit 2]" 2 0 0 255
BIT 1 850 326 878 358  0 "DER" "DER[bit 3]" 3 0 0 255
BIT 1 850 303 878 335  0 "DER" "DER[bit 4]" 4 0 0 255
BIT 1 850 280 878 312  0 "DER" "DER[bit 5]" 5 0 0 255
BIT 1 850 257 878 289  0 "DER" "DER[bit 6]" 6 0 0 255
BIT 1 850 234 878 266  0 "DER" "DER[bit 7]" 7 0 0 255
BIT 1 850 211 878 243  0 "DER" "DER[bit 8]" 8 0 0 255
BIT 1 850 188 878 220  0 "DER" "DER[bit 0]" 9 0 0 255
BIT 1 850 165 878 197  0 "DER" "DER[bit 10]" 10 0 0 255
BIT 1 850 142 878 174  0 "DER" "DER[bit 11]" 11 0 0 255
BIT 1 850 119 878 151  0 "DER" "DER[bit 12]" 12 0 0 255
BIT 1 850 96 878 128  0 "DER" "DER[bit 13]" 13 0 0 255
TEXT 1 677 51 858 75  "15 - Reserved" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 850 74 878 106  0 "DER" "DER[bit 14]" 14 0 0 255
BIT 1 850 51 878 83  0 "DER" "DER[bit 15]" 15 0 0 255
TEXT 1 677 18 878 42  " DER - Detail Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 663 7 884 463  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 457 418 638 441  "   * or Position wraparound" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 418 658 441  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
CODE 0 368 166 440 226  "\r\nENDINIT"
TEXT 1 7 364 192 388  " 1 - Over position trigger 1" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 341 192 366  " 2 - Over position trigger 2" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 319 192 343  " 3 - Over position trigger 3" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 296 192 321  " 4 - Over position trigger 4" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 275 192 299  " 5 - Autorun enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 253 192 277  " 6 - LSP event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 232 192 256  " 7 - LSN event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 210 192 234  " 8 - Capture event/interrupt" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 188 192 212  " 9 - Target reached" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 165 192 190  "10 - I2t warning - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 142 192 167  "11 - I2t warning - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 119 192 144  "12 - In Gear" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 96 192 121  "13 - In freeze control" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 73 192 98  "14 - In Cam" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 7 51 192 75  "15 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 185 363 213 395  0 "SRH" "SRH[bit 1]" 1 0 0 0
BIT 1 185 341 213 373  0 "SRH" "SRH[bit 2]" 2 0 0 0
BIT 1 185 318 213 350  0 "SRH" "SRH[bit 3]" 3 0 0 0
BIT 1 185 296 213 328  0 "SRH" "SRH[bit 4]" 4 0 0 0
BIT 1 185 275 213 307  0 "SRH" "SRH[bit 5]" 5 0 0 0
BIT 1 185 253 213 285  0 "SRH" "SRH[bit 6]" 6 0 0 0
BIT 1 185 232 213 264  0 "SRH" "SRH[bit 7]" 7 0 0 0
BIT 1 185 210 213 242  0 "SRH" "SRH[bit 8]" 8 0 0 0
BIT 1 185 188 213 220  0 "SRH" "SRH[bit 9]" 9 0 0 0
BIT 1 185 165 213 197  0 "SRH" "SRH[bit 10]" 10 0 0 0
BIT 1 185 142 213 174  0 "SRH" "SRH[bit 11]" 11 0 0 0
BIT 1 185 119 213 151  0 "SRH" "SRH[bit 12]" 12 0 0 0
BIT 1 185 96 213 128  0 "SRH" "SRH[bit 13]" 13 0 0 0
BIT 1 185 73 213 105  0 "SRH" "SRH[bit 14]" 14 0 0 0
BIT 1 185 51 213 83  0 "SRH" "SRH[bit 15]" 15 0 0 255
TEXT 1 457 395 638 419  " 0 - CANbus error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 373 638 396  " 1 - Short-circuit" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 350 638 374  " 2 - Invalid setup data" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 327 638 351  " 3 - Control error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 189 638 213  " 9 - I2t" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 304 638 328  " 4 - Serial comm. error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 281 638 305  " 5 - Hall sensor missing *" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 258 638 282  " 6 - LSP (limit +) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 235 638 259  " 7 - LSN (limit -) active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 212 638 236  " 8 - Over current" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 166 638 190  "10 - Over temp. - Motor" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 143 638 167  "11 - Over temp. - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 120 638 144  "12 - Over voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 97 638 121  "13 - Under voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 457 74 638 98  "14 - Command error" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 630 394 658 426  0 "MER" "MER[bit 0]" 0 0 0 255
BIT 1 630 371 658 403  0 "MER" "MER[bit 1]" 1 0 0 255
BIT 1 630 349 658 381  0 "MER" "MER[bit 2]" 2 0 0 255
BIT 1 630 326 658 358  0 "MER" "MER[bit 3]" 3 0 0 255
BIT 1 630 303 658 335  0 "MER" "MER[bit 4]" 4 0 0 255
BIT 1 630 280 658 312  0 "MER" "MER[bit 5]" 5 0 0 0
BIT 1 630 257 658 289  0 "MER" "MER[bit 6]" 6 0 0 255
BIT 1 630 234 658 266  0 "MER" "MER[bit 7]" 7 0 0 255
BIT 1 630 211 658 243  0 "MER" "MER[bit 8]" 8 0 0 255
BIT 1 630 188 658 220  0 "MER" "MER[bit 9]" 9 0 0 255
BIT 1 630 165 658 197  0 "MER" "MER[bit 10]" 10 0 0 255
BIT 1 630 142 658 174  0 "MER" "MER[bit 11]" 11 0 0 255
BIT 1 630 119 658 151  0 "MER" "MER[bit 12]" 12 0 0 255
BIT 1 630 96 658 128  0 "MER" "MER[bit 13]" 13 0 0 255
TEXT 1 231 142 416 166  " 7 - Homing/CALLS warning" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 119 416 143  " 8 - Homing/CALLS active" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 96 416 121  "10 - Motion is completed" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 73 416 97  "14 - Event set has occured" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 409 142 437 174  0 "SRL" "SRL[bit 7]" 7 0 0 0
BIT 1 409 119 437 151  0 "SRL" "SRL[bit 8]" 8 0 0 0
BIT 1 409 96 437 128  0 "SRL" "SRL[bit 10]" 10 0 0 0
TEXT 1 231 50 416 75  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 409 73 437 105  0 "SRL" "SRL[bit 14]" 14 0 0 0
TEXT 1 231 165 368 226  " Registers legend:\r\n       1 - Yes / True\r\n       0 - No / False" "Arial" 10 700 255 0 0 34 0 1 14212834
TEXT 1 458 18 659 42  "    MER - Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 457 51 638 75  "15 - Enable is inactive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 231 18 434 42  " SRL - Status Register Low" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 409 50 437 82  0 "SRL" "SRL[bit15]" 15 0 0 0
TEXT 1 7 18 212 42  " SRH - Status Register High" "Arial" 11 700 0 0 0 34 0 1 16776960
TEXT 1 218 7 444 230  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
BIT 1 630 74 658 106  0 "MER" "MER[bit 14]" 14 0 0 255
BIT 1 630 51 658 83  0 "MER" "MER[bit 15]" 15 0 0 255
TEXT 1 443 7 664 463  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 7 219 425  "" "Courier New" 9 400 0 0 0 49 0 1 14212834

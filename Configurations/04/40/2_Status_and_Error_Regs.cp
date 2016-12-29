727 2 480 477
TEXT 1 0 288 223 440  " IMPORTANT! Check SRH.0 ! \r\n Analog inputs and some status\r\n or error bits are set ONLY after \r\n motor initialization is completed\r\n (SRH.0 = 1). \r\n If SRH.0 = 0 download a setup\r\n and reset the drive.\r\n Bits marked \"reserved\" must be\r\n ignorred." "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 409 428 433  "   * or Position wraparound" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 94 193 118  " 0 - ENDINIT executed" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 94 214 118  0 "SRH" "SRH[bit 0]" 0 0 65535 0
TEXT 1 10 68 193 92  " 5 - Autorun enabled" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 188 68 214 92  0 "SRH" "SRH[bit 5]" 5 0 0 0
TEXT 1 10 168 193 192  "15 - Axis is ON" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 10 42 193 66  "15 - Fault" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 133 428 157  "11 - Over temp. - Drive" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 156 428 180  "10 - reserved" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 64 428 88  "14 - reserved" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 386 428 410  " 0 - reserved" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 40 217 177 274  " Registers legend:\r\n       1 - Yes / True\r\n       0 - No / False" "Arial" 10 700 255 0 0 34 0 1 14212834
BIT 1 423 156 449 180  0 "MER" "MER[bit 10]" 10 0 0 255
TEXT 1 245 363 428 387  " 1 - Short-circuit" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 340 428 364  " 2 - Invalid setup data" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 317 428 341  " 3 - Control error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 294 428 318  " 4 - Serial comm. error" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 271 428 295  " 5 - Hall sensor missing *" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 248 428 272  " 6 - reserved" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 225 428 249  " 7 - reserved" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 179 428 203  " 9 - I2t" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 202 428 226  " 8 - Over current" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 110 428 134  "12 - Over voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
TEXT 1 245 87 428 111  "13 - Under voltage" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 423 386 449 410  0 "MER" "MER[bit 0]" 0 0 0 255
BIT 1 423 133 449 157  0 "MER" "MER[bit 11]" 11 0 0 255
BIT 1 423 271 449 295  0 "MER" "MER[bit 5]" 5 0 0 65535
BIT 1 423 363 449 387  0 "MER" "MER[bit 1]" 1 0 0 255
BIT 1 423 340 449 364  0 "MER" "MER[bit 2]" 2 0 0 255
BIT 1 423 317 449 341  0 "MER" "MER[bit 3]" 3 0 0 255
BIT 1 423 294 449 318  0 "MER" "MER[bit 4]" 4 0 0 255
BIT 1 423 248 449 272  0 "MER" "MER[bit 6]" 6 0 0 255
BIT 1 423 87 449 111  0 "MER" "MER[bit 13]" 13 0 0 255
BIT 1 423 225 449 249  0 "MER" "MER[bit 7]" 7 0 0 255
BIT 1 423 179 449 203  0 "MER" "MER[bit 9]" 9 0 0 255
BIT 1 423 202 449 226  0 "MER" "MER[bit 8]" 8 0 0 255
BIT 1 423 110 449 134  0 "MER" "MER[bit 12]" 12 0 0 255
TEXT 1 246 9 447 33  "     MER - Error Register" "Arial" 11 700 0 0 0 34 0 1 8421631
TEXT 1 245 41 428 65  "15 - Enable input is inactive" "Arial" 10 700 0 0 0 34 0 1 14212834
BIT 1 423 41 449 65  0 "MER" "MER[bit 15]" 15 0 0 255
TEXT 1 11 136 214 160  " SRL - Status Register Low" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 188 168 214 192  0 "SRL" "SRL[bit15]" 15 0 65535 0
TEXT 1 10 9 215 33  " SRH - Status Register High" "Arial" 11 700 0 0 0 34 0 1 16776960
BIT 1 188 42 214 66  0 "SRH" "SRH[bit 15]" 15 0 0 255
TEXT 1 0 0 223 128  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
BIT 1 423 64 449 88  0 "MER" "MER[bit 14]" 14 0 0 255
TEXT 1 232 0 460 440  "" "Courier New" 9 400 0 0 0 49 0 1 14212834
TEXT 1 0 129 223 204  "" "Courier New" 9 400 0 0 0 49 0 1 14212834

88 2 500 340
TEXT 1 448 233 482 253  "[rpm]" "Arial" 8 700 0 0 0 34 16777215 1 33023
TEXT 1 444 86 482 105  "   [A]" "Arial" 8 700 0 0 0 34 16777215 1 8421440
TEXT 1 395 149 478 169  " Speed Cmd" "Arial" 8 700 0 0 0 34 16777215 1 33023
SLIDER_VERT 1 388 147 484 297  0 "CSPD" "rpm" -3.000000000e+003 3.000000000e+003 0 %3 "" 1 0
TEXT 1 391 0 481 20  " Motor Current" "Arial" 8 700 0 0 0 34 16777215 1 8421440
GAUGE_VERT 1 388 0 484 149  0 "Motor_Current" "A" -3.200000000e+000 3.200000000e+000 0 0 %3 "Motor_Current[A]" 8421440 0
TEXT 1 312 165 385 211  " Reference\r\n Speed\r\n [rpm]" "Arial" 8 700 0 0 0 34 16777215 1 33023
TEXT 1 6 165 79 211  " Load\r\n Speed\r\n [rpm]" "Arial" 8 700 0 0 0 34 16777215 1 16711935
TEXT 1 312 18 385 64  " Reference\r\n Position\r\n [rot]" "Arial" 8 700 0 0 0 34 16777215 1 44544
TEXT 1 6 18 79 64  " Load\r\n Position\r\n [rot]" "Arial" 8 700 0 0 0 34 16777215 1 8388833
DOUBLE_SCOPE 1 2 147 389 297  0 "Load_Speed" "rpm" -3.000000000e+003 3.000000000e+003 0 0 %3 0 "Target_Speed" "rpm" -3.000000000e+003 3.000000000e+003 0 0 %3 "" 16711935 33023 0
DOUBLE_SCOPE 1 2 0 389 150  0 "Load_Position" "rot" -1.500000000e+001 1.500000000e+001 0 0 %3 0 "Target_Position" "rot" -1.500000000e+001 1.500000000e+001 0 0 %3 "" 8388863 44544 0

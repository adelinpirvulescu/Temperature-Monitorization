`define STIMULUS_WIDTH      292
`define TEMP_WIDTH            8
`define SENSORS_NR            5

module generate_stimuls(temp_list, en_list);
    
    output reg [(`SENSORS_NR * `TEMP_WIDTH * `STIMULUS_WIDTH) - 1 : 0] temp_list;
    output reg [(`SENSORS_NR * `STIMULUS_WIDTH) - 1 : 0] en_list;

    reg [`SENSORS_NR * `TEMP_WIDTH - 1 : 0] temp[`STIMULUS_WIDTH - 1 : 0];
    reg [`SENSORS_NR - 1 : 0] en[`STIMULUS_WIDTH - 1 : 0];

    integer i;

    initial begin
        temp[0] = 40'b00011001_00010110_00010010_00001111_00010010;
        en[0] = 5'b00111;
        temp[1] = 40'b00001111_00011010_00010011_00011011_00010000;
        en[1] = 5'b10100;
        temp[2] = 40'b00010011_00001111_00010001_00010010_00010110;
        en[2] = 5'b11000;
        temp[3] = 40'b00011110_00010011_00010010_00010000_00010101;
        en[3] = 5'b00110;
        temp[4] = 40'b00010010_00011000_00010010_00010010_00010000;
        en[4] = 5'b10001;
        temp[5] = 40'b00011110_00011000_00010011_00010000_00001111;
        en[5] = 5'b00110;
        temp[6] = 40'b00010110_00010000_00011011_00010000_00010011;
        en[6] = 5'b00011;
        temp[7] = 40'b00011011_00001111_00010011_00011110_00010010;
        en[7] = 5'b01101;
        temp[8] = 40'b00010011_00010010_00011010_00010001_00010001;
        en[8] = 5'b01010;
        temp[9] = 40'b00010100_00001111_00010000_00010010_00011001;
        en[9] = 5'b11000;
        temp[10] = 40'b00001111_00010111_00010010_00010001_00010100;
        en[10] = 5'b10101;
        temp[11] = 40'b00010000_00010000_00010110_00001111_00011110;
        en[11] = 5'b01110;
        temp[12] = 40'b00010100_00010001_00001111_00010010_00011000;
        en[12] = 5'b10110;
        temp[13] = 40'b00010001_00010110_00010000_00001111_00010101;
        en[13] = 5'b10011;
        temp[14] = 40'b00010000_00011110_00010000_00001111_00010111;
        en[14] = 5'b10111;
        temp[15] = 40'b00001111_00010101_00011000_00001111_00010001;
        en[15] = 5'b10111;
        temp[16] = 40'b00010011_00001111_00010100_00010001_00011110;
        en[16] = 5'b11110;
        temp[17] = 40'b00010111_00001111_00011001_00001111_00010000;
        en[17] = 5'b01111;
        temp[18] = 40'b00010000_00010110_00010010_00010010_00001111;
        en[18] = 5'b11011;
        temp[19] = 40'b00010001_00010000_00011001_00010110_00010000;
        en[19] = 5'b11011;
        temp[20] = 40'b00010010_00011001_00010000_00001111_00001111;
        en[20] = 5'b11111;
        temp[21] = 40'b00001111_00010010_00010000_00010110_00010010;
        en[21] = 5'b11111;
        temp[22] = 40'b00001111_00010000_00011000_00001111_00010011;
        en[22] = 5'b11111;
        temp[23] = 40'b00010000_00001111_00010000_00001111_00011011;
        en[23] = 5'b11111;
        temp[24] = 40'b00010100_00010001_00010010_00010001_00010001;
        en[24] = 5'b11111;
        temp[25] = 40'b00010001_00010011_00011001_00011011_00001111;
        en[25] = 5'b11000;
        temp[26] = 40'b00001111_00010101_00011000_00011101_00010011;
        en[26] = 5'b11000;
        temp[27] = 40'b00011011_00010101_00001111_00011011_00010110;
        en[27] = 5'b01100;
        temp[28] = 40'b00011110_00010001_00010001_00011101_00010011;
        en[28] = 5'b00101;
        temp[29] = 40'b00010010_00001111_00011110_00011000_00010101;
        en[29] = 5'b01001;
        temp[30] = 40'b00010011_00011010_00010100_00010001_00010000;
        en[30] = 5'b10101;
        temp[31] = 40'b00010100_00010110_00010001_00010101_00010100;
        en[31] = 5'b00101;
        temp[32] = 40'b00011011_00011101_00010110_00011011_00001111;
        en[32] = 5'b00101;
        temp[33] = 40'b00010000_00010000_00010010_00010111_00010011;
        en[33] = 5'b00101;
        temp[34] = 40'b00011110_00010000_00010101_00011101_00010100;
        en[34] = 5'b01100;
        temp[35] = 40'b00010001_00010001_00010110_00010000_00011011;
        en[35] = 5'b11100;
        temp[36] = 40'b00001111_00010101_00010111_00001111_00010000;
        en[36] = 5'b11110;
        temp[37] = 40'b00010010_00010101_00010100_00001111_00010111;
        en[37] = 5'b10011;
        temp[38] = 40'b00010011_00011100_00010000_00010010_00010011;
        en[38] = 5'b10011;
        temp[39] = 40'b00011010_00010111_00010010_00001111_00010001;
        en[39] = 5'b01110;
        temp[40] = 40'b00011000_00010111_00010100_00001111_00010001;
        en[40] = 5'b01111;
        temp[41] = 40'b00001111_00010110_00010000_00010001_00010100;
        en[41] = 5'b01111;
        temp[42] = 40'b00010010_00010101_00010101_00010000_00010100;
        en[42] = 5'b10111;
        temp[43] = 40'b00010101_00010001_00010001_00010000_00010110;
        en[43] = 5'b11111;
        temp[44] = 40'b00011001_00011000_00010001_00010000_00010010;
        en[44] = 5'b01111;
        temp[45] = 40'b00011000_00010011_00010011_00001111_00010001;
        en[45] = 5'b11111;
        temp[46] = 40'b00010010_00010010_00010101_00001111_00010110;
        en[46] = 5'b11111;
        temp[47] = 40'b00011101_00010010_00010000_00010000_00001111;
        en[47] = 5'b11111;
        temp[48] = 40'b00010101_00010000_00010011_00010001_00010101;
        en[48] = 5'b11111;
        temp[49] = 40'b00010000_00010101_00010011_00010001_00010101;
        en[49] = 5'b11111;
        temp[50] = 40'b00010110_00010110_00011000_00010001_00010101;
        en[50] = 5'b00011;
        temp[51] = 40'b00011110_00010100_00001111_00010000_00010010;
        en[51] = 5'b01001;
        temp[52] = 40'b00010100_00010011_00010000_00010100_00010001;
        en[52] = 5'b10011;
        temp[53] = 40'b00010101_00001111_00010111_00010100_00010011;
        en[53] = 5'b01100;
        temp[54] = 40'b00011101_00001111_00010000_00011110_00001111;
        en[54] = 5'b01111;
        temp[55] = 40'b00001111_00001111_00001111_00011000_00010000;
        en[55] = 5'b10010;
        temp[56] = 40'b00011110_00011010_00010000_00010001_00010111;
        en[56] = 5'b00101;
        temp[57] = 40'b00010111_00011101_00001111_00010110_00010101;
        en[57] = 5'b00111;
        temp[58] = 40'b00010101_00011011_00010101_00010000_00010100;
        en[58] = 5'b10110;
        temp[59] = 40'b00011001_00010010_00010000_00010100_00001111;
        en[59] = 5'b11001;
        temp[60] = 40'b00010010_00011010_00010110_00010010_00010100;
        en[60] = 5'b10111;
        temp[61] = 40'b00011010_00011001_00010001_00010000_00011110;
        en[61] = 5'b10110;
        temp[62] = 40'b00010010_00011011_00010001_00010101_00010110;
        en[62] = 5'b10111;
        temp[63] = 40'b00011010_00010000_00010110_00010001_00010111;
        en[63] = 5'b01111;
        temp[64] = 40'b00010100_00011010_00011011_00010000_00001111;
        en[64] = 5'b10111;
        temp[65] = 40'b00010010_00010001_00010001_00010100_00011000;
        en[65] = 5'b10111;
        temp[66] = 40'b00010111_00010000_00010010_00010000_00010110;
        en[66] = 5'b11101;
        temp[67] = 40'b00001111_00010000_00011100_00011100_00010100;
        en[67] = 5'b11101;
        temp[68] = 40'b00011000_00010010_00010001_00010100_00010001;
        en[68] = 5'b11011;
        temp[69] = 40'b00010010_00010110_00010011_00010110_00010000;
        en[69] = 5'b01111;
        temp[70] = 40'b00010000_00011010_00001111_00010011_00010111;
        en[70] = 5'b11111;
        temp[71] = 40'b00011001_00010010_00010111_00010010_00001111;
        en[71] = 5'b11111;
        temp[72] = 40'b00010001_00001111_00011101_00010010_00010100;
        en[72] = 5'b11111;
        temp[73] = 40'b00010011_00001111_00010101_00010001_00011011;
        en[73] = 5'b11111;
        temp[74] = 40'b00010001_00011010_00010000_00010100_00010100;
        en[74] = 5'b11111;
        temp[75] = 40'b00011010_00010001_00010101_00010011_00010101;
        en[75] = 5'b00110;
        temp[76] = 40'b00010100_00010000_00010001_00011000_00010111;
        en[76] = 5'b00101;
        temp[77] = 40'b00010111_00010001_00001111_00011100_00010010;
        en[77] = 5'b11000;
        temp[78] = 40'b00010001_00010111_00001111_00010100_00010000;
        en[78] = 5'b11010;
        temp[79] = 40'b00010101_00011011_00011000_00010101_00010011;
        en[79] = 5'b10001;
        temp[80] = 40'b00010010_00010101_00010110_00010110_00011001;
        en[80] = 5'b11100;
        temp[81] = 40'b00001111_00011101_00010101_00010101_00010011;
        en[81] = 5'b00111;
        temp[82] = 40'b00001111_00001111_00010001_00011001_00011010;
        en[82] = 5'b11011;
        temp[83] = 40'b00001111_00010000_00011000_00011001_00010000;
        en[83] = 5'b00011;
        temp[84] = 40'b00010000_00010011_00010111_00010110_00010101;
        en[84] = 5'b01010;
        temp[85] = 40'b00001111_00010100_00011010_00011010_00011011;
        en[85] = 5'b11001;
        temp[86] = 40'b00011010_00010011_00010100_00010111_00010110;
        en[86] = 5'b01110;
        temp[87] = 40'b00010100_00011011_00011000_00001111_00010111;
        en[87] = 5'b10111;
        temp[88] = 40'b00011011_00010000_00011001_00010011_00011100;
        en[88] = 5'b11010;
        temp[89] = 40'b00011110_00010001_00010100_00011010_00001111;
        en[89] = 5'b11101;
        temp[90] = 40'b00011011_00011001_00001111_00010000_00011000;
        en[90] = 5'b11110;
        temp[91] = 40'b00011011_00010001_00011000_00011110_00001111;
        en[91] = 5'b11101;
        temp[92] = 40'b00010110_00011100_00010011_00001111_00010011;
        en[92] = 5'b11111;
        temp[93] = 40'b00011010_00010010_00010111_00011011_00010000;
        en[93] = 5'b11101;
        temp[94] = 40'b00010010_00010001_00010101_00011011_00011100;
        en[94] = 5'b11110;
        temp[95] = 40'b00010100_00010111_00010111_00010010_00010100;
        en[95] = 5'b11111;
        temp[96] = 40'b00010110_00010010_00010101_00010100_00010111;
        en[96] = 5'b11111;
        temp[97] = 40'b00010100_00010001_00010110_00011010_00010011;
        en[97] = 5'b11111;
        temp[98] = 40'b00010000_00010001_00010001_00011010_00011100;
        en[98] = 5'b11111;
        temp[99] = 40'b00010100_00010010_00010000_00010110_00011100;
        en[99] = 5'b11111;
        temp[100] = 40'b00011001_00010110_00001111_00010100_00011011;
        en[100] = 5'b00101;
        temp[101] = 40'b00010010_00010110_00010100_00010011_00010101;
        en[101] = 5'b01101;
        temp[102] = 40'b00010101_00010010_00010101_00011100_00011001;
        en[102] = 5'b10100;
        temp[103] = 40'b00010100_00011101_00010010_00011001_00010110;
        en[103] = 5'b10110;
        temp[104] = 40'b00011101_00010010_00011001_00011001_00010000;
        en[104] = 5'b11001;
        temp[105] = 40'b00010010_00010000_00011010_00010101_00010110;
        en[105] = 5'b01111;
        temp[106] = 40'b00011100_00011001_00011011_00010000_00010111;
        en[106] = 5'b00110;
        temp[107] = 40'b00010011_00011100_00010011_00011001_00001111;
        en[107] = 5'b01001;
        temp[108] = 40'b00010001_00011100_00011010_00011011_00001111;
        en[108] = 5'b10111;
        temp[109] = 40'b00001111_00010110_00010110_00010100_00010110;
        en[109] = 5'b01110;
        temp[110] = 40'b00001111_00010001_00010101_00010000_00011011;
        en[110] = 5'b01101;
        temp[111] = 40'b00010001_00010111_00011101_00011001_00010011;
        en[111] = 5'b11010;
        temp[112] = 40'b00010110_00010010_00011100_00001111_00010011;
        en[112] = 5'b01101;
        temp[113] = 40'b00011110_00010000_00011010_00010011_00010101;
        en[113] = 5'b11011;
        temp[114] = 40'b00010100_00010101_00010110_00010010_00011010;
        en[114] = 5'b11111;
        temp[115] = 40'b00011101_00001111_00010100_00011101_00010111;
        en[115] = 5'b01111;
        temp[116] = 40'b00011110_00011101_00010001_00010010_00010110;
        en[116] = 5'b10111;
        temp[117] = 40'b00010001_00011100_00010110_00010111_00011001;
        en[117] = 5'b10111;
        temp[118] = 40'b00010111_00010011_00010111_00010001_00011010;
        en[118] = 5'b11111;
        temp[119] = 40'b00010111_00010111_00010101_00011011_00010000;
        en[119] = 5'b10111;
        temp[120] = 40'b00011000_00011000_00010000_00010001_00011100;
        en[120] = 5'b11111;
        temp[121] = 40'b00010001_00010100_00010001_00011100_00011011;
        en[121] = 5'b11111;
        temp[122] = 40'b00011001_00010010_00011101_00010101_00010000;
        en[122] = 5'b11111;
        temp[123] = 40'b00011100_00010001_00010100_00011000_00010100;
        en[123] = 5'b11111;
        temp[124] = 40'b00010000_00011000_00010100_00010011_00011110;
        en[124] = 5'b11111;
        temp[125] = 40'b00010101_00011001_00010111_00011001_00010011;
        en[125] = 5'b11101;
        temp[126] = 40'b00011100_00011011_00010000_00011001_00010000;
        en[126] = 5'b10001;
        temp[127] = 40'b00010111_00010111_00010010_00011101_00001111;
        en[127] = 5'b00011;
        temp[128] = 40'b00001111_00011001_00010011_00010001_00001111;
        en[128] = 5'b01100;
        temp[129] = 40'b00011100_00011110_00011100_00010101_00010000;
        en[129] = 5'b00101;
        temp[130] = 40'b00010101_00011000_00010101_00010011_00011000;
        en[130] = 5'b00101;
        temp[131] = 40'b00011000_00010100_00010001_00011110_00010001;
        en[131] = 5'b01011;
        temp[132] = 40'b00001111_00010000_00010010_00011100_00011011;
        en[132] = 5'b00101;
        temp[133] = 40'b00011010_00010100_00010111_00010101_00011001;
        en[133] = 5'b01001;
        temp[134] = 40'b00010111_00011001_00011001_00010100_00010101;
        en[134] = 5'b00110;
        temp[135] = 40'b00010101_00010111_00010010_00011011_00010011;
        en[135] = 5'b01110;
        temp[136] = 40'b00011000_00011100_00010101_00010110_00010001;
        en[136] = 5'b11111;
        temp[137] = 40'b00011100_00011000_00011010_00010010_00010001;
        en[137] = 5'b01110;
        temp[138] = 40'b00011101_00011011_00010011_00010110_00010100;
        en[138] = 5'b10101;
        temp[139] = 40'b00010011_00011011_00011001_00010100_00010011;
        en[139] = 5'b11101;
        temp[140] = 40'b00010101_00010111_00010010_00011101_00011000;
        en[140] = 5'b11110;
        temp[141] = 40'b00010001_00011110_00011001_00010011_00010010;
        en[141] = 5'b11110;
        temp[142] = 40'b00010101_00011011_00011001_00010101_00010010;
        en[142] = 5'b11101;
        temp[143] = 40'b00010101_00011001_00010111_00011011_00010100;
        en[143] = 5'b10111;
        temp[144] = 40'b00011011_00011001_00010010_00010101_00010010;
        en[144] = 5'b11110;
        temp[145] = 40'b00010100_00010111_00010100_00011100_00010111;
        en[145] = 5'b11111;
        temp[146] = 40'b00011011_00010110_00010011_00011110_00010000;
        en[146] = 5'b11111;
        temp[147] = 40'b00010101_00011001_00010101_00010101_00011010;
        en[147] = 5'b11111;
        temp[148] = 40'b00010111_00011010_00010101_00010100_00011000;
        en[148] = 5'b11111;
        temp[149] = 40'b00010011_00010100_00011101_00010111_00010111;
        en[149] = 5'b11111;
        temp[150] = 40'b00010000_00011011_00011101_00010111_00010100;
        en[150] = 5'b11101;
        temp[151] = 40'b00010000_00011011_00010011_00010111_00011100;
        en[151] = 5'b01100;
        temp[152] = 40'b00011000_00010011_00010111_00011011_00010110;
        en[152] = 5'b11011;
        temp[153] = 40'b00011010_00011110_00011110_00010001_00010000;
        en[153] = 5'b01001;
        temp[154] = 40'b00011011_00010001_00011101_00010011_00010111;
        en[154] = 5'b10011;
        temp[155] = 40'b00011000_00011010_00010000_00011000_00011011;
        en[155] = 5'b01111;
        temp[156] = 40'b00010001_00011010_00011010_00010101_00010100;
        en[156] = 5'b01111;
        temp[157] = 40'b00011001_00010101_00011001_00011010_00010111;
        en[157] = 5'b01011;
        temp[158] = 40'b00011001_00011011_00010010_00010011_00010110;
        en[158] = 5'b11011;
        temp[159] = 40'b00011011_00010110_00011110_00011001_00011110;
        en[159] = 5'b01010;
        temp[160] = 40'b00010101_00011100_00010100_00010110_00010101;
        en[160] = 5'b01011;
        temp[161] = 40'b00010101_00010110_00011000_00010110_00011100;
        en[161] = 5'b10011;
        temp[162] = 40'b00011110_00010010_00010101_00010110_00011001;
        en[162] = 5'b11101;
        temp[163] = 40'b00011110_00010101_00010111_00010110_00011100;
        en[163] = 5'b01111;
        temp[164] = 40'b00011001_00010011_00010001_00011000_00011100;
        en[164] = 5'b10111;
        temp[165] = 40'b00011000_00011001_00010111_00011001_00010101;
        en[165] = 5'b11011;
        temp[166] = 40'b00011110_00011001_00001111_00011101_00011010;
        en[166] = 5'b01111;
        temp[167] = 40'b00010100_00010000_00011100_00010001_00011110;
        en[167] = 5'b10111;
        temp[168] = 40'b00011101_00011011_00010001_00010101_00011100;
        en[168] = 5'b10111;
        temp[169] = 40'b00011011_00010011_00011100_00011110_00010011;
        en[169] = 5'b11011;
        temp[170] = 40'b00011001_00011101_00010110_00011011_00010000;
        en[170] = 5'b11111;
        temp[171] = 40'b00010100_00011101_00011010_00010011_00011001;
        en[171] = 5'b11111;
        temp[172] = 40'b00011011_00010010_00011110_00010011_00011001;
        en[172] = 5'b11111;
        temp[173] = 40'b00011000_00010111_00011010_00011001_00010101;
        en[173] = 5'b11111;
        temp[174] = 40'b00011011_00010000_00011001_00010111_00011100;
        en[174] = 5'b11111;
        temp[175] = 40'b00011100_00011000_00011011_00010101_00010000;
        en[175] = 5'b00110;
        temp[176] = 40'b00011101_00010101_00011011_00011100_00010011;
        en[176] = 5'b11101;
        temp[177] = 40'b00010011_00011001_00011100_00010010_00011100;
        en[177] = 5'b11100;
        temp[178] = 40'b00011101_00011001_00010101_00011110_00011011;
        en[178] = 5'b00101;
        temp[179] = 40'b00011101_00010101_00001111_00010100_00010110;
        en[179] = 5'b11001;
        temp[180] = 40'b00011110_00010011_00010111_00010011_00010101;
        en[180] = 5'b10010;
        temp[181] = 40'b00010010_00011100_00010111_00010001_00010101;
        en[181] = 5'b01001;
        temp[182] = 40'b00011010_00010101_00011100_00010101_00011100;
        en[182] = 5'b01001;
        temp[183] = 40'b00010101_00011101_00010010_00011001_00011100;
        en[183] = 5'b10001;
        temp[184] = 40'b00010011_00010110_00011110_00001111_00011011;
        en[184] = 5'b10100;
        temp[185] = 40'b00011110_00010111_00011000_00010001_00010100;
        en[185] = 5'b10101;
        temp[186] = 40'b00010001_00011110_00010011_00011001_00011110;
        en[186] = 5'b00111;
        temp[187] = 40'b00011001_00011010_00011100_00010101_00010110;
        en[187] = 5'b11111;
        temp[188] = 40'b00010000_00011100_00011001_00011110_00011101;
        en[188] = 5'b11010;
        temp[189] = 40'b00011010_00011000_00010011_00011000_00011001;
        en[189] = 5'b11010;
        temp[190] = 40'b00011001_00011100_00011100_00010101_00011001;
        en[190] = 5'b11011;
        temp[191] = 40'b00010110_00011101_00010100_00011010_00011000;
        en[191] = 5'b01111;
        temp[192] = 40'b00011101_00011011_00010011_00010010_00011000;
        en[192] = 5'b11101;
        temp[193] = 40'b00011110_00011011_00010011_00011110_00010100;
        en[193] = 5'b10111;
        temp[194] = 40'b00011001_00011010_00010111_00011001_00010010;
        en[194] = 5'b11110;
        temp[195] = 40'b00010110_00011101_00010001_00011100_00011100;
        en[195] = 5'b11111;
        temp[196] = 40'b00011110_00010111_00011100_00011100_00001111;
        en[196] = 5'b11111;
        temp[197] = 40'b00011011_00011100_00010011_00010111_00011011;
        en[197] = 5'b11111;
        temp[198] = 40'b00011110_00010001_00010111_00011110_00011000;
        en[198] = 5'b11111;
        temp[199] = 40'b00011001_00011001_00010011_00011010_00011101;
        en[199] = 5'b11111;
        temp[200] = 40'b00011010_00011011_00011110_00011101_00010011;
        en[200] = 5'b10101;
        temp[201] = 40'b00010000_00011100_00011100_00010101_00011010;
        en[201] = 5'b00111;
        temp[202] = 40'b00011100_00011100_00010110_00010000_00010001;
        en[202] = 5'b10100;
        temp[203] = 40'b00011001_00011001_00011110_00010100_00010000;
        en[203] = 5'b11000;
        temp[204] = 40'b00011011_00001111_00011010_00010110_00010010;
        en[204] = 5'b10110;
        temp[205] = 40'b00010110_00011010_00011011_00010011_00011110;
        en[205] = 5'b00111;
        temp[206] = 40'b00011110_00010101_00010000_00010101_00011010;
        en[206] = 5'b10010;
        temp[207] = 40'b00011011_00011110_00011010_00010100_00011010;
        en[207] = 5'b01110;
        temp[208] = 40'b00011110_00011000_00010110_00011001_00011110;
        en[208] = 5'b11100;
        temp[209] = 40'b00010011_00011000_00011011_00010100_00010001;
        en[209] = 5'b01100;
        temp[210] = 40'b00011101_00010110_00010110_00011010_00010010;
        en[210] = 5'b11010;
        temp[211] = 40'b00010011_00011000_00011100_00010111_00011001;
        en[211] = 5'b01101;
        temp[212] = 40'b00011101_00010011_00011101_00011001_00011001;
        en[212] = 5'b11101;
        temp[213] = 40'b00011100_00011110_00011110_00010001_00011011;
        en[213] = 5'b11011;
        temp[214] = 40'b00011110_00011101_00011000_00011100_00010101;
        en[214] = 5'b01111;
        temp[215] = 40'b00010111_00010101_00011110_00011100_00011000;
        en[215] = 5'b01111;
        temp[216] = 40'b00011011_00011101_00010011_00011001_00011100;
        en[216] = 5'b11111;
        temp[217] = 40'b00011110_00010010_00011110_00011001_00011011;
        en[217] = 5'b11110;
        temp[218] = 40'b00010111_00010001_00011100_00011110_00010110;
        en[218] = 5'b10111;
        temp[219] = 40'b00011011_00010111_00011110_00010100_00011010;
        en[219] = 5'b10111;
        temp[220] = 40'b00010101_00011100_00011010_00011101_00011001;
        en[220] = 5'b11111;
        temp[221] = 40'b00011100_00011101_00010110_00010111_00011011;
        en[221] = 5'b11111;
        temp[222] = 40'b00011110_00011100_00011100_00010000_00011011;
        en[222] = 5'b11111;
        temp[223] = 40'b00010111_00011101_00010100_00011011_00011110;
        en[223] = 5'b11111;
        temp[224] = 40'b00011101_00011000_00011000_00011101_00010111;
        en[224] = 5'b11111;
        temp[225] = 40'b00010101_00011100_00010101_00011101_00010101;
        en[225] = 5'b01011;
        temp[226] = 40'b00011010_00010110_00011011_00011001_00011001;
        en[226] = 5'b10110;
        temp[227] = 40'b00011010_00010011_00010110_00011101_00011011;
        en[227] = 5'b00111;
        temp[228] = 40'b00011101_00011000_00011010_00010111_00011100;
        en[228] = 5'b11111;
        temp[229] = 40'b00010110_00011110_00011100_00011010_00011100;
        en[229] = 5'b11000;
        temp[230] = 40'b00011101_00011000_00011000_00011001_00011001;
        en[230] = 5'b10011;
        temp[231] = 40'b00011101_00011100_00011100_00010000_00011000;
        en[231] = 5'b10001;
        temp[232] = 40'b00011100_00011110_00010111_00011000_00011000;
        en[232] = 5'b11110;
        temp[233] = 40'b00010100_00011011_00011000_00010110_00011101;
        en[233] = 5'b00101;
        temp[234] = 40'b00011100_00011001_00010111_00011001_00010001;
        en[234] = 5'b11000;
        temp[235] = 40'b00001111_00011101_00011100_00011110_00010110;
        en[235] = 5'b00111;
        temp[236] = 40'b00011100_00011001_00011011_00010101_00010011;
        en[236] = 5'b11100;
        temp[237] = 40'b00011100_00011110_00010010_00011101_00011110;
        en[237] = 5'b11101;
        temp[238] = 40'b00011010_00011100_00011001_00011001_00011010;
        en[238] = 5'b11001;
        temp[239] = 40'b00011101_00010101_00010101_00011110_00001111;
        en[239] = 5'b10110;
        temp[240] = 40'b00011110_00010011_00011100_00010100_00011110;
        en[240] = 5'b11101;
        temp[241] = 40'b00011000_00011011_00011010_00011110_00011011;
        en[241] = 5'b10111;
        temp[242] = 40'b00011110_00011101_00011000_00001111_00011000;
        en[242] = 5'b11101;
        temp[243] = 40'b00010101_00011101_00011100_00011010_00011000;
        en[243] = 5'b01111;
        temp[244] = 40'b00011100_00011100_00011010_00001111_00011001;
        en[244] = 5'b11101;
        temp[245] = 40'b00011110_00011001_00011100_00011001_00011010;
        en[245] = 5'b11111;
        temp[246] = 40'b00011001_00011000_00011110_00011101_00011010;
        en[246] = 5'b11111;
        temp[247] = 40'b00011000_00011100_00011110_00011101_00010111;
        en[247] = 5'b11111;
        temp[248] = 40'b00011000_00010111_00011011_00011110_00011110;
        en[248] = 5'b11111;
        temp[249] = 40'b00011110_00010101_00011000_00010011_00011110;
        en[249] = 5'b11001;
        temp[250] = 40'b00010000_00011101_00011010_00011101_00010111;
        en[250] = 5'b01011;
        temp[251] = 40'b00010110_00010100_00011001_00010111_00011101;
        en[251] = 5'b00101;
        temp[252] = 40'b00011100_00010011_00011010_00011101_00010000;
        en[252] = 5'b10100;
        temp[253] = 40'b00001111_00011101_00011001_00010101_00010110;
        en[253] = 5'b01100;
        temp[254] = 40'b00011100_00011110_00011100_00011010_00010111;
        en[254] = 5'b10110;
        temp[255] = 40'b00011101_00011000_00011101_00011011_00011011;
        en[255] = 5'b11101;
        temp[256] = 40'b00011110_00011010_00011100_00010111_00011101;
        en[256] = 5'b01001;
        temp[257] = 40'b00010010_00011010_00011010_00010010_00011101;
        en[257] = 5'b00101;
        temp[258] = 40'b00011010_00011001_00011001_00011011_00011110;
        en[258] = 5'b00111;
        temp[259] = 40'b00011110_00011011_00011010_00011011_00010110;
        en[259] = 5'b11100;
        temp[260] = 40'b00011100_00011101_00010001_00011100_00011010;
        en[260] = 5'b01011;
        temp[261] = 40'b00010111_00011011_00011110_00010111_00011110;
        en[261] = 5'b00111;
        temp[262] = 40'b00011100_00011011_00011100_00011101_00011010;
        en[262] = 5'b11011;
        temp[263] = 40'b00011011_00011110_00011001_00011100_00010011;
        en[263] = 5'b01110;
        temp[264] = 40'b00011110_00011110_00011100_00011010_00010111;
        en[264] = 5'b11101;
        temp[265] = 40'b00011101_00011101_00011100_00010001_00011001;
        en[265] = 5'b11101;
        temp[266] = 40'b00011010_00011010_00010110_00011110_00011101;
        en[266] = 5'b11011;
        temp[267] = 40'b00011100_00011101_00011011_00011000_00011110;
        en[267] = 5'b11011;
        temp[268] = 40'b00010110_00011110_00011110_00011101_00010001;
        en[268] = 5'b11110;
        temp[269] = 40'b00011100_00011110_00011000_00011011_00011110;
        en[269] = 5'b11111;
        temp[270] = 40'b00011110_00011001_00011101_00011001_00011110;
        en[270] = 5'b11111;
        temp[271] = 40'b00011001_00011001_00011110_00011000_00011010;
        en[271] = 5'b00101;
        temp[272] = 40'b00011011_00011011_00010011_00011100_00011110;
        en[272] = 5'b11001;
        temp[273] = 40'b00011110_00011011_00011100_00011001_00011010;
        en[273] = 5'b10001;
        temp[274] = 40'b00011000_00010110_00011010_00011100_00011100;
        en[274] = 5'b00011;
        temp[275] = 40'b00011110_00010110_00011000_00011110_00010000;
        en[275] = 5'b10110;
        temp[276] = 40'b00011001_00011011_00011110_00010010_00011011;
        en[276] = 5'b00101;
        temp[277] = 40'b00011100_00011110_00010001_00011010_00011101;
        en[277] = 5'b11011;
        temp[278] = 40'b00011010_00011100_00011011_00011110_00011110;
        en[278] = 5'b10111;
        temp[279] = 40'b00001111_00011110_00010100_00001111_00011011;
        en[279] = 5'b01001;
        temp[280] = 40'b00011110_00011001_00011110_00011001_00011001;
        en[280] = 5'b10101;
        temp[281] = 40'b00011110_00010001_00011100_00011100_00010011;
        en[281] = 5'b10110;
        temp[282] = 40'b00011011_00010111_00011100_00011101_00011101;
        en[282] = 5'b00111;
        temp[283] = 40'b00011010_00011110_00011100_00011011_00011100;
        en[283] = 5'b01101;
        temp[284] = 40'b00011101_00010101_00011101_00011100_00011110;
        en[284] = 5'b10110;
        temp[285] = 40'b00011101_00011110_00011011_00010100_00010000;
        en[285] = 5'b11100;
        temp[286] = 40'b00011101_00011110_00011100_00011010_00011110;
        en[286] = 5'b11011;
        temp[287] = 40'b00011100_00011110_00011010_00011101_00011100;
        en[287] = 5'b11011;
        temp[288] = 40'b00010100_00011101_00011100_00011110_00011100;
        en[288] = 5'b01111;
        temp[289] = 40'b00011000_00011100_00011101_00011100_00011110;
        en[289] = 5'b01111;
        temp[290] = 40'b00011101_00011100_00011110_00010010_00011100;
        en[290] = 5'b11101;
        temp[291] = 40'b00011101_00011100_00011101_00011110_00011100;
        en[291] = 5'b11111;

        //initialize stimulus_list with zeros
        temp_list = 0;
        en_list = 0;
        
        //concatenate all stimulus generated above 
        for(i = 0; i < `STIMULUS_WIDTH; i = i + 1) begin
            temp_list = temp_list + temp[i];
            en_list = en_list + en[i];
            if(i < (`STIMULUS_WIDTH - 1)) begin
                temp_list = temp_list << `SENSORS_NR * `TEMP_WIDTH;
                en_list = en_list << `SENSORS_NR;
            end 
            //$write("temp_list = %b \n", temp_list);
            //$write("en_list = %b \n", en_list);
        end
   end
endmodule
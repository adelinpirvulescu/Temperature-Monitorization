`timescale 1ns / 1ps

module sensors_input(
output [15:0] temp_sum_o,
output [7:0] nr_active_sensors_o,
input [39:0] sensors_data_i,
input [4:0] sensors_en_i
    );
	 assign temp_sum_o = sensors_data_i[7:0]*sensors_en_i[0]+sensors_data_i[15:8]*sensors_en_i[1]+
	 sensors_data_i[23:16]*sensors_en_i[2]+sensors_data_i[31:24]*sensors_en_i[3]+sensors_data_i[39:32]*sensors_en_i[4];
assign nr_active_sensors_o	= sensors_en_i[0]+sensors_en_i[1]+sensors_en_i[2]+sensors_en_i[3]+sensors_en_i[4];



endmodule

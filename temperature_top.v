`timescale 1ns / 1ps

module temperature_top(
output [7:0] led_output_o,
output alert_o,
input [39:0] sensors_data_i,
input [4:0] sensors_en_i);wire [15:0] temp_sum_o;
wire [7:0] nr_active_sensors_o;
wire [15:0] N,D,Q,R, temp_Q, temp_R;
sensors_input A(temp_sum_o, nr_active_sensors_o,sensors_data_i,sensors_en_i);
assign N = temp_sum_o;
assign D = nr_active_sensors_o;
division B(Q,R,N,D);
assign temp_Q = Q;
assign temp_R = R;
output_display C(led_output_o,alert_o,temp_Q,temp_R,nr_active_sensors_o);

endmodule

`timescale 1ns / 1ps

module output_display(
output reg[7:0] coded_out_o,
output reg alert_o,
input [15:0] temp_Q_i,
input [15:0] temp_R_i,
input [7:0] active_sensors_nr);
reg [15:0] val_temp;
reg [3:0] i;
always@(*) begin
alert_o = 0;
coded_out_o = 8'b0000_0001;
val_temp = temp_Q_i;
if (temp_R_i*2 >= active_sensors_nr) begin
val_temp = val_temp + 1;
end
if ( val_temp>=19 && val_temp<=26 ) begin
for ( i = 1; i <= 8 ;i = i+1) begin
if( val_temp-19 >= i) begin

coded_out_o = coded_out_o<<1;
coded_out_o = coded_out_o + 1;

end
end 

end
else begin
alert_o = 1;
if ( val_temp>26) begin
coded_out_o = 8'b1111_1111;
end
end
end
endmodule
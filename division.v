`timescale 1ns / 1ps

module division(
output reg[15:0] Q,
output reg[15:0] R,
input [15:0] N,
input [15:0] D
    );
reg [4:0] i;
reg [15:0] n,d;
always@(*) begin
Q = 0;
R = 0;
n = N;
d = D;
if (d!=0) begin

for(i=16;i>=1;i=i-1) begin 
  R = R<<1;
  R[0] = n[i-1]; 
  if(R>=d)begin
    R = R-d;
    Q[i-1] = 1;
  end
  end
end
end


endmodule
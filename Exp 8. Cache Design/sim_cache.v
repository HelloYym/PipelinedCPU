`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:35 06/16/2016 
// Design Name: 
// Module Name:    sim_cache 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module sim_cache;
	
	
`include "mips_define.vh"

	// Inputs
	reg clk;
	reg rst;
	reg [ADDR_BITS-1:0] addr;  // address
	reg load;  // set valid to 1 and reset dirty to 0
	reg edit; // set dirty to 1
	reg invalid;  // reset valid to 0
	reg [WORD_BITS-1:0] din;  // data write in
	
	// Outputs
	wire hit;	// hit or not
	wire [WORD_BITS-1:0] dout;	// data read out
	wire valid;  // valid bit
	wire dirty; // dirty bit
	wire [TAG_BITS-1:0] tag;  // tag bits
	
	// Instantiate the Unit Under Test (UUT)
	cache uut (
		.clk(clk),
		.rst(rst),
		.addr(addr),
		.load(load),
		.edit(edit),
		.invalid(invalid),
		.din(din),
		.hit(hit),
		.dout(dout),
		.valid(valid),
		.dirty(dirty),
		.tag(tag)
	);
	
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		
		#210 load = 1; din = 32'h11111111; addr = 32'h00000000;
		#20 addr = 32'h00000004;
		#20 addr = 32'h000000A8;
		#20 addr = 32'h0000001C;
		#20 load = 0; addr = 32'h000000B4; din = 0;
		#100  edit = 1; din = 32'h22222222; addr = 32'h00000008;
		#100 edit = 0; din = 0; addr = 0;

	end
	
	initial forever #10 clk = ~clk;
	
endmodule

`include "define.vh"


/**
 * MIPS CPU wrapper.
 * Author: Zhao, Hongyu  <power_zhy@foxmail.com>
 */
module mips (
	`ifdef DEBUG
	input wire debug_en,  // debug enable
	input wire debug_step,  // debug step clock
	input wire [6:0] debug_addr,  // debug address
	output wire [31:0] debug_data,  // debug data
	`endif
	input wire clk,  // main clock
	input wire rst,  // synchronous reset
	input wire interrupter  // interrupt source, for future use
	);
	
	// instruction signals
	wire inst_ren;
	wire [31:0] inst_addr;
	wire [31:0] inst_data;
	wire inst_stall;
	wire inst_ack;
	
	// memory signals
	wire mem_ren, mem_wen;
	wire [31:0] mem_addr;
	wire [31:0] mem_data_r;
	wire [31:0] mem_data_w;
	wire mem_stall;
	wire mem_ack;
	
	
	// interrupt signals
	reg interrupt;
	reg interrupt_prev;
	always @(posedge clk) begin
		interrupt_prev <= interrupter;
	end
	always @(posedge clk) begin
		interrupt <= ~interrupt_prev & interrupter;
	end
	
	// mips core
	mips_core MIPS_CORE (
		.clk(clk),
		.rst(rst),
		.interrupt(interrupt),
		`ifdef DEBUG
		.debug_en(debug_en),
		.debug_step(debug_step),
		.debug_addr(debug_addr),
		.debug_data(debug_data),
		`endif
		.inst_ren(inst_ren),
		.inst_addr(inst_addr),
		.inst_data(inst_data),
		.mem_ren(mem_ren),
		.mem_wen(mem_wen),
		.mem_addr(mem_addr),
		.mem_dout(mem_data_w),
		.mem_din(mem_data_r),
		
		.inst_stall(inst_stall),
		.mem_stall(mem_stall)
		
		);
	
	inst_rom INST_ROM (
		.clk(clk),
		.rst(rst),
		.ren(inst_ren),
		.addr({2'b0, inst_addr[31:2]}),
		//.addr(inst_addr),
		.dout(inst_data),
		.stall(inst_stall),
		.ack(inst_ack)
		);
	
	data_ram DATA_RAM (
		.clk(clk),
		.rst(rst),
		.we(mem_wen),
		.ren(mem_ren),
		.addr({2'b0, mem_addr[31:2]}),
		//.addr(mem_addr),
		.din(mem_data_w),
		.dout(mem_data_r),
		
		.stall(mem_stall),
		.ack(mem_ack)
		);
	
endmodule

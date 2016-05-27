module data_ram (
	input wire clk,
	input wire rst,
	input wire we,
	input wire ren,
	input wire [31:0] addr,
	input wire [31:0] din,
	output reg [31:0] dout,
	output reg stall,
	output reg ack
	);
	
	parameter ADDR_WIDTH = 5;
	parameter CLK_DELAY = 7;
	
	parameter S_IDLE = 0;
	parameter S_READ = 1;
	parameter S_WRITE = 2;
	
	reg [1:0] state;
	reg [2:0] cnt;
	
	reg [31:0] data [0:(1<<ADDR_WIDTH)-1];
	
	initial	begin
		$readmemh("data_mem.hex", data);
		ack <= 0;
		cnt <= 0;
	end
	
	
	always @(posedge clk) begin
		if (rst) begin
			state <= S_IDLE;
			cnt <= CLK_DELAY;
			ack <=0;
		end
		else begin
			case (state)
				S_IDLE: begin
					ack <= 0;
					if (we) begin
						state <= S_WRITE;
						cnt <= CLK_DELAY;
					end
					else if (ren) begin
						state <= S_READ;
						cnt <= CLK_DELAY;
					end
					else begin
						state <= S_IDLE;
						cnt <= CLK_DELAY;
					end
				end
				S_READ: begin
					cnt <= cnt - 1;
					if (cnt == 0) begin
						state <= S_IDLE;
						ack <= 1;
					end
					else begin
						state <= S_READ;
						ack <= 0;
					end
				end
				S_WRITE: begin
					cnt <= cnt - 1;
					if (cnt == 0) begin
						state <= S_IDLE;
						ack <= 1;
					end
					else begin
						state <= S_WRITE;
						ack <= 0;
					end
				end
			endcase
		end
	end
	
	
	
	always @(negedge clk) begin
		if (we && addr[31:ADDR_WIDTH]==0 && ack)
			data[addr[ADDR_WIDTH-1:0]] <= din;
	end
	
	reg [31:0] out;
	always @(negedge clk) begin
		if (ack)
			out <= data[addr[ADDR_WIDTH-1:0]];
		else
			out <= 32'h0;
	end
	
	always @(*) begin
		if (addr[31:ADDR_WIDTH] != 0)
			dout = 32'h0;
		else
			dout = out;
	end
	
	always @(*) begin
		stall = (ren | we) & (~ack);
	end
	
endmodule

module inst_rom (
	input wire clk,
	input wire rst,
	input wire [31:0] addr,
	input wire ren,
	output reg [31:0] dout,
	output reg stall,
	output reg ack
	);
	
	parameter ADDR_WIDTH = 6;
	parameter CLK_DELAY = 7;
	
	parameter S_IDLE = 0;
	parameter S_READ = 1;
	
	reg state;
	reg [2:0] cnt;
	
	reg [31:0] data [0:(1<<ADDR_WIDTH)-1];
	
	initial	begin
		$readmemh("inst_mem.hex", data);
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
					if (ren) begin
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
			endcase
		end
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
		stall = (ren) & (~ack);
	end
	
endmodule

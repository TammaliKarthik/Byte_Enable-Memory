module SINGLE_PORT_RAM(
    input clk,           // Clock signal
    input rst,           // Reset signal
    input cen,           // Chip enable signal
    input wr,            // Write enable signal
    input [3:0] byte_en, // Byte enable signal (1 = write to corresponding bit)
    input [3:0] data_in, // Data input to write into RAM
    input [3:0] addr_in, // Address input to read/write from RAM
    output reg [3:0] q   // Data output from RAM
);

    // 4-bit wide, 16-depth RAM
    reg [3:0] ram [0:15]; 

    integer i;

    // Reset logic (clearing RAM)
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < 16; i = i + 1) 
                ram[i] <= 4'b0000;
        end 
        else if (cen && wr) begin
            // Byte-enable logic for selective bit writes
            if (byte_en[0]) ram[addr_in][0] <= data_in[0];
            if (byte_en[1]) ram[addr_in][1] <= data_in[1];
            if (byte_en[2]) ram[addr_in][2] <= data_in[2];
            if (byte_en[3]) ram[addr_in][3] <= data_in[3];
        end
    end

    // Continuous read operation (synchronous)
    always @(posedge clk) begin
        if (cen && !wr)  // Read only when write is disabled
            q <= ram[addr_in];
    end

endmodule

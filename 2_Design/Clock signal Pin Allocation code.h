## Clock signal (100 MHz)
set_property PACKAGE_PIN E3 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports clk]

## Reset
set_property PACKAGE_PIN P3 [get_ports rst]
set_property IOSTANDARD LVCMOS33 [get_ports rst]

## Enable
set_property PACKAGE_PIN P4 [get_ports cen]
set_property IOSTANDARD LVCMOS33 [get_ports cen]

## Write Enable (wr)
set_property PACKAGE_PIN R3 [get_ports wr]
set_property IOSTANDARD LVCMOS33 [get_ports wr]

## Byte Enable (byte_en[3:0]) - Added
set_property PACKAGE_PIN V2 [get_ports {byte_en[3]}]
set_property PACKAGE_PIN U2 [get_ports {byte_en[2]}]
set_property PACKAGE_PIN T3 [get_ports {byte_en[1]}]
set_property PACKAGE_PIN T1 [get_ports {byte_en[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {byte_en[*]}]

## Data Input (data_in[3:0])
set_property PACKAGE_PIN V7 [get_ports {data_in[3]}]
set_property PACKAGE_PIN V6 [get_ports {data_in[2]}]
set_property PACKAGE_PIN V5 [get_ports {data_in[1]}]
set_property PACKAGE_PIN U4 [get_ports {data_in[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {data_in[*]}]

## Address Input (addr_in[3:0])
set_property PACKAGE_PIN U6 [get_ports {addr_in[3]}]
set_property PACKAGE_PIN V4 [get_ports {addr_in[2]}]
set_property PACKAGE_PIN U3 [get_ports {addr_in[1]}]
set_property PACKAGE_PIN V1 [get_ports {addr_in[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {addr_in[*]}]

## LEDs (q outputs)
set_property PACKAGE_PIN V9 [get_ports {q[3]}]
set_property PACKAGE_PIN R8 [get_ports {q[2]}]
set_property PACKAGE_PIN T6 [get_ports {q[1]}]
set_property PACKAGE_PIN T5 [get_ports {q[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {q[*]}]

## Configuration (Optional)
set_property CFGBVS VCCO [current_design]  ;# Or GND, depending on your board's configuration
set_property CONFIG_VOLTAGE 3.3 [current_design] ;# Or 1.8, 2.5, etc., depending on your board

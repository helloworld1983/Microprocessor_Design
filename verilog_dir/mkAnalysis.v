//
// Generated by Bluespec Compiler, version 2016.07.beta1 (build 34806, 2016-07-05)
//
// On Sun May 27 13:05:53 UTC 2018
//
//
// Ports:
// Name                         I/O  size props
// CLK                            I     1 clock
// RST_N                          I     1 reset
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkAnalysis(CLK,
		  RST_N);
  input  CLK;
  input  RST_N;

  // register nextAddr
  reg [13 : 0] nextAddr;
  wire [13 : 0] nextAddr$D_IN;
  wire nextAddr$EN;

  // register nodeSearch_counter
  reg [13 : 0] nodeSearch_counter;
  wire [13 : 0] nodeSearch_counter$D_IN;
  wire nodeSearch_counter$EN;

  // ports of submodule external_comms
  wire [54 : 0] external_comms$inputNode_data;
  wire [33 : 0] external_comms$outputNodeData;
  wire [13 : 0] external_comms$outputNode0_current_addr,
		external_comms$outputNode1_current_addr,
		external_comms$outputNodeData_current_addr;
  wire external_comms$EN_dumpMem,
       external_comms$EN_inputNode,
       external_comms$RDY_outputNodeData;

  // submodule external_comms
  mkInterface external_comms(.CLK(CLK),
			     .RST_N(RST_N),
			     .inputNode_data(external_comms$inputNode_data),
			     .outputNode0_current_addr(external_comms$outputNode0_current_addr),
			     .outputNode1_current_addr(external_comms$outputNode1_current_addr),
			     .outputNodeData_current_addr(external_comms$outputNodeData_current_addr),
			     .EN_dumpMem(external_comms$EN_dumpMem),
			     .EN_inputNode(external_comms$EN_inputNode),
			     .outputNode0(),
			     .RDY_outputNode0(),
			     .outputNode1(),
			     .RDY_outputNode1(),
			     .outputNodeData(external_comms$outputNodeData),
			     .RDY_outputNodeData(external_comms$RDY_outputNodeData),
			     .RDY_dumpMem(),
			     .inputNode(),
			     .RDY_inputNode());

  // register nextAddr
  assign nextAddr$D_IN =
	     external_comms$outputNodeData[19] ?
	       external_comms$outputNodeData[18:5] :
	       nodeSearch_counter ;
  assign nextAddr$EN = external_comms$RDY_outputNodeData ;

  // register nodeSearch_counter
  assign nodeSearch_counter$D_IN = nodeSearch_counter + 14'd1 ;
  assign nodeSearch_counter$EN =
	     external_comms$RDY_outputNodeData &&
	     !external_comms$outputNodeData[19] ;

  // submodule external_comms
  assign external_comms$inputNode_data = 55'h0 ;
  assign external_comms$outputNode0_current_addr = 14'h0 ;
  assign external_comms$outputNode1_current_addr = 14'h0 ;
  assign external_comms$outputNodeData_current_addr = nextAddr ;
  assign external_comms$EN_dumpMem = 1'b0 ;
  assign external_comms$EN_inputNode = 1'b0 ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        nextAddr <= `BSV_ASSIGNMENT_DELAY 14'd0;
	nodeSearch_counter <= `BSV_ASSIGNMENT_DELAY 14'd0;
      end
    else
      begin
        if (nextAddr$EN) nextAddr <= `BSV_ASSIGNMENT_DELAY nextAddr$D_IN;
	if (nodeSearch_counter$EN)
	  nodeSearch_counter <= `BSV_ASSIGNMENT_DELAY nodeSearch_counter$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    nextAddr = 14'h2AAA;
    nodeSearch_counter = 14'h2AAA;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on
endmodule  // mkAnalysis


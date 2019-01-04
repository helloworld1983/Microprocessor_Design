//
// Generated by Bluespec Compiler, version 2016.07.beta1 (build 34806, 2016-07-05)
//
// On Sat May  5 02:07:53 UTC 2018
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

module mktbCounterTest(CLK,
		       RST_N);
  input  CLK;
  input  RST_N;

  // register state
  reg [1 : 0] state;
  reg [1 : 0] state$D_IN;
  wire state$EN;

  // ports of submodule counter
  wire [9 : 0] counter$increment_inc, counter$readVal, counter$setValue_val;
  wire counter$EN_increment, counter$EN_setValue;

  // submodule counter
  mkCounterTest counter(.CLK(CLK),
			.RST_N(RST_N),
			.increment_inc(counter$increment_inc),
			.setValue_val(counter$setValue_val),
			.EN_setValue(counter$EN_setValue),
			.EN_increment(counter$EN_increment),
			.RDY_setValue(),
			.RDY_increment(),
			.readVal(counter$readVal),
			.RDY_readVal());

  // register state
  always@(state)
  begin
    case (1'b1) // synopsys parallel_case
      state == 2'd0: state$D_IN = 2'd1;
      state == 2'd1: state$D_IN = 2'd2;
      state == 2'd2: state$D_IN = 2'd3;
      default: state$D_IN = 2'b10 /* unspecified value */ ;
    endcase
  end
  assign state$EN = state == 2'd0 || state == 2'd1 || state == 2'd2 ;

  // submodule counter
  assign counter$increment_inc = 10'd10 ;
  assign counter$setValue_val = 10'd20 ;
  assign counter$EN_setValue = state == 2'd0 ;
  assign counter$EN_increment = state == 2'd1 ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        state <= `BSV_ASSIGNMENT_DELAY 2'd0;
      end
    else
      begin
        if (state$EN) state <= `BSV_ASSIGNMENT_DELAY state$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    state = 2'h2;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    #0;
    if (RST_N != `BSV_RESET_VALUE)
      if (state == 2'd1)
	$display("The value of the Counter is: ", counter$readVal);
    if (RST_N != `BSV_RESET_VALUE)
      if (state == 2'd2)
	$display("The value of the Counter is: ", counter$readVal);
    if (RST_N != `BSV_RESET_VALUE) if (state == 2'd3) $finish(32'd0);
  end
  // synopsys translate_on
endmodule  // mktbCounterTest


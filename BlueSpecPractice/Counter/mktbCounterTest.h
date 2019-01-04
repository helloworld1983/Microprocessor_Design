/*
 * Generated by Bluespec Compiler, version 2016.07.beta1 (build 34806, 2016-07-05)
 * 
 * On Sat May  5 03:00:08 UTC 2018
 * 
 */

/* Generation options: */
#ifndef __mktbCounterTest_h__
#define __mktbCounterTest_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkCounterTest.h"


/* Class declaration for the mktbCounterTest module */
class MOD_mktbCounterTest : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_mkCounterTest INST_counter;
  MOD_Reg<tUInt8> INST_state;
 
 /* Constructor */
 public:
  MOD_mktbCounterTest(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
 
 /* Local definitions */
 private:
  tUInt32 DEF_x_readVal__h59;
 
 /* Rules */
 public:
  void RL_state1();
  void RL_state2();
  void RL_state3();
  void RL_state4();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mktbCounterTest &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mktbCounterTest &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mktbCounterTest &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mktbCounterTest &backing);
};

#endif /* ifndef __mktbCounterTest_h__ */
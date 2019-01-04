/*
 * Generated by Bluespec Compiler, version 2016.07.beta1 (build 34806, 2016-07-05)
 * 
 * On Sat May  5 14:25:01 UTC 2018
 * 
 */

/* Generation options: */
#ifndef __mkGCDtb_h__
#define __mkGCDtb_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkGCDtb module */
class MOD_mkGCDtb : public Module {
 
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
  MOD_Reg<tUInt8> INST_gcd_busy_flag;
  MOD_Reg<tUInt32> INST_gcd_x;
  MOD_Reg<tUInt32> INST_gcd_y;
  MOD_Reg<tUInt8> INST_state;
 
 /* Constructor */
 public:
  MOD_mkGCDtb(tSimStateHdl simHdl, char const *name, Module *parent);
 
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
  tUInt32 DEF_x__h211;
 
 /* Local definitions */
 private:
  tUInt32 DEF_v__h391;
 
 /* Rules */
 public:
  void RL_gcd_gcd();
  void RL_start();
  void RL_answer();
  void RL_finished();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkGCDtb &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkGCDtb &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkGCDtb &backing);
};

#endif /* ifndef __mkGCDtb_h__ */

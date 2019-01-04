/*
 * Generated by Bluespec Compiler, version 2016.07.beta1 (build 34806, 2016-07-05)
 * 
 * On Thu May  3 12:22:02 UTC 2018
 * 
 */
#include "bluesim_primitives.h"
#include "mktbCounter2.h"


/* String declarations */
static std::string const __str_literal_7("Error: \"HelloWorld.bsv\", line 100, column 14: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l100c14] and\n  [RL_action_l101c11, RL_action_l102c7] ) fired in the same clock cycle.\n",
					 196u);
static std::string const __str_literal_8("Error: \"HelloWorld.bsv\", line 101, column 11: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l101c11] and\n  [RL_action_l102c7] ) fired in the same clock cycle.\n",
					 177u);
static std::string const __str_literal_4("Error: \"HelloWorld.bsv\", line 97, column 14: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l97c14] and\n  [RL_action_l98c11, RL_action_l99c14, RL_action_l100c14, RL_action_l101c11,\n  RL_action_l102c7] ) fired in the same clock cycle.\n",
					 251u);
static std::string const __str_literal_5("Error: \"HelloWorld.bsv\", line 98, column 11: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l98c11] and\n  [RL_action_l99c14, RL_action_l100c14, RL_action_l101c11, RL_action_l102c7] )\n  fired in the same clock cycle.\n",
					 233u);
static std::string const __str_literal_6("Error: \"HelloWorld.bsv\", line 99, column 14: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l99c14] and\n  [RL_action_l100c14, RL_action_l101c11, RL_action_l102c7] ) fired in the same\n  clock cycle.\n",
					 215u);
static std::string const __str_literal_3("Finished Simulations", 20u);
static std::string const __str_literal_2("Test Failed", 11u);
static std::string const __str_literal_1("The number is %0d", 17u);


/* Constructor */
MOD_mktbCounter2::MOD_mktbCounter2(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_abort(simHdl, "abort", this, 1u, (tUInt8)0u),
    INST_counter_decrement_value(simHdl, "counter_decrement_value", this, 8u, (tUInt8)0u),
    INST_counter_increment_value(simHdl, "counter_increment_value", this, 8u, (tUInt8)0u),
    INST_counter_value(simHdl, "counter_value", this, 8u, (tUInt8)0u, (tUInt8)0u),
    INST_running(simHdl, "running", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg(simHdl, "start_reg", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg_1(simHdl, "start_reg_1", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg_2(simHdl, "start_reg_2", this, 1u, (tUInt8)0u),
    INST_start_wire(simHdl, "start_wire", this, 1u, (tUInt8)0u),
    INST_state_can_overlap(simHdl, "state_can_overlap", this, 1u, (tUInt8)1u, (tUInt8)0u),
    INST_state_fired(simHdl, "state_fired", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_state_fired_1(simHdl, "state_fired_1", this, 1u, (tUInt8)0u),
    INST_state_mkFSMstate(simHdl, "state_mkFSMstate", this, 4u, (tUInt8)0u, (tUInt8)0u),
    INST_state_overlap_pw(simHdl, "state_overlap_pw", this, 0u),
    INST_state_set_pw(simHdl, "state_set_pw", this, 0u),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 43u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mktbCounter2::init_symbols_0()
{
  init_symbol(&symbols[0u], "__me_check_10", SYM_RULE);
  init_symbol(&symbols[1u], "__me_check_11", SYM_RULE);
  init_symbol(&symbols[2u], "__me_check_7", SYM_RULE);
  init_symbol(&symbols[3u], "__me_check_8", SYM_RULE);
  init_symbol(&symbols[4u], "__me_check_9", SYM_RULE);
  init_symbol(&symbols[5u], "abort", SYM_MODULE, &INST_abort);
  init_symbol(&symbols[6u], "counter_decrement_value", SYM_MODULE, &INST_counter_decrement_value);
  init_symbol(&symbols[7u], "counter_increment_value", SYM_MODULE, &INST_counter_increment_value);
  init_symbol(&symbols[8u], "counter_value", SYM_MODULE, &INST_counter_value);
  init_symbol(&symbols[9u], "RL_action_l100c14", SYM_RULE);
  init_symbol(&symbols[10u], "RL_action_l101c11", SYM_RULE);
  init_symbol(&symbols[11u], "RL_action_l102c7", SYM_RULE);
  init_symbol(&symbols[12u], "RL_action_l97c14", SYM_RULE);
  init_symbol(&symbols[13u], "RL_action_l98c11", SYM_RULE);
  init_symbol(&symbols[14u], "RL_action_l99c14", SYM_RULE);
  init_symbol(&symbols[15u], "RL_auto_finish", SYM_RULE);
  init_symbol(&symbols[16u], "RL_auto_start", SYM_RULE);
  init_symbol(&symbols[17u], "RL_counter_do_decrement", SYM_RULE);
  init_symbol(&symbols[18u], "RL_counter_do_increment", SYM_RULE);
  init_symbol(&symbols[19u], "RL_fsm_start", SYM_RULE);
  init_symbol(&symbols[20u], "RL_idle_l96c15", SYM_RULE);
  init_symbol(&symbols[21u], "RL_restart", SYM_RULE);
  init_symbol(&symbols[22u], "RL_start_reg__dreg_update", SYM_RULE);
  init_symbol(&symbols[23u], "RL_state_every", SYM_RULE);
  init_symbol(&symbols[24u], "RL_state_fired__dreg_update", SYM_RULE);
  init_symbol(&symbols[25u], "RL_state_handle_abort", SYM_RULE);
  init_symbol(&symbols[26u], "running", SYM_MODULE, &INST_running);
  init_symbol(&symbols[27u], "start_reg", SYM_MODULE, &INST_start_reg);
  init_symbol(&symbols[28u], "start_reg_1", SYM_MODULE, &INST_start_reg_1);
  init_symbol(&symbols[29u], "start_reg_2", SYM_MODULE, &INST_start_reg_2);
  init_symbol(&symbols[30u], "start_wire", SYM_MODULE, &INST_start_wire);
  init_symbol(&symbols[31u], "state_can_overlap", SYM_MODULE, &INST_state_can_overlap);
  init_symbol(&symbols[32u], "state_fired", SYM_MODULE, &INST_state_fired);
  init_symbol(&symbols[33u], "state_fired_1", SYM_MODULE, &INST_state_fired_1);
  init_symbol(&symbols[34u], "state_mkFSMstate", SYM_MODULE, &INST_state_mkFSMstate);
  init_symbol(&symbols[35u], "state_overlap_pw", SYM_MODULE, &INST_state_overlap_pw);
  init_symbol(&symbols[36u], "state_set_pw", SYM_MODULE, &INST_state_set_pw);
  init_symbol(&symbols[37u],
	      "WILL_FIRE_RL_action_l100c14",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l100c14,
	      1u);
  init_symbol(&symbols[38u],
	      "WILL_FIRE_RL_action_l101c11",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l101c11,
	      1u);
  init_symbol(&symbols[39u],
	      "WILL_FIRE_RL_action_l102c7",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l102c7,
	      1u);
  init_symbol(&symbols[40u],
	      "WILL_FIRE_RL_action_l97c14",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l97c14,
	      1u);
  init_symbol(&symbols[41u],
	      "WILL_FIRE_RL_action_l98c11",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l98c11,
	      1u);
  init_symbol(&symbols[42u],
	      "WILL_FIRE_RL_action_l99c14",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l99c14,
	      1u);
}


/* Rule actions */

void MOD_mktbCounter2::RL_counter_do_increment()
{
  tUInt8 DEF_x__h230;
  tUInt8 DEF_y__h251;
  DEF_x_read__h334 = INST_counter_value.METH_read();
  DEF_y__h251 = INST_counter_increment_value.METH_wget();
  DEF_x__h230 = (tUInt8)255u & (DEF_x_read__h334 + DEF_y__h251);
  INST_counter_value.METH_write(DEF_x__h230);
}

void MOD_mktbCounter2::RL_counter_do_decrement()
{
  tUInt8 DEF_x__h304;
  tUInt8 DEF_y__h310;
  DEF_x_read__h334 = INST_counter_value.METH_read();
  DEF_y__h310 = INST_counter_decrement_value.METH_wget();
  DEF_x__h304 = (tUInt8)255u & (DEF_x_read__h334 - DEF_y__h310);
  INST_counter_value.METH_write(DEF_x__h304);
}

void MOD_mktbCounter2::RL_start_reg__dreg_update()
{
  tUInt8 DEF_start_reg_2_whas__4_AND_start_reg_2_wget__5___d16;
  DEF_start_reg_2_whas__4_AND_start_reg_2_wget__5___d16 = INST_start_reg_2.METH_whas() && INST_start_reg_2.METH_wget();
  INST_start_reg_1.METH_write(DEF_start_reg_2_whas__4_AND_start_reg_2_wget__5___d16);
}

void MOD_mktbCounter2::RL_state_handle_abort()
{
  INST_state_mkFSMstate.METH_write((tUInt8)0u);
}

void MOD_mktbCounter2::RL_state_fired__dreg_update()
{
  tUInt8 DEF_state_fired_1_whas__6_AND_state_fired_1_wget__7___d28;
  DEF_state_fired_1_whas__6_AND_state_fired_1_wget__7___d28 = INST_state_fired_1.METH_whas() && INST_state_fired_1.METH_wget();
  INST_state_fired.METH_write(DEF_state_fired_1_whas__6_AND_state_fired_1_wget__7___d28);
}

void MOD_mktbCounter2::RL_state_every()
{
  tUInt8 DEF_state_set_pw_whas__9_OR_NOT_state_overlap_pw_w_ETC___d34;
  tUInt8 DEF_state_can_overlap__h2262;
  DEF_state_can_overlap__h2262 = INST_state_can_overlap.METH_read();
  DEF_state_set_pw_whas__9_OR_NOT_state_overlap_pw_w_ETC___d34 = INST_state_set_pw.METH_whas() || (!INST_state_overlap_pw.METH_whas() && DEF_state_can_overlap__h2262);
  INST_state_can_overlap.METH_write(DEF_state_set_pw_whas__9_OR_NOT_state_overlap_pw_w_ETC___d34);
}

void MOD_mktbCounter2::RL_restart()
{
  INST_start_wire.METH_wset((tUInt8)1u);
  INST_start_reg_2.METH_wset((tUInt8)1u);
}

void MOD_mktbCounter2::RL_action_l97c14()
{
  INST_state_mkFSMstate.METH_write((tUInt8)1u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  INST_counter_value.METH_write((tUInt8)42u);
}

void MOD_mktbCounter2::RL_action_l98c11()
{
  DEF_x_read__h334 = INST_counter_value.METH_read();
  DEF_counter_value_EQ_42___d54 = DEF_x_read__h334 == (tUInt8)42u;
  DEF_NOT_counter_value_EQ_42_4___d55 = !DEF_counter_value_EQ_42___d54;
  INST_state_mkFSMstate.METH_write((tUInt8)2u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_counter_value_EQ_42___d54)
      dollar_display(sim_hdl, this, "s,8", &__str_literal_1, DEF_x_read__h334);
    if (DEF_NOT_counter_value_EQ_42_4___d55)
      dollar_display(sim_hdl, this, "s", &__str_literal_2);
  }
}

void MOD_mktbCounter2::RL_action_l99c14()
{
  INST_state_mkFSMstate.METH_write((tUInt8)3u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  INST_counter_decrement_value.METH_wset((tUInt8)1u);
}

void MOD_mktbCounter2::RL_action_l100c14()
{
  INST_state_mkFSMstate.METH_write((tUInt8)4u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  INST_counter_increment_value.METH_wset((tUInt8)1u);
}

void MOD_mktbCounter2::RL_action_l101c11()
{
  DEF_x_read__h334 = INST_counter_value.METH_read();
  DEF_counter_value_EQ_42___d54 = DEF_x_read__h334 == (tUInt8)42u;
  DEF_NOT_counter_value_EQ_42_4___d55 = !DEF_counter_value_EQ_42___d54;
  INST_state_mkFSMstate.METH_write((tUInt8)5u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_counter_value_EQ_42___d54)
      dollar_display(sim_hdl, this, "s,8", &__str_literal_1, DEF_x_read__h334);
    if (DEF_NOT_counter_value_EQ_42_4___d55)
      dollar_display(sim_hdl, this, "s", &__str_literal_2);
  }
}

void MOD_mktbCounter2::RL_action_l102c7()
{
  INST_state_mkFSMstate.METH_write((tUInt8)6u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_3);
}

void MOD_mktbCounter2::RL_idle_l96c15()
{
  INST_state_mkFSMstate.METH_write((tUInt8)0u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
}

void MOD_mktbCounter2::RL_fsm_start()
{
  INST_start_wire.METH_wset((tUInt8)1u);
  INST_start_reg_2.METH_wset((tUInt8)1u);
  INST_start_reg.METH_write((tUInt8)0u);
}

void MOD_mktbCounter2::RL_auto_start()
{
  INST_start_reg.METH_write((tUInt8)1u);
  INST_running.METH_write((tUInt8)1u);
}

void MOD_mktbCounter2::RL_auto_finish()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_finish(sim_hdl, "32", 0u);
}

void MOD_mktbCounter2::__me_check_7()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l97c14 && ((((DEF_WILL_FIRE_RL_action_l98c11 || DEF_WILL_FIRE_RL_action_l99c14) || DEF_WILL_FIRE_RL_action_l100c14) || DEF_WILL_FIRE_RL_action_l101c11) || DEF_WILL_FIRE_RL_action_l102c7))
      dollar_error(sim_hdl, this, "s", &__str_literal_4);
}

void MOD_mktbCounter2::__me_check_8()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l98c11 && (((DEF_WILL_FIRE_RL_action_l99c14 || DEF_WILL_FIRE_RL_action_l100c14) || DEF_WILL_FIRE_RL_action_l101c11) || DEF_WILL_FIRE_RL_action_l102c7))
      dollar_error(sim_hdl, this, "s", &__str_literal_5);
}

void MOD_mktbCounter2::__me_check_9()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l99c14 && ((DEF_WILL_FIRE_RL_action_l100c14 || DEF_WILL_FIRE_RL_action_l101c11) || DEF_WILL_FIRE_RL_action_l102c7))
      dollar_error(sim_hdl, this, "s", &__str_literal_6);
}

void MOD_mktbCounter2::__me_check_10()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l100c14 && (DEF_WILL_FIRE_RL_action_l101c11 || DEF_WILL_FIRE_RL_action_l102c7))
      dollar_error(sim_hdl, this, "s", &__str_literal_7);
}

void MOD_mktbCounter2::__me_check_11()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l101c11 && DEF_WILL_FIRE_RL_action_l102c7)
      dollar_error(sim_hdl, this, "s", &__str_literal_8);
}


/* Methods */


/* Reset routines */

void MOD_mktbCounter2::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_state_mkFSMstate.reset_RST(ARG_rst_in);
  INST_state_fired.reset_RST(ARG_rst_in);
  INST_state_can_overlap.reset_RST(ARG_rst_in);
  INST_start_reg_1.reset_RST(ARG_rst_in);
  INST_start_reg.reset_RST(ARG_rst_in);
  INST_running.reset_RST(ARG_rst_in);
  INST_counter_value.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mktbCounter2::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mktbCounter2::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_abort.dump_state(indent + 2u);
  INST_counter_decrement_value.dump_state(indent + 2u);
  INST_counter_increment_value.dump_state(indent + 2u);
  INST_counter_value.dump_state(indent + 2u);
  INST_running.dump_state(indent + 2u);
  INST_start_reg.dump_state(indent + 2u);
  INST_start_reg_1.dump_state(indent + 2u);
  INST_start_reg_2.dump_state(indent + 2u);
  INST_start_wire.dump_state(indent + 2u);
  INST_state_can_overlap.dump_state(indent + 2u);
  INST_state_fired.dump_state(indent + 2u);
  INST_state_fired_1.dump_state(indent + 2u);
  INST_state_mkFSMstate.dump_state(indent + 2u);
  INST_state_overlap_pw.dump_state(indent + 2u);
  INST_state_set_pw.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mktbCounter2::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 25u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_counter_value_EQ_42_4___d55", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l100c14", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l101c11", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l102c7", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l97c14", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l98c11", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l99c14", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "counter_value_EQ_42___d54", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x_read__h334", 8u);
  num = INST_abort.dump_VCD_defs(num);
  num = INST_counter_decrement_value.dump_VCD_defs(num);
  num = INST_counter_increment_value.dump_VCD_defs(num);
  num = INST_counter_value.dump_VCD_defs(num);
  num = INST_running.dump_VCD_defs(num);
  num = INST_start_reg.dump_VCD_defs(num);
  num = INST_start_reg_1.dump_VCD_defs(num);
  num = INST_start_reg_2.dump_VCD_defs(num);
  num = INST_start_wire.dump_VCD_defs(num);
  num = INST_state_can_overlap.dump_VCD_defs(num);
  num = INST_state_fired.dump_VCD_defs(num);
  num = INST_state_fired_1.dump_VCD_defs(num);
  num = INST_state_mkFSMstate.dump_VCD_defs(num);
  num = INST_state_overlap_pw.dump_VCD_defs(num);
  num = INST_state_set_pw.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mktbCounter2::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mktbCounter2 &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mktbCounter2::vcd_defs(tVCDDumpType dt, MOD_mktbCounter2 &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 8u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_NOT_counter_value_EQ_42_4___d55) != DEF_NOT_counter_value_EQ_42_4___d55)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_counter_value_EQ_42_4___d55, 1u);
	backing.DEF_NOT_counter_value_EQ_42_4___d55 = DEF_NOT_counter_value_EQ_42_4___d55;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l100c14) != DEF_WILL_FIRE_RL_action_l100c14)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l100c14, 1u);
	backing.DEF_WILL_FIRE_RL_action_l100c14 = DEF_WILL_FIRE_RL_action_l100c14;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l101c11) != DEF_WILL_FIRE_RL_action_l101c11)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l101c11, 1u);
	backing.DEF_WILL_FIRE_RL_action_l101c11 = DEF_WILL_FIRE_RL_action_l101c11;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l102c7) != DEF_WILL_FIRE_RL_action_l102c7)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l102c7, 1u);
	backing.DEF_WILL_FIRE_RL_action_l102c7 = DEF_WILL_FIRE_RL_action_l102c7;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l97c14) != DEF_WILL_FIRE_RL_action_l97c14)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l97c14, 1u);
	backing.DEF_WILL_FIRE_RL_action_l97c14 = DEF_WILL_FIRE_RL_action_l97c14;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l98c11) != DEF_WILL_FIRE_RL_action_l98c11)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l98c11, 1u);
	backing.DEF_WILL_FIRE_RL_action_l98c11 = DEF_WILL_FIRE_RL_action_l98c11;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l99c14) != DEF_WILL_FIRE_RL_action_l99c14)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l99c14, 1u);
	backing.DEF_WILL_FIRE_RL_action_l99c14 = DEF_WILL_FIRE_RL_action_l99c14;
      }
      ++num;
      if ((backing.DEF_counter_value_EQ_42___d54) != DEF_counter_value_EQ_42___d54)
      {
	vcd_write_val(sim_hdl, num, DEF_counter_value_EQ_42___d54, 1u);
	backing.DEF_counter_value_EQ_42___d54 = DEF_counter_value_EQ_42___d54;
      }
      ++num;
      if ((backing.DEF_x_read__h334) != DEF_x_read__h334)
      {
	vcd_write_val(sim_hdl, num, DEF_x_read__h334, 8u);
	backing.DEF_x_read__h334 = DEF_x_read__h334;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_NOT_counter_value_EQ_42_4___d55, 1u);
      backing.DEF_NOT_counter_value_EQ_42_4___d55 = DEF_NOT_counter_value_EQ_42_4___d55;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l100c14, 1u);
      backing.DEF_WILL_FIRE_RL_action_l100c14 = DEF_WILL_FIRE_RL_action_l100c14;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l101c11, 1u);
      backing.DEF_WILL_FIRE_RL_action_l101c11 = DEF_WILL_FIRE_RL_action_l101c11;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l102c7, 1u);
      backing.DEF_WILL_FIRE_RL_action_l102c7 = DEF_WILL_FIRE_RL_action_l102c7;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l97c14, 1u);
      backing.DEF_WILL_FIRE_RL_action_l97c14 = DEF_WILL_FIRE_RL_action_l97c14;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l98c11, 1u);
      backing.DEF_WILL_FIRE_RL_action_l98c11 = DEF_WILL_FIRE_RL_action_l98c11;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l99c14, 1u);
      backing.DEF_WILL_FIRE_RL_action_l99c14 = DEF_WILL_FIRE_RL_action_l99c14;
      vcd_write_val(sim_hdl, num++, DEF_counter_value_EQ_42___d54, 1u);
      backing.DEF_counter_value_EQ_42___d54 = DEF_counter_value_EQ_42___d54;
      vcd_write_val(sim_hdl, num++, DEF_x_read__h334, 8u);
      backing.DEF_x_read__h334 = DEF_x_read__h334;
    }
}

void MOD_mktbCounter2::vcd_prims(tVCDDumpType dt, MOD_mktbCounter2 &backing)
{
  INST_abort.dump_VCD(dt, backing.INST_abort);
  INST_counter_decrement_value.dump_VCD(dt, backing.INST_counter_decrement_value);
  INST_counter_increment_value.dump_VCD(dt, backing.INST_counter_increment_value);
  INST_counter_value.dump_VCD(dt, backing.INST_counter_value);
  INST_running.dump_VCD(dt, backing.INST_running);
  INST_start_reg.dump_VCD(dt, backing.INST_start_reg);
  INST_start_reg_1.dump_VCD(dt, backing.INST_start_reg_1);
  INST_start_reg_2.dump_VCD(dt, backing.INST_start_reg_2);
  INST_start_wire.dump_VCD(dt, backing.INST_start_wire);
  INST_state_can_overlap.dump_VCD(dt, backing.INST_state_can_overlap);
  INST_state_fired.dump_VCD(dt, backing.INST_state_fired);
  INST_state_fired_1.dump_VCD(dt, backing.INST_state_fired_1);
  INST_state_mkFSMstate.dump_VCD(dt, backing.INST_state_mkFSMstate);
  INST_state_overlap_pw.dump_VCD(dt, backing.INST_state_overlap_pw);
  INST_state_set_pw.dump_VCD(dt, backing.INST_state_set_pw);
}

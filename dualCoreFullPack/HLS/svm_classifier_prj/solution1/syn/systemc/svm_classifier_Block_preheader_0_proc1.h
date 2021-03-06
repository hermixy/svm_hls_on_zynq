// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _svm_classifier_Block_preheader_0_proc1_HH_
#define _svm_classifier_Block_preheader_0_proc1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct svm_classifier_Block_preheader_0_proc1 : public sc_module {
    // Port declarations 18
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<18> > p_read;
    sc_in< sc_lv<18> > p_read1;
    sc_in< sc_lv<18> > p_read2;
    sc_in< sc_lv<18> > p_read3;
    sc_in< sc_lv<18> > p_read4;
    sc_in< sc_lv<18> > p_read5;
    sc_in< sc_lv<18> > p_read6;
    sc_in< sc_lv<18> > p_read7;
    sc_in< sc_lv<18> > p_read8;
    sc_out< sc_lv<1> > out_r;
    sc_out< sc_logic > out_r_ap_vld;


    // Module declarations
    svm_classifier_Block_preheader_0_proc1(sc_module_name name);
    SC_HAS_PROCESS(svm_classifier_Block_preheader_0_proc1);

    ~svm_classifier_Block_preheader_0_proc1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_20;
    sc_signal< sc_lv<18> > tmp13_fu_97_p2;
    sc_signal< sc_lv<18> > tmp13_reg_157;
    sc_signal< bool > ap_sig_43;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_55;
    sc_signal< sc_lv<1> > out_r_preg;
    sc_signal< sc_lv<18> > tmp14_fu_91_p2;
    sc_signal< sc_lv<18> > tmp10_fu_109_p2;
    sc_signal< sc_lv<18> > tmp9_fu_103_p2;
    sc_signal< sc_lv<18> > tmp12_fu_121_p2;
    sc_signal< sc_lv<18> > tmp11_fu_127_p2;
    sc_signal< sc_lv<18> > tmp_fu_115_p2;
    sc_signal< sc_lv<18> > p_Val2_80_8_fu_132_p2;
    sc_signal< sc_lv<19> > tmp_15_fu_138_p1;
    sc_signal< sc_lv<19> > r_V_fu_142_p2;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_st1_fsm_0;
    static const sc_lv<2> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<19> ap_const_lv19_E758;
    static const sc_lv<32> ap_const_lv32_12;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_20();
    void thread_ap_sig_43();
    void thread_ap_sig_55();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_out_r();
    void thread_out_r_ap_vld();
    void thread_p_Val2_80_8_fu_132_p2();
    void thread_r_V_fu_142_p2();
    void thread_tmp10_fu_109_p2();
    void thread_tmp11_fu_127_p2();
    void thread_tmp12_fu_121_p2();
    void thread_tmp13_fu_97_p2();
    void thread_tmp14_fu_91_p2();
    void thread_tmp9_fu_103_p2();
    void thread_tmp_15_fu_138_p1();
    void thread_tmp_fu_115_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

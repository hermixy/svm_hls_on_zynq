// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_Loop_Sum_loop_proc1_alpha_V_3_H__
#define __svm_classifier_Loop_Sum_loop_proc1_alpha_V_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_Loop_Sum_loop_proc1_alpha_V_3_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
  static const unsigned AddressRange = 117;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_alpha_V_3_ram) {
        ram[0] = "0b0000010000101";
        ram[1] = "0b0000010000101";
        ram[2] = "0b1001011111110";
        ram[3] = "0b0000010000101";
        ram[4] = "0b0000010000101";
        ram[5] = "0b1110111101011";
        ram[6] = "0b1111011110111";
        for (unsigned i = 7; i < 27 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[27] = "0b1101001000111";
        for (unsigned i = 28; i < 35 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[35] = "0b1110111101011";
        ram[36] = "0b0000010000101";
        ram[37] = "0b0000010000101";
        ram[38] = "0b0000010000101";
        ram[39] = "0b0000010000101";
        ram[40] = "0b1110111101011";
        ram[41] = "0b0000010000101";
        ram[42] = "0b0000010000101";
        ram[43] = "0b0000010000101";
        ram[44] = "0b1111001110000";
        ram[45] = "0b0000010000101";
        ram[46] = "0b0000010000101";
        ram[47] = "0b1110111101011";
        for (unsigned i = 48; i < 83 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[83] = "0b1111001110000";
        for (unsigned i = 84; i < 94 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[94] = "0b1001011111110";
        for (unsigned i = 95; i < 102 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[102] = "0b1111101111010";
        ram[103] = "0b0000010000101";
        ram[104] = "0b0000010000101";
        ram[105] = "0b1111101111010";
        ram[106] = "0b0000010000101";
        ram[107] = "0b0000010000101";
        ram[108] = "0b0000010000101";
        ram[109] = "0b1111101111010";
        ram[110] = "0b0000010000101";
        ram[111] = "0b1111101111010";
        ram[112] = "0b1110101100110";
        ram[113] = "0b0000010000101";
        ram[114] = "0b0000010000101";
        ram[115] = "0b0000010000101";
        ram[116] = "0b0000010000101";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(svm_classifier_Loop_Sum_loop_proc1_alpha_V_3) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 117;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_Loop_Sum_loop_proc1_alpha_V_3_ram* meminst;


SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_alpha_V_3) {
meminst = new svm_classifier_Loop_Sum_loop_proc1_alpha_V_3_ram("svm_classifier_Loop_Sum_loop_proc1_alpha_V_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_Loop_Sum_loop_proc1_alpha_V_3() {
    delete meminst;
}


};//endmodule
#endif
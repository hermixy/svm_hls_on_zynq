// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_Loop_Sum_loop_proc1_alpha_V_13_H__
#define __svm_classifier_Loop_Sum_loop_proc1_alpha_V_13_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_Loop_Sum_loop_proc1_alpha_V_13_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
  static const unsigned AddressRange = 58;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_alpha_V_13_ram) {
        ram[0] = "0b1110101100111";
        for (unsigned i = 1; i < 8 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[8] = "0b1111101111010";
        for (unsigned i = 9; i < 15 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[15] = "0b1111011110101";
        for (unsigned i = 16; i < 25 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[25] = "0b1111101111010";
        ram[26] = "0b1111001110000";
        for (unsigned i = 27; i < 37 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[37] = "0b1001011111110";
        ram[38] = "0b0000010000101";
        ram[39] = "0b1110101100110";
        ram[40] = "0b0000010000101";
        ram[41] = "0b0000010000101";
        ram[42] = "0b1101101010001";
        for (unsigned i = 43; i < 55 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[55] = "0b1111101111010";
        ram[56] = "0b0000010000101";
        ram[57] = "0b0000010000101";


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


SC_MODULE(svm_classifier_Loop_Sum_loop_proc1_alpha_V_13) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 58;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_Loop_Sum_loop_proc1_alpha_V_13_ram* meminst;


SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_alpha_V_13) {
meminst = new svm_classifier_Loop_Sum_loop_proc1_alpha_V_13_ram("svm_classifier_Loop_Sum_loop_proc1_alpha_V_13_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_Loop_Sum_loop_proc1_alpha_V_13() {
    delete meminst;
}


};//endmodule
#endif
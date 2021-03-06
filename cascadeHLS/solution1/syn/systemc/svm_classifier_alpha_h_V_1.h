// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_alpha_h_V_1_H__
#define __svm_classifier_alpha_h_V_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_alpha_h_V_1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
  static const unsigned AddressRange = 30;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(svm_classifier_alpha_h_V_1_ram) {
        ram[0] = "0b0000010000101";
        ram[1] = "0b0000010000101";
        ram[2] = "0b1001011111110";
        ram[3] = "0b0000010000101";
        ram[4] = "0b1111101111010";
        ram[5] = "0b0000010000101";
        ram[6] = "0b0000010000101";
        ram[7] = "0b0000010000101";
        ram[8] = "0b1111101111010";
        for (unsigned i = 9; i < 14 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[14] = "0b1110111101011";
        ram[15] = "0b0000010000101";
        ram[16] = "0b0000010000101";
        ram[17] = "0b0000010000101";
        ram[18] = "0b1111011110101";
        for (unsigned i = 19; i < 25 ; i = i + 1) {
            ram[i] = "0b0000010000101";
        }
        ram[25] = "0b1111011110101";
        ram[26] = "0b0000010000101";
        ram[27] = "0b0000010000101";
        ram[28] = "0b0000010000101";
        ram[29] = "0b0000010000101";


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


SC_MODULE(svm_classifier_alpha_h_V_1) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 30;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_alpha_h_V_1_ram* meminst;


SC_CTOR(svm_classifier_alpha_h_V_1) {
meminst = new svm_classifier_alpha_h_V_1_ram("svm_classifier_alpha_h_V_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_alpha_h_V_1() {
    delete meminst;
}


};//endmodule
#endif

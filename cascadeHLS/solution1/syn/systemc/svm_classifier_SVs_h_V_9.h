// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_SVs_h_V_9_H__
#define __svm_classifier_SVs_h_V_9_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_SVs_h_V_9_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 240;
  static const unsigned AddressRange = 29;
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


   SC_CTOR(svm_classifier_SVs_h_V_9_ram) {
        ram[0] = "0b111110000000110111011110011000111001111011011111100011111010000101111001111111111010011010001001001101000111111101100110111101100101011111101011010110000010001010100111101001111100111101100100010111101110001000111101100010011111011110000101";
        ram[1] = "0b111110000000110111011110011000111001111011011111100011111010000101111001111000000110100110001001001101000000001011000001111101100101011111101011010110000000001100001111011011010011111101100100010111101110001000111110101111110111101110110110";
        ram[2] = "0b000010111101100111011110011000000110111010000111100011111010000010000011110000110111010100111010101101010000100101111000111100000111001000110000000111000110000111010111101001111100111101100100010111101110001000111110101111110111101110110110";
        ram[3] = "0b111110000000110000000011110000000100010011111111110001101001000111110101000000000110100110000111100110000000100101111000000010000000011111101011010110000000001100001111111000100100000001000110101000001101111100000001001010101000010000011000";
        ram[4] = "0b000101011011110001000010000011111111000111101111110001101001111110001101100111101110001111111101111011011000001011000001000100111101000000000110110111111110001101110111111000100100111111010101011111011110001110111111111101001111101110110110";
        ram[5] = "0b000000011111001001000010000011111111000111101111111111011000000000001000101111111010011010111101111011011111111101100110000000100010000000010100100111000010001010100000000111001101000001000110101111111110000010111101100010011111111111100111";
        ram[6] = "0b000000011111001111101010110110000110111010000111100011111010000000001000101000110111010100111111100010100000100101111000111010101000110000100010010111111110001101110111101001111100111101100100010111111110000010111001111010001111101110110110";
        ram[7] = "0b111110000000110111011110011000000110111010000111100011111010000000001000101000110111010100111101111011011000011000011101111101100101011000111101110111000000001100001111101001111100111101100100010111011110001110111110101111110111011110000101";
        ram[8] = "0b000000011111001000110101100110111111000111101111110001101001000000001000101111101110001111111101111011011111111101100110000011011110101000000110110111000010001010100111111000100100111101100100010111011110001110111110101111110111011110000101";
        ram[9] = "0b111011100010100111011110011000000001101101110111111111011000000010000011110000110111010100000100010111110000100101111000000000100010000000000110110111111010010001000111101001111100111101100100010000001101111100111110101111110000010000011000";
        ram[10] = "0b000111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111101111011011111110000001010000110011011010000100010010111111110001101110111111000100100000010110111110111111110000010000010011000000111111111100111";
        ram[11] = "0b000010111101100000011100101011111111000111101111111111011000000101111001111000000110100110000101111110111111111101100110111101100101011111011101100110000000001100001111111000100100111111010101011111111110000010000010011000000000010000011000";
        ram[12] = "0b000101011011110000110101100110111111000111101000011010110111000011111110111111111010011010111101111011011111010101010011000010000000011111111001000111000010001010100001010000011000000100101001000000111101101001000011100101011000110001111010";
        ram[13] = "0b111110000000110001001110100000111111000111101111111111011000000000001000101111101110001111111111100010100111100010101111000000100010000000000110110111000010001010100000010101110101111111010101011111101110001000111111111101001111101110110110";
        ram[14] = "0b111110000000110111011110011000000100010011111000011010110111000010000011110000011110111101111010101101010000001011000001000000100010000000000110110111000000001100001111101001111100111011110011000111101110001000111100010101000111101110110110";
        ram[15] = "0b000010111101100111110111010011111001111011011111100011111010000011111110111111001001101100000001001001101000011000011101111010101000110111001111110110000010001010100111111000100100000001000110101111101110001000000001001010101111101110110110";
        ram[16] = "0b000000011111001111110111010011111100100001100111010110001010000101111001111111001001101100000001001001101000110011010100111001001010100111001111110110000000001100001111111000100100000010110111110111111110000010000011100101011111111111100111";
        ram[17] = "0b000000011111001000000011110000000100010011111111110001101001000111110101000111111010011010000100010111110000011000011101000010000000011111101011010110000010001010100111111000100100111111010101011000001101111100111111111101001000010000011000";
        ram[18] = "0b111001000100001000011100101011111100100001100000001101000111000010000011110111101110001111111100010100011111110000001010111101100101011000000110110111111100001111011000010101110101111111010101011111111110000010111111111101001111101110110110";
        ram[19] = "0b111110000000110111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000001011000001111111000011110000111101110111000000001100001111101001111100111011110011000111101110001000111100010101000111101110110110";
        ram[20] = "0b111110000000110111011110011000111001111011011111100011111010001011101011010000010010110001001001001101000111110000001010000010000000011111001111110110000010001010100111101001111100111111010101011111111110000010111111111101001111101110110110";
        ram[21] = "0b111001000100001111101010110110000110111010000111100011111010111100010010011000110111010100000100010111110000011000011101111100000111001000100010010111111010010001000111101001111100111101100100010111101110001000111101100010011111101110110110";
        ram[22] = "0b111011100010100111110111010011111100100001100111100011111010000010000011110110111101100001111010101101010000110011010100111100000111001111011101100110111010010001000111101001111100000001000110101111111110000010000001001010101111111111100111";
        ram[23] = "0b000000011111001000011100101011111111000111101111111111011000000101111001111111100010000011111100010100011001000000101111000011011110101111111001000111111110001101110000110011000111000100101001000000011101110110000100110010110000010000011000";
        ram[24] = "0b111110000000110111101010110110000001101101110111111111011000000010000011110000101011001000000100010111110000011000011101000000100010000000000110110111111010010001000111101001111100111101100100010111111110000010111101100010011111111111100111";
        ram[25] = "0b000111111010001000010000001110111111000111101111111111011000000000001000101111100010000011000100010111110000011000011101111010101000110111101011010110000110000111010000010101110101111111010101011000001101111100111111111101001111111111100111";
        ram[26] = "0b000111111010001001000010000011000100010011111000011010110111000010000011110000000110100110111111100010100111110000001010111111000011110000000110110111111110001101110000110011000111000100101001000000001101111100000010011000000000010000011000";
        ram[27] = "0b000000011111001001000010000011000001101101110111010110001010000011111110111111111010011010111010101101010000110011010100000010000000011111101011010110000000001100001111111000100100000010110111110111111110000010111101100010011111111111100111";
        ram[28] = "0b111001000100001111011110011000000100010011111111010110001010111010010111010000101011001000000100010111110000011000011101111100000111001000110000000111111010010001000111011011010011111011110011000111011110001110111100010101000111011110000101";


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


SC_MODULE(svm_classifier_SVs_h_V_9) {


static const unsigned DataWidth = 240;
static const unsigned AddressRange = 29;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_SVs_h_V_9_ram* meminst;


SC_CTOR(svm_classifier_SVs_h_V_9) {
meminst = new svm_classifier_SVs_h_V_9_ram("svm_classifier_SVs_h_V_9_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_SVs_h_V_9() {
    delete meminst;
}


};//endmodule
#endif
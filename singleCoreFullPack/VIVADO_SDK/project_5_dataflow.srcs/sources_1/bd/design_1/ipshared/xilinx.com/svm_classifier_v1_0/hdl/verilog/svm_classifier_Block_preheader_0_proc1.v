// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module svm_classifier_Block_preheader_0_proc1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        p_read,
        p_read1,
        p_read2,
        p_read3,
        p_read4,
        p_read5,
        p_read6,
        p_read7,
        p_read8,
        p_read9,
        p_read10,
        p_read11,
        p_read12,
        p_read13,
        p_read14,
        p_read15,
        p_read16,
        p_read17,
        out_r,
        out_r_ap_vld
);

parameter    ap_ST_st1_fsm_0 = 2'b1;
parameter    ap_ST_st2_fsm_1 = 2'b10;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv19_E758 = 19'b1110011101011000;
parameter    ap_const_lv32_12 = 32'b10010;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [17:0] p_read;
input  [17:0] p_read1;
input  [17:0] p_read2;
input  [17:0] p_read3;
input  [17:0] p_read4;
input  [17:0] p_read5;
input  [17:0] p_read6;
input  [17:0] p_read7;
input  [17:0] p_read8;
input  [17:0] p_read9;
input  [17:0] p_read10;
input  [17:0] p_read11;
input  [17:0] p_read12;
input  [17:0] p_read13;
input  [17:0] p_read14;
input  [17:0] p_read15;
input  [17:0] p_read16;
input  [17:0] p_read17;
output  [0:0] out_r;
output   out_r_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg out_r_ap_vld;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_20;
wire   [17:0] tmp18_fu_175_p2;
reg   [17:0] tmp18_reg_281;
reg    ap_sig_52;
wire   [17:0] tmp21_fu_199_p2;
reg   [17:0] tmp21_reg_286;
wire   [17:0] tmp25_fu_247_p2;
reg   [17:0] tmp25_reg_291;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_83;
wire   [17:0] tmp20_fu_169_p2;
wire   [17:0] tmp19_fu_163_p2;
wire   [17:0] tmp24_fu_187_p2;
wire   [17:0] tmp23_fu_193_p2;
wire   [17:0] tmp22_fu_181_p2;
wire   [17:0] tmp28_fu_211_p2;
wire   [17:0] tmp27_fu_205_p2;
wire   [17:0] tmp32_fu_229_p2;
wire   [17:0] tmp31_fu_235_p2;
wire   [17:0] tmp30_fu_223_p2;
wire   [17:0] tmp29_fu_241_p2;
wire   [17:0] tmp26_fu_217_p2;
wire   [17:0] tmp_fu_253_p2;
wire   [17:0] p_Val2_80_s_fu_257_p2;
wire  signed [18:0] tmp_15_fu_262_p1;
wire   [18:0] r_V_fu_266_p2;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 2'b1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_continue)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_52)) begin
        tmp18_reg_281 <= tmp18_fu_175_p2;
        tmp21_reg_286 <= tmp21_fu_199_p2;
        tmp25_reg_291 <= tmp25_fu_247_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_done_reg) | (1'b1 == ap_sig_cseq_ST_st2_fsm_1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_20) begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_83) begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        out_r_ap_vld = 1'b1;
    end else begin
        out_r_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : begin
            if (~ap_sig_52) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

always @ (*) begin
    ap_sig_20 = (ap_CS_fsm[ap_const_lv32_0] == 1'b1);
end

always @ (*) begin
    ap_sig_52 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_sig_83 = (1'b1 == ap_CS_fsm[ap_const_lv32_1]);
end

assign out_r = r_V_fu_266_p2[ap_const_lv32_12];

assign p_Val2_80_s_fu_257_p2 = (tmp25_reg_291 + tmp_fu_253_p2);

assign r_V_fu_266_p2 = ($signed(tmp_15_fu_262_p1) + $signed(ap_const_lv19_E758));

assign tmp18_fu_175_p2 = (tmp20_fu_169_p2 + tmp19_fu_163_p2);

assign tmp19_fu_163_p2 = (p_read + p_read1);

assign tmp20_fu_169_p2 = (p_read2 + p_read3);

assign tmp21_fu_199_p2 = (tmp23_fu_193_p2 + tmp22_fu_181_p2);

assign tmp22_fu_181_p2 = (p_read4 + p_read5);

assign tmp23_fu_193_p2 = (tmp24_fu_187_p2 + p_read6);

assign tmp24_fu_187_p2 = (p_read7 + p_read8);

assign tmp25_fu_247_p2 = (tmp29_fu_241_p2 + tmp26_fu_217_p2);

assign tmp26_fu_217_p2 = (tmp28_fu_211_p2 + tmp27_fu_205_p2);

assign tmp27_fu_205_p2 = (p_read9 + p_read10);

assign tmp28_fu_211_p2 = (p_read11 + p_read12);

assign tmp29_fu_241_p2 = (tmp31_fu_235_p2 + tmp30_fu_223_p2);

assign tmp30_fu_223_p2 = (p_read13 + p_read14);

assign tmp31_fu_235_p2 = (tmp32_fu_229_p2 + p_read15);

assign tmp32_fu_229_p2 = (p_read16 + p_read17);

assign tmp_15_fu_262_p1 = $signed(p_Val2_80_s_fu_257_p2);

assign tmp_fu_253_p2 = (tmp21_reg_286 + tmp18_reg_281);

endmodule //svm_classifier_Block_preheader_0_proc1
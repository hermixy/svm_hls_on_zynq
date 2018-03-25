-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity svm_classifier_SVs_h_V_6_rom is 
    generic(
             dwidth     : integer := 240; 
             awidth     : integer := 5; 
             mem_size    : integer := 29
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of svm_classifier_SVs_h_V_6_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "000111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111101111011011111100010101111000110011011010000100010010111111100001111011000000111001101000100101001000000001101111100111101100010011000010000011000", 
    1 => "000000011111001111110111010011111111000111101111111111011000000101111001111000011110111101000010110000110000001011000001111100000111001111111001000111111010010001000000000111001101111111010101011000001101111100111111111101001111111111100111", 
    2 => "000111111010001000010000001110111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000100111101000000110000000111111100001111011111101001111100111101100100010111011110001110111111111101001111101110110110", 
    3 => "000101011011110000110101100110111111000111101111110001101001111110001101100111111010011010111101111011011000001011000001000110011011010000000110110111111110001101110111111000100100111101100100010111011110001110111110101111110111101110110110", 
    4 => "111110000000110000101001001000000001101101110111110001101001000000001000101111111010011010111101111011011111110000001010111100000111001111111001000111000000001100001000000111001101111101100100010111111110000010111101100010011111111111100111", 
    5 => "111110000000110111011110011000000110111010000111100011111010000000001000101001000011100000111111100010100000100101111000111100000111001000111101110111111110001101110111111000100100000001000110101111111110000010000001001010101111101110110110", 
    6 => "000000011111001111010001111011111001111011011111100011111010001001110000001111100010000011000111100110000111110000001010000100111101000110110100010110001100000010011111011011010011111101100100010111011110001110111110101111110111011110000101", 
    7 => "000101011011110001000010000011111111000111101111110001101001111110001101100111101110001111111101111011011000011000011101000110011011010000000110110111111110001101110000000111001101000100101001000111111110000010111101100010011000010000011000", 
    8 => "000101011011110001000010000011111111000111101111110001101001111100010010011111111010011010111101111011011000001011000001000100111101000111111001000111111110001101110111111000100100111111010101011111101110001000111011000111100111111111100111", 
    9 => "111001000100001111110111010011000110111010000111100011111010111100010010011000101011001000000100010111110000011000011101111100000111001000100010010111111010010001000111101001111100111101100100010111101110001000111101100010011111101110110110", 
    10 => "111110000000110111101010110110000001101101110111111111011000000010000011110000011110111101000010110000110000001011000001000000100010000000000110110111111010010001000111101001111100111101100100010111111110000010111110101111110111111111100111", 
    11 => "000000011111001111110111010011111111000111101111111111011000000011111110111000000110100110000010110000110000001011000001111010101000110111111001000111111110001101110000010101110101111101100100010000011101110110111110101111110000010000011000", 
    12 => "000000011111001111010001111011111001111011011111100011111010001001110000001000000110100110000101111110111111100010101111000111111001101111000010000110001000000101101111011011010011111111010101011111001110010101111111111101001111001101010100", 
    13 => "000101011011110001000010000011111111000111101111111111011000111110001101100111111010011010111101111011011000011000011101000111111001101111111001000111111110001101110000000111001101000100101001000111101110001000111110101111110111111111100111", 
    14 => "000000011111001000110101100110111111000111101111010110001010000000001000101111111010011010111101111011011000011000011101111100000111001000000110110111000000001100001000010101110101111101100100010111111110000010111110101111110111101110110110", 
    15 => "000111111010001000010000001110111100100001100111111111011000000010000011110111100010000011111101111011011111110000001010000100111101000000100010010111111100001111011111101001111100111101100100010111011110001110111111111101001111011110000101", 
    16 => "111011100010100000000011110000111111000111101111110001101001000010000011110000010010110001000100010111110000100101111000111100000111001000000110110111111100001111011111101001111100111010000001111111101110001000111011000111100111011110000101", 
    17 => "000101011011110000101001001000111100100001100000001101000111000101111001111111111010011010111100010100011111100010101111000011011110101000010100100111000010001010100000010101110101111111010101011000001101111100111111111101001111111111100111", 
    18 => "111011100010100000101001001000111111000111101111010110001010001101100110011111111010011010111101111011011001011011100110000010000000011111111001000111111000010010101111111000100100000010110111110111111110000010111101100010011000010000011000", 
    19 => "000000011111001111101010110110111100100001100111010110001010000010000011110111111010011010000111100110000000011000011101111001001010100111101011010110000010001010100111101001111100111111010101011111101110001000111111111101001111101110110110", 
    20 => "111110000000110111101010110110000001101101110111111111011000000010000011110000101011001000000010110000110000001011000001000000100010000000010100100111111000010010101111111000100100111111010101011111111110000010111111111101001000010000011000", 
    21 => "111110000000110111101010110110111111000111101111010110001010000000001000101000110111010100000100010111110111110000001010111101100101011000110000000111110100010101111111111000100100000001000110101111101110001000000001001010101111111111100111", 
    22 => "000000011111001001000010000011000001101101110111010110001010000011111110111000000110100110111010101101010001000000101111000010000000011111101011010110000000001100001111101001111100000010110111110111101110001000000010011000000111101110110110", 
    23 => "000000011111001111110111010011000001101101110000011010110111000101111001111111111010011010111111100010100111110000001010111101100101011111101011010110111110001101110000000111001101111101100100010111111110000010111110101111110111101110110110", 
    24 => "000111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111101111011011111110000001010000110011011010000100010010111111110001101110111111000100100000001000110101111111110000010000001001010101111111111100111", 
    25 => "000101011011110000010000001110111111000111101111110001101001000010000011110111111010011010111101111011011000011000011101000000100010000111111001000111000000001100001111101001111100111011110011000111011110001110111100010101000111011110000101", 
    26 => "111110000000110111011110011000111001111011011111100011111010000011111110111111101110001111001010110100001000011000011101111101100101011111101011010110000010001010100111101001111100111101100100010111111110000010111101100010011111101110110110", 
    27 => "111110000000110001001110100000111100100001100111100011111010000011111110111111111010011010111101111011011000011000011101111101100101011111101011010110111110001101110000000111001101111111010101011111101110001000111111111101001111101110110110", 
    28 => "000111111010001000011100101011111100100001100111110001101001000000001000101000000110100110111100010100011000011000011101000100111101000000000110110111000010001010100111101001111100000001000110101111101110001000111100010101000111101110110110" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

attribute EQUIVALENT_REGISTER_REMOVAL : string;
begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity svm_classifier_SVs_h_V_6 is
    generic (
        DataWidth : INTEGER := 240;
        AddressRange : INTEGER := 29;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of svm_classifier_SVs_h_V_6 is
    component svm_classifier_SVs_h_V_6_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    svm_classifier_SVs_h_V_6_rom_U :  component svm_classifier_SVs_h_V_6_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


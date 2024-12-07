#include "asm/riscv/init.hpp"

#include "LIEF/asm/riscv/registers.hpp"

namespace LIEF::assembly::riscv::py {
template<>
void create<LIEF::assembly::riscv::REG>(nb::module_& m) {
  nb::enum_<LIEF::assembly::riscv::REG> reg(m, "REG");
  reg.value("NoRegister", LIEF::assembly::riscv::REG::NoRegister)
  .value("FFLAGS", LIEF::assembly::riscv::REG::FFLAGS)
  .value("FRM", LIEF::assembly::riscv::REG::FRM)
  .value("SSP", LIEF::assembly::riscv::REG::SSP)
  .value("VCIX_STATE", LIEF::assembly::riscv::REG::VCIX_STATE)
  .value("VL", LIEF::assembly::riscv::REG::VL)
  .value("VLENB", LIEF::assembly::riscv::REG::VLENB)
  .value("VTYPE", LIEF::assembly::riscv::REG::VTYPE)
  .value("VXRM", LIEF::assembly::riscv::REG::VXRM)
  .value("VXSAT", LIEF::assembly::riscv::REG::VXSAT)
  .value("DUMMY_REG_PAIR_WITH_X0", LIEF::assembly::riscv::REG::DUMMY_REG_PAIR_WITH_X0)
  .value("V0", LIEF::assembly::riscv::REG::V0)
  .value("V1", LIEF::assembly::riscv::REG::V1)
  .value("V2", LIEF::assembly::riscv::REG::V2)
  .value("V3", LIEF::assembly::riscv::REG::V3)
  .value("V4", LIEF::assembly::riscv::REG::V4)
  .value("V5", LIEF::assembly::riscv::REG::V5)
  .value("V6", LIEF::assembly::riscv::REG::V6)
  .value("V7", LIEF::assembly::riscv::REG::V7)
  .value("V8", LIEF::assembly::riscv::REG::V8)
  .value("V9", LIEF::assembly::riscv::REG::V9)
  .value("V10", LIEF::assembly::riscv::REG::V10)
  .value("V11", LIEF::assembly::riscv::REG::V11)
  .value("V12", LIEF::assembly::riscv::REG::V12)
  .value("V13", LIEF::assembly::riscv::REG::V13)
  .value("V14", LIEF::assembly::riscv::REG::V14)
  .value("V15", LIEF::assembly::riscv::REG::V15)
  .value("V16", LIEF::assembly::riscv::REG::V16)
  .value("V17", LIEF::assembly::riscv::REG::V17)
  .value("V18", LIEF::assembly::riscv::REG::V18)
  .value("V19", LIEF::assembly::riscv::REG::V19)
  .value("V20", LIEF::assembly::riscv::REG::V20)
  .value("V21", LIEF::assembly::riscv::REG::V21)
  .value("V22", LIEF::assembly::riscv::REG::V22)
  .value("V23", LIEF::assembly::riscv::REG::V23)
  .value("V24", LIEF::assembly::riscv::REG::V24)
  .value("V25", LIEF::assembly::riscv::REG::V25)
  .value("V26", LIEF::assembly::riscv::REG::V26)
  .value("V27", LIEF::assembly::riscv::REG::V27)
  .value("V28", LIEF::assembly::riscv::REG::V28)
  .value("V29", LIEF::assembly::riscv::REG::V29)
  .value("V30", LIEF::assembly::riscv::REG::V30)
  .value("V31", LIEF::assembly::riscv::REG::V31)
  .value("X0", LIEF::assembly::riscv::REG::X0)
  .value("X1", LIEF::assembly::riscv::REG::X1)
  .value("X2", LIEF::assembly::riscv::REG::X2)
  .value("X3", LIEF::assembly::riscv::REG::X3)
  .value("X4", LIEF::assembly::riscv::REG::X4)
  .value("X5", LIEF::assembly::riscv::REG::X5)
  .value("X6", LIEF::assembly::riscv::REG::X6)
  .value("X7", LIEF::assembly::riscv::REG::X7)
  .value("X8", LIEF::assembly::riscv::REG::X8)
  .value("X9", LIEF::assembly::riscv::REG::X9)
  .value("X10", LIEF::assembly::riscv::REG::X10)
  .value("X11", LIEF::assembly::riscv::REG::X11)
  .value("X12", LIEF::assembly::riscv::REG::X12)
  .value("X13", LIEF::assembly::riscv::REG::X13)
  .value("X14", LIEF::assembly::riscv::REG::X14)
  .value("X15", LIEF::assembly::riscv::REG::X15)
  .value("X16", LIEF::assembly::riscv::REG::X16)
  .value("X17", LIEF::assembly::riscv::REG::X17)
  .value("X18", LIEF::assembly::riscv::REG::X18)
  .value("X19", LIEF::assembly::riscv::REG::X19)
  .value("X20", LIEF::assembly::riscv::REG::X20)
  .value("X21", LIEF::assembly::riscv::REG::X21)
  .value("X22", LIEF::assembly::riscv::REG::X22)
  .value("X23", LIEF::assembly::riscv::REG::X23)
  .value("X24", LIEF::assembly::riscv::REG::X24)
  .value("X25", LIEF::assembly::riscv::REG::X25)
  .value("X26", LIEF::assembly::riscv::REG::X26)
  .value("X27", LIEF::assembly::riscv::REG::X27)
  .value("X28", LIEF::assembly::riscv::REG::X28)
  .value("X29", LIEF::assembly::riscv::REG::X29)
  .value("X30", LIEF::assembly::riscv::REG::X30)
  .value("X31", LIEF::assembly::riscv::REG::X31)
  .value("F0_D", LIEF::assembly::riscv::REG::F0_D)
  .value("F1_D", LIEF::assembly::riscv::REG::F1_D)
  .value("F2_D", LIEF::assembly::riscv::REG::F2_D)
  .value("F3_D", LIEF::assembly::riscv::REG::F3_D)
  .value("F4_D", LIEF::assembly::riscv::REG::F4_D)
  .value("F5_D", LIEF::assembly::riscv::REG::F5_D)
  .value("F6_D", LIEF::assembly::riscv::REG::F6_D)
  .value("F7_D", LIEF::assembly::riscv::REG::F7_D)
  .value("F8_D", LIEF::assembly::riscv::REG::F8_D)
  .value("F9_D", LIEF::assembly::riscv::REG::F9_D)
  .value("F10_D", LIEF::assembly::riscv::REG::F10_D)
  .value("F11_D", LIEF::assembly::riscv::REG::F11_D)
  .value("F12_D", LIEF::assembly::riscv::REG::F12_D)
  .value("F13_D", LIEF::assembly::riscv::REG::F13_D)
  .value("F14_D", LIEF::assembly::riscv::REG::F14_D)
  .value("F15_D", LIEF::assembly::riscv::REG::F15_D)
  .value("F16_D", LIEF::assembly::riscv::REG::F16_D)
  .value("F17_D", LIEF::assembly::riscv::REG::F17_D)
  .value("F18_D", LIEF::assembly::riscv::REG::F18_D)
  .value("F19_D", LIEF::assembly::riscv::REG::F19_D)
  .value("F20_D", LIEF::assembly::riscv::REG::F20_D)
  .value("F21_D", LIEF::assembly::riscv::REG::F21_D)
  .value("F22_D", LIEF::assembly::riscv::REG::F22_D)
  .value("F23_D", LIEF::assembly::riscv::REG::F23_D)
  .value("F24_D", LIEF::assembly::riscv::REG::F24_D)
  .value("F25_D", LIEF::assembly::riscv::REG::F25_D)
  .value("F26_D", LIEF::assembly::riscv::REG::F26_D)
  .value("F27_D", LIEF::assembly::riscv::REG::F27_D)
  .value("F28_D", LIEF::assembly::riscv::REG::F28_D)
  .value("F29_D", LIEF::assembly::riscv::REG::F29_D)
  .value("F30_D", LIEF::assembly::riscv::REG::F30_D)
  .value("F31_D", LIEF::assembly::riscv::REG::F31_D)
  .value("F0_F", LIEF::assembly::riscv::REG::F0_F)
  .value("F1_F", LIEF::assembly::riscv::REG::F1_F)
  .value("F2_F", LIEF::assembly::riscv::REG::F2_F)
  .value("F3_F", LIEF::assembly::riscv::REG::F3_F)
  .value("F4_F", LIEF::assembly::riscv::REG::F4_F)
  .value("F5_F", LIEF::assembly::riscv::REG::F5_F)
  .value("F6_F", LIEF::assembly::riscv::REG::F6_F)
  .value("F7_F", LIEF::assembly::riscv::REG::F7_F)
  .value("F8_F", LIEF::assembly::riscv::REG::F8_F)
  .value("F9_F", LIEF::assembly::riscv::REG::F9_F)
  .value("F10_F", LIEF::assembly::riscv::REG::F10_F)
  .value("F11_F", LIEF::assembly::riscv::REG::F11_F)
  .value("F12_F", LIEF::assembly::riscv::REG::F12_F)
  .value("F13_F", LIEF::assembly::riscv::REG::F13_F)
  .value("F14_F", LIEF::assembly::riscv::REG::F14_F)
  .value("F15_F", LIEF::assembly::riscv::REG::F15_F)
  .value("F16_F", LIEF::assembly::riscv::REG::F16_F)
  .value("F17_F", LIEF::assembly::riscv::REG::F17_F)
  .value("F18_F", LIEF::assembly::riscv::REG::F18_F)
  .value("F19_F", LIEF::assembly::riscv::REG::F19_F)
  .value("F20_F", LIEF::assembly::riscv::REG::F20_F)
  .value("F21_F", LIEF::assembly::riscv::REG::F21_F)
  .value("F22_F", LIEF::assembly::riscv::REG::F22_F)
  .value("F23_F", LIEF::assembly::riscv::REG::F23_F)
  .value("F24_F", LIEF::assembly::riscv::REG::F24_F)
  .value("F25_F", LIEF::assembly::riscv::REG::F25_F)
  .value("F26_F", LIEF::assembly::riscv::REG::F26_F)
  .value("F27_F", LIEF::assembly::riscv::REG::F27_F)
  .value("F28_F", LIEF::assembly::riscv::REG::F28_F)
  .value("F29_F", LIEF::assembly::riscv::REG::F29_F)
  .value("F30_F", LIEF::assembly::riscv::REG::F30_F)
  .value("F31_F", LIEF::assembly::riscv::REG::F31_F)
  .value("F0_H", LIEF::assembly::riscv::REG::F0_H)
  .value("F1_H", LIEF::assembly::riscv::REG::F1_H)
  .value("F2_H", LIEF::assembly::riscv::REG::F2_H)
  .value("F3_H", LIEF::assembly::riscv::REG::F3_H)
  .value("F4_H", LIEF::assembly::riscv::REG::F4_H)
  .value("F5_H", LIEF::assembly::riscv::REG::F5_H)
  .value("F6_H", LIEF::assembly::riscv::REG::F6_H)
  .value("F7_H", LIEF::assembly::riscv::REG::F7_H)
  .value("F8_H", LIEF::assembly::riscv::REG::F8_H)
  .value("F9_H", LIEF::assembly::riscv::REG::F9_H)
  .value("F10_H", LIEF::assembly::riscv::REG::F10_H)
  .value("F11_H", LIEF::assembly::riscv::REG::F11_H)
  .value("F12_H", LIEF::assembly::riscv::REG::F12_H)
  .value("F13_H", LIEF::assembly::riscv::REG::F13_H)
  .value("F14_H", LIEF::assembly::riscv::REG::F14_H)
  .value("F15_H", LIEF::assembly::riscv::REG::F15_H)
  .value("F16_H", LIEF::assembly::riscv::REG::F16_H)
  .value("F17_H", LIEF::assembly::riscv::REG::F17_H)
  .value("F18_H", LIEF::assembly::riscv::REG::F18_H)
  .value("F19_H", LIEF::assembly::riscv::REG::F19_H)
  .value("F20_H", LIEF::assembly::riscv::REG::F20_H)
  .value("F21_H", LIEF::assembly::riscv::REG::F21_H)
  .value("F22_H", LIEF::assembly::riscv::REG::F22_H)
  .value("F23_H", LIEF::assembly::riscv::REG::F23_H)
  .value("F24_H", LIEF::assembly::riscv::REG::F24_H)
  .value("F25_H", LIEF::assembly::riscv::REG::F25_H)
  .value("F26_H", LIEF::assembly::riscv::REG::F26_H)
  .value("F27_H", LIEF::assembly::riscv::REG::F27_H)
  .value("F28_H", LIEF::assembly::riscv::REG::F28_H)
  .value("F29_H", LIEF::assembly::riscv::REG::F29_H)
  .value("F30_H", LIEF::assembly::riscv::REG::F30_H)
  .value("F31_H", LIEF::assembly::riscv::REG::F31_H)
  .value("X0_Pair", LIEF::assembly::riscv::REG::X0_Pair)
  .value("V0M2", LIEF::assembly::riscv::REG::V0M2)
  .value("V0M4", LIEF::assembly::riscv::REG::V0M4)
  .value("V0M8", LIEF::assembly::riscv::REG::V0M8)
  .value("V2M2", LIEF::assembly::riscv::REG::V2M2)
  .value("V4M2", LIEF::assembly::riscv::REG::V4M2)
  .value("V4M4", LIEF::assembly::riscv::REG::V4M4)
  .value("V6M2", LIEF::assembly::riscv::REG::V6M2)
  .value("V8M2", LIEF::assembly::riscv::REG::V8M2)
  .value("V8M4", LIEF::assembly::riscv::REG::V8M4)
  .value("V8M8", LIEF::assembly::riscv::REG::V8M8)
  .value("V10M2", LIEF::assembly::riscv::REG::V10M2)
  .value("V12M2", LIEF::assembly::riscv::REG::V12M2)
  .value("V12M4", LIEF::assembly::riscv::REG::V12M4)
  .value("V14M2", LIEF::assembly::riscv::REG::V14M2)
  .value("V16M2", LIEF::assembly::riscv::REG::V16M2)
  .value("V16M4", LIEF::assembly::riscv::REG::V16M4)
  .value("V16M8", LIEF::assembly::riscv::REG::V16M8)
  .value("V18M2", LIEF::assembly::riscv::REG::V18M2)
  .value("V20M2", LIEF::assembly::riscv::REG::V20M2)
  .value("V20M4", LIEF::assembly::riscv::REG::V20M4)
  .value("V22M2", LIEF::assembly::riscv::REG::V22M2)
  .value("V24M2", LIEF::assembly::riscv::REG::V24M2)
  .value("V24M4", LIEF::assembly::riscv::REG::V24M4)
  .value("V24M8", LIEF::assembly::riscv::REG::V24M8)
  .value("V26M2", LIEF::assembly::riscv::REG::V26M2)
  .value("V28M2", LIEF::assembly::riscv::REG::V28M2)
  .value("V28M4", LIEF::assembly::riscv::REG::V28M4)
  .value("V30M2", LIEF::assembly::riscv::REG::V30M2)
  .value("X2_X3", LIEF::assembly::riscv::REG::X2_X3)
  .value("X4_X5", LIEF::assembly::riscv::REG::X4_X5)
  .value("X6_X7", LIEF::assembly::riscv::REG::X6_X7)
  .value("X8_X9", LIEF::assembly::riscv::REG::X8_X9)
  .value("X10_X11", LIEF::assembly::riscv::REG::X10_X11)
  .value("X12_X13", LIEF::assembly::riscv::REG::X12_X13)
  .value("X14_X15", LIEF::assembly::riscv::REG::X14_X15)
  .value("X16_X17", LIEF::assembly::riscv::REG::X16_X17)
  .value("X18_X19", LIEF::assembly::riscv::REG::X18_X19)
  .value("X20_X21", LIEF::assembly::riscv::REG::X20_X21)
  .value("X22_X23", LIEF::assembly::riscv::REG::X22_X23)
  .value("X24_X25", LIEF::assembly::riscv::REG::X24_X25)
  .value("X26_X27", LIEF::assembly::riscv::REG::X26_X27)
  .value("X28_X29", LIEF::assembly::riscv::REG::X28_X29)
  .value("X30_X31", LIEF::assembly::riscv::REG::X30_X31)
  .value("V1_V2", LIEF::assembly::riscv::REG::V1_V2)
  .value("V2_V3", LIEF::assembly::riscv::REG::V2_V3)
  .value("V3_V4", LIEF::assembly::riscv::REG::V3_V4)
  .value("V4_V5", LIEF::assembly::riscv::REG::V4_V5)
  .value("V5_V6", LIEF::assembly::riscv::REG::V5_V6)
  .value("V6_V7", LIEF::assembly::riscv::REG::V6_V7)
  .value("V7_V8", LIEF::assembly::riscv::REG::V7_V8)
  .value("V8_V9", LIEF::assembly::riscv::REG::V8_V9)
  .value("V9_V10", LIEF::assembly::riscv::REG::V9_V10)
  .value("V10_V11", LIEF::assembly::riscv::REG::V10_V11)
  .value("V11_V12", LIEF::assembly::riscv::REG::V11_V12)
  .value("V12_V13", LIEF::assembly::riscv::REG::V12_V13)
  .value("V13_V14", LIEF::assembly::riscv::REG::V13_V14)
  .value("V14_V15", LIEF::assembly::riscv::REG::V14_V15)
  .value("V15_V16", LIEF::assembly::riscv::REG::V15_V16)
  .value("V16_V17", LIEF::assembly::riscv::REG::V16_V17)
  .value("V17_V18", LIEF::assembly::riscv::REG::V17_V18)
  .value("V18_V19", LIEF::assembly::riscv::REG::V18_V19)
  .value("V19_V20", LIEF::assembly::riscv::REG::V19_V20)
  .value("V20_V21", LIEF::assembly::riscv::REG::V20_V21)
  .value("V21_V22", LIEF::assembly::riscv::REG::V21_V22)
  .value("V22_V23", LIEF::assembly::riscv::REG::V22_V23)
  .value("V23_V24", LIEF::assembly::riscv::REG::V23_V24)
  .value("V24_V25", LIEF::assembly::riscv::REG::V24_V25)
  .value("V25_V26", LIEF::assembly::riscv::REG::V25_V26)
  .value("V26_V27", LIEF::assembly::riscv::REG::V26_V27)
  .value("V27_V28", LIEF::assembly::riscv::REG::V27_V28)
  .value("V28_V29", LIEF::assembly::riscv::REG::V28_V29)
  .value("V29_V30", LIEF::assembly::riscv::REG::V29_V30)
  .value("V30_V31", LIEF::assembly::riscv::REG::V30_V31)
  .value("V0_V1", LIEF::assembly::riscv::REG::V0_V1)
  .value("V2M2_V4M2", LIEF::assembly::riscv::REG::V2M2_V4M2)
  .value("V4M2_V6M2", LIEF::assembly::riscv::REG::V4M2_V6M2)
  .value("V6M2_V8M2", LIEF::assembly::riscv::REG::V6M2_V8M2)
  .value("V8M2_V10M2", LIEF::assembly::riscv::REG::V8M2_V10M2)
  .value("V10M2_V12M2", LIEF::assembly::riscv::REG::V10M2_V12M2)
  .value("V12M2_V14M2", LIEF::assembly::riscv::REG::V12M2_V14M2)
  .value("V14M2_V16M2", LIEF::assembly::riscv::REG::V14M2_V16M2)
  .value("V16M2_V18M2", LIEF::assembly::riscv::REG::V16M2_V18M2)
  .value("V18M2_V20M2", LIEF::assembly::riscv::REG::V18M2_V20M2)
  .value("V20M2_V22M2", LIEF::assembly::riscv::REG::V20M2_V22M2)
  .value("V22M2_V24M2", LIEF::assembly::riscv::REG::V22M2_V24M2)
  .value("V24M2_V26M2", LIEF::assembly::riscv::REG::V24M2_V26M2)
  .value("V26M2_V28M2", LIEF::assembly::riscv::REG::V26M2_V28M2)
  .value("V28M2_V30M2", LIEF::assembly::riscv::REG::V28M2_V30M2)
  .value("V0M2_V2M2", LIEF::assembly::riscv::REG::V0M2_V2M2)
  .value("V4M4_V8M4", LIEF::assembly::riscv::REG::V4M4_V8M4)
  .value("V8M4_V12M4", LIEF::assembly::riscv::REG::V8M4_V12M4)
  .value("V12M4_V16M4", LIEF::assembly::riscv::REG::V12M4_V16M4)
  .value("V16M4_V20M4", LIEF::assembly::riscv::REG::V16M4_V20M4)
  .value("V20M4_V24M4", LIEF::assembly::riscv::REG::V20M4_V24M4)
  .value("V24M4_V28M4", LIEF::assembly::riscv::REG::V24M4_V28M4)
  .value("V0M4_V4M4", LIEF::assembly::riscv::REG::V0M4_V4M4)
  .value("V1_V2_V3", LIEF::assembly::riscv::REG::V1_V2_V3)
  .value("V2_V3_V4", LIEF::assembly::riscv::REG::V2_V3_V4)
  .value("V3_V4_V5", LIEF::assembly::riscv::REG::V3_V4_V5)
  .value("V4_V5_V6", LIEF::assembly::riscv::REG::V4_V5_V6)
  .value("V5_V6_V7", LIEF::assembly::riscv::REG::V5_V6_V7)
  .value("V6_V7_V8", LIEF::assembly::riscv::REG::V6_V7_V8)
  .value("V7_V8_V9", LIEF::assembly::riscv::REG::V7_V8_V9)
  .value("V8_V9_V10", LIEF::assembly::riscv::REG::V8_V9_V10)
  .value("V9_V10_V11", LIEF::assembly::riscv::REG::V9_V10_V11)
  .value("V10_V11_V12", LIEF::assembly::riscv::REG::V10_V11_V12)
  .value("V11_V12_V13", LIEF::assembly::riscv::REG::V11_V12_V13)
  .value("V12_V13_V14", LIEF::assembly::riscv::REG::V12_V13_V14)
  .value("V13_V14_V15", LIEF::assembly::riscv::REG::V13_V14_V15)
  .value("V14_V15_V16", LIEF::assembly::riscv::REG::V14_V15_V16)
  .value("V15_V16_V17", LIEF::assembly::riscv::REG::V15_V16_V17)
  .value("V16_V17_V18", LIEF::assembly::riscv::REG::V16_V17_V18)
  .value("V17_V18_V19", LIEF::assembly::riscv::REG::V17_V18_V19)
  .value("V18_V19_V20", LIEF::assembly::riscv::REG::V18_V19_V20)
  .value("V19_V20_V21", LIEF::assembly::riscv::REG::V19_V20_V21)
  .value("V20_V21_V22", LIEF::assembly::riscv::REG::V20_V21_V22)
  .value("V21_V22_V23", LIEF::assembly::riscv::REG::V21_V22_V23)
  .value("V22_V23_V24", LIEF::assembly::riscv::REG::V22_V23_V24)
  .value("V23_V24_V25", LIEF::assembly::riscv::REG::V23_V24_V25)
  .value("V24_V25_V26", LIEF::assembly::riscv::REG::V24_V25_V26)
  .value("V25_V26_V27", LIEF::assembly::riscv::REG::V25_V26_V27)
  .value("V26_V27_V28", LIEF::assembly::riscv::REG::V26_V27_V28)
  .value("V27_V28_V29", LIEF::assembly::riscv::REG::V27_V28_V29)
  .value("V28_V29_V30", LIEF::assembly::riscv::REG::V28_V29_V30)
  .value("V29_V30_V31", LIEF::assembly::riscv::REG::V29_V30_V31)
  .value("V0_V1_V2", LIEF::assembly::riscv::REG::V0_V1_V2)
  .value("V2M2_V4M2_V6M2", LIEF::assembly::riscv::REG::V2M2_V4M2_V6M2)
  .value("V4M2_V6M2_V8M2", LIEF::assembly::riscv::REG::V4M2_V6M2_V8M2);
  reg.value("V6M2_V8M2_V10M2", LIEF::assembly::riscv::REG::V6M2_V8M2_V10M2)
  .value("V8M2_V10M2_V12M2", LIEF::assembly::riscv::REG::V8M2_V10M2_V12M2)
  .value("V10M2_V12M2_V14M2", LIEF::assembly::riscv::REG::V10M2_V12M2_V14M2)
  .value("V12M2_V14M2_V16M2", LIEF::assembly::riscv::REG::V12M2_V14M2_V16M2)
  .value("V14M2_V16M2_V18M2", LIEF::assembly::riscv::REG::V14M2_V16M2_V18M2)
  .value("V16M2_V18M2_V20M2", LIEF::assembly::riscv::REG::V16M2_V18M2_V20M2)
  .value("V18M2_V20M2_V22M2", LIEF::assembly::riscv::REG::V18M2_V20M2_V22M2)
  .value("V20M2_V22M2_V24M2", LIEF::assembly::riscv::REG::V20M2_V22M2_V24M2)
  .value("V22M2_V24M2_V26M2", LIEF::assembly::riscv::REG::V22M2_V24M2_V26M2)
  .value("V24M2_V26M2_V28M2", LIEF::assembly::riscv::REG::V24M2_V26M2_V28M2)
  .value("V26M2_V28M2_V30M2", LIEF::assembly::riscv::REG::V26M2_V28M2_V30M2)
  .value("V0M2_V2M2_V4M2", LIEF::assembly::riscv::REG::V0M2_V2M2_V4M2)
  .value("V1_V2_V3_V4", LIEF::assembly::riscv::REG::V1_V2_V3_V4)
  .value("V2_V3_V4_V5", LIEF::assembly::riscv::REG::V2_V3_V4_V5)
  .value("V3_V4_V5_V6", LIEF::assembly::riscv::REG::V3_V4_V5_V6)
  .value("V4_V5_V6_V7", LIEF::assembly::riscv::REG::V4_V5_V6_V7)
  .value("V5_V6_V7_V8", LIEF::assembly::riscv::REG::V5_V6_V7_V8)
  .value("V6_V7_V8_V9", LIEF::assembly::riscv::REG::V6_V7_V8_V9)
  .value("V7_V8_V9_V10", LIEF::assembly::riscv::REG::V7_V8_V9_V10)
  .value("V8_V9_V10_V11", LIEF::assembly::riscv::REG::V8_V9_V10_V11)
  .value("V9_V10_V11_V12", LIEF::assembly::riscv::REG::V9_V10_V11_V12)
  .value("V10_V11_V12_V13", LIEF::assembly::riscv::REG::V10_V11_V12_V13)
  .value("V11_V12_V13_V14", LIEF::assembly::riscv::REG::V11_V12_V13_V14)
  .value("V12_V13_V14_V15", LIEF::assembly::riscv::REG::V12_V13_V14_V15)
  .value("V13_V14_V15_V16", LIEF::assembly::riscv::REG::V13_V14_V15_V16)
  .value("V14_V15_V16_V17", LIEF::assembly::riscv::REG::V14_V15_V16_V17)
  .value("V15_V16_V17_V18", LIEF::assembly::riscv::REG::V15_V16_V17_V18)
  .value("V16_V17_V18_V19", LIEF::assembly::riscv::REG::V16_V17_V18_V19)
  .value("V17_V18_V19_V20", LIEF::assembly::riscv::REG::V17_V18_V19_V20)
  .value("V18_V19_V20_V21", LIEF::assembly::riscv::REG::V18_V19_V20_V21)
  .value("V19_V20_V21_V22", LIEF::assembly::riscv::REG::V19_V20_V21_V22)
  .value("V20_V21_V22_V23", LIEF::assembly::riscv::REG::V20_V21_V22_V23)
  .value("V21_V22_V23_V24", LIEF::assembly::riscv::REG::V21_V22_V23_V24)
  .value("V22_V23_V24_V25", LIEF::assembly::riscv::REG::V22_V23_V24_V25)
  .value("V23_V24_V25_V26", LIEF::assembly::riscv::REG::V23_V24_V25_V26)
  .value("V24_V25_V26_V27", LIEF::assembly::riscv::REG::V24_V25_V26_V27)
  .value("V25_V26_V27_V28", LIEF::assembly::riscv::REG::V25_V26_V27_V28)
  .value("V26_V27_V28_V29", LIEF::assembly::riscv::REG::V26_V27_V28_V29)
  .value("V27_V28_V29_V30", LIEF::assembly::riscv::REG::V27_V28_V29_V30)
  .value("V28_V29_V30_V31", LIEF::assembly::riscv::REG::V28_V29_V30_V31)
  .value("V0_V1_V2_V3", LIEF::assembly::riscv::REG::V0_V1_V2_V3)
  .value("V2M2_V4M2_V6M2_V8M2", LIEF::assembly::riscv::REG::V2M2_V4M2_V6M2_V8M2)
  .value("V4M2_V6M2_V8M2_V10M2", LIEF::assembly::riscv::REG::V4M2_V6M2_V8M2_V10M2)
  .value("V6M2_V8M2_V10M2_V12M2", LIEF::assembly::riscv::REG::V6M2_V8M2_V10M2_V12M2)
  .value("V8M2_V10M2_V12M2_V14M2", LIEF::assembly::riscv::REG::V8M2_V10M2_V12M2_V14M2)
  .value("V10M2_V12M2_V14M2_V16M2", LIEF::assembly::riscv::REG::V10M2_V12M2_V14M2_V16M2)
  .value("V12M2_V14M2_V16M2_V18M2", LIEF::assembly::riscv::REG::V12M2_V14M2_V16M2_V18M2)
  .value("V14M2_V16M2_V18M2_V20M2", LIEF::assembly::riscv::REG::V14M2_V16M2_V18M2_V20M2)
  .value("V16M2_V18M2_V20M2_V22M2", LIEF::assembly::riscv::REG::V16M2_V18M2_V20M2_V22M2)
  .value("V18M2_V20M2_V22M2_V24M2", LIEF::assembly::riscv::REG::V18M2_V20M2_V22M2_V24M2)
  .value("V20M2_V22M2_V24M2_V26M2", LIEF::assembly::riscv::REG::V20M2_V22M2_V24M2_V26M2)
  .value("V22M2_V24M2_V26M2_V28M2", LIEF::assembly::riscv::REG::V22M2_V24M2_V26M2_V28M2)
  .value("V24M2_V26M2_V28M2_V30M2", LIEF::assembly::riscv::REG::V24M2_V26M2_V28M2_V30M2)
  .value("V0M2_V2M2_V4M2_V6M2", LIEF::assembly::riscv::REG::V0M2_V2M2_V4M2_V6M2)
  .value("V1_V2_V3_V4_V5", LIEF::assembly::riscv::REG::V1_V2_V3_V4_V5)
  .value("V2_V3_V4_V5_V6", LIEF::assembly::riscv::REG::V2_V3_V4_V5_V6)
  .value("V3_V4_V5_V6_V7", LIEF::assembly::riscv::REG::V3_V4_V5_V6_V7)
  .value("V4_V5_V6_V7_V8", LIEF::assembly::riscv::REG::V4_V5_V6_V7_V8)
  .value("V5_V6_V7_V8_V9", LIEF::assembly::riscv::REG::V5_V6_V7_V8_V9)
  .value("V6_V7_V8_V9_V10", LIEF::assembly::riscv::REG::V6_V7_V8_V9_V10)
  .value("V7_V8_V9_V10_V11", LIEF::assembly::riscv::REG::V7_V8_V9_V10_V11)
  .value("V8_V9_V10_V11_V12", LIEF::assembly::riscv::REG::V8_V9_V10_V11_V12)
  .value("V9_V10_V11_V12_V13", LIEF::assembly::riscv::REG::V9_V10_V11_V12_V13)
  .value("V10_V11_V12_V13_V14", LIEF::assembly::riscv::REG::V10_V11_V12_V13_V14)
  .value("V11_V12_V13_V14_V15", LIEF::assembly::riscv::REG::V11_V12_V13_V14_V15)
  .value("V12_V13_V14_V15_V16", LIEF::assembly::riscv::REG::V12_V13_V14_V15_V16)
  .value("V13_V14_V15_V16_V17", LIEF::assembly::riscv::REG::V13_V14_V15_V16_V17)
  .value("V14_V15_V16_V17_V18", LIEF::assembly::riscv::REG::V14_V15_V16_V17_V18)
  .value("V15_V16_V17_V18_V19", LIEF::assembly::riscv::REG::V15_V16_V17_V18_V19)
  .value("V16_V17_V18_V19_V20", LIEF::assembly::riscv::REG::V16_V17_V18_V19_V20)
  .value("V17_V18_V19_V20_V21", LIEF::assembly::riscv::REG::V17_V18_V19_V20_V21)
  .value("V18_V19_V20_V21_V22", LIEF::assembly::riscv::REG::V18_V19_V20_V21_V22)
  .value("V19_V20_V21_V22_V23", LIEF::assembly::riscv::REG::V19_V20_V21_V22_V23)
  .value("V20_V21_V22_V23_V24", LIEF::assembly::riscv::REG::V20_V21_V22_V23_V24)
  .value("V21_V22_V23_V24_V25", LIEF::assembly::riscv::REG::V21_V22_V23_V24_V25)
  .value("V22_V23_V24_V25_V26", LIEF::assembly::riscv::REG::V22_V23_V24_V25_V26)
  .value("V23_V24_V25_V26_V27", LIEF::assembly::riscv::REG::V23_V24_V25_V26_V27)
  .value("V24_V25_V26_V27_V28", LIEF::assembly::riscv::REG::V24_V25_V26_V27_V28)
  .value("V25_V26_V27_V28_V29", LIEF::assembly::riscv::REG::V25_V26_V27_V28_V29)
  .value("V26_V27_V28_V29_V30", LIEF::assembly::riscv::REG::V26_V27_V28_V29_V30)
  .value("V27_V28_V29_V30_V31", LIEF::assembly::riscv::REG::V27_V28_V29_V30_V31)
  .value("V0_V1_V2_V3_V4", LIEF::assembly::riscv::REG::V0_V1_V2_V3_V4)
  .value("V1_V2_V3_V4_V5_V6", LIEF::assembly::riscv::REG::V1_V2_V3_V4_V5_V6)
  .value("V2_V3_V4_V5_V6_V7", LIEF::assembly::riscv::REG::V2_V3_V4_V5_V6_V7)
  .value("V3_V4_V5_V6_V7_V8", LIEF::assembly::riscv::REG::V3_V4_V5_V6_V7_V8)
  .value("V4_V5_V6_V7_V8_V9", LIEF::assembly::riscv::REG::V4_V5_V6_V7_V8_V9)
  .value("V5_V6_V7_V8_V9_V10", LIEF::assembly::riscv::REG::V5_V6_V7_V8_V9_V10)
  .value("V6_V7_V8_V9_V10_V11", LIEF::assembly::riscv::REG::V6_V7_V8_V9_V10_V11)
  .value("V7_V8_V9_V10_V11_V12", LIEF::assembly::riscv::REG::V7_V8_V9_V10_V11_V12)
  .value("V8_V9_V10_V11_V12_V13", LIEF::assembly::riscv::REG::V8_V9_V10_V11_V12_V13)
  .value("V9_V10_V11_V12_V13_V14", LIEF::assembly::riscv::REG::V9_V10_V11_V12_V13_V14)
  .value("V10_V11_V12_V13_V14_V15", LIEF::assembly::riscv::REG::V10_V11_V12_V13_V14_V15)
  .value("V11_V12_V13_V14_V15_V16", LIEF::assembly::riscv::REG::V11_V12_V13_V14_V15_V16)
  .value("V12_V13_V14_V15_V16_V17", LIEF::assembly::riscv::REG::V12_V13_V14_V15_V16_V17)
  .value("V13_V14_V15_V16_V17_V18", LIEF::assembly::riscv::REG::V13_V14_V15_V16_V17_V18)
  .value("V14_V15_V16_V17_V18_V19", LIEF::assembly::riscv::REG::V14_V15_V16_V17_V18_V19)
  .value("V15_V16_V17_V18_V19_V20", LIEF::assembly::riscv::REG::V15_V16_V17_V18_V19_V20)
  .value("V16_V17_V18_V19_V20_V21", LIEF::assembly::riscv::REG::V16_V17_V18_V19_V20_V21)
  .value("V17_V18_V19_V20_V21_V22", LIEF::assembly::riscv::REG::V17_V18_V19_V20_V21_V22)
  .value("V18_V19_V20_V21_V22_V23", LIEF::assembly::riscv::REG::V18_V19_V20_V21_V22_V23)
  .value("V19_V20_V21_V22_V23_V24", LIEF::assembly::riscv::REG::V19_V20_V21_V22_V23_V24)
  .value("V20_V21_V22_V23_V24_V25", LIEF::assembly::riscv::REG::V20_V21_V22_V23_V24_V25)
  .value("V21_V22_V23_V24_V25_V26", LIEF::assembly::riscv::REG::V21_V22_V23_V24_V25_V26)
  .value("V22_V23_V24_V25_V26_V27", LIEF::assembly::riscv::REG::V22_V23_V24_V25_V26_V27)
  .value("V23_V24_V25_V26_V27_V28", LIEF::assembly::riscv::REG::V23_V24_V25_V26_V27_V28)
  .value("V24_V25_V26_V27_V28_V29", LIEF::assembly::riscv::REG::V24_V25_V26_V27_V28_V29)
  .value("V25_V26_V27_V28_V29_V30", LIEF::assembly::riscv::REG::V25_V26_V27_V28_V29_V30)
  .value("V26_V27_V28_V29_V30_V31", LIEF::assembly::riscv::REG::V26_V27_V28_V29_V30_V31)
  .value("V0_V1_V2_V3_V4_V5", LIEF::assembly::riscv::REG::V0_V1_V2_V3_V4_V5)
  .value("V1_V2_V3_V4_V5_V6_V7", LIEF::assembly::riscv::REG::V1_V2_V3_V4_V5_V6_V7)
  .value("V2_V3_V4_V5_V6_V7_V8", LIEF::assembly::riscv::REG::V2_V3_V4_V5_V6_V7_V8)
  .value("V3_V4_V5_V6_V7_V8_V9", LIEF::assembly::riscv::REG::V3_V4_V5_V6_V7_V8_V9)
  .value("V4_V5_V6_V7_V8_V9_V10", LIEF::assembly::riscv::REG::V4_V5_V6_V7_V8_V9_V10)
  .value("V5_V6_V7_V8_V9_V10_V11", LIEF::assembly::riscv::REG::V5_V6_V7_V8_V9_V10_V11)
  .value("V6_V7_V8_V9_V10_V11_V12", LIEF::assembly::riscv::REG::V6_V7_V8_V9_V10_V11_V12)
  .value("V7_V8_V9_V10_V11_V12_V13", LIEF::assembly::riscv::REG::V7_V8_V9_V10_V11_V12_V13)
  .value("V8_V9_V10_V11_V12_V13_V14", LIEF::assembly::riscv::REG::V8_V9_V10_V11_V12_V13_V14)
  .value("V9_V10_V11_V12_V13_V14_V15", LIEF::assembly::riscv::REG::V9_V10_V11_V12_V13_V14_V15)
  .value("V10_V11_V12_V13_V14_V15_V16", LIEF::assembly::riscv::REG::V10_V11_V12_V13_V14_V15_V16)
  .value("V11_V12_V13_V14_V15_V16_V17", LIEF::assembly::riscv::REG::V11_V12_V13_V14_V15_V16_V17)
  .value("V12_V13_V14_V15_V16_V17_V18", LIEF::assembly::riscv::REG::V12_V13_V14_V15_V16_V17_V18)
  .value("V13_V14_V15_V16_V17_V18_V19", LIEF::assembly::riscv::REG::V13_V14_V15_V16_V17_V18_V19)
  .value("V14_V15_V16_V17_V18_V19_V20", LIEF::assembly::riscv::REG::V14_V15_V16_V17_V18_V19_V20)
  .value("V15_V16_V17_V18_V19_V20_V21", LIEF::assembly::riscv::REG::V15_V16_V17_V18_V19_V20_V21)
  .value("V16_V17_V18_V19_V20_V21_V22", LIEF::assembly::riscv::REG::V16_V17_V18_V19_V20_V21_V22)
  .value("V17_V18_V19_V20_V21_V22_V23", LIEF::assembly::riscv::REG::V17_V18_V19_V20_V21_V22_V23)
  .value("V18_V19_V20_V21_V22_V23_V24", LIEF::assembly::riscv::REG::V18_V19_V20_V21_V22_V23_V24)
  .value("V19_V20_V21_V22_V23_V24_V25", LIEF::assembly::riscv::REG::V19_V20_V21_V22_V23_V24_V25)
  .value("V20_V21_V22_V23_V24_V25_V26", LIEF::assembly::riscv::REG::V20_V21_V22_V23_V24_V25_V26)
  .value("V21_V22_V23_V24_V25_V26_V27", LIEF::assembly::riscv::REG::V21_V22_V23_V24_V25_V26_V27)
  .value("V22_V23_V24_V25_V26_V27_V28", LIEF::assembly::riscv::REG::V22_V23_V24_V25_V26_V27_V28)
  .value("V23_V24_V25_V26_V27_V28_V29", LIEF::assembly::riscv::REG::V23_V24_V25_V26_V27_V28_V29)
  .value("V24_V25_V26_V27_V28_V29_V30", LIEF::assembly::riscv::REG::V24_V25_V26_V27_V28_V29_V30)
  .value("V25_V26_V27_V28_V29_V30_V31", LIEF::assembly::riscv::REG::V25_V26_V27_V28_V29_V30_V31)
  .value("V0_V1_V2_V3_V4_V5_V6", LIEF::assembly::riscv::REG::V0_V1_V2_V3_V4_V5_V6)
  .value("V1_V2_V3_V4_V5_V6_V7_V8", LIEF::assembly::riscv::REG::V1_V2_V3_V4_V5_V6_V7_V8)
  .value("V2_V3_V4_V5_V6_V7_V8_V9", LIEF::assembly::riscv::REG::V2_V3_V4_V5_V6_V7_V8_V9)
  .value("V3_V4_V5_V6_V7_V8_V9_V10", LIEF::assembly::riscv::REG::V3_V4_V5_V6_V7_V8_V9_V10)
  .value("V4_V5_V6_V7_V8_V9_V10_V11", LIEF::assembly::riscv::REG::V4_V5_V6_V7_V8_V9_V10_V11)
  .value("V5_V6_V7_V8_V9_V10_V11_V12", LIEF::assembly::riscv::REG::V5_V6_V7_V8_V9_V10_V11_V12)
  .value("V6_V7_V8_V9_V10_V11_V12_V13", LIEF::assembly::riscv::REG::V6_V7_V8_V9_V10_V11_V12_V13)
  .value("V7_V8_V9_V10_V11_V12_V13_V14", LIEF::assembly::riscv::REG::V7_V8_V9_V10_V11_V12_V13_V14)
  .value("V8_V9_V10_V11_V12_V13_V14_V15", LIEF::assembly::riscv::REG::V8_V9_V10_V11_V12_V13_V14_V15)
  .value("V9_V10_V11_V12_V13_V14_V15_V16", LIEF::assembly::riscv::REG::V9_V10_V11_V12_V13_V14_V15_V16)
  .value("V10_V11_V12_V13_V14_V15_V16_V17", LIEF::assembly::riscv::REG::V10_V11_V12_V13_V14_V15_V16_V17)
  .value("V11_V12_V13_V14_V15_V16_V17_V18", LIEF::assembly::riscv::REG::V11_V12_V13_V14_V15_V16_V17_V18)
  .value("V12_V13_V14_V15_V16_V17_V18_V19", LIEF::assembly::riscv::REG::V12_V13_V14_V15_V16_V17_V18_V19)
  .value("V13_V14_V15_V16_V17_V18_V19_V20", LIEF::assembly::riscv::REG::V13_V14_V15_V16_V17_V18_V19_V20)
  .value("V14_V15_V16_V17_V18_V19_V20_V21", LIEF::assembly::riscv::REG::V14_V15_V16_V17_V18_V19_V20_V21)
  .value("V15_V16_V17_V18_V19_V20_V21_V22", LIEF::assembly::riscv::REG::V15_V16_V17_V18_V19_V20_V21_V22)
  .value("V16_V17_V18_V19_V20_V21_V22_V23", LIEF::assembly::riscv::REG::V16_V17_V18_V19_V20_V21_V22_V23)
  .value("V17_V18_V19_V20_V21_V22_V23_V24", LIEF::assembly::riscv::REG::V17_V18_V19_V20_V21_V22_V23_V24)
  .value("V18_V19_V20_V21_V22_V23_V24_V25", LIEF::assembly::riscv::REG::V18_V19_V20_V21_V22_V23_V24_V25)
  .value("V19_V20_V21_V22_V23_V24_V25_V26", LIEF::assembly::riscv::REG::V19_V20_V21_V22_V23_V24_V25_V26)
  .value("V20_V21_V22_V23_V24_V25_V26_V27", LIEF::assembly::riscv::REG::V20_V21_V22_V23_V24_V25_V26_V27)
  .value("V21_V22_V23_V24_V25_V26_V27_V28", LIEF::assembly::riscv::REG::V21_V22_V23_V24_V25_V26_V27_V28)
  .value("V22_V23_V24_V25_V26_V27_V28_V29", LIEF::assembly::riscv::REG::V22_V23_V24_V25_V26_V27_V28_V29)
  .value("V23_V24_V25_V26_V27_V28_V29_V30", LIEF::assembly::riscv::REG::V23_V24_V25_V26_V27_V28_V29_V30)
  .value("V24_V25_V26_V27_V28_V29_V30_V31", LIEF::assembly::riscv::REG::V24_V25_V26_V27_V28_V29_V30_V31)
  .value("V0_V1_V2_V3_V4_V5_V6_V7", LIEF::assembly::riscv::REG::V0_V1_V2_V3_V4_V5_V6_V7)
  .value("NUM_TARGET_REGS", LIEF::assembly::riscv::REG::NUM_TARGET_REGS)
  ;
}
}
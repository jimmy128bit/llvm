//===-- RISCVFixupKinds.h - RISCV Specific Fixup Entries --------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCV_MCTARGETDESC_RISCVFIXUPKINDS_H
#define LLVM_LIB_TARGET_RISCV_MCTARGETDESC_RISCVFIXUPKINDS_H

#include "llvm/MC/MCFixup.h"

#undef RISCV

namespace llvm {
namespace RISCV {
enum Fixups {
  // fixup_riscv_hi20 - 20-bit fixup corresponding to hi(foo) for
  // instructions like lui
  fixup_riscv_hi20 = FirstTargetFixupKind,
  // fixup_riscv_lo12_i - 12-bit fixup corresponding to lo(foo) for
  // instructions like addi
  fixup_riscv_lo12_i,
  // fixup_riscv_lo12_s - 12-bit fixup corresponding to lo(foo) for
  // the S-type store instructions
  fixup_riscv_lo12_s,
  // fixup_riscv_pcrel_hi20 - 20-bit fixup corresponding to pcrel_hi(foo) for
  // instructions like auipc
  fixup_riscv_pcrel_hi20,
  // fixup_riscv_pcrel_lo12_i - 12-bit fixup corresponding to pcrel_lo(foo) for
  // instructions like addi
  fixup_riscv_pcrel_lo12_i,
  // fixup_riscv_pcrel_lo12_s - 12-bit fixup corresponding to pcrel_lo(foo) for
  // the S-type store instructions
  fixup_riscv_pcrel_lo12_s,
  // fixup_riscv_jal - 20-bit fixup for symbol references in the jal
  // instruction
  fixup_riscv_jal,
  // fixup_riscv_branch - 12-bit fixup for symbol references in the branch
  // instructions
  fixup_riscv_branch,
  // fixup_riscv_rvc_jump - 11-bit fixup for symbol references in the
  // compressed jump instruction
  fixup_riscv_rvc_jump,
  // fixup_riscv_rvc_branch - 8-bit fixup for symbol references in the
  // compressed branch instruction
  fixup_riscv_rvc_branch,
  // fixup_riscv_call - A fixup representing a call attached to the auipc
  // instruction in a pair composed of adjacent auipc+jalr instructions.
  fixup_riscv_call,
  // fixup_riscv_relax - Used to generate an R_RISCV_RELAX relocation type,
  // which indicates the linker may relax the instruction pair.
  fixup_riscv_relax,

  // fixup_riscv_invalid - used as a sentinel and a marker, must be last fixup
  fixup_riscv_invalid,
  NumTargetFixupKinds = fixup_riscv_invalid - FirstTargetFixupKind
};
} // end namespace RISCV
} // end namespace llvm

#endif

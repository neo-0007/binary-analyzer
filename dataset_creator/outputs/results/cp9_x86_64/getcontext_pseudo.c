
/* WARNING: Removing unreachable block (ram,0x006e8eab) */
/* WARNING: Removing unreachable block (ram,0x006e8f1c) */

undefined1  [16]
getcontext(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  long in_SSP;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(param_1 + 0x80) = unaff_RBX;
  *(undefined8 *)(param_1 + 0x78) = unaff_RBP;
  *(undefined8 *)(param_1 + 0x48) = unaff_R12;
  *(undefined8 *)(param_1 + 0x50) = unaff_R13;
  *(undefined8 *)(param_1 + 0x58) = unaff_R14;
  *(undefined8 *)(param_1 + 0x60) = unaff_R15;
  *(long *)(param_1 + 0x68) = param_1;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  *(undefined8 *)(param_1 + 0x98) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x30) = param_6;
  *(undefined8 *)(param_1 + 0xa8) = unaff_retaddr;
  *(undefined1 **)(param_1 + 0xa0) = &stack0x00000008;
  if ((*(uint *)(in_FS_OFFSET + 0x48) & 2) != 0) {
    if (*(long *)(in_FS_OFFSET + 0x78) == 0) {
      syscall();
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(long *)(param_1 + 0x3a8) = in_SSP + 8;
    *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(in_FS_OFFSET + 0x78);
  }
  *(undefined2 **)(param_1 + 0xe0) = (undefined2 *)(param_1 + 0x1a8);
  *(undefined2 *)(param_1 + 0x1a8) = in_FPUControlWord;
  *(undefined2 *)(param_1 + 0x1ac) = in_FPUStatusWord;
  *(undefined2 *)(param_1 + 0x1b0) = in_FPUTagWord;
  *(undefined8 *)(param_1 + 0x1bc) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 0x1b4) = in_FPUInstructionPointer;
  *(undefined2 *)(param_1 + 0x1ba) = in_FPULastInstructionOpcode;
  *(undefined4 *)(param_1 + 0x1c0) = MXCSR;
  syscall();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1 + 0x128;
  return auVar1 << 0x40;
}


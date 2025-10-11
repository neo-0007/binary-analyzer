
/* WARNING: Removing unreachable block (ram,0x006e92fa) */
/* WARNING: Removing unreachable block (ram,0x006e9408) */

undefined1  [16]
swapcontext(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
           undefined8 param_6)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulong uVar4;
  ulong uVar5;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 *in_SSP;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined1 auVar7 [16];
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(param_1 + 0x80) = unaff_RBX;
  *(undefined8 *)(param_1 + 0x78) = unaff_RBP;
  *(undefined8 *)(param_1 + 0x48) = unaff_R12;
  *(undefined8 *)(param_1 + 0x50) = unaff_R13;
  *(undefined8 *)(param_1 + 0x58) = unaff_R14;
  *(undefined8 *)(param_1 + 0x60) = unaff_R15;
  *(long *)(param_1 + 0x68) = param_1;
  *(long *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  *(undefined8 *)(param_1 + 0x98) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x30) = param_6;
  *(undefined8 *)(param_1 + 0xa8) = unaff_retaddr;
  *(undefined1 **)(param_1 + 0xa0) = &stack0x00000008;
  *(undefined2 **)(param_1 + 0xe0) = (undefined2 *)(param_1 + 0x1a8);
  *(undefined2 *)(param_1 + 0x1a8) = in_FPUControlWord;
  *(undefined2 *)(param_1 + 0x1ac) = in_FPUStatusWord;
  *(undefined2 *)(param_1 + 0x1b0) = in_FPUTagWord;
  *(undefined8 *)(param_1 + 0x1bc) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 0x1b4) = in_FPUInstructionPointer;
  *(undefined2 *)(param_1 + 0x1ba) = in_FPULastInstructionOpcode;
  *(undefined4 *)(param_1 + 0x1c0) = MXCSR;
  syscall();
  MXCSR = *(undefined4 *)(param_2 + 0x1c0);
  lVar1 = *(long *)(param_2 + 0xa0);
  if ((*(uint *)(in_FS_OFFSET + 0x48) & 2) == 0) {
    *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(param_2 + 0xa8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulong *)(param_2 + 0x88);
    return auVar7 << 0x40;
  }
  if (*(long *)(in_FS_OFFSET + 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x3a8);
    *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(in_FS_OFFSET + 0x78);
    uVar5 = *(ulong *)(param_2 + 0x3a8);
    uVar4 = uVar5;
    if (*(long *)(param_2 + 0x3b0) != *(long *)(in_FS_OFFSET + 0x78)) {
      for (; (*(ulong *)(uVar4 - 8) & 0xfffffffffffffff8) != uVar4; uVar4 = uVar4 - 8) {
      }
      *(undefined8 **)(param_1 + 0x3a8) = in_SSP;
      in_SSP = (undefined8 *)(*(ulong *)(uVar4 - 8) & 0xfffffffffffffff8);
      ShadowStackPush8B(*(ulong *)(uVar4 - 8) & 0xfffffffffffffffe);
      *(undefined8 *)(in_FS_OFFSET + 0x78) = *(undefined8 *)(param_2 + 0x3b0);
    }
    lVar3 = (long)in_SSP - uVar5;
    if (lVar3 != 0) {
      uVar4 = (ulong)-lVar3 >> 3;
      uVar5 = 0xff;
      do {
        if (uVar4 < uVar5) {
          uVar5 = uVar4;
        }
        in_SSP = (undefined8 *)((long)in_SSP + (ulong)(byte)((char)uVar5 * '\b'));
        bVar6 = uVar5 <= uVar4;
        uVar4 = uVar4 - uVar5;
      } while (bVar6 && uVar4 != 0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0xa8);
    uVar5 = *(ulong *)(param_2 + 0x88);
    if (UNRECOVERED_JUMPTABLE != (code *)*in_SSP) {
                    /* WARNING: Could not recover jumptable at 0x006e93dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (*UNRECOVERED_JUMPTABLE)
                         (*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70),uVar5,
                          *(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x28),
                          *(undefined8 *)(param_2 + 0x30));
      return auVar7;
    }
    *(code **)(lVar1 + -8) = UNRECOVERED_JUMPTABLE;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    return auVar2 << 0x40;
  }
  syscall();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x0078869f) */

undefined1  [16] setcontext(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 *in_SSP;
  undefined1 auVar7 [16];
  
  syscall();
  MXCSR = *(undefined4 *)(param_1 + 0x1c0);
  lVar1 = *(long *)(param_1 + 0xa0);
  if ((*(uint *)(in_FS_OFFSET + 0x48) & 2) == 0) {
    *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(param_1 + 0xa8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(param_1 + 0x88);
    return auVar2 << 0x40;
  }
  uVar5 = *(ulong *)(param_1 + 0x3a8);
  uVar4 = uVar5;
  if (*(long *)(param_1 + 0x3b0) != *(long *)(in_FS_OFFSET + 0x78)) {
    for (; (*(ulong *)(uVar4 - 8) & 0xfffffffffffffff8) != uVar4; uVar4 = uVar4 - 8) {
    }
    in_SSP = (undefined8 *)(*(ulong *)(uVar4 - 8) & 0xfffffffffffffff8);
    ShadowStackPush8B(*(ulong *)(uVar4 - 8) & 0xfffffffffffffffe);
    *(undefined8 *)(in_FS_OFFSET + 0x78) = *(undefined8 *)(param_1 + 0x3b0);
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
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xa8);
  uVar5 = *(ulong *)(param_1 + 0x88);
  if (UNRECOVERED_JUMPTABLE != (code *)*in_SSP) {
                    /* WARNING: Could not recover jumptable at 0x00788673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*UNRECOVERED_JUMPTABLE)
                       (*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),uVar5,
                        *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
    return auVar7;
  }
  *(code **)(lVar1 + -8) = UNRECOVERED_JUMPTABLE;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar5;
  return auVar7 << 0x40;
}


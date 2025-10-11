
void FUN_00790a50(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long in_SSP;
  
  UNRECOVERED_JUMPTABLE =
       (code *)((*(ulong *)(param_1 + 0x38) >> 0x11 | *(ulong *)(param_1 + 0x38) << 0x2f) ^
               *(ulong *)(in_FS_OFFSET + 0x30));
  lVar1 = in_SSP - *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar2 = ((ulong)-lVar1 >> 3) + 1;
    uVar3 = 0xff;
    do {
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      bVar4 = uVar3 <= uVar2;
      uVar2 = uVar2 - uVar3;
    } while (bVar4 && uVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00790ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,param_2,UNRECOVERED_JUMPTABLE,param_4,
             (*(ulong *)(param_1 + 0x30) >> 0x11 | *(ulong *)(param_1 + 0x30) << 0x2f) ^
             *(ulong *)(in_FS_OFFSET + 0x30),
             (*(ulong *)(param_1 + 8) >> 0x11 | *(ulong *)(param_1 + 8) << 0x2f) ^
             *(ulong *)(in_FS_OFFSET + 0x30));
  return;
}


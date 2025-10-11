
ulong FUN_0069d900(long *param_1)

{
  uint *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  puVar1 = (uint *)param_1[2];
  if (puVar1 < (uint *)param_1[3]) {
    uVar4 = *puVar1;
    param_1[2] = (long)(puVar1 + 1);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x50);
    if (UNRECOVERED_JUMPTABLE != FUN_0069cba0) {
                    /* WARNING: Could not recover jumptable at 0x0069d948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
    if (UNRECOVERED_JUMPTABLE != FUN_0069c9e0) {
      iVar2 = (*UNRECOVERED_JUMPTABLE)();
      if (iVar2 == -1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)param_1[2];
        param_1[2] = (long)((uint *)param_1[2] + 1);
      }
      return (ulong)uVar4;
    }
    uVar4 = 0xffffffff;
  }
  return (ulong)uVar4;
}


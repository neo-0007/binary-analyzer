
ulong FUN_0069d140(long *param_1)

{
  byte *pbVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  ulong uVar3;
  
  pbVar1 = (byte *)param_1[2];
  if (pbVar1 < (byte *)param_1[3]) {
    uVar3 = (ulong)*pbVar1;
    param_1[2] = (long)(pbVar1 + 1);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x50);
    if (UNRECOVERED_JUMPTABLE != FUN_0069cb50) {
                    /* WARNING: Could not recover jumptable at 0x0069d188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
    if (UNRECOVERED_JUMPTABLE != FUN_0069c950) {
      iVar2 = (*UNRECOVERED_JUMPTABLE)();
      if (iVar2 == -1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (ulong)*(byte *)param_1[2];
        param_1[2] = (long)((byte *)param_1[2] + 1);
      }
      return uVar3;
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


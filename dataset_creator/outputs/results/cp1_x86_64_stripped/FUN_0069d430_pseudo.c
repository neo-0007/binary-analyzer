
void FUN_0069d430(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if ((ulong)param_1[2] < (ulong)param_1[3]) {
    param_1[2] = param_1[2] + 1;
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x50);
  if (UNRECOVERED_JUMPTABLE == FUN_0069cb50) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
    if (UNRECOVERED_JUMPTABLE == FUN_0069c950) {
      return;
    }
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    if (iVar1 != -1) {
      param_1[2] = param_1[2] + 1;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0069d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


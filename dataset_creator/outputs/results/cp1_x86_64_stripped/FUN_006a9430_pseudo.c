
void FUN_006a9430(long *param_1)

{
  if (*(code **)(*param_1 + 0x30) == (code *)&LAB_006a9420) {
    FUN_006a9120();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a9450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}


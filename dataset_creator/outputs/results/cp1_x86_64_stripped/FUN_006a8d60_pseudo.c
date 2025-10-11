
void FUN_006a8d60(long *param_1)

{
  if (*(code **)(*param_1 + 0x20) == (code *)&LAB_006a8d00) {
    FUN_006a8a00();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a8d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


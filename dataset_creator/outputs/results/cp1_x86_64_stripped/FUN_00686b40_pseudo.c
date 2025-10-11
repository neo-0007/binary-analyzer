
void FUN_00686b40(long *param_1)

{
  if (*(code **)(*param_1 + 0x38) == (code *)&LAB_00686b30) {
    FUN_00686040();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00686b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


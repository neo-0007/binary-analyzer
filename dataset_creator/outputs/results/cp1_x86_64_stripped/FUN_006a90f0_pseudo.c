
void FUN_006a90f0(long *param_1)

{
  if (*(code **)(*param_1 + 0x28) == (code *)&LAB_006a90e0) {
    FUN_006a8d90();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a9110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



void FUN_006a89d0(long *param_1)

{
  if (*(code **)(*param_1 + 0x18) == (code *)&LAB_006a89c0) {
    FUN_006a8670();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a89f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


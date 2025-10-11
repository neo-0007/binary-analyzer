
void FUN_006808f0(long *param_1)

{
  if (*(code **)(*param_1 + 0x28) == (code *)&LAB_006808e0) {
    FUN_006805a0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00680910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


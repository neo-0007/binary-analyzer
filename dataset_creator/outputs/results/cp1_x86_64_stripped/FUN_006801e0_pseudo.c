
void FUN_006801e0(long *param_1)

{
  if (*(code **)(*param_1 + 0x18) == (code *)&LAB_006801d0) {
    FUN_0067fe90();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00680200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


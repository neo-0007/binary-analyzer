
void FUN_00680c20(long *param_1)

{
  if (*(code **)(*param_1 + 0x30) == (code *)&LAB_00680c10) {
    FUN_00680920();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00680c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



void FUN_00683e20(long *param_1)

{
  if (*(code **)(*param_1 + 0x18) == thunk_FUN_00682e10) {
    FUN_00682e10();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00683e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


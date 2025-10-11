
void FUN_00684960(long *param_1)

{
  if (*(code **)(*param_1 + 0x20) == (code *)&LAB_00684950) {
    FUN_00683e60();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00684990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


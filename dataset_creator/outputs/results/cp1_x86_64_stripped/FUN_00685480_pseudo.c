
void FUN_00685480(long *param_1)

{
  if (*(code **)(*param_1 + 0x28) == (code *)&LAB_00685470) {
    FUN_006849a0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006854b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


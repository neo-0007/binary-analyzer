
void FUN_00680570(long *param_1)

{
  if (*(code **)(*param_1 + 0x20) == (code *)&LAB_00680500) {
    FUN_00680210();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00680590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



void FUN_006ad050(long *param_1)

{
  if (*(code **)(*param_1 + 0x20) == (code *)&LAB_006ad040) {
    FUN_006ac590();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ad080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



void FUN_00687620(long *param_1)

{
  if (*(code **)(*param_1 + 0x40) == (code *)&LAB_00687610) {
    FUN_00686b80();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00687650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



void FUN_006af1f0(long *param_1)

{
  if (*(code **)(*param_1 + 0x38) == (code *)&LAB_006af1e0) {
    FUN_006ae710();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006af220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


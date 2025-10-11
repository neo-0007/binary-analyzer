
void FUN_006afcd0(long *param_1)

{
  if (*(code **)(*param_1 + 0x40) == (code *)&LAB_006afcc0) {
    FUN_006af230();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006afd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}


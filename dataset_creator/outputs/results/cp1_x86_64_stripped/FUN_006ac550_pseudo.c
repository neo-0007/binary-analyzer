
void FUN_006ac550(long *param_1)

{
  if (*(code **)(*param_1 + 0x18) == thunk_FUN_006ab560) {
    FUN_006ab560();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ac580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


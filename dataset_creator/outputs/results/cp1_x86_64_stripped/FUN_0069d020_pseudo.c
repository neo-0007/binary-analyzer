
void FUN_0069d020(long *param_1)

{
  if ((param_1[3] == param_1[2]) && (*(code **)(*param_1 + 0x38) != FUN_0069c940)) {
                    /* WARNING: Could not recover jumptable at 0x0069d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))();
    return;
  }
  return;
}


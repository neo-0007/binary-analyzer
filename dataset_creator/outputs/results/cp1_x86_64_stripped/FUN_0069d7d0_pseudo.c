
long FUN_0069d7d0(long *param_1)

{
  long lVar1;
  
  if (param_1[3] != param_1[2]) {
    return param_1[3] - param_1[2] >> 2;
  }
  if (*(code **)(*param_1 + 0x38) == FUN_0069c9d0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0069d808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*param_1 + 0x38))();
  return lVar1;
}


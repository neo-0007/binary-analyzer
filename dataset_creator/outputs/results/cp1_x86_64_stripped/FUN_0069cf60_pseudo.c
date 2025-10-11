
long * FUN_0069cf60(long *param_1)

{
  long *plVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_0069c900) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0069cf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  return plVar1;
}



long * FUN_0069d710(long *param_1)

{
  long *plVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_0069c990) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0069d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  return plVar1;
}


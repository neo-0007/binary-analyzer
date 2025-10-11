
undefined1  [16] FUN_0069d740(long *param_1)

{
  undefined1 auVar1 [16];
  
  if (*(code **)(*param_1 + 0x20) == FUN_0069c9a0) {
    return ZEXT816(0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x0069d760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar1 = (**(code **)(*param_1 + 0x20))();
  return auVar1;
}



undefined1  [16] FUN_0069d770(long *param_1)

{
  undefined1 auVar1 [16];
  
  if (*(code **)(*param_1 + 0x28) == FUN_0069c9b0) {
    return ZEXT816(0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x0069d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar1 = (**(code **)(*param_1 + 0x28))();
  return auVar1;
}



undefined8 FUN_0069d7a0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) == FUN_0069c9c0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0069d7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}



undefined8 FUN_0053bea0(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053beb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1[1]);
    return uVar1;
  }
  return 0;
}


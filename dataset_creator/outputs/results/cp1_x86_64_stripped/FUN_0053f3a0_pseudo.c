
undefined8 FUN_0053f3a0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053f3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x88))(param_1[1]);
    return uVar1;
  }
  return 1;
}


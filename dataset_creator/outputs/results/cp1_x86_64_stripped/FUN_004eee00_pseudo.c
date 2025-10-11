
undefined8 FUN_004eee00(long *param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    (**(code **)(*param_1 + 0x18))();
  }
  FUN_0051a270(param_1[1]);
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x10);
  *param_1 = param_2;
  param_1[1] = 0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004eee45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar1;
  }
  return 1;
}


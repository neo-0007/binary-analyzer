
undefined8 FUN_004f1930(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0xe0) == 0) {
    uVar1 = FUN_004f4b20();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f194d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


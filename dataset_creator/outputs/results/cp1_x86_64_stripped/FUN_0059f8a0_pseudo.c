
undefined8 FUN_0059f8a0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0059f8b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}


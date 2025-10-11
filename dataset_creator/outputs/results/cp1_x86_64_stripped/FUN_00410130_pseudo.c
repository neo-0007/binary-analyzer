
undefined8 FUN_00410130(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_2 + 0x18) != 0)) {
    uVar1 = FUN_0040ff10(param_1,param_2,4);
    return uVar1;
  }
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(long *)(param_1 + 2) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 2) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041016b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}


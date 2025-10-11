
void FUN_0056bf70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x18) + 0x68);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0056bf81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0056b490(param_1,param_2,2,param_3,param_4);
  return;
}


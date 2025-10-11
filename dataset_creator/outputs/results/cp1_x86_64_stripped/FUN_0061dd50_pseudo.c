
void FUN_0061dd50(long param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_2 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x18),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0061dd6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}


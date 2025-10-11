
undefined8 FUN_004b8a20(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_004b34a0(0,param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(int *)(param_3 + 0x10) == 0) {
        UNRECOVERED_JUMPTABLE = FUN_004b1810;
      }
      else {
        UNRECOVERED_JUMPTABLE = FUN_004b18d0;
      }
                    /* WARNING: Could not recover jumptable at 0x004b8a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


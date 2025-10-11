
undefined8 FUN_0059f990(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x50);
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0059f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 0x30))();
      return uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x0059f9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0;
}


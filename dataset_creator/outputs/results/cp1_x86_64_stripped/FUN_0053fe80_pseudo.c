
undefined8 FUN_0053fe80(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = FUN_0053fe70();
    uVar1 = FUN_00420b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0053fea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar1;
  }
  return 0;
}


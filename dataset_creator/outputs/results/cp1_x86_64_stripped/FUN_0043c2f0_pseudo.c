
void FUN_0043c2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = DAT_00940eb0;
  if (DAT_00940eb0 != (code *)0x0) {
    uVar1 = FUN_004852b0();
                    /* WARNING: Could not recover jumptable at 0x0043c31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3);
    return;
  }
  return;
}


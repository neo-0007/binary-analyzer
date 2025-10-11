
void FUN_00429430(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_00428db0();
  if ((puVar1 != (undefined8 *)0x0) && ((code *)*puVar1 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042945e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(param_1,param_2);
    return;
  }
  lVar2 = FUN_00429100(0);
  if ((lVar2 != 0) && (0 < param_2)) {
    FUN_0053a750(lVar2,0,0,0,param_1,(long)param_2);
    return;
  }
  return;
}


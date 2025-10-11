
void FUN_00429360(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_00428db0();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00429393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3);
    return;
  }
  lVar1 = FUN_00429100(0);
  if ((lVar1 != 0) && (0 < param_3)) {
    FUN_0053a750(lVar1,0,0,0,param_2,(long)param_3);
    return;
  }
  return;
}


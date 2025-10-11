
void FUN_006b55e0(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 - (long)param_2 >> 2;
  if (lVar1 == 1) {
    *param_1 = *param_2;
    return;
  }
  if (lVar1 != 0) {
    FUN_00771ea0();
    return;
  }
  return;
}


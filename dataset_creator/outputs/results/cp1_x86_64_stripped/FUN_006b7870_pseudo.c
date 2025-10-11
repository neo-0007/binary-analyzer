
long FUN_006b7870(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = -1;
  if (param_3 < (ulong)param_1[1]) {
    lVar1 = *param_1;
    lVar2 = thunk_FUN_00756540(lVar1 + param_3 * 4,param_2,param_1[1] - param_3);
    if (lVar2 != 0) {
      lVar3 = lVar2 - lVar1 >> 2;
    }
  }
  return lVar3;
}


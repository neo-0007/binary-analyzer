
void FUN_00719550(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = thunk_FUN_00712a40(param_2,param_3);
  if (param_3 != lVar1) {
    thunk_FUN_00713720(param_1 + lVar1,0,param_3 - lVar1);
  }
  thunk_FUN_00713a50(param_1,param_2,lVar1);
  return;
}


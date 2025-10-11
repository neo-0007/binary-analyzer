
void FUN_0054db40(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1;
    do {
      lVar2 = lVar1 + 1;
      FUN_0054d680(lVar1,param_2,8,param_4,param_5,param_7,param_8);
      lVar1 = lVar2;
      param_2 = param_2 + 1;
    } while (lVar2 != param_1 + param_3);
  }
  return;
}


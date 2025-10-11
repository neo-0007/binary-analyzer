
long FUN_0041c400(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_0041c3c0();
    lVar2 = FUN_0041ad90(lVar1 + 1,param_3,param_4);
    if (lVar2 != 0) {
      lVar2 = thunk_FUN_00713a50(lVar2,param_1,lVar1);
      *(undefined1 *)(lVar2 + lVar1) = 0;
    }
    return lVar2;
  }
  return 0;
}


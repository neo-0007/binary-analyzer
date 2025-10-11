
undefined8 FUN_004cc390(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar2 = FUN_004a78b0();
    if (lVar2 != 0) {
      iVar1 = FUN_004a1fa0(lVar2,param_2,param_3);
      if (iVar1 != 0) {
        iVar1 = FUN_00435f80(param_1,lVar2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      thunk_FUN_004a2270(lVar2);
    }
  }
  return 0;
}


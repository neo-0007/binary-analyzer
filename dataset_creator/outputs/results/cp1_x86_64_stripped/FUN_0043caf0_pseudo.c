
undefined8
FUN_0043caf0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    lVar2 = thunk_FUN_0041cdd0(param_2,"mac");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      param_3 = *(long *)(lVar2 + 0x10);
      lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
      if (lVar2 != 0) goto LAB_0043cb32;
      lVar2 = 0;
      goto LAB_0043cb3c;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
    }
LAB_0043cb41:
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 1;
    }
  }
  else {
    lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
    if (lVar2 != 0) {
LAB_0043cb32:
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
LAB_0043cb3c:
      if (param_3 == 0) goto LAB_0043cb41;
    }
    lVar3 = FUN_0053fe10(param_6,param_3,lVar2);
    FUN_0053f190(*param_1);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = FUN_0053f090(lVar3);
    }
    *param_1 = lVar4;
    thunk_FUN_0053f9f0(lVar3);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0043c800(lVar3,param_2,param_4,param_5,0,lVar2);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_0053f190(*param_1);
  *param_1 = 0;
  return 0;
}



bool FUN_005a2c40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_0059f480(param_1,param_3,0xffffffff);
  if (iVar1 < 0) {
    iVar1 = FUN_0059f480(param_2,param_3,0xffffffff);
    if (iVar1 < 0) {
      return true;
    }
    lVar4 = 0;
  }
  else {
    iVar2 = FUN_0059f480(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    uVar3 = FUN_0059f4b0(param_1,iVar1);
    lVar4 = FUN_005a2b20(uVar3);
    iVar1 = FUN_0059f480(param_2,param_3,0xffffffff);
    if (iVar1 < 0) {
      if (lVar4 != 0) {
        return false;
      }
      return true;
    }
  }
  iVar2 = FUN_0059f480(param_2,param_3,iVar1);
  if (iVar2 == -1) {
    uVar3 = FUN_0059f4b0(param_2,iVar1);
    lVar5 = FUN_005a2b20(uVar3);
    if (lVar5 == 0 && lVar4 == 0) {
      return true;
    }
    if ((lVar4 != 0) && (lVar5 != 0)) {
      iVar1 = thunk_FUN_004a2350(lVar4);
      return iVar1 == 0;
    }
  }
  return false;
}


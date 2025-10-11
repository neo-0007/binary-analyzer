
bool FUN_00469720(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = FUN_00485290(*param_1);
  if (param_2 == 0) {
    return true;
  }
  iVar1 = FUN_0043c6f0(param_1 + 1,param_2,uVar2);
  if ((((iVar1 == 0) ||
       ((lVar3 = thunk_FUN_0041cdd0(param_2,"pass"), lVar3 != 0 &&
        (iVar1 = FUN_004695d0(param_1 + 4,param_1 + 5,lVar3), iVar1 == 0)))) ||
      ((lVar3 = thunk_FUN_0041cdd0(param_2,"salt"), lVar3 != 0 &&
       (iVar1 = FUN_004695d0(param_1 + 6,param_1 + 7,lVar3), iVar1 == 0)))) ||
     ((lVar3 = thunk_FUN_0041cdd0(param_2,"id"), lVar3 != 0 &&
      (iVar1 = thunk_FUN_0041cf60(lVar3,param_1 + 9), iVar1 == 0)))) {
    bVar4 = false;
  }
  else {
    lVar3 = thunk_FUN_0041cdd0(param_2,"iter");
    if (lVar3 == 0) {
      return true;
    }
    iVar1 = FUN_0041d830(lVar3,param_1 + 8);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}


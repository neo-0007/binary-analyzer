
long FUN_00569860(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_0056a480();
  if (lVar2 != 0) {
    if (param_3 != 0x14) {
      lVar3 = FUN_004a7700();
      *(long *)(lVar2 + 0x10) = lVar3;
      if ((lVar3 == 0) || (iVar1 = thunk_FUN_0049f880(lVar3,(long)param_3), iVar1 == 0))
      goto LAB_005698e0;
    }
    iVar1 = FUN_004a8ad0(lVar2,param_1);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        param_2 = param_1;
      }
      iVar1 = FUN_004a8bf0(lVar2 + 8,param_2);
      if ((iVar1 != 0) && (iVar1 = FUN_004a8ad0(lVar2 + 0x20,param_2), iVar1 != 0)) {
        return lVar2;
      }
    }
  }
LAB_005698e0:
  FUN_0056a4a0(lVar2);
  return 0;
}


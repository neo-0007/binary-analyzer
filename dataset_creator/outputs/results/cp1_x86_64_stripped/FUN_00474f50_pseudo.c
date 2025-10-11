
ulong FUN_00474f50(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = FUN_0043b840();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar3 = FUN_0042c510(param_2);
  uVar4 = FUN_0042c510(param_1);
  iVar1 = FUN_004b7840(uVar4,uVar3);
  if ((param_3 & 3) == 0) {
    return (ulong)(iVar1 == 0);
  }
  if ((param_3 & 2) != 0) {
    lVar5 = FUN_0042c500(param_1);
    lVar6 = FUN_0042c500(param_2);
    if ((lVar5 != 0) && (lVar6 != 0)) {
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_004b7840(lVar5,lVar6);
      return (ulong)(iVar1 == 0);
    }
  }
  if ((param_3 & 1) == 0) {
    return (ulong)(param_3 & 1);
  }
  lVar5 = FUN_0042c520(param_1);
  lVar6 = FUN_0042c520(param_2);
  if (((lVar5 != 0) && (lVar6 != 0)) && (iVar1 == 0)) {
    iVar1 = FUN_004b7840(lVar5,lVar6);
    return (ulong)(iVar1 == 0);
  }
  return 0;
}


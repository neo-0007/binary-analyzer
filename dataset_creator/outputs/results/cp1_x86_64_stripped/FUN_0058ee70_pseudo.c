
long FUN_0058ee70(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = FUN_004b7690();
  lVar4 = FUN_004b7690();
  lVar5 = FUN_004b7690();
  if ((lVar3 != 0 && lVar4 != 0) && (lVar5 != 0)) {
    iVar1 = FUN_004efa30(param_1,lVar3,lVar4,lVar5,0);
    if (iVar1 != 0) {
      iVar2 = FUN_004b7bb0(lVar3);
      iVar1 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar1 = iVar2 + 7;
      }
      lVar6 = (long)(iVar1 >> 3);
      goto LAB_0058eee3;
    }
  }
  lVar6 = 0;
LAB_0058eee3:
  FUN_004b7fa0(lVar3);
  FUN_004b7fa0(lVar4);
  FUN_004b7fa0(lVar5);
  return lVar6;
}


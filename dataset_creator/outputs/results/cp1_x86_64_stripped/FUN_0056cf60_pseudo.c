
bool FUN_0056cf60(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  iVar1 = FUN_004b7bb0(&PTR_DAT_00914de0);
  iVar2 = FUN_004b7bb0(param_1);
  if (iVar2 != param_2 >> 1) {
    return false;
  }
  FUN_004b2c00(param_3);
  lVar3 = FUN_004b2df0(param_3);
  if ((lVar3 != 0) && (lVar4 = FUN_004b8260(lVar3,&PTR_DAT_00914de0), lVar4 != 0)) {
    if (iVar2 - iVar1 < 0) {
      iVar1 = FUN_004bc3b0(lVar3,lVar3,iVar1 - iVar2);
    }
    else {
      iVar1 = FUN_004bc220(lVar3,lVar3);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_004b7840(param_1,lVar3);
      bVar5 = 0 < iVar1;
      goto LAB_0056d02b;
    }
  }
  bVar5 = false;
LAB_0056d02b:
  FUN_004b2d50(param_3);
  return bVar5;
}


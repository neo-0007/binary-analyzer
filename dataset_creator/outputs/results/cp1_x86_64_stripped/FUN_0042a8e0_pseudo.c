
bool FUN_0042a8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  iVar1 = FUN_00433230();
  if (iVar1 != 0) {
    return true;
  }
  bVar11 = false;
  iVar1 = FUN_00433340(param_1);
  iVar2 = FUN_00433360(param_1);
  iVar3 = FUN_00433380(param_1);
  uVar4 = FUN_004333a0(param_1);
  iVar5 = FUN_00433340(0);
  iVar6 = FUN_00433360(0);
  iVar7 = FUN_00433380(0);
  lVar10 = 0;
  if (iVar1 != iVar5) {
    lVar10 = FUN_00433790(iVar1);
  }
  if (iVar2 == iVar6) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_00433790(iVar2);
  }
  if (iVar3 == iVar7) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_00433790();
  }
  if ((((lVar10 == 0) || (iVar1 = FUN_00548b40(param_2,param_3,"digest"), iVar1 != 0)) &&
      ((lVar9 == 0 || (iVar1 = FUN_00548b40(param_2,param_3,&DAT_007dc8b3,lVar9), iVar1 != 0)))) &&
     ((lVar8 == 0 || (iVar1 = FUN_00548b40(param_2,param_3,"mgf1-digest",lVar8), iVar1 != 0)))) {
    iVar1 = FUN_00548aa0(param_2,param_3,"saltlen",uVar4);
    bVar11 = iVar1 != 0;
  }
  return bVar11;
}


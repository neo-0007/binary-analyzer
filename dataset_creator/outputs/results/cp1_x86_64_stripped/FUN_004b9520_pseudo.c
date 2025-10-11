
bool FUN_004b9520(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = *(int *)(param_4 + 0x28);
  iVar4 = *(int *)(param_2 + 1);
  iVar6 = *(int *)(param_3 + 1);
  if (((1 < iVar3) && (iVar3 == iVar4)) && (iVar3 == iVar6)) {
    lVar5 = FUN_004b8240(param_1,iVar3);
    if (lVar5 == 0) {
      return false;
    }
    iVar4 = FUN_004c0ba0(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                         iVar3);
    if (iVar4 != 0) {
      uVar1 = *(uint *)(param_2 + 2);
      uVar2 = *(uint *)(param_3 + 2);
      *(int *)(param_1 + 1) = iVar3;
      *(uint *)(param_1 + 2) = uVar1 ^ uVar2;
      return true;
    }
    iVar4 = *(int *)(param_2 + 1);
    iVar6 = *(int *)(param_3 + 1);
  }
  if (iVar3 * 2 < iVar4 + iVar6) {
    return false;
  }
  FUN_004b2c00(param_5);
  lVar5 = FUN_004b2df0(param_5);
  if (lVar5 != 0) {
    if (param_2 == param_3) {
      iVar3 = FUN_004bc710(lVar5,param_2,param_5);
    }
    else {
      iVar3 = FUN_004baa30(lVar5,param_2,param_3,param_5);
    }
    if (iVar3 != 0) {
      iVar3 = FUN_004b9310(param_1,lVar5,param_4);
      bVar7 = iVar3 != 0;
      goto LAB_004b95c5;
    }
  }
  bVar7 = false;
LAB_004b95c5:
  FUN_004b2d50(param_5);
  return bVar7;
}


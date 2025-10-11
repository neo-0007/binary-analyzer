
bool FUN_005cfa10(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long local_80;
  
  iVar1 = FUN_004f0cc0(param_1,param_3);
  lVar9 = param_4;
  if ((iVar1 != 0) || (iVar1 = FUN_004f0cc0(param_1,param_4), lVar9 = param_3, iVar1 != 0)) {
    iVar1 = FUN_004efec0(param_2,lVar9);
    return iVar1 != 0;
  }
  local_80 = 0;
  bVar11 = false;
  if ((param_5 == 0) && (param_5 = FUN_004b2b10(), local_80 = param_5, param_5 == 0)) {
    return false;
  }
  FUN_004b2c00(param_5);
  uVar2 = FUN_004b2df0(param_5);
  uVar3 = FUN_004b2df0(param_5);
  uVar4 = FUN_004b2df0(param_5);
  uVar5 = FUN_004b2df0(param_5);
  uVar6 = FUN_004b2df0(param_5);
  uVar7 = FUN_004b2df0(param_5);
  uVar8 = FUN_004b2df0(param_5);
  lVar9 = FUN_004b2df0(param_5);
  if (lVar9 == 0) goto LAB_005cfca0;
  if (*(int *)(param_3 + 0x28) == 0) {
    iVar1 = FUN_004f0d70(param_1,param_3,uVar2,uVar3,param_5);
    if (iVar1 == 0) goto LAB_005cfca0;
  }
  else {
    lVar10 = FUN_004b8260(uVar2,*(undefined8 *)(param_3 + 0x10));
    if ((lVar10 == 0) || (lVar10 = FUN_004b8260(uVar3,*(undefined8 *)(param_3 + 0x18)), lVar10 == 0)
       ) goto LAB_005cfca0;
  }
  if (*(int *)(param_4 + 0x28) == 0) {
    iVar1 = FUN_004f0d70(param_1,param_4,uVar4,uVar5,param_5);
    if (iVar1 == 0) goto LAB_005cfca0;
  }
  else {
    lVar10 = FUN_004b8260(uVar4,*(undefined8 *)(param_4 + 0x10));
    if ((lVar10 == 0) || (lVar10 = FUN_004b8260(uVar5,*(undefined8 *)(param_4 + 0x18)), lVar10 == 0)
       ) goto LAB_005cfca0;
  }
  iVar1 = FUN_004b77f0(uVar2,uVar4);
  if (iVar1 == 0) {
    iVar1 = FUN_004b77f0(uVar3,uVar5);
    if ((iVar1 != 0) || (iVar1 = FUN_004b7ba0(uVar4), iVar1 != 0)) {
      iVar1 = FUN_004f0830(param_1,param_2);
      bVar11 = iVar1 != 0;
      goto LAB_005cfca0;
    }
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar8,uVar5,uVar4,param_5);
    if ((((iVar1 == 0) || (iVar1 = FUN_006184d0(uVar8,uVar8,uVar4), iVar1 == 0)) ||
        (iVar1 = (**(code **)(*param_1 + 0x100))(param_1,uVar6,uVar8,param_5), iVar1 == 0)) ||
       (iVar1 = FUN_006184d0(uVar6,uVar6,uVar8), iVar1 == 0)) goto LAB_005cfca0;
    iVar1 = FUN_006184d0(uVar6,uVar6,param_1[0xc]);
  }
  else {
    iVar1 = FUN_006184d0(lVar9,uVar2,uVar4);
    if (((((iVar1 == 0) || (iVar1 = FUN_006184d0(uVar8,uVar3,uVar5), iVar1 == 0)) ||
         (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar8,uVar8,lVar9,param_5), iVar1 == 0))
        || ((iVar1 = (**(code **)(*param_1 + 0x100))(param_1,uVar6,uVar8,param_5), iVar1 == 0 ||
            (iVar1 = FUN_006184d0(uVar6,uVar6,param_1[0xc]), iVar1 == 0)))) ||
       (iVar1 = FUN_006184d0(uVar6,uVar6,uVar8), iVar1 == 0)) goto LAB_005cfca0;
    iVar1 = FUN_006184d0(uVar6,uVar6,lVar9);
  }
  if (((iVar1 != 0) && (iVar1 = FUN_006184d0(uVar7,uVar4,uVar6), iVar1 != 0)) &&
     ((iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,uVar7,uVar7,uVar8,param_5), iVar1 != 0 &&
      ((iVar1 = FUN_006184d0(uVar7,uVar7,uVar6), iVar1 != 0 &&
       (iVar1 = FUN_006184d0(uVar7,uVar7,uVar5), iVar1 != 0)))))) {
    iVar1 = FUN_004f0f80(param_1,param_2,uVar6,uVar7,param_5);
    bVar11 = iVar1 != 0;
  }
LAB_005cfca0:
  FUN_004b2d50(param_5);
  FUN_004b2b50(local_80);
  return bVar11;
}


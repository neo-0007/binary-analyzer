
uint FUN_004f1190(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  iVar1 = FUN_004ef890();
  iVar2 = FUN_004ef890(param_2);
  if (iVar1 != iVar2) {
    return 1;
  }
  iVar1 = FUN_004ef870(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_004ef870(param_2), iVar1 != 0)) {
    iVar1 = FUN_004ef870(param_1);
    iVar2 = FUN_004ef870(param_2);
    if (iVar1 != iVar2) {
      return 1;
    }
  }
  if ((*(byte *)*param_1 & 2) != 0) {
    return 0;
  }
  lVar9 = 0;
  if ((param_3 == 0) && (lVar9 = FUN_004b2b10(), param_3 = lVar9, lVar9 == 0)) {
    return 0xffffffff;
  }
  FUN_004b2c00(param_3);
  uVar3 = FUN_004b2df0(param_3);
  uVar4 = FUN_004b2df0(param_3);
  uVar5 = FUN_004b2df0(param_3);
  uVar6 = FUN_004b2df0(param_3);
  uVar7 = FUN_004b2df0(param_3);
  lVar8 = FUN_004b2df0(param_3);
  if (lVar8 == 0) {
    FUN_004b2d50(param_3);
    FUN_004b2b50(lVar9);
    return 0xffffffff;
  }
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,uVar3,uVar4,uVar5,param_3);
  if ((((iVar1 != 0) &&
       (iVar1 = (**(code **)(*param_2 + 0x30))(param_2,uVar6,uVar7,lVar8,param_3), iVar1 != 0)) &&
      (iVar1 = FUN_004b7840(uVar3,uVar6), iVar1 == 0)) &&
     ((iVar1 = FUN_004b7840(uVar4,uVar7), iVar1 == 0 &&
      (iVar1 = FUN_004b7840(uVar5,lVar8), iVar1 == 0)))) {
    uVar3 = FUN_004ef780(param_2);
    uVar4 = FUN_004ef780(param_1);
    iVar1 = FUN_004f10c0(param_1,uVar4,uVar3,param_3);
    if (iVar1 == 0) {
      lVar8 = FUN_004ef7e0(param_1);
      lVar10 = FUN_004ef7e0(param_2);
      if ((lVar8 == 0) || (lVar10 == 0)) {
        uVar11 = 0xffffffff;
        goto LAB_004f12a0;
      }
      iVar1 = FUN_004b7840(lVar8,lVar10);
      if (iVar1 == 0) {
        uVar3 = FUN_004ef840(param_1);
        uVar4 = FUN_004ef840(param_2);
        iVar1 = FUN_004b7ba0(uVar3);
        uVar11 = 0;
        if ((iVar1 == 0) && (iVar1 = FUN_004b7ba0(uVar4), iVar1 == 0)) {
          iVar1 = FUN_004b7840(uVar3,uVar4);
          uVar11 = (uint)(iVar1 != 0);
        }
        goto LAB_004f12a0;
      }
    }
  }
  uVar11 = 1;
LAB_004f12a0:
  FUN_004b2d50(param_3);
  FUN_004b2b50(lVar9);
  return uVar11;
}


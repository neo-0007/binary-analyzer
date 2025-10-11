
undefined8
FUN_004254f0(undefined8 *param_1,long param_2,int param_3,undefined1 *param_4,long param_5,
            code *param_6,long param_7)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_5 == 0 || param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_3 < 1) {
    return 0;
  }
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_0083e5c2;
  }
  if (param_2 == 0) {
    return 0;
  }
  plVar3 = (long *)FUN_0041ad90(0x28,"../crypto/property/property.c",0x125);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  plVar3[2] = param_5;
  plVar3[3] = (long)param_6;
  plVar3[4] = param_7;
  iVar1 = (*param_6)(param_5);
  if (iVar1 == 0) {
    FUN_0041ad60(plVar3,"../crypto/property/property.c",300);
    return 0;
  }
  *plVar3 = param_2;
  iVar1 = FUN_004222c0(param_1[2]);
  if (iVar1 == 0) {
    FUN_0041ad60(plVar3,"../crypto/property/property.c",0x133);
    return 0;
  }
  lVar9 = (long)param_3;
  lVar4 = FUN_0054a470(param_1[1],lVar9);
  if (lVar4 != 0) {
    lVar5 = FUN_00545d60(*(undefined8 *)(lVar4 + 0x10));
    param_1[3] = param_1[3] - lVar5;
    FUN_00545bd0(*(undefined8 *)(lVar4 + 0x10),FUN_00424f90);
    FUN_00545700(*(undefined8 *)(lVar4 + 0x10));
  }
  lVar4 = FUN_00565a40(*param_1,param_4);
  plVar3[1] = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_00426d10(*param_1,param_4);
    plVar3[1] = lVar4;
    if (lVar4 != 0) {
      FUN_00565ae0(*param_1,param_4,lVar4);
      goto LAB_0042560d;
    }
LAB_0042566f:
    uVar8 = param_1[2];
  }
  else {
LAB_0042560d:
    piVar6 = (int *)FUN_0054a470(param_1[1],lVar9);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_0041aec0(0x18,"../crypto/property/property.c",0x140);
      if (piVar6 != (int *)0x0) {
        lVar4 = FUN_00436410();
        *(long *)(piVar6 + 2) = lVar4;
        if (lVar4 != 0) {
          lVar4 = FUN_00545610(FUN_00425030,FUN_004251b0);
          *(long *)(piVar6 + 4) = lVar4;
          if (lVar4 != 0) {
            *piVar6 = param_3;
            iVar1 = FUN_0054a4e0(param_1[1],lVar9,piVar6);
            if (iVar1 != 0) goto LAB_00425626;
          }
        }
        FUN_004222e0(param_1[2]);
        FUN_00436430(*(undefined8 *)(piVar6 + 2),FUN_00424fd0);
        FUN_00545bd0(*(undefined8 *)(piVar6 + 4),FUN_00424f90);
        FUN_00545790(*(undefined8 *)(piVar6 + 4));
        FUN_0041ad60(piVar6,"../crypto/property/property.c",0xe0);
        goto LAB_00425679;
      }
      goto LAB_0042566f;
    }
LAB_00425626:
    iVar1 = 0;
    while ((iVar2 = FUN_00436480(*(undefined8 *)(piVar6 + 2)), iVar1 < iVar2 &&
           ((plVar7 = (long *)FUN_004364a0(*(undefined8 *)(piVar6 + 2),iVar1), *plVar7 != *plVar3 ||
            (plVar7[1] != plVar3[1]))))) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = FUN_00436480(*(undefined8 *)(piVar6 + 2));
    if (iVar1 != iVar2) goto LAB_0042566f;
    iVar1 = FUN_00435f80(*(undefined8 *)(piVar6 + 2),plVar3);
    uVar8 = param_1[2];
    if (iVar1 != 0) {
      FUN_004222e0(uVar8);
      return 1;
    }
  }
  FUN_004222e0(uVar8);
LAB_00425679:
  (*(code *)plVar3[4])(plVar3[2]);
  FUN_0041ad60(plVar3,"../crypto/property/property.c",0xc6);
  return 0;
}


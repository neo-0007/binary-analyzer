
bool FUN_0050e450(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  iVar5 = FUN_004f0cc0(param_1,param_3);
  if (iVar5 != 0) {
    FUN_004b7b50(*(undefined8 *)(param_2 + 0x20));
    *(undefined4 *)(param_2 + 0x28) = 0;
    return true;
  }
  bVar12 = false;
  pcVar1 = *(code **)(*param_1 + 0xf8);
  pcVar2 = *(code **)(*param_1 + 0x100);
  lVar3 = param_1[8];
  lVar11 = 0;
  if ((param_4 == 0) && (param_4 = FUN_004b2a70(param_1[0x15]), lVar11 = param_4, param_4 == 0)) {
    return false;
  }
  FUN_004b2c00(param_4);
  uVar6 = FUN_004b2df0(param_4);
  uVar7 = FUN_004b2df0(param_4);
  uVar8 = FUN_004b2df0(param_4);
  lVar9 = FUN_004b2df0(param_4);
  if (lVar9 != 0) {
    if (*(int *)(param_3 + 0x28) == 0) {
      if ((int)param_1[0xe] == 0) {
        iVar5 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_3 + 0x10),param_4);
        if ((((iVar5 == 0) || (iVar5 = FUN_004b9110(uVar7,uVar6,lVar3), iVar5 == 0)) ||
            (iVar5 = FUN_004b8d50(uVar6,uVar6,uVar7,lVar3), iVar5 == 0)) ||
           (((iVar5 = (*pcVar2)(param_1,uVar7,*(undefined8 *)(param_3 + 0x20),param_4), iVar5 == 0
             || (iVar5 = (*pcVar2)(param_1,uVar7,uVar7,param_4), iVar5 == 0)) ||
            (iVar5 = (*pcVar1)(param_1,uVar7,uVar7,param_1[0xc],param_4), iVar5 == 0))))
        goto LAB_0050e516;
        iVar5 = FUN_004b8d50(uVar7,uVar7,uVar6,lVar3);
      }
      else {
        iVar5 = (*pcVar2)(param_1,uVar7,*(undefined8 *)(param_3 + 0x20),param_4);
        if (((iVar5 == 0) ||
            (iVar5 = FUN_004b8d50(uVar6,*(undefined8 *)(param_3 + 0x10),uVar7,lVar3), iVar5 == 0))
           || ((iVar5 = FUN_004b8f90(uVar8,*(undefined8 *)(param_3 + 0x10),uVar7,lVar3), iVar5 == 0
               || ((iVar5 = (*pcVar1)(param_1,uVar7,uVar6,uVar8,param_4), iVar5 == 0 ||
                   (iVar5 = FUN_004b9110(uVar6,uVar7,lVar3), iVar5 == 0)))))) goto LAB_0050e516;
        iVar5 = FUN_004b8d50(uVar7,uVar6,uVar7,lVar3);
      }
    }
    else {
      iVar5 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_3 + 0x10),param_4);
      if (((iVar5 == 0) || (iVar5 = FUN_004b9110(uVar7,uVar6,lVar3), iVar5 == 0)) ||
         (iVar5 = FUN_004b8d50(uVar6,uVar6,uVar7,lVar3), iVar5 == 0)) goto LAB_0050e516;
      iVar5 = FUN_004b8d50(uVar7,uVar6,param_1[0xc],lVar3);
    }
    if (iVar5 != 0) {
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar5 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x18),
                          *(undefined8 *)(param_3 + 0x20),param_4);
        if (iVar5 == 0) goto LAB_0050e516;
      }
      else {
        lVar10 = FUN_004b8260(uVar6,*(undefined8 *)(param_3 + 0x18));
        if (lVar10 == 0) goto LAB_0050e516;
      }
      iVar5 = FUN_004b9110(*(undefined8 *)(param_2 + 0x20),uVar6,lVar3);
      if (iVar5 != 0) {
        uVar4 = *(undefined8 *)(param_3 + 0x18);
        *(undefined4 *)(param_2 + 0x28) = 0;
        iVar5 = (*pcVar2)(param_1,lVar9,uVar4,param_4);
        if (((iVar5 != 0) &&
            (iVar5 = (*pcVar1)(param_1,uVar8,*(undefined8 *)(param_3 + 0x10),lVar9,param_4),
            iVar5 != 0)) &&
           ((((iVar5 = FUN_004b9170(uVar8,uVar8,2,lVar3), iVar5 != 0 &&
              ((iVar5 = FUN_004b9110(uVar6,uVar8,lVar3), iVar5 != 0 &&
               (iVar5 = (*pcVar2)(param_1,*(undefined8 *)(param_2 + 0x10),uVar7,param_4), iVar5 != 0
               )))) && (iVar5 = FUN_004b8f90(*(undefined8 *)(param_2 + 0x10),
                                             *(undefined8 *)(param_2 + 0x10),uVar6,lVar3),
                       iVar5 != 0)) &&
            ((((iVar5 = (*pcVar2)(param_1,uVar6,lVar9,param_4), iVar5 != 0 &&
               (iVar5 = FUN_004b9170(lVar9,uVar6,3,lVar3), iVar5 != 0)) &&
              (iVar5 = FUN_004b8f90(uVar6,uVar8,*(undefined8 *)(param_2 + 0x10),lVar3), iVar5 != 0))
             && (iVar5 = (*pcVar1)(param_1,uVar6,uVar7,uVar6,param_4), iVar5 != 0)))))) {
          iVar5 = FUN_004b8f90(*(undefined8 *)(param_2 + 0x18),uVar6,lVar9,lVar3);
          bVar12 = iVar5 != 0;
        }
      }
    }
  }
LAB_0050e516:
  FUN_004b2d50(param_4);
  FUN_004b2b50(lVar11);
  return bVar12;
}


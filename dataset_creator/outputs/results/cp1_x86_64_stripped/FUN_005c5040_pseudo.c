
undefined8
FUN_005c5040(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  param_6 = param_6 >> 1;
  FUN_004b2c00(param_8);
  uVar3 = FUN_004b2df0(param_8);
  uVar4 = FUN_004b2df0(param_8);
  uVar5 = FUN_004b2df0(param_8);
  uVar6 = FUN_004b2df0(param_8);
  uVar7 = FUN_004b2df0(param_8);
  uVar8 = FUN_004b2df0(param_8);
  lVar9 = FUN_004b2df0(param_8);
  if (lVar9 != 0) {
    if (param_3 == 0) {
      iVar1 = FUN_004b7bb0(&PTR_DAT_00914de0);
      if (iVar1 <= param_6) {
        iVar1 = FUN_004b7bb0(&PTR_DAT_00914de0);
        iVar1 = FUN_004bc220(uVar3,&PTR_DAT_00914de0,param_6 - iVar1);
        if (iVar1 != 0) {
          uVar11 = FUN_004b75a0();
          iVar1 = FUN_004bc220(uVar4,uVar11,param_6);
          if ((iVar1 != 0) && (iVar1 = FUN_004b18d0(uVar4,uVar4,uVar3), iVar1 != 0))
          goto LAB_005c50f0;
        }
      }
    }
    else {
      lVar10 = FUN_004b8260(param_2,param_3);
      if (lVar10 != 0) {
LAB_005c50f0:
        iVar1 = FUN_004bbf30(lVar9,param_4);
        if (((((((iVar1 != 0) && (iVar1 = FUN_004b6d50(uVar6,lVar9,param_5,param_8), iVar1 != 0)) &&
               (iVar1 = FUN_004b7cc0(uVar6), iVar1 != 0)) &&
              ((lVar10 = FUN_004b6c40(uVar5,param_5,lVar9,param_8), lVar10 != 0 &&
               (iVar1 = FUN_004bacf0(uVar5,uVar5,param_5,param_8), iVar1 != 0)))) &&
             ((lVar10 = FUN_004b6c40(uVar6,lVar9,param_5,param_8), lVar10 != 0 &&
              ((iVar1 = FUN_004bacf0(uVar6,uVar6,lVar9,param_8), iVar1 != 0 &&
               (iVar1 = FUN_004b18d0(uVar5,uVar5,uVar6), iVar1 != 0)))))) &&
            (iVar1 = FUN_004bacf0(uVar7,lVar9,param_5,param_8), iVar1 != 0)) &&
           ((iVar1 = FUN_004b7d60(uVar5), iVar1 == 0 ||
            (iVar1 = FUN_004b1810(uVar5,uVar5,uVar7), iVar1 != 0)))) {
          if (param_3 == 0) goto LAB_005c53c7;
          do {
            iVar1 = FUN_004b8d90(param_1,uVar5,param_2,uVar7,param_8);
            if ((iVar1 == 0) || (iVar1 = FUN_004b1810(param_1,param_1,param_2), iVar1 == 0))
            goto LAB_005c5120;
            iVar1 = 0;
            while (iVar2 = FUN_004b7bb0(param_1), iVar2 <= param_6) {
              FUN_005c3bd0(param_9,0,2);
              lVar9 = FUN_004b8260(uVar8,param_1);
              if ((lVar9 == 0) ||
                 ((iVar2 = FUN_004bcb60(uVar8,1), iVar2 == 0 ||
                  (iVar2 = FUN_004b6d50(uVar6,uVar8,param_7,param_8), iVar2 == 0))))
              goto LAB_005c5120;
              iVar2 = FUN_004b7cc0(uVar6);
              if (iVar2 != 0) {
                iVar2 = FUN_005c4db0(param_1,param_8,param_9);
                if (0 < iVar2) goto LAB_005c53fa;
                if (iVar2 != 0) goto LAB_005c5120;
              }
              iVar1 = iVar1 + 1;
              if ((param_6 * 5 <= iVar1) ||
                 (iVar2 = FUN_004b1810(param_1,param_1,uVar7), iVar2 == 0)) goto LAB_005c5120;
            }
            if (param_3 != 0) goto LAB_005c5120;
LAB_005c53c7:
            iVar1 = FUN_004bb5a0(param_2,uVar4,0,param_8);
          } while ((iVar1 != 0) && (iVar1 = FUN_004b1810(param_2,param_2,uVar3), iVar1 != 0));
LAB_005c53fa:
          uVar3 = 1;
          FUN_005c3bd0(param_9,3,0);
          goto LAB_005c5123;
        }
      }
    }
  }
LAB_005c5120:
  uVar3 = 0;
LAB_005c5123:
  FUN_004b7780(uVar8);
  FUN_004b2d50(param_8);
  return uVar3;
}


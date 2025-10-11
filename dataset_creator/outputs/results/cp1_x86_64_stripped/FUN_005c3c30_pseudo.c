
int FUN_005c3c30(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                undefined4 *param_6)

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
  long lVar11;
  int iVar12;
  int iVar13;
  int local_64;
  
  iVar1 = FUN_004b7d40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004b2c00(param_3);
  uVar3 = FUN_004b2df0(param_3);
  uVar4 = FUN_004b2df0(param_3);
  uVar5 = FUN_004b2df0(param_3);
  uVar6 = FUN_004b2df0(param_3);
  uVar7 = FUN_004b2df0(param_3);
  uVar8 = FUN_004b2df0(param_3);
  lVar9 = FUN_004b2df0(param_3);
  if (((((lVar9 != 0) && (lVar10 = FUN_004b8260(uVar4,param_1), lVar10 != 0)) &&
       (iVar1 = FUN_004bcb60(uVar4,1), iVar1 != 0)) &&
      ((lVar10 = FUN_004b8260(uVar5,param_1), lVar10 != 0 &&
       (iVar1 = FUN_004bcb60(uVar5,3), iVar1 != 0)))) && (iVar1 = FUN_004b7ba0(uVar5), iVar1 == 0))
  {
    iVar12 = 1;
    iVar1 = FUN_004b7d60(uVar5);
    if (iVar1 == 0) {
      while (iVar1 = FUN_004b78f0(uVar4,iVar12), iVar1 == 0) {
        iVar12 = iVar12 + 1;
      }
      iVar1 = FUN_004bc3b0(uVar7,uVar4,iVar12);
      if ((iVar1 != 0) && (lVar10 = FUN_004b9790(), lVar10 != 0)) {
        iVar1 = FUN_004b9860(lVar10,param_1,param_3);
        if (iVar1 == 0) goto LAB_005c3d08;
        local_64 = 0;
        if (param_2 == 0) {
          iVar1 = FUN_004b7bb0(param_1);
          param_2 = 0x40;
          if (0x800 < iVar1) {
            param_2 = 0x80;
          }
LAB_005c3e48:
          do {
            iVar1 = FUN_004bb5a0(lVar9,uVar5,0,param_3);
            if ((iVar1 == 0) || (iVar1 = FUN_004bcc70(lVar9,2), iVar1 == 0)) goto LAB_005c3d08;
            if (param_5 != 0) {
              iVar1 = FUN_004b6d50(uVar3,lVar9,param_1,param_3);
              if (iVar1 == 0) goto LAB_005c3d08;
              iVar1 = FUN_004b7cc0(uVar3);
              if (iVar1 == 0) {
                iVar1 = 1;
                *param_6 = 1;
                goto LAB_005c3d08;
              }
            }
            iVar1 = FUN_004b4eb0(uVar8,lVar9,uVar7,param_1,param_3,lVar10);
            if (iVar1 == 0) goto LAB_005c3d08;
            iVar1 = FUN_004b7cc0(uVar8);
            if ((iVar1 == 0) && (iVar1 = FUN_004b7840(uVar8,uVar4), iVar1 != 0)) {
              iVar1 = 0;
              if (iVar12 == 1) {
LAB_005c405a:
                lVar11 = FUN_004b8260(uVar6,uVar8);
                if ((lVar11 == 0) ||
                   (iVar1 = FUN_004b8fe0(uVar8,uVar6,uVar6,param_1,param_3), iVar1 == 0))
                goto LAB_005c3d08;
                iVar1 = FUN_004b7cc0(uVar8);
                if (iVar1 == 0) {
                  lVar11 = FUN_004b8260(uVar6,uVar8);
                  iVar1 = 0;
                  if (lVar11 == 0) goto LAB_005c3d08;
                }
LAB_005c40d5:
                if (param_5 == 0) {
                  iVar1 = 1;
                  *param_6 = 0;
                }
                else {
                  iVar1 = FUN_004bcb60(uVar6,1);
                  if ((iVar1 != 0) &&
                     (iVar1 = FUN_004b6d50(uVar3,uVar6,param_1,param_3), iVar1 != 0)) {
                    iVar1 = FUN_004b7cc0(uVar3);
                    if (iVar1 == 0) {
                      *param_6 = 1;
                      iVar1 = 1;
                    }
                    else {
                      *param_6 = 2;
                      iVar1 = 1;
                    }
                  }
                }
                goto LAB_005c3d08;
              }
              iVar13 = 1;
              while( true ) {
                lVar11 = FUN_004b8260(uVar6,uVar8);
                if (lVar11 == 0) goto LAB_005c3d08;
                iVar2 = FUN_004b8fe0(uVar8,uVar6,uVar6,param_1,param_3);
                if (iVar2 == 0) {
                  iVar1 = 0;
                  goto LAB_005c3d08;
                }
                iVar2 = FUN_004b7840(uVar8,uVar4);
                if (iVar2 == 0) break;
                iVar2 = FUN_004b7cc0(uVar8);
                if (iVar2 != 0) goto LAB_005c40d5;
                iVar13 = iVar13 + 1;
                if (iVar12 == iVar13) goto LAB_005c405a;
              }
            }
            iVar1 = FUN_005c3bd0(param_4,1,local_64);
            if (iVar1 == 0) goto LAB_005c3d08;
            local_64 = local_64 + 1;
          } while (local_64 < param_2);
        }
        else if (0 < param_2) goto LAB_005c3e48;
        iVar1 = 1;
        *param_6 = 3;
        goto LAB_005c3d08;
      }
    }
  }
  lVar10 = 0;
  iVar1 = 0;
LAB_005c3d08:
  FUN_004b7780(uVar3);
  FUN_004b7780(uVar4);
  FUN_004b7780(uVar5);
  FUN_004b7780(uVar6);
  FUN_004b7780(uVar7);
  FUN_004b7780(uVar8);
  FUN_004b7780(lVar9);
  FUN_004b2d50(param_3);
  FUN_004b9810(lVar10);
  return iVar1;
}


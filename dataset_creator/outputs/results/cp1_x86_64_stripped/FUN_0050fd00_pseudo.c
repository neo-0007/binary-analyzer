
undefined4 FUN_0050fd00(long *param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  long local_70;
  
  if (param_2 == 0) {
    return 1;
  }
  local_70 = 0;
  if ((param_4 == 0) && (param_4 = FUN_004b2a70(param_1[0x15]), local_70 = param_4, param_4 == 0)) {
    return 0;
  }
  FUN_004b2c00(param_4);
  uVar3 = FUN_004b2df0(param_4);
  lVar4 = FUN_004b2df0(param_4);
  if (lVar4 == 0) {
LAB_0050ff10:
    FUN_004b2d50(param_4);
    FUN_004b2b50(local_70);
    return 0;
  }
  puVar5 = (undefined8 *)FUN_0041ad90(param_2 * 8,"../crypto/ec/ecp_smpl.c",0x4ce);
  lVar6 = 0;
  if (puVar5 == (undefined8 *)0x0) goto LAB_0050ff10;
  do {
    lVar9 = lVar6;
    lVar6 = FUN_004b7690();
    puVar5[lVar9] = lVar6;
    if (lVar6 == 0) goto LAB_0050feb0;
    lVar6 = lVar9 + 1;
  } while (param_2 != lVar6);
  iVar2 = FUN_004b7ba0(*(undefined8 *)(*param_3 + 0x20));
  if (iVar2 == 0) {
    lVar7 = FUN_004b8260(*puVar5,*(undefined8 *)(*param_3 + 0x20));
    if (lVar7 != 0) goto LAB_0050fe17;
  }
  else {
    if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
      iVar2 = FUN_004b8190(*puVar5,1);
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x128))(param_1,*puVar5,param_4);
    }
    if (iVar2 != 0) {
LAB_0050fe17:
      plVar8 = param_3 + 1;
      puVar1 = puVar5;
      if (lVar6 != 1) {
        do {
          puVar10 = puVar1 + 1;
          iVar2 = FUN_004b7ba0(*(undefined8 *)(*plVar8 + 0x20));
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*param_1 + 0xf8))
                              (param_1,*puVar10,*puVar1,*(undefined8 *)(*plVar8 + 0x20),param_4);
            if (iVar2 == 0) goto LAB_0050feb0;
          }
          else {
            lVar6 = FUN_004b8260(*puVar10,*puVar1);
            if (lVar6 == 0) goto LAB_0050feb0;
          }
          plVar8 = plVar8 + 1;
          puVar1 = puVar10;
        } while (plVar8 != param_3 + param_2);
      }
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar3,puVar5[param_2 + -1],param_4);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ecp_smpl.c",0x4fb,"ossl_ec_GFp_simple_points_make_affine");
        FUN_0051f8f0(0x10,0x80003,0);
        uVar11 = 0;
        goto LAB_0050feb3;
      }
      lVar6 = lVar9;
      if ((*(code **)(*param_1 + 0x118) == (code *)0x0) ||
         ((iVar2 = (**(code **)(*param_1 + 0x118))(param_1,uVar3,uVar3,param_4), iVar2 != 0 &&
          (iVar2 = (**(code **)(*param_1 + 0x118))(param_1,uVar3,uVar3,param_4), iVar2 != 0)))) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          iVar2 = FUN_004b7ba0(*(undefined8 *)(param_3[lVar6] + 0x20));
          if ((iVar2 == 0) &&
             (((iVar2 = (**(code **)(*param_1 + 0xf8))
                                  (param_1,lVar4,puVar5[lVar6 + -1],uVar3,param_4), iVar2 == 0 ||
               (iVar2 = (**(code **)(*param_1 + 0xf8))
                                  (param_1,uVar3,uVar3,*(undefined8 *)(param_3[lVar6] + 0x20),
                                   param_4), iVar2 == 0)) ||
              (lVar7 = FUN_004b8260(*(undefined8 *)(param_3[lVar6] + 0x20),lVar4), lVar7 == 0))))
          goto LAB_0050feb0;
        }
        iVar2 = FUN_004b7ba0(*(undefined8 *)(*param_3 + 0x20));
        if ((iVar2 != 0) ||
           (lVar4 = FUN_004b8260(*(undefined8 *)(*param_3 + 0x20),uVar3), lVar4 != 0)) {
          lVar4 = 0;
          do {
            lVar6 = param_3[lVar4];
            iVar2 = FUN_004b7ba0(*(undefined8 *)(lVar6 + 0x20));
            if (iVar2 == 0) {
              iVar2 = (**(code **)(*param_1 + 0x100))
                                (param_1,uVar3,*(undefined8 *)(lVar6 + 0x20),param_4);
              if (((iVar2 == 0) ||
                  (iVar2 = (**(code **)(*param_1 + 0xf8))
                                     (param_1,*(undefined8 *)(lVar6 + 0x10),
                                      *(undefined8 *)(lVar6 + 0x10),uVar3,param_4), iVar2 == 0)) ||
                 ((iVar2 = (**(code **)(*param_1 + 0xf8))
                                     (param_1,uVar3,uVar3,*(undefined8 *)(lVar6 + 0x20),param_4),
                  iVar2 == 0 ||
                  (iVar2 = (**(code **)(*param_1 + 0xf8))
                                     (param_1,*(undefined8 *)(lVar6 + 0x18),
                                      *(undefined8 *)(lVar6 + 0x18),uVar3,param_4), iVar2 == 0))))
              goto LAB_0050feb0;
              if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
                iVar2 = FUN_004b8190(*(undefined8 *)(lVar6 + 0x20),1);
              }
              else {
                iVar2 = (**(code **)(*param_1 + 0x128))
                                  (param_1,*(undefined8 *)(lVar6 + 0x20),param_4);
              }
              if (iVar2 == 0) goto LAB_0050feb0;
              *(undefined4 *)(lVar6 + 0x28) = 1;
            }
            bVar12 = lVar9 != lVar4;
            lVar4 = lVar4 + 1;
          } while (bVar12);
          uVar11 = 1;
          goto LAB_0050feb3;
        }
      }
    }
  }
LAB_0050feb0:
  uVar11 = 0;
LAB_0050feb3:
  lVar4 = 0;
  FUN_004b2d50(param_4);
  FUN_004b2b50(local_70);
  do {
    if (puVar5[lVar4] == 0) break;
    FUN_004b7f20();
    lVar4 = lVar4 + 1;
  } while (param_2 != lVar4);
  FUN_0041ad60(puVar5,"../crypto/ec/ecp_smpl.c",0x550);
  return uVar11;
}


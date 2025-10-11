
bool FUN_0050da40(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  
  iVar2 = FUN_004f0cc0();
  if (iVar2 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecp_smpl.c",0x200,"ossl_ec_GFp_simple_point_get_affine_coordinates");
    FUN_0051f8f0(0x10,0x6a,0);
    return false;
  }
  bVar9 = false;
  lVar8 = 0;
  if ((param_5 == 0) && (param_5 = FUN_004b2a70(param_1[0x15]), lVar8 = param_5, param_5 == 0)) {
    return false;
  }
  FUN_004b2c00(param_5);
  uVar3 = FUN_004b2df0(param_5);
  uVar4 = FUN_004b2df0(param_5);
  uVar5 = FUN_004b2df0(param_5);
  lVar6 = FUN_004b2df0(param_5);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    if ((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
       (iVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar3,uVar7,param_5), uVar7 = uVar3,
       iVar2 != 0)) {
      iVar2 = FUN_004b7cc0(uVar7);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar4,uVar7,param_5);
        if (iVar2 == 0) {
          FUN_0051f420();
          bVar9 = false;
          FUN_0051f540("../crypto/ec/ecp_smpl.c",0x232,
                       "ossl_ec_GFp_simple_point_get_affine_coordinates");
          FUN_0051f8f0(0x10,0x80003,0);
          goto LAB_0050db60;
        }
        if (*(long *)(*param_1 + 0x118) == 0) {
          iVar2 = (**(code **)(*param_1 + 0x100))(param_1,uVar5,uVar4,param_5);
        }
        else {
          iVar2 = FUN_004b9090(uVar5,uVar4,param_1[8],param_5);
        }
        if ((iVar2 == 0) ||
           ((param_3 != 0 &&
            (iVar2 = (**(code **)(*param_1 + 0xf8))
                               (param_1,param_3,*(undefined8 *)(param_2 + 0x10),uVar5,param_5),
            iVar2 == 0)))) goto LAB_0050db60;
        if (param_4 != 0) {
          if (*(long *)(*param_1 + 0x118) == 0) {
            iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,lVar6,uVar5,uVar4,param_5);
          }
          else {
            iVar2 = FUN_004b8fe0(lVar6,uVar5,uVar4,param_1[8],param_5);
          }
          if (iVar2 != 0) {
            iVar2 = (**(code **)(*param_1 + 0xf8))
                              (param_1,param_4,*(undefined8 *)(param_2 + 0x18),lVar6,param_5);
            bVar9 = iVar2 != 0;
          }
          goto LAB_0050db60;
        }
      }
      else {
        pcVar1 = *(code **)(*param_1 + 0x120);
        if (pcVar1 == (code *)0x0) {
          if ((param_3 != 0) &&
             (lVar6 = FUN_004b8260(param_3,*(undefined8 *)(param_2 + 0x10)), lVar6 == 0))
          goto LAB_0050db60;
          if (param_4 != 0) {
            lVar6 = FUN_004b8260(param_4,*(undefined8 *)(param_2 + 0x18));
            bVar9 = lVar6 != 0;
            goto LAB_0050db60;
          }
        }
        else {
          if ((param_3 != 0) &&
             (iVar2 = (*pcVar1)(param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_5), iVar2 == 0
             )) goto LAB_0050db60;
          if (param_4 != 0) {
            iVar2 = (**(code **)(*param_1 + 0x120))
                              (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_5);
            bVar9 = iVar2 != 0;
            goto LAB_0050db60;
          }
        }
      }
      bVar9 = true;
    }
  }
LAB_0050db60:
  FUN_004b2d50(param_5);
  FUN_004b2b50(lVar8);
  return bVar9;
}


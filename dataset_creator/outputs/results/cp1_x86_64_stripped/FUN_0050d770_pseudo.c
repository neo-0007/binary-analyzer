
uint FUN_0050d770(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_1[8];
  lVar9 = 0;
  if ((param_2 == 0) && (param_2 = FUN_004b2a70(param_1[0x15]), lVar9 = param_2, param_2 == 0)) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/ec/ecp_smpl.c",0x105,"ossl_ec_GFp_simple_group_check_discriminant");
    FUN_0051f8f0(0x10,0xc0100,0);
  }
  else {
    FUN_004b2c00(param_2);
    uVar4 = FUN_004b2df0(param_2);
    uVar5 = FUN_004b2df0(param_2);
    uVar6 = FUN_004b2df0(param_2);
    uVar7 = FUN_004b2df0(param_2);
    lVar8 = FUN_004b2df0(param_2);
    if (lVar8 == 0) {
      uVar2 = 0;
    }
    else {
      if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
        uVar2 = 0;
        lVar8 = FUN_004b8260(uVar4,param_1[0xc]);
        if ((lVar8 == 0) || (lVar8 = FUN_004b8260(uVar5,param_1[0xd]), lVar8 == 0))
        goto LAB_0050d871;
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar4,param_1[0xc],param_2);
        if ((uVar2 == 0) ||
           (uVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar5,param_1[0xd],param_2), uVar2 == 0)
           ) goto LAB_0050d871;
      }
      iVar3 = FUN_004b7ba0(uVar4);
      if (iVar3 == 0) {
        uVar2 = 1;
        iVar3 = FUN_004b7ba0(uVar5);
        if ((((iVar3 == 0) && (uVar2 = FUN_004b9090(uVar6,uVar4,lVar1,param_2), uVar2 != 0)) &&
            (uVar2 = FUN_004b8fe0(uVar7,uVar6,uVar4,lVar1,param_2), uVar2 != 0)) &&
           (((uVar2 = FUN_004bc220(uVar6,uVar7,2), uVar2 != 0 &&
             (uVar2 = FUN_004b9090(uVar7,uVar5,lVar1,param_2), uVar2 != 0)) &&
            ((uVar2 = FUN_004bcd70(uVar7,0x1b), uVar2 != 0 &&
             (uVar2 = FUN_004b8aa0(uVar4,uVar6,uVar7,lVar1,param_2), uVar2 != 0)))))) {
          iVar3 = FUN_004b7ba0(uVar4);
          uVar2 = (uint)(iVar3 == 0);
        }
      }
      else {
        iVar3 = FUN_004b7ba0(uVar5);
        uVar2 = (uint)(iVar3 == 0);
      }
    }
  }
LAB_0050d871:
  FUN_004b2d50(param_2);
  FUN_004b2b50(lVar9);
  return uVar2;
}


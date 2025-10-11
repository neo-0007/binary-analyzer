
undefined8
FUN_0050d3d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = FUN_004b7bb0(param_2);
  if ((iVar1 < 3) || (iVar1 = FUN_004b7d40(param_2), iVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecp_smpl.c",0x97,"ossl_ec_GFp_simple_group_set_curve");
    FUN_0051f8f0(0x10,0x67,0);
    return 0;
  }
  lVar5 = 0;
  if ((param_5 == 0) && (param_5 = FUN_004b2a70(param_1[0x15]), lVar5 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_004b2c00(param_5);
  lVar2 = FUN_004b2df0(param_5);
  if ((lVar2 != 0) && (lVar3 = FUN_004b8260(param_1[8],param_2), lVar3 != 0)) {
    FUN_004b7c90(param_1[8],0);
    iVar1 = FUN_004b8a20(lVar2,param_3,param_2,param_5);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0x118) == (code *)0x0) {
        lVar3 = FUN_004b8260(param_1[0xc],lVar2);
        if (lVar3 != 0) goto LAB_0050d4a2;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x118))(param_1,param_1[0xc],lVar2,param_5);
        if (iVar1 != 0) {
LAB_0050d4a2:
          iVar1 = FUN_004b8a20(param_1[0xd],param_4,param_2,param_5);
          if ((iVar1 != 0) &&
             (((*(code **)(*param_1 + 0x118) == (code *)0x0 ||
               (iVar1 = (**(code **)(*param_1 + 0x118))(param_1,param_1[0xd],param_1[0xd],param_5),
               iVar1 != 0)) && (iVar1 = FUN_004bcc70(lVar2,3), iVar1 != 0)))) {
            uVar4 = 1;
            iVar1 = FUN_004b7840(lVar2,param_1[8]);
            *(uint *)(param_1 + 0xe) = (uint)(iVar1 == 0);
            goto LAB_0050d583;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_0050d583:
  FUN_004b2d50(param_5);
  FUN_004b2b50(lVar5);
  return uVar4;
}



undefined4 FUN_0050fbc0(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((*(int *)(param_2 + 0x28) == 0) && (iVar1 = FUN_004f0cc0(), iVar1 == 0)) {
    uVar4 = 0;
    lVar5 = 0;
    if ((param_3 != 0) ||
       (param_3 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xa8)), lVar5 = param_3, param_3 != 0)) {
      FUN_004b2c00(param_3);
      uVar2 = FUN_004b2df0(param_3);
      lVar3 = FUN_004b2df0(param_3);
      if (((lVar3 != 0) && (iVar1 = FUN_004f0d70(param_1,param_2,uVar2,lVar3,param_3), iVar1 != 0))
         && (iVar1 = FUN_004f0f80(param_1,param_2,uVar2,lVar3,param_3), iVar1 != 0)) {
        if (*(int *)(param_2 + 0x28) == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ecp_smpl.c",0x4aa,"ossl_ec_GFp_simple_make_affine");
          FUN_0051f8f0(0x10,0xc0103,0);
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      FUN_004b2d50(param_3);
      FUN_004b2b50(lVar5);
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


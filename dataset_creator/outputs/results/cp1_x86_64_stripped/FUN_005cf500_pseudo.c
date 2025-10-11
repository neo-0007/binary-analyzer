
bool FUN_005cf500(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_004f0cc0();
  if (iVar1 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec2_smpl.c",0x148,"ossl_ec_GF2m_simple_point_get_affine_coordinates")
    ;
    FUN_0051f8f0(0x10,0x6a,0);
    return false;
  }
  uVar2 = FUN_004b75a0();
  iVar1 = FUN_004b7840(*(undefined8 *)(param_2 + 0x20),uVar2);
  if (iVar1 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec2_smpl.c",0x14d,"ossl_ec_GF2m_simple_point_get_affine_coordinates")
    ;
    FUN_0051f8f0(0x10,0xc0101,0);
    return false;
  }
  if (param_3 != 0) {
    lVar3 = FUN_004b8260(param_3,*(undefined8 *)(param_2 + 0x10));
    if (lVar3 == 0) {
      return false;
    }
    FUN_004b7c90(param_3,0);
  }
  if (param_4 != 0) {
    lVar3 = FUN_004b8260(param_4,*(undefined8 *)(param_2 + 0x18));
    if (lVar3 != 0) {
      FUN_004b7c90(param_4,0);
    }
    return lVar3 != 0;
  }
  return true;
}


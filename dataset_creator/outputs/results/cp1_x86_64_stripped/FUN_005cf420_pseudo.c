
undefined8 FUN_005cf420(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = FUN_004b8260(*(undefined8 *)(param_2 + 0x10),param_3);
    if (lVar1 != 0) {
      FUN_004b7c90(*(undefined8 *)(param_2 + 0x10),0);
      lVar1 = FUN_004b8260(*(undefined8 *)(param_2 + 0x18),param_4);
      if (lVar1 != 0) {
        FUN_004b7c90(*(undefined8 *)(param_2 + 0x18),0);
        uVar2 = FUN_004b75a0();
        lVar1 = FUN_004b8260(*(undefined8 *)(param_2 + 0x20),uVar2);
        if (lVar1 != 0) {
          FUN_004b7c90(*(undefined8 *)(param_2 + 0x20),0);
          *(undefined4 *)(param_2 + 0x28) = 1;
          return 1;
        }
      }
    }
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec2_smpl.c",0x128,"ossl_ec_GF2m_simple_point_set_affine_coordinates");
  FUN_0051f8f0(0x10,0xc0102,0);
  return 0;
}


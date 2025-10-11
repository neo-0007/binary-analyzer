
undefined8
FUN_0050f4f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = FUN_004b75a0();
    uVar1 = FUN_004f08d0(param_1,param_2,param_3,param_4,uVar1,param_5);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecp_smpl.c",0x1ed,"ossl_ec_GFp_simple_point_set_affine_coordinates");
  FUN_0051f8f0(0x10,0xc0102,0);
  return 0;
}


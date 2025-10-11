
undefined8
ecp_nistz256_get_affine(EC_GROUP *param_1,EC_POINT *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = ecp_nistz256_get_affine_part_0(param_2,param_3,param_4);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x4a3,"ecp_nistz256_get_affine");
  ERR_set_error(0x10,0x6a,0);
  return 0;
}


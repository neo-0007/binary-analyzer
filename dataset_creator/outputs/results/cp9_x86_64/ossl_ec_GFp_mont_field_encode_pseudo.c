
undefined8 ossl_ec_GFp_mont_field_encode(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = BN_to_montgomery();
    return uVar1;
  }
  ERR_new(param_2,param_3);
  ERR_set_debug("../crypto/ec/ecp_mont.c",0x10f,"ossl_ec_GFp_mont_field_encode");
  ERR_set_error(0x10,0x6f,0);
  return 0;
}


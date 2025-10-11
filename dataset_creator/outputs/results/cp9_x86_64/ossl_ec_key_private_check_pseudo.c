
undefined8 ossl_ec_key_private_check(long param_1)

{
  int iVar1;
  BIGNUM *b;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
    b = BN_value_one();
    iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x28),b);
    if (-1 < iVar1) {
      iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x28),*(BIGNUM **)(*(long *)(param_1 + 0x18) + 0x10));
      if (iVar1 < 0) {
        return 1;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x206,"ossl_ec_key_private_check");
    ERR_set_error(0x10,0x7b,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_key.c",0x201,"ossl_ec_key_private_check");
  ERR_set_error(0x10,0xc0102,0);
  return 0;
}


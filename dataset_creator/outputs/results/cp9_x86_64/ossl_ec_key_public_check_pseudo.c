
undefined4 ossl_ec_key_public_check(long param_1,BN_CTX *param_2)

{
  BIGNUM *m;
  int iVar1;
  EC_POINT *r;
  undefined4 uVar2;
  
  iVar1 = ossl_ec_key_public_check_quick();
  if (iVar1 != 0) {
    r = EC_POINT_new(*(EC_GROUP **)(param_1 + 0x18));
    if (r != (EC_POINT *)0x0) {
      m = *(BIGNUM **)(*(long *)(param_1 + 0x18) + 0x10);
      iVar1 = BN_is_zero(m);
      if (iVar1 == 0) {
        iVar1 = EC_POINT_mul(*(EC_GROUP **)(param_1 + 0x18),r,(BIGNUM *)0x0,
                             *(EC_POINT **)(param_1 + 0x20),m,param_2);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_key.c",0x1ec,"ossl_ec_key_public_check");
          ERR_set_error(0x10,0x80010,0);
          uVar2 = 0;
        }
        else {
          iVar1 = EC_POINT_is_at_infinity(*(EC_GROUP **)(param_1 + 0x18),r);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_key.c",0x1f0,"ossl_ec_key_public_check");
            ERR_set_error(0x10,0x82,0);
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
      }
      else {
        ERR_new();
        uVar2 = 0;
        ERR_set_debug("../crypto/ec/ec_key.c",0x1e7,"ossl_ec_key_public_check");
        ERR_set_error(0x10,0x7a,0);
      }
      EC_POINT_free(r);
      return uVar2;
    }
  }
  return 0;
}


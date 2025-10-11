
int EC_POINT_mul(EC_GROUP *group,EC_POINT *r,BIGNUM *n,EC_POINT *q,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  long lVar2;
  BN_CTX *c;
  BIGNUM *local_18;
  EC_POINT *local_10;
  
  lVar2 = *(long *)group;
  local_18 = m;
  local_10 = q;
  if (((*(long *)r == lVar2) &&
      (((iVar1 = *(int *)(group + 0x20), iVar1 == 0 || (iVar1 == *(int *)(r + 8))) ||
       (*(int *)(r + 8) == 0)))) &&
     ((q == (EC_POINT *)0x0 ||
      ((lVar2 == *(long *)q &&
       (((iVar1 == 0 || (*(int *)(q + 8) == 0)) || (iVar1 == *(int *)(q + 8))))))))) {
    if (m == (BIGNUM *)0x0 && n == (BIGNUM *)0x0) {
      iVar1 = EC_POINT_set_to_infinity(group,r);
    }
    else {
      c = (BN_CTX *)0x0;
      if (ctx == (BN_CTX *)0x0) {
        c = (BN_CTX *)BN_CTX_secure_new();
        if (c == (BN_CTX *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_lib.c",0x472,"EC_POINT_mul");
          ERR_set_error(0x10,0xc0103,0);
          return 0;
        }
        lVar2 = *(long *)group;
        ctx = c;
      }
      if (*(code **)(lVar2 + 0xe0) == (code *)0x0) {
        iVar1 = ossl_ec_wNAF_mul(group,r,n,local_18 != (BIGNUM *)0x0 && local_10 != (EC_POINT *)0x0,
                                 &local_10,&local_18,ctx);
      }
      else {
        iVar1 = (**(code **)(lVar2 + 0xe0))();
      }
      BN_CTX_free(c);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x466,"EC_POINT_mul");
    ERR_set_error(0x10,0x65,0);
    iVar1 = 0;
  }
  return iVar1;
}


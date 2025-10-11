
int EC_POINTs_mul(EC_GROUP *group,EC_POINT *r,BIGNUM *n,size_t num,EC_POINT **p,BIGNUM **m,
                 BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  long lVar3;
  BN_CTX *c;
  size_t sVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)group;
  if ((*(long *)r == lVar3) &&
     (((iVar2 = *(int *)(group + 0x20), iVar2 == 0 || (iVar2 == *(int *)(r + 8))) ||
      (*(int *)(r + 8) == 0)))) {
    if (n == (BIGNUM *)0x0 && num == 0) {
      iVar2 = EC_POINT_set_to_infinity(group,r);
      return iVar2;
    }
    sVar4 = 0;
    if (num != 0) {
      do {
        if ((lVar3 != *(long *)p[sVar4]) ||
           (((iVar2 != 0 && (iVar1 = *(int *)(p[sVar4] + 8), iVar1 != 0)) && (iVar2 != iVar1)))) {
          ERR_new();
          uVar5 = 0x440;
          goto LAB_004e4da8;
        }
        sVar4 = sVar4 + 1;
      } while (num != sVar4);
    }
    c = (BN_CTX *)0x0;
    if (ctx == (BN_CTX *)0x0) {
      c = (BN_CTX *)BN_CTX_secure_new();
      if (c == (BN_CTX *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_lib.c",0x44a,"EC_POINTs_mul");
        ERR_set_error(0x10,0xc0103,0);
        return 0;
      }
      lVar3 = *(long *)group;
      ctx = c;
    }
    if (*(code **)(lVar3 + 0xe0) == (code *)0x0) {
      iVar2 = ossl_ec_wNAF_mul(group,r,n,num,p,m,ctx);
    }
    else {
      iVar2 = (**(code **)(lVar3 + 0xe0))();
    }
    BN_CTX_free(c);
  }
  else {
    ERR_new();
    uVar5 = 0x437;
LAB_004e4da8:
    ERR_set_debug("../crypto/ec/ec_lib.c",uVar5,"EC_POINTs_mul");
    ERR_set_error(0x10,0x65,0);
    iVar2 = 0;
  }
  return iVar2;
}


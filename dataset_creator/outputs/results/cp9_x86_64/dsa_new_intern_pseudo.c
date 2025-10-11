
DSA * dsa_new_intern(BIGNUM *param_1,BIGNUM *param_2)

{
  code *pcVar1;
  int iVar2;
  DSA *r;
  BIGNUM *pBVar3;
  DSA_METHOD *pDVar4;
  undefined8 uVar5;
  
  r = (DSA *)CRYPTO_zalloc(200,"../crypto/dsa/dsa_lib.c",0x87);
  if (r == (DSA *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_lib.c",0x8a,"dsa_new_intern");
    ERR_set_error(10,0xc0100,0);
    return (DSA *)0x0;
  }
  LOCK();
  r[1].pad = 1;
  UNLOCK();
  pBVar3 = (BIGNUM *)CRYPTO_THREAD_lock_new();
  r[1].g = pBVar3;
  if (pBVar3 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_lib.c",0x91,"dsa_new_intern");
    ERR_set_error(10,0xc0100,0);
    CRYPTO_free(r);
    return (DSA *)0x0;
  }
  r[1].pub_key = param_2;
  pDVar4 = DSA_get_default_method();
  r[1].p = (BIGNUM *)pDVar4;
  *(uint *)&r->meth = pDVar4->flags & 0xfffffbff;
  if (param_1 == (BIGNUM *)0x0) {
    param_1 = (BIGNUM *)ENGINE_get_default_DSA();
    r[1].q = param_1;
    if (param_1 != (BIGNUM *)0x0) goto LAB_004cc276;
    pDVar4 = (DSA_METHOD *)r[1].p;
LAB_004cc28f:
    *(uint *)&r->meth = pDVar4->flags & 0xfffffbff;
    iVar2 = ossl_crypto_new_ex_data_ex(param_2,7,r,&r[1].version);
    if (iVar2 != 0) {
      pcVar1 = (code *)r[1].p[2].d;
      if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(r), iVar2 != 0)) {
        return r;
      }
      ERR_new();
      ERR_set_debug("../crypto/dsa/dsa_lib.c",0xb4,"dsa_new_intern");
      ERR_set_error(10,0xc0105,0);
    }
  }
  else {
    iVar2 = ENGINE_init((ENGINE *)param_1);
    if (iVar2 == 0) {
      ERR_new();
      uVar5 = 0x9c;
    }
    else {
      r[1].q = param_1;
LAB_004cc276:
      pDVar4 = ENGINE_get_DSA((ENGINE *)param_1);
      r[1].p = (BIGNUM *)pDVar4;
      if (pDVar4 != (DSA_METHOD *)0x0) goto LAB_004cc28f;
      ERR_new();
      uVar5 = 0xa5;
    }
    ERR_set_debug("../crypto/dsa/dsa_lib.c",uVar5,"dsa_new_intern");
    ERR_set_error(10,0x80026,0);
  }
  DSA_free(r);
  return (DSA *)0x0;
}


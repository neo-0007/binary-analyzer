
RSA * rsa_new_intern(BIGNUM *param_1,long param_2)

{
  int iVar1;
  RSA *r;
  BIGNUM *pBVar2;
  RSA_METHOD *pRVar3;
  undefined8 uVar4;
  
  r = (RSA *)CRYPTO_zalloc(0xe0,"../crypto/rsa/rsa_lib.c",0x4d);
  if (r == (RSA *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_lib.c",0x50,"rsa_new_intern");
    ERR_set_error(4,0xc0100,0);
    return (RSA *)0x0;
  }
  LOCK();
  *(undefined4 *)&r->mt_blinding = 1;
  UNLOCK();
  pBVar2 = (BIGNUM *)CRYPTO_THREAD_lock_new();
  r[1].e = pBVar2;
  if (pBVar2 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_lib.c",0x57,"rsa_new_intern");
    ERR_set_error(4,0xc0100,0);
    CRYPTO_free(r);
    return (RSA *)0x0;
  }
  r->version = param_2;
  pRVar3 = RSA_get_default_method();
  r->engine = (ENGINE *)pRVar3;
  *(uint *)((long)&r->mt_blinding + 4) = pRVar3->flags & 0xfffffbff;
  if (param_1 == (BIGNUM *)0x0) {
    param_1 = (BIGNUM *)ENGINE_get_default_RSA();
    r->n = param_1;
    if (param_1 != (BIGNUM *)0x0) goto LAB_0055700f;
    pRVar3 = (RSA_METHOD *)r->engine;
LAB_00557025:
    *(uint *)((long)&r->mt_blinding + 4) = pRVar3->flags & 0xfffffbff;
    iVar1 = CRYPTO_new_ex_data(9,r,(CRYPTO_EX_DATA *)&r->bignum_data);
    if (iVar1 != 0) {
      if ((*(code **)(r->engine + 0x38) == (code *)0x0) ||
         (iVar1 = (**(code **)(r->engine + 0x38))(r), iVar1 != 0)) {
        return r;
      }
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_lib.c",0x7a,"rsa_new_intern");
      ERR_set_error(4,0xc0105,0);
    }
  }
  else {
    iVar1 = ENGINE_init((ENGINE *)param_1);
    if (iVar1 == 0) {
      ERR_new();
      uVar4 = 0x62;
    }
    else {
      r->n = param_1;
LAB_0055700f:
      pRVar3 = ENGINE_get_RSA((ENGINE *)param_1);
      r->engine = (ENGINE *)pRVar3;
      if (pRVar3 != (RSA_METHOD *)0x0) goto LAB_00557025;
      ERR_new();
      uVar4 = 0x6c;
    }
    ERR_set_debug("../crypto/rsa/rsa_lib.c",uVar4,"rsa_new_intern");
    ERR_set_error(4,0x80026,0);
  }
  RSA_free(r);
  return (RSA *)0x0;
}


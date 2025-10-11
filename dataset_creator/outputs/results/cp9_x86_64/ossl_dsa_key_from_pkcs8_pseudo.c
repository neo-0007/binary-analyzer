
DSA * ossl_dsa_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1)

{
  int iVar1;
  ASN1_INTEGER *ai;
  DSA *r;
  BIGNUM *bn;
  BIGNUM *pBVar2;
  BN_CTX *ctx;
  BIGNUM *m;
  BIGNUM *a;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  uchar *local_60;
  uchar *local_58;
  int *local_50;
  X509_ALGOR *local_48;
  long local_40;
  
  r = (DSA *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_60,&local_68,&local_48,param_1);
  if (iVar1 == 0) goto LAB_004cb711;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_64,&local_50,local_48);
  ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_60,(long)local_68);
  if (((ai == (ASN1_INTEGER *)0x0) || (ai->type == 0x102)) || (local_64 != 0x10)) {
LAB_004cb6aa:
    ERR_new();
    r = (DSA *)0x0;
    ctx = (BN_CTX *)0x0;
    bn = (BIGNUM *)0x0;
    pBVar2 = (BIGNUM *)0x0;
    ERR_set_debug("../crypto/dsa/dsa_backend.c",0xb5,"ossl_dsa_key_from_pkcs8");
    ERR_set_error(10,0x68,0);
LAB_004cb6e6:
    BN_free(bn);
    BN_free(pBVar2);
    DSA_free(r);
    r = (DSA *)0x0;
  }
  else {
    local_58 = *(uchar **)(local_50 + 2);
    r = d2i_DSAparams((DSA **)0x0,&local_58,(long)*local_50);
    if (r == (DSA *)0x0) goto LAB_004cb6aa;
    bn = (BIGNUM *)BN_secure_new();
    if (bn == (BIGNUM *)0x0) {
LAB_004cb870:
      ERR_new();
      ctx = (BN_CTX *)0x0;
      pBVar2 = (BIGNUM *)0x0;
      ERR_set_debug("../crypto/dsa/dsa_backend.c",0x9c,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0x6d,0);
      goto LAB_004cb6e6;
    }
    pBVar2 = ASN1_INTEGER_to_BN(ai,bn);
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_004cb870;
    pBVar2 = BN_new();
    if (pBVar2 == (BIGNUM *)0x0) {
      ERR_new();
      ctx = (BN_CTX *)0x0;
      ERR_set_debug("../crypto/dsa/dsa_backend.c",0xa1,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0xc0100,0);
      goto LAB_004cb6e6;
    }
    ctx = BN_CTX_new();
    if (ctx == (BN_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/dsa/dsa_backend.c",0xa5,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0xc0100,0);
      goto LAB_004cb6e6;
    }
    m = (BIGNUM *)DSA_get0_p(r);
    a = (BIGNUM *)DSA_get0_g(r);
    BN_set_flags(bn,4);
    iVar1 = BN_mod_exp(pBVar2,a,bn,m,ctx);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/dsa/dsa_backend.c",0xad,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0x6d,0);
      goto LAB_004cb6e6;
    }
    DSA_set0_key(r,pBVar2,bn);
  }
  BN_CTX_free(ctx);
  ASN1_STRING_clear_free(ai);
LAB_004cb711:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return r;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


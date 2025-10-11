
int BN_GF2m_mod_sqr(undefined8 param_1,undefined8 param_2,BIGNUM *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  void *ptr;
  
  iVar1 = BN_num_bits(param_3);
  iVar1 = iVar1 + 1;
  ptr = CRYPTO_malloc(iVar1 * 4,"../crypto/bn/bn_gf2m.c",0x21b);
  if (ptr == (void *)0x0) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/bn/bn_gf2m.c",0x21d,"BN_GF2m_mod_sqr");
    ERR_set_error(3,0xc0100,0);
  }
  else {
    iVar2 = BN_GF2m_poly2arr(param_3,ptr,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_gf2m.c",0x222,"BN_GF2m_mod_sqr");
      ERR_set_error(3,0x6a,0);
    }
    else {
      iVar2 = BN_GF2m_mod_sqr_arr(param_1,param_2,ptr,param_4);
    }
    CRYPTO_free(ptr);
  }
  return iVar2;
}


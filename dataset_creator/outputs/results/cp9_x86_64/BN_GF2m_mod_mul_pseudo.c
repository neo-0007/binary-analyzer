
int BN_GF2m_mod_mul(undefined8 param_1,undefined8 param_2,undefined8 param_3,BIGNUM *param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  void *ptr;
  
  iVar1 = BN_num_bits(param_4);
  iVar1 = iVar1 + 1;
  ptr = CRYPTO_malloc(iVar1 * 4,"../crypto/bn/bn_gf2m.c",0x1dd);
  if (ptr == (void *)0x0) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/bn/bn_gf2m.c",0x1df,"BN_GF2m_mod_mul");
    ERR_set_error(3,0xc0100,0);
  }
  else {
    iVar2 = BN_GF2m_poly2arr(param_4,ptr,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_gf2m.c",0x1e4,"BN_GF2m_mod_mul");
      ERR_set_error(3,0x6a,0);
    }
    else {
      iVar2 = BN_GF2m_mod_mul_arr(param_1,param_2,param_3,ptr,param_5);
    }
    CRYPTO_free(ptr);
  }
  return iVar2;
}


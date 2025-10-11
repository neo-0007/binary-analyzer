
DH * d2i_DHxparams(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  DH *dh;
  undefined8 *ptr;
  ulong uVar1;
  DH *pDVar2;
  
  dh = DH_new();
  pDVar2 = dh;
  if (dh != (DH *)0x0) {
    ptr = (undefined8 *)d2i_int_dhx(0,param_2,param_3);
    if (ptr == (undefined8 *)0x0) {
      pDVar2 = (DH *)0x0;
      DH_free(dh);
    }
    else {
      if (param_1 != (undefined8 *)0x0) {
        DH_free((DH *)*param_1);
        *param_1 = dh;
      }
      DH_set0_pqg(dh,*ptr,ptr[1],ptr[2]);
      ossl_ffc_params_set0_j(&dh->p,ptr[3]);
      if (ptr[4] != 0) {
        uVar1 = BN_get_word(*(BIGNUM **)(ptr[4] + 8));
        ossl_ffc_params_set_validate_params
                  (&dh->p,*(undefined8 *)(*(int **)ptr[4] + 2),(long)**(int **)ptr[4],
                   uVar1 & 0xffffffff);
        ASN1_BIT_STRING_free(*(ASN1_STRING **)ptr[4]);
        BN_free(*(BIGNUM **)(ptr[4] + 8));
        CRYPTO_free((void *)ptr[4]);
        ptr[4] = 0;
      }
      CRYPTO_free(ptr);
      DH_clear_flags(dh,0xf000);
      DH_set_flags(dh,0x1000);
    }
  }
  return pDVar2;
}


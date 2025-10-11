
undefined8 * sm2_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x28,"../providers/implementations/asymciphers/sm2_enc.c",0x88);
  if (ptr != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *ptr = *param_1;
    ptr[1] = uVar1;
    uVar1 = param_1[3];
    ptr[2] = param_1[2];
    ptr[3] = uVar1;
    ptr[4] = param_1[4];
    if (((EC_KEY *)ptr[1] != (EC_KEY *)0x0) && (iVar2 = EC_KEY_up_ref((EC_KEY *)ptr[1]), iVar2 == 0)
       ) {
      CRYPTO_free(ptr);
      return (undefined8 *)0x0;
    }
    iVar2 = ossl_prov_digest_copy(ptr + 2,param_1 + 2);
    if (iVar2 == 0) {
      EC_KEY_free((EC_KEY *)ptr[1]);
      ossl_prov_digest_reset(ptr + 2);
      CRYPTO_free(ptr);
      ptr = (undefined8 *)0x0;
    }
  }
  return ptr;
}


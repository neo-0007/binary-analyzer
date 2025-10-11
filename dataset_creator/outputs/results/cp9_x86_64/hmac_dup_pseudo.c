
undefined8 * hmac_dup(undefined8 *param_1)

{
  undefined8 *puVar1;
  HMAC_CTX *dctx;
  HMAC_CTX *sctx;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *ptr;
  void *__dest;
  long lVar5;
  
  iVar4 = ossl_prov_is_running();
  if ((iVar4 != 0) && (ptr = (undefined8 *)hmac_new(*param_1), ptr != (undefined8 *)0x0)) {
    uVar2 = param_1[1];
    dctx = (HMAC_CTX *)ptr[1];
    puVar1 = ptr + 2;
    *ptr = *param_1;
    ptr[1] = uVar2;
    uVar2 = param_1[3];
    ptr[2] = param_1[2];
    ptr[3] = uVar2;
    uVar2 = param_1[5];
    ptr[4] = param_1[4];
    ptr[5] = uVar2;
    uVar2 = param_1[7];
    ptr[6] = param_1[6];
    ptr[7] = uVar2;
    uVar2 = param_1[9];
    ptr[8] = param_1[8];
    ptr[9] = uVar2;
    uVar2 = param_1[0xb];
    ptr[10] = param_1[10];
    ptr[0xb] = uVar2;
    uVar2 = param_1[0xd];
    ptr[0xc] = param_1[0xc];
    ptr[0xd] = uVar2;
    uVar2 = param_1[0xf];
    ptr[0xe] = param_1[0xe];
    ptr[0xf] = uVar2;
    uVar2 = param_1[0x11];
    ptr[0x10] = param_1[0x10];
    ptr[0x11] = uVar2;
    uVar2 = param_1[0x12];
    uVar3 = param_1[0x13];
    ptr[1] = dctx;
    sctx = (HMAC_CTX *)param_1[1];
    ptr[5] = 0;
    ptr[0x12] = uVar2;
    ptr[0x13] = uVar3;
    iVar4 = HMAC_CTX_copy(dctx,sctx);
    if ((iVar4 != 0) && (iVar4 = ossl_prov_digest_copy(puVar1,param_1 + 2), iVar4 != 0)) {
      if (param_1[5] == 0) {
        return ptr;
      }
      lVar5 = param_1[6];
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      __dest = (void *)CRYPTO_secure_malloc
                                 (lVar5,"../providers/implementations/macs/hmac_prov.c",0x7e);
      ptr[5] = __dest;
      if (__dest == (void *)0x0) {
        HMAC_CTX_free(ptr[1]);
        ossl_prov_digest_reset(puVar1);
        CRYPTO_secure_clear_free(ptr[5],ptr[6],"../providers/implementations/macs/hmac_prov.c",0x61)
        ;
        CRYPTO_free(ptr);
        return (undefined8 *)0x0;
      }
      memcpy(__dest,(void *)param_1[5],param_1[6]);
      return ptr;
    }
    HMAC_CTX_free(ptr[1]);
    ossl_prov_digest_reset(puVar1);
    CRYPTO_secure_clear_free(ptr[5],ptr[6],"../providers/implementations/macs/hmac_prov.c",0x61);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}


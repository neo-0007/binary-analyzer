
undefined8 * mac_newctx(undefined8 param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_zalloc(0x20,"../providers/implementations/signature/mac_legacy_sig.c",0x3a);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = ossl_prov_ctx_get0_libctx(param_1);
  *ptr = uVar2;
  if (param_2 != (char *)0x0) {
    pcVar3 = CRYPTO_strdup(param_2,"../providers/implementations/signature/mac_legacy_sig.c",0x3f);
    ptr[1] = pcVar3;
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/mac_legacy_sig.c",0x40,__func___0);
      ERR_set_error(0x39,0xc0100,0);
      lVar4 = 0;
      goto LAB_0047c698;
    }
    uVar2 = *ptr;
  }
  lVar4 = EVP_MAC_fetch(uVar2,param_3,param_2);
  if (lVar4 != 0) {
    lVar5 = EVP_MAC_CTX_new(lVar4);
    ptr[3] = lVar5;
    if (lVar5 != 0) {
      EVP_MAC_free(lVar4);
      return ptr;
    }
  }
LAB_0047c698:
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free(ptr);
  EVP_MAC_free(lVar4);
  return (undefined8 *)0x0;
}


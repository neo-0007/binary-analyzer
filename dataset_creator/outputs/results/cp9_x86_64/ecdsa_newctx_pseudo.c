
undefined8 * ecdsa_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)
            CRYPTO_zalloc(400,"../providers/implementations/signature/ecdsa_sig.c",0x72),
     ptr != (undefined8 *)0x0)) {
    *(byte *)((long)ptr + 0x4a) = *(byte *)((long)ptr + 0x4a) | 1;
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *ptr = uVar2;
    if (param_2 != (char *)0x0) {
      pcVar3 = CRYPTO_strdup(param_2,"../providers/implementations/signature/ecdsa_sig.c",0x78);
      ptr[1] = pcVar3;
      if (pcVar3 == (char *)0x0) {
        CRYPTO_free(ptr);
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/ecdsa_sig.c",0x7b,"ecdsa_newctx");
        ERR_set_error(0x39,0xc0100,0);
        return (undefined8 *)0x0;
      }
    }
    return ptr;
  }
  return (undefined8 *)0x0;
}


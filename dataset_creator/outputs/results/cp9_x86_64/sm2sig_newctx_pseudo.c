
undefined8 * sm2sig_newctx(undefined8 param_1,char *param_2)

{
  undefined8 *ptr;
  undefined8 uVar1;
  char *pcVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x188,"../providers/implementations/signature/sm2_sig.c",0x75);
  if (ptr != (undefined8 *)0x0) {
    uVar1 = ossl_prov_ctx_get0_libctx(param_1);
    *ptr = uVar1;
    if (param_2 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_2,"../providers/implementations/signature/sm2_sig.c",0x7b);
      ptr[1] = pcVar2;
      if (pcVar2 == (char *)0x0) {
        CRYPTO_free(ptr);
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/sm2_sig.c",0x7d,"sm2sig_newctx");
        ERR_set_error(0x39,0xc0100,0);
        return (undefined8 *)0x0;
      }
    }
    ptr[0x2e] = 0x20;
    *(undefined4 *)((long)ptr + 0x19) = 0x334d53;
  }
  return ptr;
}


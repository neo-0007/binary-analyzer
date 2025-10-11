
undefined8 * rsa_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0xc0,"../providers/implementations/signature/rsa_sig.c",0xb5);
    if ((ptr == (undefined8 *)0x0) ||
       ((param_2 != (char *)0x0 &&
        (param_2 = CRYPTO_strdup(param_2,"../providers/implementations/signature/rsa_sig.c",0xb7),
        param_2 == (char *)0x0)))) {
      puVar3 = (undefined8 *)0x0;
      CRYPTO_free(ptr);
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0xb9,__func___0);
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      uVar2 = ossl_prov_ctx_get0_libctx(param_1);
      *(byte *)((long)ptr + 0x1c) = *(byte *)((long)ptr + 0x1c) | 1;
      *ptr = uVar2;
      ptr[1] = param_2;
      ptr[0x16] = 0xfffffffffffffffe;
      puVar3 = ptr;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}


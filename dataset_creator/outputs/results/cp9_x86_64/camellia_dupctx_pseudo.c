
void * camellia_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    pvVar2 = CRYPTO_malloc(0x1d8,"../providers/implementations/ciphers/cipher_camellia.c",0x29);
    if (pvVar2 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_camellia.c",0x2b,"camellia_dupctx")
      ;
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
    }
  }
  return pvVar2;
}


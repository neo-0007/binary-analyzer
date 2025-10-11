
void * aes_xts_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (((*(long *)(param_1 + 0x2b0) == 0) ||
        (pvVar2 = (void *)0x0, *(long *)(param_1 + 0x2b0) == param_1 + 0xc0)) &&
       ((*(long *)(param_1 + 0x2b8) == 0 ||
        (pvVar2 = (void *)0x0, *(long *)(param_1 + 0x2b8) == param_1 + 0x1b8)))) {
      pvVar2 = CRYPTO_malloc(0x2d8,"../providers/implementations/ciphers/cipher_aes_xts.c",0x94);
      if (pvVar2 == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_xts.c",0x96,"aes_xts_dupctx")
        ;
        ERR_set_error(0x39,0xc0100,0);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
      }
    }
    return pvVar2;
  }
  return (void *)0x0;
}


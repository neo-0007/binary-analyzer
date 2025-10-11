
void * siv_dupctx(long param_1)

{
  int iVar1;
  void *ptr;
  
  ptr = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = CRYPTO_malloc(0x78,"../providers/implementations/ciphers/cipher_aes_siv.c",0x43);
    if (ptr == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_siv.c",0x45,__func___0);
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x28))(param_1,ptr);
      if (iVar1 == 0) {
        CRYPTO_free(ptr);
        return (void *)0x0;
      }
    }
  }
  return ptr;
}


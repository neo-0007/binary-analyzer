
void aes_siv_freectx(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x20))();
    CRYPTO_clear_free(param_1,0x78,"../providers/implementations/ciphers/cipher_aes_siv.c",0x37);
    return;
  }
  return;
}


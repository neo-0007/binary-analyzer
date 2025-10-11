
undefined8 chacha20_poly1305_cleanup(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar1 = Poly1305_ctx_size();
    OPENSSL_cleanse(*(void **)(param_1 + 0x78),lVar1 + 0xd0);
    return 1;
  }
  return 1;
}


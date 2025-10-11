
void CRYPTO_ocb128_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x58),*(long *)((long)param_1 + 0x30) << 4,
                      "../crypto/modes/ocb128.c",0x22d);
    OPENSSL_cleanse(param_1,0xb0);
    return;
  }
  return;
}


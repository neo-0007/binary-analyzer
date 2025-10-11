
void kdf_scrypt_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    EVP_MD_free(*(undefined8 *)((long)param_1 + 0x50));
    CRYPTO_free(*(void **)((long)param_1 + 0x20));
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x10),*(undefined8 *)((long)param_1 + 0x18),
                      "../providers/implementations/kdfs/scrypt.c",0x5b);
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000;
    *(undefined8 *)((long)param_1 + 0x38) = 8;
    *(undefined8 *)((long)param_1 + 0x40) = 1;
    *(undefined8 *)((long)param_1 + 0x48) = 0x40100000;
    CRYPTO_free(param_1);
    return;
  }
  return;
}


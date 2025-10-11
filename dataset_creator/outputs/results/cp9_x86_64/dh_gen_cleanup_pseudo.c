
void dh_gen_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x50));
    CRYPTO_free(*(void **)((long)param_1 + 0x58));
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
                      "../providers/implementations/keymgmt/dh_kmgmt.c",0x31e);
    CRYPTO_free(param_1);
    return;
  }
  return;
}


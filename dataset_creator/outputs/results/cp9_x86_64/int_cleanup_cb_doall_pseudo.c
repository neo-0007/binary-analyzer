
void int_cleanup_cb_doall(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)((long)param_1 + 8));
    if (*(long *)((long)param_1 + 0x10) != 0) {
      engine_unlocked_finish(*(long *)((long)param_1 + 0x10),0);
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}


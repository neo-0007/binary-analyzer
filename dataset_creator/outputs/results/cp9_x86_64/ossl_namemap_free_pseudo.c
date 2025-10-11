
void ossl_namemap_free(byte *param_1)

{
  if (param_1 == (byte *)0x0) {
    return;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  OPENSSL_LH_doall(*(undefined8 *)(param_1 + 0x10),namenum_free);
  OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x10));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 8));
  CRYPTO_free(param_1);
  return;
}


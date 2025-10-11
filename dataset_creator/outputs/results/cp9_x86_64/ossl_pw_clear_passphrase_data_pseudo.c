
void ossl_pw_clear_passphrase_data(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (*(int *)*param_1 == 1) {
      CRYPTO_clear_free(*(undefined8 *)(*param_1 + 8),*(undefined8 *)param_1[1],
                        "../crypto/passphrase.c",0x14);
    }
    ossl_pw_clear_passphrase_cache(param_1);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    return;
  }
  return;
}


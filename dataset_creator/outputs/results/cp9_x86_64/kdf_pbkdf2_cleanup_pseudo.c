
void kdf_pbkdf2_cleanup(undefined1 (*param_1) [16])

{
  ossl_prov_digest_reset(param_1 + 3);
  CRYPTO_free(*(void **)(param_1[1] + 8));
  CRYPTO_clear_free(*(undefined8 *)(*param_1 + 8),*(undefined8 *)param_1[1],
                    "../providers/implementations/kdfs/pbkdf2.c",0x57);
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  return;
}


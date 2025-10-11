
void kdf_pkcs12_cleanup(undefined1 (*param_1) [16])

{
  ossl_prov_digest_reset(*param_1 + 8);
  CRYPTO_free(*(void **)param_1[3]);
  CRYPTO_clear_free(*(undefined8 *)param_1[2],*(undefined8 *)(param_1[2] + 8),
                    "../providers/implementations/kdfs/pkcs12kdf.c",0x9e);
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  return;
}



void mac_gen_cleanup(void *param_1)

{
  CRYPTO_secure_clear_free
            (*(undefined8 *)((long)param_1 + 0x10),*(undefined8 *)((long)param_1 + 0x18),
             "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x20f);
  ossl_prov_cipher_reset((long)param_1 + 0x20);
  CRYPTO_free(param_1);
  return;
}



void ecdh_freectx(void *param_1)

{
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 8));
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 0x10));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x20));
  CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
                    "../providers/implementations/exchange/ecdh_exch.c",0xa8);
  CRYPTO_free(param_1);
  return;
}


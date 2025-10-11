
void dh_freectx(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 0x40));
  DH_free(*(DH **)((long)param_1 + 8));
  DH_free(*(DH **)((long)param_1 + 0x10));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x20));
  CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
                    "../providers/implementations/exchange/dh_exch.c",0xfa);
  CRYPTO_free(param_1);
  return;
}


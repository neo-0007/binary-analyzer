
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EVP_PBE_cleanup(void)

{
  OPENSSL_sk_pop_free(pbe_algs,free_evp_pbe_ctl);
  pbe_algs = 0;
  return;
}



int BIO_get_new_index(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_run_once(&bio_type_init,do_bio_type_init_ossl_);
  if ((iVar1 == 0) || (do_bio_type_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_meth.c",0x1c,"BIO_get_new_index");
    ERR_set_error(0x20,0xc0100,0);
    iVar1 = -1;
  }
  else {
    LOCK();
    UNLOCK();
    iVar1 = bio_count_1 + 1;
    bio_count_1 = bio_count_1 + 1;
  }
  return iVar1;
}


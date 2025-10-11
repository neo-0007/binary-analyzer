
EVP_PKEY * openssl_load_privkey(undefined8 param_1,char *param_2)

{
  BIO *bp;
  EVP_PKEY *pEVar1;
  
  __fprintf_chk(stderr,1,"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n");
  bp = BIO_new_file(param_2,"r");
  if (bp != (BIO *)0x0) {
    pEVar1 = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
    BIO_free(bp);
    return pEVar1;
  }
  return (EVP_PKEY *)0x0;
}


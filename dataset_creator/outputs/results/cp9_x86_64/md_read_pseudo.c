
int md_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  BIO *b;
  
  if (param_2 != (void *)0x0) {
    ctx = (EVP_MD_CTX *)BIO_get_data();
    b = BIO_next(param_1);
    if ((ctx != (EVP_MD_CTX *)0x0) && (b != (BIO *)0x0)) {
      iVar1 = BIO_read(b,param_2,param_3);
      iVar2 = BIO_get_init(param_1);
      if ((iVar2 != 0) &&
         ((0 < iVar1 && (iVar2 = EVP_DigestUpdate(ctx,param_2,(long)iVar1), iVar2 < 1)))) {
        return -1;
      }
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      return iVar1;
    }
  }
  return 0;
}


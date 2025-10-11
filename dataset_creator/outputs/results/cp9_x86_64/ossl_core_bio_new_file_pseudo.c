
long ossl_core_bio_new_file(char *param_1,char *param_2)

{
  BIO *a;
  long lVar1;
  
  a = BIO_new_file(param_1,param_2);
  if (a != (BIO *)0x0) {
    lVar1 = core_bio_new();
    if (lVar1 == 0) {
      BIO_free(a);
    }
    else {
      *(BIO **)(lVar1 + 0x10) = a;
    }
    return lVar1;
  }
  return 0;
}


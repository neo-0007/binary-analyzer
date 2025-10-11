
bool md_new(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = EVP_MD_CTX_new();
  if (lVar1 != 0) {
    BIO_set_init(param_1,1);
    BIO_set_data(param_1,lVar1);
  }
  return lVar1 != 0;
}



undefined8 md_free(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = BIO_get_data();
    EVP_MD_CTX_free(uVar1);
    BIO_set_data(param_1,0);
    BIO_set_init(param_1,0);
    return 1;
  }
  return 0;
}


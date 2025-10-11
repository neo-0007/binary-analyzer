
void ossl_core_bio_puts(long param_1,char *param_2)

{
  BIO_puts(*(BIO **)(param_1 + 0x10),param_2);
  return;
}


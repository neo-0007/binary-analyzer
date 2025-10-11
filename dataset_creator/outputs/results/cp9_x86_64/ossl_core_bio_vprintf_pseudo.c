
void ossl_core_bio_vprintf(long param_1,char *param_2,va_list param_3)

{
  BIO_vprintf(*(BIO **)(param_1 + 0x10),param_2,param_3);
  return;
}


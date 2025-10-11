
void ossl_core_bio_gets(long param_1,char *param_2,int param_3)

{
  BIO_gets(*(BIO **)(param_1 + 0x10),param_2,param_3);
  return;
}


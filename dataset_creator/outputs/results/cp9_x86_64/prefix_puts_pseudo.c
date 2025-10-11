
void prefix_puts(BIO *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  BIO_write(param_1,param_2,(int)sVar1);
  return;
}



char * BIO_ADDR_path_string(short *param_1)

{
  char *pcVar1;
  
  if (*param_1 != 1) {
    return (char *)0x0;
  }
  pcVar1 = CRYPTO_strdup((char *)(param_1 + 1),"../crypto/bio/bio_addr.c",0x12d);
  return pcVar1;
}


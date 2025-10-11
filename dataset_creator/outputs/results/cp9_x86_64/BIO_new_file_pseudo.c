
BIO * BIO_new_file(char *filename,char *mode)

{
  FILE *__stream;
  char *pcVar1;
  BIO_METHOD *type;
  BIO *b;
  uint *puVar2;
  
  __stream = openssl_fopen(filename,mode);
  pcVar1 = strchr(mode,0x62);
  if (__stream == (FILE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_file.c",0x43,"BIO_new_file");
    puVar2 = (uint *)__errno_location();
    ERR_set_error(2,*puVar2,"calling fopen(%s, %s)",filename,mode);
    if ((*puVar2 & 0xfffffffb) == 2) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_file.c",0x4b,"BIO_new_file");
      b = (BIO *)0x0;
      ERR_set_error(0x20,0x80,0);
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_file.c",0x4d,"BIO_new_file");
      b = (BIO *)0x0;
      ERR_set_error(0x20,0x80002,0);
    }
  }
  else {
    type = BIO_s_file();
    b = BIO_new(type);
    if (b == (BIO *)0x0) {
      fclose(__stream);
    }
    else {
      BIO_clear_flags(b,0);
      BIO_ctrl(b,0x6a,(long)(int)((-(uint)(pcVar1 == (char *)0x0) & 0x10) + 1),__stream);
    }
  }
  return b;
}


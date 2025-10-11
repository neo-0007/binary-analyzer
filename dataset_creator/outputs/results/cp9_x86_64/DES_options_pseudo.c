
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * DES_options(void)

{
  if (init_1 == 0) {
    return buf_0;
  }
  OPENSSL_strlcpy(buf_0,"des(int)",0xc);
  init_1 = 0;
  return buf_0;
}


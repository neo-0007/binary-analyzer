
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * RC4_options(void)

{
  char *pcVar1;
  
  pcVar1 = "rc4(8x,int)";
  if ((OPENSSL_ia32cap_P >> 0x14 & 1) == 0) {
    if ((OPENSSL_ia32cap_P >> 0x1e & 1) != 0) {
      return "rc4(16x,int)";
    }
  }
  else {
    pcVar1 = "rc4(8x,char)";
  }
  return pcVar1;
}


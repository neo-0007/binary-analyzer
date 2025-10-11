
char * OPENSSL_uni2asc(uchar *uni,int unilen)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  int num;
  
  if (unilen < 0) {
    return (char *)0x0;
  }
  if ((unilen & 1U) != 0) {
    return (char *)0x0;
  }
  num = unilen >> 1;
  if (unilen == 0) {
    num = num + 1;
    pcVar1 = (char *)CRYPTO_malloc(num,"../crypto/pkcs12/p12_utl.c",0x3c);
    if (pcVar1 != (char *)0x0) {
LAB_005fb8c8:
      pcVar1[(long)num + -1] = '\0';
      return pcVar1;
    }
  }
  else {
    if (uni[(long)unilen + -1] != '\0') {
      num = num + 1;
    }
    pcVar1 = (char *)CRYPTO_malloc(num,"../crypto/pkcs12/p12_utl.c",0x3c);
    lVar2 = 0;
    if (pcVar1 != (char *)0x0) {
      do {
        lVar3 = lVar2 + 2;
        pcVar1[(int)lVar2 >> 1] = uni[lVar2 + 1];
        lVar2 = lVar3;
      } while ((int)lVar3 < unilen);
      goto LAB_005fb8c8;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/pkcs12/p12_utl.c",0x3d,"OPENSSL_uni2asc");
  ERR_set_error(0x23,0xc0100,0);
  return (char *)0x0;
}


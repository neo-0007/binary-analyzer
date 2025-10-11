
uchar * OPENSSL_asc2uni(char *asc,int asclen,uchar **uni,int *unilen)

{
  int num;
  size_t sVar1;
  uchar *puVar2;
  long lVar3;
  
  if (asclen == -1) {
    sVar1 = strlen(asc);
    asclen = (int)sVar1;
  }
  puVar2 = (uchar *)0x0;
  if (-1 < asclen) {
    num = asclen * 2 + 2;
    puVar2 = (uchar *)CRYPTO_malloc(num,"../crypto/pkcs12/p12_utl.c",0x1b);
    if (puVar2 == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_utl.c",0x1c,"OPENSSL_asc2uni");
      ERR_set_error(0x23,0xc0100,0);
    }
    else {
      lVar3 = 0;
      if (num != 2) {
        do {
          puVar2[lVar3] = '\0';
          puVar2[lVar3 + 1] = asc[(int)lVar3 >> 1];
          lVar3 = lVar3 + 2;
        } while ((int)lVar3 < asclen * 2);
      }
      puVar2[(long)num + -2] = '\0';
      puVar2[(long)num + -1] = '\0';
      if (unilen != (int *)0x0) {
        *unilen = num;
      }
      if (uni != (uchar **)0x0) {
        *uni = puVar2;
      }
    }
  }
  return puVar2;
}


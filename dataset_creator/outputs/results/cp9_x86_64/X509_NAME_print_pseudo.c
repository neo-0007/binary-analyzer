
int X509_NAME_print(BIO *bp,X509_NAME *name,int obase)

{
  char cVar1;
  int iVar2;
  char *ptr;
  char *pcVar3;
  char *pcVar4;
  int len;
  char *pcVar5;
  char *data;
  
  ptr = X509_NAME_oneline(name,(char *)0x0,0);
  if (ptr == (char *)0x0) {
    return 0;
  }
  data = ptr + 1;
  pcVar4 = ptr + 2;
  if (*ptr == '\0') {
    CRYPTO_free(ptr);
    return 1;
  }
  cVar1 = ptr[1];
  pcVar5 = ptr + 1;
  if (cVar1 == '/') goto LAB_0059a9a5;
LAB_0059a928:
  do {
    pcVar3 = pcVar4;
    if (cVar1 != '\0') goto LAB_0059a996;
    do {
      len = (int)pcVar5 - (int)data;
      iVar2 = BIO_write(bp,data,len);
      if (iVar2 != len) {
LAB_0059a9e8:
        ERR_new();
        ERR_set_debug("../crypto/x509/x_name.c",0x21d,"X509_NAME_print");
        ERR_set_error(0xb,0x80007,0);
        CRYPTO_free(ptr);
        return 0;
      }
      if (pcVar4[-1] == '\0') {
LAB_0059a94a:
        CRYPTO_free(ptr);
        return 1;
      }
      iVar2 = BIO_write(bp,&DAT_007f7194,2);
      if (iVar2 != 2) goto LAB_0059a9e8;
      pcVar3 = pcVar4;
      data = pcVar4;
      if (pcVar4[-1] == '\0') goto LAB_0059a94a;
LAB_0059a996:
      cVar1 = *pcVar3;
      pcVar4 = pcVar3 + 1;
      pcVar5 = pcVar3;
      if (cVar1 != '/') goto LAB_0059a928;
LAB_0059a9a5:
      iVar2 = ossl_isupper((int)*pcVar4);
    } while ((iVar2 != 0) &&
            ((pcVar4[1] == '=' || ((iVar2 = ossl_isupper(), iVar2 != 0 && (pcVar4[2] == '='))))));
    cVar1 = pcVar4[-1];
  } while( true );
}


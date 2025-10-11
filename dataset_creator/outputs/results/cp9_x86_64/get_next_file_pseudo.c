
BIO * get_next_file(char *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  size_t sVar4;
  char *filename;
  BIO *pBVar5;
  
  sVar3 = strlen(param_1);
LAB_005be328:
  do {
    __s = (char *)OPENSSL_DIR_read(param_2,param_1);
    if (__s == (char *)0x0) goto LAB_005be464;
    sVar4 = strlen(__s);
    if (sVar4 < 6) {
      if (sVar4 != 5) goto LAB_005be328;
LAB_005be356:
      iVar2 = OPENSSL_strcasecmp(__s + (sVar4 - 4),".cnf");
      if (iVar2 != 0) goto LAB_005be328;
    }
    else {
      iVar2 = OPENSSL_strcasecmp(__s + (sVar4 - 5),".conf");
      if (iVar2 != 0) goto LAB_005be356;
    }
    lVar1 = sVar3 + 2 + sVar4;
    filename = (char *)CRYPTO_zalloc(lVar1,"../crypto/conf/conf_def.c",0x353);
    if (filename == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/conf/conf_def.c",0x355,"get_next_file");
      ERR_set_error(0xe,0xc0100,0);
LAB_005be464:
      OPENSSL_DIR_end(param_2);
      *param_2 = 0;
      return (BIO *)0x0;
    }
    if (*filename == '\0') {
      OPENSSL_strlcpy(filename,param_1,lVar1);
      OPENSSL_strlcat(filename,0x8198dc,lVar1);
    }
    OPENSSL_strlcat(filename,__s,lVar1);
    pBVar5 = BIO_new_file(filename,"r");
    CRYPTO_free(filename);
    if (pBVar5 != (BIO *)0x0) {
      return pBVar5;
    }
  } while( true );
}


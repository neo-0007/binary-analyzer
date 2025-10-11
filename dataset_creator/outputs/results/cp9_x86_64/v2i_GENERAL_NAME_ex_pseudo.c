
GENERAL_NAME *
v2i_GENERAL_NAME_ex(GENERAL_NAME *out,X509V3_EXT_METHOD *method,X509V3_CTX *ctx,CONF_VALUE *cnf,
                   int is_nc)

{
  char *value;
  char *pcVar1;
  int iVar2;
  int iVar3;
  GENERAL_NAME *pGVar4;
  
  value = cnf->value;
  pcVar1 = cnf->name;
  if (value == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x263,"v2i_GENERAL_NAME_ex");
    ERR_set_error(0x22,0x7c,0);
    return (GENERAL_NAME *)0x0;
  }
  iVar2 = ossl_v3_name_cmp(pcVar1,"email");
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar3 = ossl_v3_name_cmp(pcVar1,&DAT_00811a66);
    iVar2 = 6;
    if (iVar3 != 0) {
      iVar3 = ossl_v3_name_cmp(pcVar1,&DAT_008024fd);
      iVar2 = 2;
      if (iVar3 != 0) {
        iVar3 = ossl_v3_name_cmp(pcVar1,&DAT_00811b66);
        iVar2 = 8;
        if (iVar3 != 0) {
          iVar3 = ossl_v3_name_cmp(pcVar1,&DAT_007cb55c);
          iVar2 = 7;
          if (iVar3 != 0) {
            iVar3 = ossl_v3_name_cmp(pcVar1,"dirName");
            iVar2 = 4;
            if ((iVar3 != 0) && (iVar2 = ossl_v3_name_cmp(pcVar1,"otherName"), iVar2 != 0)) {
              ERR_new();
              ERR_set_debug("../crypto/x509/v3_san.c",0x276,"v2i_GENERAL_NAME_ex");
              ERR_set_error(0x22,0x75,"name=%s",pcVar1);
              return (GENERAL_NAME *)0x0;
            }
          }
        }
      }
    }
  }
  pGVar4 = a2i_GENERAL_NAME(out,method,ctx,iVar2,value,is_nc);
  return pGVar4;
}


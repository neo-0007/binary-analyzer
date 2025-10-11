
GENERAL_NAMES *
v2i_GENERAL_NAMES(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,stack_st_CONF_VALUE *nval)

{
  int iVar1;
  GENERAL_NAMES *pGVar2;
  CONF_VALUE *cnf;
  GENERAL_NAME *pGVar3;
  int iVar4;
  
  iVar1 = OPENSSL_sk_num(nval);
  pGVar2 = (GENERAL_NAMES *)OPENSSL_sk_new_reserve(0,iVar1);
  if (pGVar2 == (GENERAL_NAMES *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x1e5,"v2i_GENERAL_NAMES");
    ERR_set_error(0x22,0xc0100,0);
    OPENSSL_sk_free(0);
  }
  else {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        cnf = (CONF_VALUE *)OPENSSL_sk_value(nval,iVar4);
        pGVar3 = v2i_GENERAL_NAME(method,ctx,cnf);
        if (pGVar3 == (GENERAL_NAME *)0x0) {
          OPENSSL_sk_pop_free(pGVar2,GENERAL_NAME_free);
          return (GENERAL_NAMES *)0x0;
        }
        iVar4 = iVar4 + 1;
        OPENSSL_sk_push(pGVar2,pGVar3);
      } while (iVar1 != iVar4);
    }
  }
  return pGVar2;
}


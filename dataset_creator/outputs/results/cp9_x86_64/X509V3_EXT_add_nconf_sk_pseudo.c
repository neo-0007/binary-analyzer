
int X509V3_EXT_add_nconf_sk(CONF *conf,X509V3_CTX *ctx,char *section,stack_st_X509_EXTENSION **sk)

{
  int iVar1;
  stack_st_CONF_VALUE *psVar2;
  stack_st_X509_EXTENSION *psVar3;
  undefined8 *puVar4;
  X509_EXTENSION *ex;
  ASN1_OBJECT *obj;
  X509_EXTENSION *a;
  int iVar5;
  
  iVar5 = 0;
  psVar2 = NCONF_get_section(conf,section);
  if (psVar2 == (stack_st_CONF_VALUE *)0x0) {
    return 0;
  }
  while( true ) {
    iVar1 = OPENSSL_sk_num(psVar2);
    if (iVar1 <= iVar5) {
      return 1;
    }
    puVar4 = (undefined8 *)OPENSSL_sk_value(psVar2,iVar5);
    ex = (X509_EXTENSION *)X509V3_EXT_nconf_int(conf,ctx,*puVar4,puVar4[1],puVar4[2]);
    if (ex == (X509_EXTENSION *)0x0) break;
    if (sk != (stack_st_X509_EXTENSION **)0x0) {
      if (ctx->flags == 2) {
        psVar3 = *sk;
        obj = X509_EXTENSION_get_object(ex);
        while (iVar1 = X509v3_get_ext_by_OBJ(psVar3,obj,-1), -1 < iVar1) {
          a = X509v3_delete_ext(psVar3,iVar1);
          X509_EXTENSION_free(a);
        }
      }
      psVar3 = X509v3_add_ext(sk,ex,-1);
      if (psVar3 == (stack_st_X509_EXTENSION *)0x0) {
        X509_EXTENSION_free(ex);
        return 0;
      }
    }
    iVar5 = iVar5 + 1;
    X509_EXTENSION_free(ex);
  }
  return 0;
}


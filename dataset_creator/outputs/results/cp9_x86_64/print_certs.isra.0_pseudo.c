
void print_certs_isra_0(BIO *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  stack_st_X509_EXTENSION *exts;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        iVar1 = OPENSSL_sk_num(param_2);
        if (iVar1 <= iVar3) {
          return;
        }
        lVar2 = OPENSSL_sk_value(param_2,iVar3);
        if (lVar2 != 0) {
          iVar1 = ossl_x509_print_ex_brief(param_1,lVar2,0);
          if (iVar1 == 0) {
            return;
          }
          exts = (stack_st_X509_EXTENSION *)X509_get0_extensions(lVar2);
          iVar1 = X509V3_extensions_print(param_1,(char *)0x0,exts,0x2000,8);
          if (iVar1 == 0) {
            return;
          }
        }
        iVar3 = iVar3 + 1;
      } while( true );
    }
  }
  BIO_printf(param_1,"    (no certificates)\n");
  return;
}


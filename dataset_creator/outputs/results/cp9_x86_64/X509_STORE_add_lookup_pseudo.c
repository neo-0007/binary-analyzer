
X509_LOOKUP * X509_STORE_add_lookup(X509_STORE *v,X509_LOOKUP_METHOD *m)

{
  stack_st_X509_LOOKUP *psVar1;
  int iVar2;
  int iVar3;
  X509_LOOKUP *pXVar4;
  
  iVar3 = 0;
  psVar1 = v->get_cert_methods;
  while( true ) {
    iVar2 = OPENSSL_sk_num(psVar1);
    if (iVar2 <= iVar3) {
      pXVar4 = X509_LOOKUP_new(m);
      if (pXVar4 == (X509_LOOKUP *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x509_lu.c",0x118,"X509_STORE_add_lookup");
        ERR_set_error(0xb,0xc0100,0);
      }
      else {
        pXVar4->store_ctx = v;
        iVar3 = OPENSSL_sk_push(v->get_cert_methods,pXVar4);
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/x509_lu.c",0x120,"X509_STORE_add_lookup");
          ERR_set_error(0xb,0xc0100,0);
          X509_LOOKUP_free(pXVar4);
          return (X509_LOOKUP *)0x0;
        }
      }
      return pXVar4;
    }
    pXVar4 = (X509_LOOKUP *)OPENSSL_sk_value(psVar1,iVar3);
    if (pXVar4->method == m) break;
    iVar3 = iVar3 + 1;
  }
  return pXVar4;
}


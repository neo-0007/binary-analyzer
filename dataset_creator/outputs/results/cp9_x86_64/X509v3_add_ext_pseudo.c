
stack_st_X509_EXTENSION * X509v3_add_ext(stack_st_X509_EXTENSION **x,X509_EXTENSION *ex,int loc)

{
  int iVar1;
  X509_EXTENSION *a;
  stack_st_X509_EXTENSION *psVar2;
  
  if (x == (stack_st_X509_EXTENSION **)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_v3.c",0x68,"X509v3_add_ext");
    ERR_set_error(0xb,0xc0102,0);
    X509_EXTENSION_free((X509_EXTENSION *)0x0);
    return (stack_st_X509_EXTENSION *)0x0;
  }
  psVar2 = *x;
  if ((psVar2 == (stack_st_X509_EXTENSION *)0x0) &&
     (psVar2 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null(),
     psVar2 == (stack_st_X509_EXTENSION *)0x0)) {
    a = (X509_EXTENSION *)0x0;
  }
  else {
    iVar1 = OPENSSL_sk_num(psVar2);
    if ((loc <= iVar1) && (-1 < loc)) {
      iVar1 = loc;
    }
    a = X509_EXTENSION_dup(ex);
    if (a == (X509_EXTENSION *)0x0) goto LAB_0058f700;
    iVar1 = OPENSSL_sk_insert(psVar2,a,iVar1);
    if (iVar1 != 0) {
      if (*x == (stack_st_X509_EXTENSION *)0x0) {
        *x = psVar2;
        return psVar2;
      }
      return psVar2;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_v3.c",0x80,"X509v3_add_ext");
  ERR_set_error(0xb,0xc0100,0);
LAB_0058f700:
  X509_EXTENSION_free(a);
  if (*x == (stack_st_X509_EXTENSION *)0x0) {
    OPENSSL_sk_free(psVar2);
  }
  return (stack_st_X509_EXTENSION *)0x0;
}


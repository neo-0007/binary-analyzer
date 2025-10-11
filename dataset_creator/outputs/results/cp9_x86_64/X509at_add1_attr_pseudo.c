
stack_st_X509_ATTRIBUTE * X509at_add1_attr(stack_st_X509_ATTRIBUTE **x,X509_ATTRIBUTE *attr)

{
  int iVar1;
  X509_ATTRIBUTE *a;
  stack_st_X509_ATTRIBUTE *psVar2;
  
  if (x == (stack_st_X509_ATTRIBUTE **)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_att.c",0x51,"X509at_add1_attr");
    ERR_set_error(0xb,0xc0102,0);
    return (stack_st_X509_ATTRIBUTE *)0x0;
  }
  psVar2 = *x;
  if ((psVar2 == (stack_st_X509_ATTRIBUTE *)0x0) &&
     (psVar2 = (stack_st_X509_ATTRIBUTE *)OPENSSL_sk_new_null(),
     psVar2 == (stack_st_X509_ATTRIBUTE *)0x0)) {
    a = (X509_ATTRIBUTE *)0x0;
  }
  else {
    a = X509_ATTRIBUTE_dup(attr);
    if (a == (X509_ATTRIBUTE *)0x0) goto LAB_0058aaf0;
    iVar1 = OPENSSL_sk_push(psVar2,a);
    if (iVar1 != 0) {
      if (*x == (stack_st_X509_ATTRIBUTE *)0x0) {
        *x = psVar2;
        return psVar2;
      }
      return psVar2;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_att.c",100,"X509at_add1_attr");
  ERR_set_error(0xb,0xc0100,0);
LAB_0058aaf0:
  X509_ATTRIBUTE_free(a);
  if (*x == (stack_st_X509_ATTRIBUTE *)0x0) {
    OPENSSL_sk_free(psVar2);
  }
  return (stack_st_X509_ATTRIBUTE *)0x0;
}


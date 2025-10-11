
X509 * X509_find_by_subject(stack_st_X509 *sk,X509_NAME *name)

{
  int iVar1;
  X509 *a;
  X509_NAME *a_00;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(sk);
    if (iVar1 <= iVar2) {
      return (X509 *)0x0;
    }
    a = (X509 *)OPENSSL_sk_value(sk,iVar2);
    a_00 = X509_get_subject_name(a);
    iVar1 = X509_NAME_cmp(a_00,name);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return a;
}


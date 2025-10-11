
int PKCS7_set_attributes(PKCS7_SIGNER_INFO *p7si,stack_st_X509_ATTRIBUTE *sk)

{
  int iVar1;
  stack_st_X509_ATTRIBUTE *psVar2;
  X509_ATTRIBUTE *pXVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  OPENSSL_sk_pop_free(p7si->unauth_attr,X509_ATTRIBUTE_free);
  psVar2 = (stack_st_X509_ATTRIBUTE *)OPENSSL_sk_dup(sk);
  p7si->unauth_attr = psVar2;
  if (psVar2 != (stack_st_X509_ATTRIBUTE *)0x0) {
    while( true ) {
      iVar1 = OPENSSL_sk_num(sk);
      if (iVar1 <= iVar5) {
        return 1;
      }
      pXVar3 = (X509_ATTRIBUTE *)OPENSSL_sk_value(sk,iVar5);
      pXVar3 = X509_ATTRIBUTE_dup(pXVar3);
      lVar4 = OPENSSL_sk_set(p7si->unauth_attr,iVar5,pXVar3);
      if (lVar4 == 0) break;
      iVar5 = iVar5 + 1;
    }
  }
  return 0;
}


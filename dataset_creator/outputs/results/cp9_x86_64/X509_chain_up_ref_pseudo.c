
long X509_chain_up_ref(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  X509 *a;
  int iVar4;
  
  lVar2 = OPENSSL_sk_dup();
  if (lVar2 != 0) {
    for (iVar4 = 0; iVar1 = OPENSSL_sk_num(lVar2), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = OPENSSL_sk_value(lVar2,iVar4);
      iVar1 = X509_up_ref(uVar3);
      if (iVar1 == 0) {
        if (0 < iVar4) {
          do {
            iVar4 = iVar4 + -1;
            a = (X509 *)OPENSSL_sk_value(lVar2,iVar4);
            X509_free(a);
          } while (iVar4 != 0);
        }
        OPENSSL_sk_free(lVar2);
        return 0;
      }
    }
  }
  return lVar2;
}


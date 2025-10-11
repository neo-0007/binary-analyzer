
X509_NAME_ENTRY * X509_NAME_delete_entry(X509_NAME *name,int loc)

{
  stack_st_X509_NAME_ENTRY *psVar1;
  int iVar2;
  X509_NAME_ENTRY *pXVar3;
  long lVar4;
  int iVar5;
  
  if (name != (X509_NAME *)0x0) {
    iVar2 = OPENSSL_sk_num(name->entries);
    if ((loc < iVar2) && (-1 < loc)) {
      psVar1 = name->entries;
      pXVar3 = (X509_NAME_ENTRY *)OPENSSL_sk_delete(psVar1,loc);
      iVar2 = OPENSSL_sk_num(psVar1);
      name->modified = 1;
      if (loc != iVar2) {
        if (loc == 0) {
          iVar5 = pXVar3->set;
        }
        else {
          lVar4 = OPENSSL_sk_value(psVar1,loc + -1);
          iVar5 = *(int *)(lVar4 + 0x10) + 1;
        }
        lVar4 = OPENSSL_sk_value(psVar1,loc);
        if ((iVar5 < *(int *)(lVar4 + 0x10)) && (loc < iVar2)) {
          do {
            iVar5 = loc + 1;
            lVar4 = OPENSSL_sk_value(psVar1,loc);
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
            loc = iVar5;
          } while (iVar2 != iVar5);
        }
      }
      return pXVar3;
    }
  }
  return (X509_NAME_ENTRY *)0x0;
}


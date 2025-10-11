
int X509_NAME_add_entry(X509_NAME *name,X509_NAME_ENTRY *ne,int loc,int set)

{
  stack_st_X509_NAME_ENTRY *psVar1;
  int iVar2;
  int iVar3;
  X509_NAME_ENTRY *a;
  long lVar4;
  int iVar5;
  bool bVar6;
  
  if (name == (X509_NAME *)0x0) {
    return 0;
  }
  psVar1 = name->entries;
  iVar2 = OPENSSL_sk_num(psVar1);
  name->modified = 1;
  bVar6 = set == 0;
  if ((loc < 0) || (iVar2 < loc)) {
    loc = iVar2;
    if (set == -1) goto LAB_00596ba0;
  }
  else {
    if (set == -1) {
LAB_00596ba0:
      if (loc == 0) {
        bVar6 = true;
        iVar3 = 0;
      }
      else {
        lVar4 = OPENSSL_sk_value(psVar1,loc + -1);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      goto LAB_00596afa;
    }
    if (loc != iVar2) {
      lVar4 = OPENSSL_sk_value(psVar1,loc);
      iVar3 = *(int *)(lVar4 + 0x10);
      goto LAB_00596afa;
    }
  }
  iVar3 = 0;
  loc = iVar2;
  if (iVar2 != 0) {
    lVar4 = OPENSSL_sk_value(psVar1,iVar2 + -1);
    iVar3 = *(int *)(lVar4 + 0x10) + 1;
  }
LAB_00596afa:
  a = X509_NAME_ENTRY_dup(ne);
  if (a != (X509_NAME_ENTRY *)0x0) {
    a->set = iVar3;
    iVar2 = OPENSSL_sk_insert(psVar1,a,loc);
    if (iVar2 != 0) {
      if (bVar6) {
        iVar2 = loc + 1;
        iVar3 = OPENSSL_sk_num(psVar1);
        if (iVar2 < iVar3) {
          do {
            iVar5 = iVar2 + 1;
            lVar4 = OPENSSL_sk_value(psVar1,iVar2);
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
            iVar2 = iVar5;
          } while (iVar3 != iVar5);
        }
      }
      return 1;
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/x509name.c",0xe1,"X509_NAME_add_entry");
    ERR_set_error(0xb,0xc0100,0);
  }
  X509_NAME_ENTRY_free(a);
  return 0;
}



X509_NAME_ENTRY * X509_NAME_get_entry(X509_NAME *name,int loc)

{
  int iVar1;
  X509_NAME_ENTRY *pXVar2;
  
  if (name == (X509_NAME *)0x0) {
    return (X509_NAME_ENTRY *)0x0;
  }
  iVar1 = OPENSSL_sk_num(name->entries);
  if ((loc < iVar1) && (-1 < loc)) {
    pXVar2 = (X509_NAME_ENTRY *)OPENSSL_sk_value(name->entries,loc);
    return pXVar2;
  }
  return (X509_NAME_ENTRY *)0x0;
}


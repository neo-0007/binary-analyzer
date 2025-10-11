
int X509_PURPOSE_set(int *p,int purpose)

{
  int iVar1;
  
  iVar1 = X509_PURPOSE_get_by_id(purpose);
  if (iVar1 != -1) {
    *p = purpose;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_purp.c",0x65,"X509_PURPOSE_set");
  ERR_set_error(0x22,0x92,0);
  return 0;
}


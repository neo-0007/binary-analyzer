
int X509_TRUST_set(int *t,int trust)

{
  int iVar1;
  
  iVar1 = X509_TRUST_get_by_id(trust);
  if (-1 < iVar1) {
    *t = trust;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_trust.c",0x74,"X509_TRUST_set");
  ERR_set_error(0xb,0x7b,0);
  return 0;
}



int X509_STORE_add_crl(X509_STORE *ctx,X509_CRL *x)

{
  int iVar1;
  
  if (x != (X509_CRL *)0x0) {
    iVar1 = x509_store_add_part_0(ctx,x,1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_lu.c",0x198,"X509_STORE_add_crl");
  ERR_set_error(0xb,0xc0100,0);
  return 0;
}


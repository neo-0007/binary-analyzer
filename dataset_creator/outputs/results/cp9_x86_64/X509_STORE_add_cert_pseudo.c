
int X509_STORE_add_cert(X509_STORE *ctx,X509 *x)

{
  int iVar1;
  
  if (x != (X509 *)0x0) {
    iVar1 = x509_store_add_part_0(ctx,x,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_lu.c",399,"X509_STORE_add_cert");
  ERR_set_error(0xb,0xc0100,0);
  return 0;
}


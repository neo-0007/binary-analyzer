
int X509_STORE_CTX_set_default(X509_STORE_CTX *ctx,char *name)

{
  int iVar1;
  X509_VERIFY_PARAM *from;
  
  from = X509_VERIFY_PARAM_lookup(name);
  if (from != (X509_VERIFY_PARAM *)0x0) {
    iVar1 = X509_VERIFY_PARAM_inherit((X509_VERIFY_PARAM *)ctx->crls,from);
    return iVar1;
  }
  return 0;
}


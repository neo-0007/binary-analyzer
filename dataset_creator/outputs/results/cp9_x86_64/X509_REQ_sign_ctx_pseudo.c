
int X509_REQ_sign_ctx(X509_REQ *x,EVP_MD_CTX *ctx)

{
  ASN1_BIT_STRING *signature;
  ASN1_ITEM *it;
  int iVar1;
  
  signature = (ASN1_BIT_STRING *)x[2].sig_alg;
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  iVar1 = ASN1_item_sign_ctx(it,(X509_ALGOR *)&x[1].references,(X509_ALGOR *)0x0,signature,x,ctx);
  return iVar1;
}



int X509_sign_ctx(X509 *x,EVP_MD_CTX *ctx)

{
  ASN1_ITEM *it;
  int iVar1;
  
  *(undefined4 *)&x->crldp = 1;
  it = (ASN1_ITEM *)X509_CINF_it();
  iVar1 = ASN1_item_sign_ctx(it,(X509_ALGOR *)&x->name,(X509_ALGOR *)&x->altname,
                             (ASN1_BIT_STRING *)&x->rfc3779_addr,x,ctx);
  return iVar1;
}



int PKCS7_print_ctx(BIO *out,PKCS7 *x,int indent,ASN1_PCTX *pctx)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_print(out,(ASN1_VALUE *)x,indent,it,pctx);
  return iVar1;
}



PBKDF2PARAM * d2i_PBKDF2PARAM(PBKDF2PARAM **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PBKDF2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBKDF2PARAM_it();
  pPVar1 = (PBKDF2PARAM *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}


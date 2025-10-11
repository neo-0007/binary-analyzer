
DSA * DSAparams_dup(DSA *x)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_item_dup((ASN1_ITEM *)local_it_1,x);
  return pDVar1;
}


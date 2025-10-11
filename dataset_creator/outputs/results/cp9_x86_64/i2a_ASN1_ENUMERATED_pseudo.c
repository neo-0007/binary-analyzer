
int i2a_ASN1_ENUMERATED(BIO *bp,ASN1_INTEGER *a)

{
  int iVar1;
  
  iVar1 = i2a_ASN1_INTEGER(bp,a);
  return iVar1;
}


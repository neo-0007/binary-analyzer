
int ASN1_OCTET_STRING_cmp(ASN1_STRING *a,ASN1_STRING *b)

{
  int iVar1;
  
  iVar1 = ASN1_STRING_cmp(a,b);
  return iVar1;
}



int ASN1_TIME_print(BIO *fp,ASN1_TIME *a)

{
  int iVar1;
  
  iVar1 = ASN1_TIME_print_ex(fp,a,0);
  return iVar1;
}


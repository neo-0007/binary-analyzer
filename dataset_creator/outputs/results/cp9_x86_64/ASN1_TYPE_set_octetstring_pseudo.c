
int ASN1_TYPE_set_octetstring(ASN1_TYPE *a,uchar *data,int len)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  str = ASN1_OCTET_STRING_new();
  iVar1 = 0;
  if (str != (ASN1_OCTET_STRING *)0x0) {
    iVar1 = ASN1_OCTET_STRING_set(str,data,len);
    if (iVar1 == 0) {
      ASN1_OCTET_STRING_free(str);
      return 0;
    }
    ASN1_TYPE_set(a,4,str);
    iVar1 = 1;
  }
  return iVar1;
}


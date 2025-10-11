
int PKCS7_add1_attrib_digest(PKCS7_SIGNER_INFO *si,uchar *md,int mdlen)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  str = ASN1_OCTET_STRING_new();
  if (str == (ASN1_OCTET_STRING *)0x0) {
    return 0;
  }
  iVar1 = ASN1_STRING_set(str,md,mdlen);
  if ((iVar1 != 0) && (iVar1 = PKCS7_add_signed_attribute(si,0x33,4,str), iVar1 != 0)) {
    return 1;
  }
  ASN1_OCTET_STRING_free(str);
  return 0;
}


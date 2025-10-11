
PKCS7_RECIP_INFO * PKCS7_add_recipient(PKCS7 *p7,X509 *x509)

{
  int iVar1;
  PKCS7_RECIP_INFO *p7i;
  ASN1_INTEGER *pAVar2;
  
  p7i = PKCS7_RECIP_INFO_new();
  if (p7i != (PKCS7_RECIP_INFO *)0x0) {
    iVar1 = PKCS7_RECIP_INFO_set(p7i,x509);
    if (iVar1 != 0) {
      iVar1 = PKCS7_add_recipient_info(p7,p7i);
      if (iVar1 != 0) {
        pAVar2 = (ASN1_INTEGER *)ossl_pkcs7_get0_ctx(p7);
        p7i[1].version = pAVar2;
        return p7i;
      }
    }
  }
  PKCS7_RECIP_INFO_free(p7i);
  return (PKCS7_RECIP_INFO *)0x0;
}


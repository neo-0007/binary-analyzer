
PKCS7 * d2i_PKCS7_bio(BIO *bp,PKCS7 **p7)

{
  undefined8 uVar1;
  PKCS7 *pPVar2;
  uchar *puVar3;
  
  if (p7 == (PKCS7 **)0x0) {
    pPVar2 = (PKCS7 *)0x0;
    puVar3 = (uchar *)0x0;
  }
  else {
    pPVar2 = *p7;
    puVar3 = (uchar *)0x0;
    if (pPVar2 != (PKCS7 *)0x0) {
      puVar3 = pPVar2[1].asn1;
      pPVar2 = (PKCS7 *)pPVar2[1].length;
    }
  }
  uVar1 = PKCS7_it();
  pPVar2 = (PKCS7 *)ASN1_item_d2i_bio_ex(uVar1,bp,p7,puVar3,pPVar2);
  if (pPVar2 != (PKCS7 *)0x0) {
    ossl_pkcs7_resolve_libctx(pPVar2);
  }
  return pPVar2;
}


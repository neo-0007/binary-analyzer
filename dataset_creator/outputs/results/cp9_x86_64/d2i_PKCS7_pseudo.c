
PKCS7 * d2i_PKCS7(PKCS7 **a,uchar **in,long len)

{
  undefined8 uVar1;
  PKCS7 *pPVar2;
  uchar *puVar3;
  
  if (a == (PKCS7 **)0x0) {
    pPVar2 = (PKCS7 *)0x0;
    puVar3 = (uchar *)0x0;
  }
  else {
    pPVar2 = *a;
    puVar3 = (uchar *)0x0;
    if (pPVar2 != (PKCS7 *)0x0) {
      puVar3 = pPVar2[1].asn1;
      pPVar2 = (PKCS7 *)pPVar2[1].length;
    }
  }
  uVar1 = PKCS7_it();
  pPVar2 = (PKCS7 *)ASN1_item_d2i_ex(a,in,len,uVar1,puVar3,pPVar2);
  if (pPVar2 != (PKCS7 *)0x0) {
    ossl_pkcs7_resolve_libctx(pPVar2);
  }
  return pPVar2;
}


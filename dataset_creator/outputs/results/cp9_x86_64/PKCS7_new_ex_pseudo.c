
PKCS7 * PKCS7_new_ex(uchar *param_1,char *param_2)

{
  undefined8 uVar1;
  PKCS7 *a;
  char *pcVar2;
  PKCS7 *pPVar3;
  
  uVar1 = PKCS7_it();
  a = (PKCS7 *)ASN1_item_new_ex(uVar1,param_1,param_2);
  pPVar3 = a;
  if (a != (PKCS7 *)0x0) {
    a[1].asn1 = param_1;
    a[1].length = 0;
    if (param_2 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_2,"../crypto/pkcs7/pk7_asn1.c",0x67);
      a[1].length = (long)pcVar2;
      if (pcVar2 == (char *)0x0) {
        pPVar3 = (PKCS7 *)0x0;
        PKCS7_free(a);
        ERR_new();
        ERR_set_debug("../crypto/pkcs7/pk7_asn1.c",0x6b,"PKCS7_new_ex");
        ERR_set_error(0x39,0xc0100,0);
      }
    }
  }
  return pPVar3;
}


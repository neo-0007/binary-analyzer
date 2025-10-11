
PKCS7_ISSUER_AND_SERIAL * PKCS7_get_issuer_and_serial(PKCS7 *p7,int idx)

{
  stack_st_PKCS7_RECIP_INFO *psVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if (((iVar2 == 0x18) && ((p7->d).signed_and_enveloped != (PKCS7_SIGN_ENVELOPE *)0x0)) &&
     (psVar1 = ((p7->d).signed_and_enveloped)->recipientinfo,
     psVar1 != (stack_st_PKCS7_RECIP_INFO *)0x0)) {
    iVar2 = OPENSSL_sk_num(psVar1);
    if (idx < iVar2) {
      lVar3 = OPENSSL_sk_value(psVar1,idx);
      return *(PKCS7_ISSUER_AND_SERIAL **)(lVar3 + 8);
    }
  }
  return (PKCS7_ISSUER_AND_SERIAL *)0x0;
}


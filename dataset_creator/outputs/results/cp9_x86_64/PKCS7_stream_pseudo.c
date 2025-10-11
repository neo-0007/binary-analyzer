
int PKCS7_stream(uchar ***boundary,PKCS7 *p7)

{
  int iVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x17) {
    pAVar2 = ((p7->d).enveloped)->enc_data->enc_data;
    if (pAVar2 != (ASN1_OCTET_STRING *)0x0) goto LAB_0054ba06;
    pAVar2 = ASN1_OCTET_STRING_new();
    ((p7->d).enveloped)->enc_data->enc_data = pAVar2;
  }
  else if (iVar1 < 0x18) {
    if (iVar1 == 0x15) {
      pAVar2 = (p7->d).data;
    }
    else {
      if (iVar1 != 0x16) {
        return 0;
      }
      pAVar2 = (((p7->d).sign)->contents->d).data;
    }
  }
  else {
    if (iVar1 != 0x18) {
      return 0;
    }
    pAVar2 = ((p7->d).signed_and_enveloped)->enc_data->enc_data;
    if (pAVar2 != (ASN1_OCTET_STRING *)0x0) goto LAB_0054ba06;
    pAVar2 = ASN1_OCTET_STRING_new();
    ((p7->d).signed_and_enveloped)->enc_data->enc_data = pAVar2;
  }
  if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
    return 0;
  }
LAB_0054ba06:
  pAVar2->flags = pAVar2->flags | 0x10;
  *boundary = &pAVar2->data;
  return 1;
}


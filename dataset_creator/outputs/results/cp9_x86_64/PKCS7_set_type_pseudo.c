
int PKCS7_set_type(PKCS7 *p7,int type)

{
  PKCS7_ENC_CONTENT *pPVar1;
  X509_ALGOR *pXVar2;
  int iVar3;
  ASN1_OBJECT *pAVar4;
  PKCS7_DIGEST *pPVar5;
  PKCS7_ENCRYPT *pPVar6;
  ASN1_OCTET_STRING *pAVar7;
  PKCS7_SIGNED *pPVar8;
  PKCS7_ENVELOPE *pPVar9;
  PKCS7_SIGN_ENVELOPE *pPVar10;
  
  pAVar4 = OBJ_nid2obj(type);
  if (type - 0x15U < 6) {
    p7->type = pAVar4;
    switch(type) {
    case 0x15:
      pAVar7 = ASN1_OCTET_STRING_new();
      (p7->d).data = pAVar7;
      return (int)(pAVar7 != (ASN1_OCTET_STRING *)0x0);
    case 0x16:
      pPVar8 = PKCS7_SIGNED_new();
      (p7->d).sign = pPVar8;
      if (pPVar8 != (PKCS7_SIGNED *)0x0) {
        iVar3 = ASN1_INTEGER_set(pPVar8->version,1);
        if (iVar3 == 0) {
          PKCS7_SIGNED_free((p7->d).sign);
          (p7->d).ptr = (char *)0x0;
        }
        return (uint)(iVar3 != 0);
      }
      break;
    case 0x17:
      pPVar9 = PKCS7_ENVELOPE_new();
      (p7->d).enveloped = pPVar9;
      if ((pPVar9 != (PKCS7_ENVELOPE *)0x0) &&
         (iVar3 = ASN1_INTEGER_set(pPVar9->version,0), iVar3 != 0)) {
        pPVar1 = ((p7->d).enveloped)->enc_data;
        pAVar4 = OBJ_nid2obj(0x15);
        pPVar1->content_type = pAVar4;
        return 1;
      }
      break;
    case 0x18:
      pPVar10 = PKCS7_SIGN_ENVELOPE_new();
      (p7->d).signed_and_enveloped = pPVar10;
      if ((pPVar10 != (PKCS7_SIGN_ENVELOPE *)0x0) &&
         (iVar3 = ASN1_INTEGER_set(pPVar10->version,1), iVar3 != 0)) {
        pPVar1 = ((p7->d).signed_and_enveloped)->enc_data;
        pAVar4 = OBJ_nid2obj(0x15);
        pPVar1->content_type = pAVar4;
        return 1;
      }
      break;
    case 0x19:
      pPVar5 = PKCS7_DIGEST_new();
      (p7->d).digest = pPVar5;
      if (pPVar5 != (PKCS7_DIGEST *)0x0) {
        iVar3 = ASN1_INTEGER_set(pPVar5->version,0);
        return (uint)(iVar3 != 0);
      }
      break;
    case 0x1a:
      pPVar6 = PKCS7_ENCRYPT_new();
      (p7->d).encrypted = pPVar6;
      if ((pPVar6 != (PKCS7_ENCRYPT *)0x0) &&
         (iVar3 = ASN1_INTEGER_set(pPVar6->version,0), iVar3 != 0)) {
        pXVar2 = ((p7->d).digest)->md;
        pAVar4 = OBJ_nid2obj(0x15);
        pXVar2->algorithm = pAVar4;
        return 1;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0xad,"PKCS7_set_type");
    ERR_set_error(0x21,0x70,0);
  }
  return 0;
}


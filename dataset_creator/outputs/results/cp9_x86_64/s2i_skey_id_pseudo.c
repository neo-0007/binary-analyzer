
ASN1_OCTET_STRING * s2i_skey_id(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,char *param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  iVar1 = strcmp(param_3,"none");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_3,"hash");
    if (iVar1 != 0) {
      pAVar2 = s2i_ASN1_OCTET_STRING(param_1,param_2,param_3);
      return pAVar2;
    }
    if (param_2 != (X509V3_CTX *)0x0) {
      if ((param_2->flags & 1) != 0) goto LAB_00610260;
      if (param_2->subject_cert != (X509 *)0x0) {
        pAVar2 = (ASN1_OCTET_STRING *)ossl_x509_pubkey_hash(param_2->subject_cert->ex_kusage);
        return pAVar2;
      }
      if (param_2->subject_req != (X509_REQ *)0x0) {
        pAVar2 = (ASN1_OCTET_STRING *)ossl_x509_pubkey_hash(param_2->subject_req[1].sig_alg);
        return pAVar2;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_skid.c",0x68,"s2i_skey_id");
    ERR_set_error(0x22,0x7d,0);
    return (ASN1_OCTET_STRING *)0x0;
  }
LAB_00610260:
  pAVar2 = ASN1_OCTET_STRING_new();
  return pAVar2;
}


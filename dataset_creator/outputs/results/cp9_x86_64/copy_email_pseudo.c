
undefined4 copy_email(uint *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int lastpos;
  X509_NAME *name;
  GENERAL_NAME *a;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar2;
  
  if (param_1 == (uint *)0x0) {
LAB_0060eb70:
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x1b1,"copy_email");
    ERR_set_error(0x22,0x7d,0);
  }
  else {
    if ((*param_1 & 1) != 0) {
      return 1;
    }
    if (*(X509 **)(param_1 + 4) == (X509 *)0x0) {
      if (*(long *)(param_1 + 6) == 0) goto LAB_0060eb70;
      name = (X509_NAME *)X509_REQ_get_subject_name();
    }
    else {
      name = X509_get_subject_name(*(X509 **)(param_1 + 4));
    }
    lastpos = -1;
    do {
      lastpos = X509_NAME_get_index_by_NID(name,0x30,lastpos);
      if (lastpos < 0) {
        return 1;
      }
      ne = X509_NAME_get_entry(name,lastpos);
      pAVar2 = X509_NAME_ENTRY_get_data(ne);
      pAVar2 = ASN1_STRING_dup(pAVar2);
      if (param_3 == 0) {
        if (pAVar2 != (ASN1_STRING *)0x0) goto LAB_0060ea59;
LAB_0060eaf0:
        ERR_new();
        a = (GENERAL_NAME *)0x0;
        ERR_set_debug("../crypto/x509/v3_san.c",0x1c4,"copy_email");
        ERR_set_error(0x22,0xc0100,0);
        goto LAB_0060eb22;
      }
      X509_NAME_delete_entry(name,lastpos);
      X509_NAME_ENTRY_free(ne);
      lastpos = lastpos + -1;
      if (pAVar2 == (ASN1_STRING *)0x0) goto LAB_0060eaf0;
LAB_0060ea59:
      a = GENERAL_NAME_new();
      if (a == (GENERAL_NAME *)0x0) goto LAB_0060eaf0;
      (a->d).otherName = (OTHERNAME *)pAVar2;
      a->type = 1;
      iVar1 = OPENSSL_sk_push(param_2,a);
    } while (iVar1 != 0);
    ERR_new();
    pAVar2 = (ASN1_STRING *)0x0;
    ERR_set_debug("../crypto/x509/v3_san.c",0x1cb,"copy_email");
    ERR_set_error(0x22,0xc0100,0);
LAB_0060eb22:
    GENERAL_NAME_free(a);
    ASN1_IA5STRING_free(pAVar2);
  }
  return 0;
}


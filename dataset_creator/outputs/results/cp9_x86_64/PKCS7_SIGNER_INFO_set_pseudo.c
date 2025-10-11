
int PKCS7_SIGNER_INFO_set(PKCS7_SIGNER_INFO *p7i,X509 *x509,EVP_PKEY *pkey,EVP_MD *dgst)

{
  PKCS7_ISSUER_AND_SERIAL *pPVar1;
  code *pcVar2;
  EVP_PKEY *pEVar3;
  int iVar4;
  int iVar5;
  X509_NAME *name;
  ASN1_STRING *pAVar6;
  ASN1_OBJECT *pAVar7;
  long in_FS_OFFSET;
  int local_44;
  X509_ALGOR *local_40;
  X509_ALGOR *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = ASN1_INTEGER_set(p7i->version,1);
  if (iVar4 != 0) {
    name = X509_get_issuer_name(x509);
    iVar4 = X509_NAME_set(&p7i->issuer_and_serial->issuer,name);
    if (iVar4 != 0) {
      ASN1_INTEGER_free(p7i->issuer_and_serial->serial);
      pAVar6 = (ASN1_STRING *)X509_get0_serialNumber(x509);
      pPVar1 = p7i->issuer_and_serial;
      pAVar6 = ASN1_INTEGER_dup(pAVar6);
      pPVar1->serial = pAVar6;
      if (pAVar6 != (ASN1_STRING *)0x0) {
        EVP_PKEY_up_ref(pkey);
        p7i->pkey = pkey;
        iVar4 = EVP_MD_get_type(dgst);
        pAVar7 = OBJ_nid2obj(iVar4);
        X509_ALGOR_set0(p7i->digest_alg,pAVar7,5,(void *)0x0);
        iVar4 = EVP_PKEY_is_a(pkey);
        if (iVar4 == 0) {
          iVar4 = EVP_PKEY_is_a(pkey);
          if (iVar4 == 0) {
            iVar4 = EVP_PKEY_is_a(pkey);
            if (iVar4 == 0) {
              iVar4 = 0;
              if ((*(long *)&pkey->references != 0) &&
                 (pcVar2 = *(code **)(*(long *)&pkey->references + 0xb0), pcVar2 != (code *)0x0)) {
                iVar5 = (*pcVar2)(pkey,1,0,p7i);
                if (0 < iVar5) goto LAB_0054b3a8;
                if (iVar5 != -2) {
                  ERR_new();
                  ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x17a,"PKCS7_SIGNER_INFO_set");
                  ERR_set_error(0x21,0x93,0);
                  goto LAB_0054b18f;
                }
              }
              ERR_new();
              ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x17e,"PKCS7_SIGNER_INFO_set");
              ERR_set_error(0x21,0x94,0);
            }
            else {
              local_38 = (X509_ALGOR *)0x0;
              PKCS7_SIGNER_INFO_get0_algs(p7i,(EVP_PKEY **)0x0,(X509_ALGOR **)0x0,&local_38);
              if (local_38 != (X509_ALGOR *)0x0) {
                pAVar7 = OBJ_nid2obj(6);
                X509_ALGOR_set0(local_38,pAVar7,5,(void *)0x0);
              }
LAB_0054b3a8:
              iVar4 = 1;
            }
            goto LAB_0054b18f;
          }
        }
        pEVar3 = p7i->pkey;
        PKCS7_SIGNER_INFO_get0_algs(p7i,(EVP_PKEY **)0x0,&local_40,&local_38);
        if ((local_40 != (X509_ALGOR *)0x0) && (local_40->algorithm != (ASN1_OBJECT *)0x0)) {
          iVar4 = OBJ_obj2nid(local_40->algorithm);
          if (iVar4 != 0) {
            iVar5 = EVP_PKEY_get_id(pEVar3);
            iVar4 = OBJ_find_sigid_by_algs(&local_44,iVar4,iVar5);
            if (iVar4 != 0) {
              iVar4 = 1;
              pAVar7 = OBJ_nid2obj(local_44);
              X509_ALGOR_set0(local_38,pAVar7,-1,(void *)0x0);
              goto LAB_0054b18f;
            }
          }
        }
        iVar4 = -1;
        goto LAB_0054b18f;
      }
    }
  }
  iVar4 = 0;
LAB_0054b18f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



int PKCS7_RECIP_INFO_set(PKCS7_RECIP_INFO *p7i,X509 *x509)

{
  PKCS7_ISSUER_AND_SERIAL *pPVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  X509_NAME *name;
  ASN1_STRING *pAVar5;
  long lVar6;
  ASN1_OBJECT *aobj;
  undefined8 uVar7;
  long in_FS_OFFSET;
  X509_ALGOR *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ASN1_INTEGER_set(p7i->version,0);
  if (iVar3 != 0) {
    name = X509_get_issuer_name(x509);
    iVar3 = X509_NAME_set(&p7i->issuer_and_serial->issuer,name);
    if (iVar3 != 0) {
      ASN1_INTEGER_free(p7i->issuer_and_serial->serial);
      pAVar5 = (ASN1_STRING *)X509_get0_serialNumber(x509);
      pPVar1 = p7i->issuer_and_serial;
      pAVar5 = ASN1_INTEGER_dup(pAVar5);
      pPVar1->serial = pAVar5;
      if (pAVar5 != (ASN1_STRING *)0x0) {
        lVar6 = X509_get0_pubkey(x509);
        if (lVar6 != 0) {
          iVar3 = EVP_PKEY_is_a(lVar6,"RSA-PSS");
          if (iVar3 != 0) {
            iVar3 = -2;
            goto LAB_0054b605;
          }
          iVar3 = EVP_PKEY_is_a(lVar6,"RSA");
          if (iVar3 == 0) {
            iVar3 = 0;
            if ((*(long *)(lVar6 + 8) == 0) ||
               (pcVar2 = *(code **)(*(long *)(lVar6 + 8) + 0xb0), pcVar2 == (code *)0x0)) {
              ERR_new();
              uVar7 = 0x285;
            }
            else {
              iVar4 = (*pcVar2)(lVar6,2,0,p7i);
              if (iVar4 != -2) {
                if (iVar4 < 1) {
                  ERR_new();
                  ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x291,"PKCS7_RECIP_INFO_set");
                  ERR_set_error(0x21,0x95,0);
                  goto LAB_0054b605;
                }
                goto LAB_0054b6f1;
              }
              ERR_new();
              uVar7 = 0x28c;
            }
            ERR_set_debug("../crypto/pkcs7/pk7_lib.c",uVar7,"PKCS7_RECIP_INFO_set");
            ERR_set_error(0x21,0x96,0);
          }
          else {
            local_38 = (X509_ALGOR *)0x0;
            PKCS7_RECIP_INFO_get0_alg(p7i,&local_38);
            if (local_38 != (X509_ALGOR *)0x0) {
              aobj = OBJ_nid2obj(6);
              X509_ALGOR_set0(local_38,aobj,5,(void *)0x0);
            }
LAB_0054b6f1:
            iVar3 = 1;
            X509_up_ref(x509);
            p7i->cert = x509;
          }
          goto LAB_0054b605;
        }
      }
    }
  }
  iVar3 = 0;
LAB_0054b605:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


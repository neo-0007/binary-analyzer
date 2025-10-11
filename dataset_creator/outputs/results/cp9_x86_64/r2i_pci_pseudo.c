
PROXY_CERT_INFO_EXTENSION * r2i_pci(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  char *pcVar1;
  PROXY_POLICY *pPVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  stack_st_CONF_VALUE *psVar6;
  undefined8 *puVar7;
  stack_st_CONF_VALUE *section;
  undefined8 uVar8;
  PROXY_CERT_INFO_EXTENSION *pPVar9;
  int iVar10;
  ASN1_OBJECT *a;
  ASN1_OCTET_STRING *a_00;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_58;
  ASN1_STRING *local_50;
  ASN1_OCTET_STRING *local_48;
  long local_40;
  
  iVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (ASN1_OBJECT *)0x0;
  local_50 = (ASN1_INTEGER *)0x0;
  local_48 = (ASN1_OCTET_STRING *)0x0;
  psVar6 = X509V3_parse_list(param_3);
  while( true ) {
    iVar3 = OPENSSL_sk_num(psVar6);
    a_00 = local_48;
    a = local_58;
    if (iVar3 <= iVar10) break;
    puVar7 = (undefined8 *)OPENSSL_sk_value(psVar6,iVar10);
    pcVar1 = (char *)puVar7[1];
    if (pcVar1 == (char *)0x0) {
LAB_0060def0:
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pci.c",0xfe,"r2i_pci");
      uVar8 = 0x99;
LAB_0060df14:
      ERR_set_error(0x22,uVar8,0);
      ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
      a = local_58;
      a_00 = local_48;
      goto LAB_0060df5b;
    }
    if (*pcVar1 == '@') {
      section = X509V3_get_section(param_2,pcVar1 + 1);
      if (section == (stack_st_CONF_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_pci.c",0x108,"r2i_pci");
        uVar8 = 0x87;
        goto LAB_0060df14;
      }
      iVar3 = 0;
      while( true ) {
        iVar4 = OPENSSL_sk_num(section);
        if (iVar4 <= iVar3) break;
        uVar8 = OPENSSL_sk_value(section,iVar3);
        iVar4 = process_pci_value(uVar8,&local_58,&local_50,&local_48);
        iVar3 = iVar3 + 1;
        if (iVar4 == 0) {
          X509V3_section_free(param_2,section);
          a = local_58;
          a_00 = local_48;
          goto LAB_0060df5b;
        }
      }
      X509V3_section_free(param_2,section);
    }
    else {
      if (puVar7[2] == 0) goto LAB_0060def0;
      iVar3 = process_pci_value(puVar7,&local_58,&local_50,&local_48);
      if (iVar3 == 0) {
        ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        a = local_58;
        a_00 = local_48;
        goto LAB_0060df5b;
      }
    }
    iVar10 = iVar10 + 1;
  }
  if (local_58 == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_pci.c",0x11e,"r2i_pci");
    ERR_set_error(0x22,0x9a,0);
  }
  else {
    uVar5 = OBJ_obj2nid(local_58);
    if (((uVar5 & 0xfffffffd) == 0x299) && (a_00 != (ASN1_OCTET_STRING *)0x0)) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pci.c",0x124,"r2i_pci");
      ERR_set_error(0x22,0x9f,0);
    }
    else {
      pPVar9 = PROXY_CERT_INFO_EXTENSION_new();
      if (pPVar9 != (PROXY_CERT_INFO_EXTENSION *)0x0) {
        pPVar2 = pPVar9->proxyPolicy;
        pPVar2->policyLanguage = a;
        pPVar2->policy = a_00;
        pPVar9->pcPathLengthConstraint = local_50;
        local_50 = (ASN1_STRING *)0x0;
        goto LAB_0060df88;
      }
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pci.c",299,"r2i_pci");
      ERR_set_error(0x22,0xc0100,0);
    }
  }
LAB_0060df5b:
  pPVar9 = (PROXY_CERT_INFO_EXTENSION *)0x0;
  ASN1_OBJECT_free(a);
  ASN1_INTEGER_free(local_50);
  local_50 = (ASN1_STRING *)0x0;
  ASN1_OCTET_STRING_free(a_00);
  PROXY_CERT_INFO_EXTENSION_free((PROXY_CERT_INFO_EXTENSION *)0x0);
LAB_0060df88:
  OPENSSL_sk_pop_free(psVar6,X509V3_conf_free);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


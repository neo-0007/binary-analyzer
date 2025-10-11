
ASIdentifiers * v2i_ASIdentifiers(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ASIdentifiers *a;
  size_t sVar4;
  char *pcVar5;
  ASN1_INTEGER *y;
  CONF_VALUE *value;
  int iVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  ASN1_INTEGER *local_48;
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_INTEGER *)0x0;
  a = ASIdentifiers_new();
  if (a != (ASIdentifiers *)0x0) {
LAB_0060865e:
    iVar3 = OPENSSL_sk_num(param_3);
    if (iVar3 <= iVar6) goto LAB_00608790;
    value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar6);
    iVar3 = ossl_v3_name_cmp(value->name,&DAT_00810e69);
    if (iVar3 != 0) {
      iVar3 = ossl_v3_name_cmp(value->name,&DAT_00810e6c);
      if (iVar3 == 0) {
        iVar3 = 1;
        goto LAB_006084f0;
      }
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_asid.c",0x218,"v2i_ASIdentifiers");
      uVar7 = 0x73;
LAB_006086f3:
      y = (ASN1_STRING *)0x0;
      ERR_set_error(0x22,uVar7,0);
      ERR_add_error_data(4,"name=",value->name,", value=",value->value);
      goto LAB_00608724;
    }
LAB_006084f0:
    pcVar5 = value->value;
    iVar1 = strcmp(pcVar5,"inherit");
    if (iVar1 == 0) {
      iVar3 = X509v3_asid_add_inherit(a,iVar3);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_asid.c",0x223,"v2i_ASIdentifiers");
        uVar7 = 0xa5;
        goto LAB_006086f3;
      }
    }
    else {
      sVar4 = strspn(pcVar5,"0123456789");
      iVar1 = (int)sVar4;
      if (pcVar5[iVar1] != '\0') {
        sVar4 = strspn(pcVar5 + iVar1," \t");
        iVar2 = (int)sVar4 + iVar1;
        if (pcVar5[iVar2] == '-') {
          iVar2 = iVar2 + 1;
          sVar4 = strspn(pcVar5 + iVar2," \t");
          iVar2 = iVar2 + (int)sVar4;
          sVar4 = strspn(pcVar5 + iVar2,"0123456789");
          if (pcVar5[iVar2 + (int)sVar4] != '\0') {
            ERR_new();
            ERR_set_debug("../crypto/x509/v3_asid.c",0x23a,"v2i_ASIdentifiers");
            uVar7 = 0xa3;
            goto LAB_006086f3;
          }
          pcVar5 = CRYPTO_strdup(pcVar5,"../crypto/x509/v3_asid.c",0x249);
          if (pcVar5 == (char *)0x0) {
            ERR_new();
            uVar7 = 0x24b;
            goto LAB_00608860;
          }
          pcVar5[iVar1] = '\0';
          local_48 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar5);
          y = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar5 + iVar2);
          CRYPTO_free(pcVar5);
          if ((local_48 == (ASN1_INTEGER *)0x0) || (y == (ASN1_INTEGER *)0x0)) {
            ERR_new();
            uVar7 = 0x253;
            goto LAB_006087bc;
          }
          iVar1 = ASN1_INTEGER_cmp(local_48,y);
          if (iVar1 < 1) goto LAB_00608637;
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_asid.c",599,"v2i_ASIdentifiers");
          ERR_set_error(0x22,0x74,0);
          goto LAB_00608724;
        }
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_asid.c",0x232,"v2i_ASIdentifiers");
        uVar7 = 0xa2;
        goto LAB_006086f3;
      }
      iVar1 = X509V3_get_value_int(value,&local_48);
      if (iVar1 == 0) {
        ERR_new();
        uVar7 = 0x245;
LAB_00608860:
        ERR_set_debug("../crypto/x509/v3_asid.c",uVar7,"v2i_ASIdentifiers");
        y = (ASN1_STRING *)0x0;
        ERR_set_error(0x22,0xc0100,0);
        goto LAB_00608724;
      }
      y = (ASN1_INTEGER *)0x0;
LAB_00608637:
      iVar3 = X509v3_asid_add_id_or_range(a,iVar3,local_48,y);
      if (iVar3 == 0) {
        ERR_new();
        uVar7 = 0x25c;
LAB_006087bc:
        ERR_set_debug("../crypto/x509/v3_asid.c",uVar7,"v2i_ASIdentifiers");
        ERR_set_error(0x22,0xc0100,0);
        goto LAB_00608724;
      }
      local_48 = (ASN1_INTEGER *)0x0;
    }
    iVar6 = iVar6 + 1;
    goto LAB_0060865e;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_asid.c",0x208,"v2i_ASIdentifiers");
  ERR_set_error(0x22,0xc0100,0);
  goto LAB_00608741;
LAB_00608790:
  iVar6 = X509v3_asid_canonize(a);
  if (iVar6 == 0) {
    y = (ASN1_STRING *)0x0;
LAB_00608724:
    ASIdentifiers_free(a);
    ASN1_INTEGER_free(local_48);
    ASN1_INTEGER_free(y);
    a = (ASIdentifiers *)0x0;
  }
LAB_00608741:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



long v2i_AUTHORITY_INFO_ACCESS(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  GENERAL_NAME *pGVar4;
  ASN1_OBJECT *pAVar5;
  long lVar6;
  ACCESS_DESCRIPTION *pAVar7;
  undefined8 uVar8;
  int iVar9;
  long in_FS_OFFSET;
  CONF_VALUE local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_info.c",0x72,"v2i_AUTHORITY_INFO_ACCESS");
    ERR_set_error(0x22,0xc0100,0);
  }
  else if (0 < iVar1) {
    iVar9 = 0;
    do {
      lVar6 = OPENSSL_sk_value(param_3,iVar9);
      pAVar7 = ACCESS_DESCRIPTION_new();
      if (pAVar7 == (ACCESS_DESCRIPTION *)0x0) {
        ERR_new();
        uVar8 = 0x78;
LAB_0060bbbb:
        ERR_set_debug("../crypto/x509/v3_info.c",uVar8,"v2i_AUTHORITY_INFO_ACCESS");
        ERR_set_error(0x22,0xc0100,0);
LAB_0060bbd3:
        OPENSSL_sk_pop_free(lVar2,ACCESS_DESCRIPTION_free);
        lVar2 = 0;
        break;
      }
      OPENSSL_sk_push(lVar2,pAVar7);
      pcVar3 = strchr(*(char **)(lVar6 + 8),0x3b);
      if (pcVar3 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_info.c",0x7e,"v2i_AUTHORITY_INFO_ACCESS");
        ERR_set_error(0x22,0x8f,0);
        goto LAB_0060bbd3;
      }
      local_58.name = pcVar3 + 1;
      local_58.value = *(char **)(lVar6 + 0x10);
      pGVar4 = v2i_GENERAL_NAME_ex(pAVar7->location,param_1,param_2,&local_58,0);
      if (pGVar4 == (GENERAL_NAME *)0x0) goto LAB_0060bbd3;
      pcVar3 = (char *)CRYPTO_strndup(*(long *)(lVar6 + 8),(long)pcVar3 - *(long *)(lVar6 + 8),
                                      "../crypto/x509/v3_info.c",0x85);
      if (pcVar3 == (char *)0x0) {
        ERR_new();
        uVar8 = 0x86;
        goto LAB_0060bbbb;
      }
      pAVar5 = OBJ_txt2obj(pcVar3,0);
      pAVar7->method = pAVar5;
      if (pAVar5 == (ASN1_OBJECT *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_info.c",0x8b,"v2i_AUTHORITY_INFO_ACCESS");
        ERR_set_error(0x22,0x77,"value=%s",pcVar3);
        CRYPTO_free(pcVar3);
        goto LAB_0060bbd3;
      }
      iVar9 = iVar9 + 1;
      CRYPTO_free(pcVar3);
    } while (iVar1 != iVar9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


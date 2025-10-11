
undefined8 * v2i_issuer_sign_tool(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ASN1_UTF8STRING *pAVar5;
  size_t sVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar7 = 0;
  puVar3 = (undefined8 *)ISSUER_SIGN_TOOL_new();
  if (puVar3 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_ist.c",0x2a,"v2i_issuer_sign_tool");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    for (; iVar2 = OPENSSL_sk_num(param_3), iVar7 < iVar2; iVar7 = iVar7 + 1) {
      lVar4 = OPENSSL_sk_value(param_3,iVar7);
      if (lVar4 != 0) {
        pcVar1 = *(char **)(lVar4 + 8);
        iVar2 = strcmp(pcVar1,"signTool");
        if (iVar2 == 0) {
          pAVar5 = ASN1_UTF8STRING_new();
          *puVar3 = pAVar5;
          if (pAVar5 == (ASN1_UTF8STRING *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/x509/v3_ist.c",0x36,"v2i_issuer_sign_tool");
            uVar8 = 0xc0100;
            goto LAB_0061eb10;
          }
        }
        else {
          iVar2 = strcmp(pcVar1,"cATool");
          if (iVar2 == 0) {
            pAVar5 = ASN1_UTF8STRING_new();
            puVar3[1] = pAVar5;
            if (pAVar5 == (ASN1_UTF8STRING *)0x0) {
              ERR_new();
              ERR_set_debug("../crypto/x509/v3_ist.c",0x3e,"v2i_issuer_sign_tool");
              uVar8 = 0xc0100;
              goto LAB_0061eb10;
            }
          }
          else {
            iVar2 = strcmp(pcVar1,"signToolCert");
            if (iVar2 != 0) {
              iVar2 = strcmp(pcVar1,"cAToolCert");
              if (iVar2 != 0) {
                ERR_new();
                ERR_set_debug("../crypto/x509/v3_ist.c",0x54,"v2i_issuer_sign_tool");
                uVar8 = 0x80106;
LAB_0061eb10:
                ERR_set_error(0x22,uVar8,0);
                ISSUER_SIGN_TOOL_free(puVar3);
                return (undefined8 *)0x0;
              }
              pAVar5 = ASN1_UTF8STRING_new();
              puVar3[3] = pAVar5;
              if (pAVar5 == (ASN1_UTF8STRING *)0x0) {
                ERR_new();
                ERR_set_debug("../crypto/x509/v3_ist.c",0x4e,"v2i_issuer_sign_tool");
                uVar8 = 0xc0100;
                goto LAB_0061eb10;
              }
              pcVar1 = *(char **)(lVar4 + 0x10);
              sVar6 = strlen(pcVar1);
              ASN1_STRING_set(pAVar5,pcVar1,(int)sVar6);
              goto LAB_0061ea67;
            }
            pAVar5 = ASN1_UTF8STRING_new();
            puVar3[2] = pAVar5;
            if (pAVar5 == (ASN1_UTF8STRING *)0x0) {
              ERR_new();
              ERR_set_debug("../crypto/x509/v3_ist.c",0x46,"v2i_issuer_sign_tool");
              uVar8 = 0xc0100;
              goto LAB_0061eb10;
            }
          }
        }
        pcVar1 = *(char **)(lVar4 + 0x10);
        sVar6 = strlen(pcVar1);
        ASN1_STRING_set(pAVar5,pcVar1,(int)sVar6);
      }
LAB_0061ea67:
    }
  }
  return puVar3;
}


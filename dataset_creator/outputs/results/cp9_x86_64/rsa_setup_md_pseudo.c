
undefined4 rsa_setup_md(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  if (param_2 == (char *)0x0) {
    return 1;
  }
  lVar3 = EVP_MD_fetch(*param_1,param_2,param_3);
  iVar1 = ossl_digest_rsa_sign_get_md_nid(*param_1,lVar3,*(int *)(param_1 + 3) != 0x10);
  sVar4 = strlen(param_2);
  if (lVar3 == 0) {
LAB_0047cf50:
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x12d,"rsa_setup_md");
    ERR_set_error(0x39,0x7a,"%s could not be fetched",param_2);
    if (iVar1 < 1) {
LAB_0047d007:
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x130,"rsa_setup_md");
      ERR_set_error(0x39,0xae,"digest=%s",param_2);
    }
LAB_0047cf93:
    if (sVar4 < 0x32) goto LAB_0047cf99;
  }
  else {
    if (iVar1 < 1) {
      if (lVar3 == 0) goto LAB_0047cf50;
      goto LAB_0047d007;
    }
    iVar2 = rsa_check_padding(param_1,param_2,0,iVar1);
    if (sVar4 < 0x32) {
      if (iVar2 != 0) {
        if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
          if ((*(byte *)((long)param_1 + 0x1c) & 2) == 0) {
            iVar2 = EVP_MD_up_ref(lVar3);
            if (iVar2 == 0) {
              EVP_MD_free(lVar3);
              return 0;
            }
            EVP_MD_free(param_1[0xe]);
            param_1[0xe] = lVar3;
            *(int *)(param_1 + 0xf) = iVar1;
            OPENSSL_strlcpy((long)param_1 + 0x7c,param_2,0x32);
          }
          EVP_MD_CTX_free(param_1[5]);
          EVP_MD_free(param_1[4]);
          param_1[4] = lVar3;
          param_1[5] = 0;
          *(int *)(param_1 + 6) = iVar1;
          OPENSSL_strlcpy((long)param_1 + 0x34,param_2,0x32);
          return 1;
        }
        if (*(char *)((long)param_1 + 0x34) != '\0') {
          iVar1 = EVP_MD_is_a(lVar3,(long)param_1 + 0x34);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x13b,"rsa_setup_md");
            ERR_set_error(0x39,0xae,"digest %s != %s",param_2,(long)param_1 + 0x34);
            EVP_MD_free(lVar3);
            return 0;
          }
        }
        EVP_MD_free(lVar3);
        return 1;
      }
      goto LAB_0047cf93;
    }
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x133,"rsa_setup_md");
  ERR_set_error(0x39,0x7a,"%s exceeds name buffer length",param_2);
LAB_0047cf99:
  EVP_MD_free(lVar3);
  return 0;
}


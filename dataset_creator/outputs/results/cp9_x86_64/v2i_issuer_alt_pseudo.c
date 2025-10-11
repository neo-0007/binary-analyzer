
long v2i_issuer_alt(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  GENERAL_NAME *pGVar5;
  CONF_VALUE *cnf;
  X509_EXTENSION *ext;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar4 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x136,"v2i_issuer_alt");
    ERR_set_error(0x22,0xc0100,0);
    OPENSSL_sk_free(0);
  }
  else {
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        while( true ) {
          cnf = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar8);
          iVar2 = ossl_v3_name_cmp(cnf->name,"issuer");
          if (((iVar2 == 0) && (cnf->value != (char *)0x0)) &&
             (iVar2 = strcmp(cnf->value,"copy"), iVar2 == 0)) break;
          pGVar5 = v2i_GENERAL_NAME(param_1,param_2,cnf);
          if (pGVar5 == (GENERAL_NAME *)0x0) goto LAB_0060fcd8;
          OPENSSL_sk_push(lVar4,pGVar5);
LAB_0060fb7c:
          iVar8 = iVar8 + 1;
          if (iVar1 == iVar8) {
            return lVar4;
          }
        }
        if (param_2 == (X509V3_CTX *)0x0) {
LAB_0060fca8:
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_san.c",0x15b,"copy_issuer");
          ERR_set_error(0x22,0x7f,0);
LAB_0060fcd8:
          OPENSSL_sk_pop_free(lVar4,GENERAL_NAME_free);
          return 0;
        }
        if ((param_2->flags & 1U) != 0) goto LAB_0060fb7c;
        if (param_2->issuer_cert == (X509 *)0x0) goto LAB_0060fca8;
        iVar2 = X509_get_ext_by_NID(param_2->issuer_cert,0x55,-1);
        if (iVar2 < 0) goto LAB_0060fb7c;
        ext = X509_get_ext(param_2->issuer_cert,iVar2);
        if ((ext == (X509_EXTENSION *)0x0) || (pvVar6 = X509V3_EXT_d2i(ext), pvVar6 == (void *)0x0))
        {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_san.c",0x163,"copy_issuer");
          ERR_set_error(0x22,0x7e,0);
          goto LAB_0060fcd8;
        }
        iVar2 = OPENSSL_sk_num(pvVar6);
        iVar3 = OPENSSL_sk_reserve(lVar4,iVar2);
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_san.c",0x169,"copy_issuer");
          ERR_set_error(0x22,0xc0100,0);
          goto LAB_0060fcd8;
        }
        if (0 < iVar2) {
          iVar3 = 0;
          do {
            iVar9 = iVar3 + 1;
            uVar7 = OPENSSL_sk_value(pvVar6,iVar3);
            OPENSSL_sk_push(lVar4,uVar7);
            iVar3 = iVar9;
          } while (iVar2 != iVar9);
        }
        iVar8 = iVar8 + 1;
        OPENSSL_sk_free(pvVar6);
      } while (iVar1 != iVar8);
    }
  }
  return lVar4;
}


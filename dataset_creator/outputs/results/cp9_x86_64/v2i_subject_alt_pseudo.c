
long v2i_subject_alt(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  GENERAL_NAME *pGVar4;
  CONF_VALUE *cnf;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  int iVar6;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x185,"v2i_subject_alt");
    ERR_set_error(0x22,0xc0100,0);
    OPENSSL_sk_free(0);
  }
  else {
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        cnf = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar6);
        iVar2 = ossl_v3_name_cmp(cnf->name,"email");
        uVar5 = extraout_RDX;
        if ((iVar2 == 0) && (cnf->value != (char *)0x0)) {
          iVar2 = strcmp(cnf->value,"copy");
          uVar5 = 0;
          if (iVar2 != 0) goto LAB_0060fde8;
          iVar2 = copy_email(param_2,lVar3);
joined_r0x0060fe87:
          if (iVar2 == 0) {
LAB_0060fe90:
            OPENSSL_sk_pop_free(lVar3,GENERAL_NAME_free);
            return 0;
          }
        }
        else {
LAB_0060fde8:
          iVar2 = ossl_v3_name_cmp(cnf->name,"email",uVar5);
          if (((iVar2 == 0) && (cnf->value != (char *)0x0)) &&
             (iVar2 = strcmp(cnf->value,"move"), iVar2 == 0)) {
            iVar2 = copy_email(param_2,lVar3,1);
            goto joined_r0x0060fe87;
          }
          pGVar4 = v2i_GENERAL_NAME(param_1,param_2,cnf);
          if (pGVar4 == (GENERAL_NAME *)0x0) goto LAB_0060fe90;
          OPENSSL_sk_push(lVar3,pGVar4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return lVar3;
}


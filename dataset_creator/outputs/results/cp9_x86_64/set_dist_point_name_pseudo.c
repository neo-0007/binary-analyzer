
undefined8 set_dist_point_name(long *param_1,X509V3_CTX *param_2,long param_3)

{
  char *__s1;
  int iVar1;
  X509_NAME *a;
  stack_st_CONF_VALUE *dn_sk;
  long lVar2;
  GENERAL_NAMES *pGVar3;
  DIST_POINT_NAME *pDVar4;
  stack_st_X509_NAME_ENTRY *psVar5;
  
  __s1 = *(char **)(param_3 + 8);
  iVar1 = strcmp(__s1,"fullname");
  if (iVar1 == 0) {
    psVar5 = (stack_st_X509_NAME_ENTRY *)0x0;
    pGVar3 = (GENERAL_NAMES *)gnames_from_sectname(param_2,*(undefined8 *)(param_3 + 0x10));
    if (pGVar3 == (GENERAL_NAMES *)0x0) goto LAB_0060a980;
  }
  else {
    iVar1 = strcmp(__s1,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    a = X509_NAME_new();
    if (a == (X509_NAME *)0x0) {
      return 0xffffffff;
    }
    dn_sk = X509V3_get_section(param_2,*(char **)(param_3 + 0x10));
    if (dn_sk == (stack_st_CONF_VALUE *)0x0) {
      X509_NAME_free(a);
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_crld.c",0x57,"set_dist_point_name");
      ERR_set_error(0x22,0x96,0);
      return 0xffffffff;
    }
    iVar1 = X509V3_NAME_from_section(a,dn_sk,0x1001);
    pGVar3 = (GENERAL_NAMES *)0x0;
    X509V3_section_free(param_2,dn_sk);
    psVar5 = a->entries;
    a->entries = (stack_st_X509_NAME_ENTRY *)0x0;
    X509_NAME_free(a);
    if ((iVar1 == 0) || (iVar1 = OPENSSL_sk_num(psVar5), iVar1 < 1)) goto LAB_0060a980;
    iVar1 = OPENSSL_sk_num(psVar5);
    lVar2 = OPENSSL_sk_value(psVar5,iVar1 + -1);
    if (*(int *)(lVar2 + 0x10) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_crld.c",0x66,"set_dist_point_name");
      ERR_set_error(0x22,0xa1,0);
      goto LAB_0060a980;
    }
  }
  if (*param_1 == 0) {
    pDVar4 = DIST_POINT_NAME_new();
    *param_1 = (long)pDVar4;
    if (pDVar4 != (DIST_POINT_NAME *)0x0) {
      if (pGVar3 != (GENERAL_NAMES *)0x0) {
        pDVar4->type = 0;
        (pDVar4->name).fullname = pGVar3;
        return 1;
      }
      (pDVar4->name).fullname = (GENERAL_NAMES *)psVar5;
      pDVar4->type = 1;
      return 1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_crld.c",0x6d,"set_dist_point_name");
    ERR_set_error(0x22,0xa0,0);
  }
LAB_0060a980:
  OPENSSL_sk_pop_free(pGVar3,GENERAL_NAME_free);
  OPENSSL_sk_pop_free(psVar5,X509_NAME_ENTRY_free);
  return 0xffffffff;
}


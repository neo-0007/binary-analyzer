
long v2i_crld(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  int iVar2;
  DIST_POINT *a;
  DIST_POINT_NAME *pDVar3;
  CONF_VALUE *cnf;
  stack_st_CONF_VALUE *section;
  DIST_POINT *a_00;
  long lVar4;
  GENERAL_NAMES *pGVar5;
  int iVar6;
  long local_68;
  int local_50;
  
  iVar1 = OPENSSL_sk_num(param_3);
  local_68 = OPENSSL_sk_new_reserve(0,iVar1);
  if (local_68 == 0) {
    a = (DIST_POINT *)0x0;
    pGVar5 = (GENERAL_NAMES *)0x0;
LAB_0060ad86:
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_crld.c",0x11c,__func___7);
    ERR_set_error(0x22,0xc0100,0);
LAB_0060ad06:
    GENERAL_NAME_free((GENERAL_NAME *)a);
    GENERAL_NAMES_free(pGVar5);
    OPENSSL_sk_pop_free(local_68,DIST_POINT_free);
    local_68 = 0;
  }
  else if (0 < iVar1) {
    local_50 = 0;
    do {
      cnf = (CONF_VALUE *)OPENSSL_sk_value(param_3,local_50);
      if (cnf->value == (char *)0x0) {
        section = X509V3_get_section(param_2,cnf->name);
        if (section == (stack_st_CONF_VALUE *)0x0) {
LAB_0060adbb:
          a = (DIST_POINT *)0x0;
          pGVar5 = (GENERAL_NAMES *)0x0;
          goto LAB_0060ad06;
        }
        a_00 = DIST_POINT_new();
        if (a_00 == (DIST_POINT *)0x0) {
LAB_0060acf1:
          a = (DIST_POINT *)0x0;
          DIST_POINT_free(a_00);
          X509V3_section_free(param_2,section);
          pGVar5 = (GENERAL_NAMES *)0x0;
          goto LAB_0060ad06;
        }
        for (iVar6 = 0; iVar2 = OPENSSL_sk_num(section), iVar6 < iVar2; iVar6 = iVar6 + 1) {
          lVar4 = OPENSSL_sk_value(section,iVar6);
          iVar2 = set_dist_point_name(a_00,param_2,lVar4);
          if (iVar2 < 1) {
            if (iVar2 != 0) goto LAB_0060acf1;
            __s1 = *(char **)(lVar4 + 8);
            iVar2 = strcmp(__s1,"reasons");
            if (iVar2 == 0) {
              iVar2 = set_reasons(&a_00->reasons,*(undefined8 *)(lVar4 + 0x10));
              if (iVar2 == 0) goto LAB_0060acf1;
            }
            else {
              iVar2 = strcmp(__s1,"CRLissuer");
              if (iVar2 == 0) {
                pGVar5 = (GENERAL_NAMES *)
                         gnames_from_sectname(param_2,*(undefined8 *)(lVar4 + 0x10));
                a_00->CRLissuer = pGVar5;
                if (pGVar5 == (GENERAL_NAMES *)0x0) goto LAB_0060acf1;
              }
            }
          }
        }
        X509V3_section_free(param_2,section);
        OPENSSL_sk_push(local_68,a_00);
      }
      else {
        a = (DIST_POINT *)v2i_GENERAL_NAME(param_1,param_2,cnf);
        if (a == (DIST_POINT *)0x0) goto LAB_0060adbb;
        pGVar5 = GENERAL_NAMES_new();
        if (((pGVar5 == (GENERAL_NAMES *)0x0) || (iVar6 = OPENSSL_sk_push(pGVar5,a), iVar6 == 0)) ||
           (a = DIST_POINT_new(), a == (DIST_POINT *)0x0)) goto LAB_0060ad86;
        OPENSSL_sk_push(local_68,a);
        pDVar3 = DIST_POINT_NAME_new();
        a->distpoint = pDVar3;
        if (pDVar3 == (DIST_POINT_NAME *)0x0) {
          a = (DIST_POINT *)0x0;
          goto LAB_0060ad86;
        }
        (pDVar3->name).fullname = pGVar5;
        pDVar3->type = 0;
      }
      local_50 = local_50 + 1;
    } while (iVar1 != local_50);
  }
  return local_68;
}


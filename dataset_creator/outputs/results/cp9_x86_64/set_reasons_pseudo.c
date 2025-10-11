
undefined8 set_reasons(long *param_1,char *param_2)

{
  char *__s2;
  int iVar1;
  stack_st_CONF_VALUE *psVar2;
  long lVar3;
  ASN1_BIT_STRING *pAVar4;
  int *piVar5;
  char *__s1;
  int iVar6;
  undefined8 uVar7;
  
  psVar2 = X509V3_parse_list(param_2);
  if (psVar2 == (stack_st_CONF_VALUE *)0x0) {
    uVar7 = 0;
  }
  else {
    if (*param_1 == 0) {
      iVar6 = 0;
      iVar1 = OPENSSL_sk_num(psVar2);
      if (0 < iVar1) {
        do {
          lVar3 = OPENSSL_sk_value(psVar2,iVar6);
          __s2 = *(char **)(lVar3 + 8);
          if (*param_1 == 0) {
            pAVar4 = ASN1_BIT_STRING_new();
            *param_1 = (long)pAVar4;
            if (pAVar4 == (ASN1_BIT_STRING *)0x0) goto LAB_0060a1e0;
          }
          __s1 = "unused";
          piVar5 = &reason_flags;
          while (iVar1 = strcmp(__s1,__s2), iVar1 != 0) {
            if (*(long *)(piVar5 + 8) == 0) goto LAB_0060a1e0;
            __s1 = *(char **)(piVar5 + 10);
            piVar5 = piVar5 + 6;
          }
          iVar1 = ASN1_BIT_STRING_set_bit((ASN1_BIT_STRING *)*param_1,*piVar5,1);
          if ((iVar1 == 0) || (*(long *)(piVar5 + 2) == 0)) goto LAB_0060a1e0;
          iVar6 = iVar6 + 1;
          iVar1 = OPENSSL_sk_num(psVar2);
        } while (iVar6 < iVar1);
      }
      uVar7 = 1;
    }
    else {
LAB_0060a1e0:
      uVar7 = 0;
    }
    OPENSSL_sk_pop_free(psVar2,X509V3_conf_free);
  }
  return uVar7;
}


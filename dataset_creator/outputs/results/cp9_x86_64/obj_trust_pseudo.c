
undefined8 obj_trust(int param_1,X509 *param_2,ulong param_3)

{
  stack_st_GENERAL_NAME *psVar1;
  int iVar2;
  int iVar3;
  ASN1_OBJECT *pAVar4;
  char **ppcVar5;
  long lVar6;
  
  psVar1 = param_2[1].altname;
  if (psVar1 != (stack_st_GENERAL_NAME *)0x0) {
    ppcVar5 = (psVar1->stack).data;
    iVar2 = 0;
    if (ppcVar5 != (char **)0x0) {
      for (; iVar3 = OPENSSL_sk_num(ppcVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        pAVar4 = (ASN1_OBJECT *)OPENSSL_sk_value((psVar1->stack).data,iVar2);
        iVar3 = OBJ_obj2nid(pAVar4);
        if (iVar3 == param_1) {
          return 2;
        }
        if ((iVar3 == 0x38e) && ((param_3 & 0x10) != 0)) {
          return 2;
        }
        ppcVar5 = (psVar1->stack).data;
      }
    }
    lVar6 = *(long *)&psVar1->stack;
    iVar2 = 0;
    if (lVar6 != 0) {
      while( true ) {
        iVar3 = OPENSSL_sk_num(lVar6);
        if (iVar3 <= iVar2) {
          return 2;
        }
        pAVar4 = (ASN1_OBJECT *)OPENSSL_sk_value(*(undefined8 *)&psVar1->stack,iVar2);
        iVar3 = OBJ_obj2nid(pAVar4);
        if (param_1 == iVar3) break;
        if ((iVar3 == 0x38e) && ((param_3 & 0x10) != 0)) {
          return 1;
        }
        lVar6 = *(long *)&psVar1->stack;
        iVar2 = iVar2 + 1;
      }
      return 1;
    }
  }
  if (((((param_3 & 8) != 0) && (iVar2 = X509_check_purpose(param_2,-1,0), iVar2 == 1)) &&
      ((param_3 & 4) == 0)) && (((ulong)param_2[1].name & 0x2000) != 0)) {
    return 1;
  }
  return 3;
}


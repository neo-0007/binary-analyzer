
undefined8 X509v3_asid_add_id_or_range(long *param_1,int param_2,_union_929 param_3,uchar *param_4)

{
  _union_929 *p_Var1;
  int iVar2;
  int *piVar3;
  ASIdOrRange *a;
  ASRange *pAVar4;
  ASIdentifierChoice *pAVar5;
  ASN1_NULL *pAVar6;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) goto LAB_00607d4f;
LAB_00607caf:
    if (*piVar3 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    piVar3 = (int *)param_1[1];
    param_1 = param_1 + 1;
    if (piVar3 != (int *)0x0) goto LAB_00607caf;
LAB_00607d4f:
    pAVar5 = ASIdentifierChoice_new();
    *param_1 = (long)pAVar5;
    if (pAVar5 == (ASIdentifierChoice *)0x0) {
      return 0;
    }
    pAVar6 = (ASN1_NULL *)OPENSSL_sk_new(ASIdOrRange_cmp);
    (pAVar5->u).inherit = pAVar6;
    if (*(long *)((undefined4 *)*param_1 + 2) == 0) {
      return 0;
    }
    *(undefined4 *)*param_1 = 1;
  }
  a = ASIdOrRange_new();
  if (a == (ASIdOrRange *)0x0) {
    return 0;
  }
  if (param_4 == (uchar *)0x0) {
    a->type = 0;
    a->u = param_3;
  }
  else {
    a->type = 1;
    pAVar4 = ASRange_new();
    (a->u).range = pAVar4;
    if (pAVar4 == (ASRange *)0x0) goto LAB_00607d28;
    ASN1_INTEGER_free(pAVar4->min);
    p_Var1 = (_union_929 *)(a->u).range;
    *p_Var1 = param_3;
    ASN1_INTEGER_free(p_Var1[1].id);
    ((a->u).id)->data = param_4;
  }
  iVar2 = OPENSSL_sk_push(*(undefined8 *)(*param_1 + 8),a);
  if (iVar2 != 0) {
    return 1;
  }
LAB_00607d28:
  ASIdOrRange_free(a);
  return 0;
}



int X509_VERIFY_PARAM_set1_policies(X509_VERIFY_PARAM *param,stack_st_ASN1_OBJECT *policies)

{
  int iVar1;
  stack_st_ASN1_OBJECT *psVar2;
  ASN1_OBJECT *pAVar3;
  int iVar4;
  
  if (param == (X509_VERIFY_PARAM *)0x0) {
    return 0;
  }
  OPENSSL_sk_pop_free(param->policies,ASN1_OBJECT_free);
  if (policies != (stack_st_ASN1_OBJECT *)0x0) {
    psVar2 = (stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null();
    param->policies = psVar2;
    if (psVar2 != (stack_st_ASN1_OBJECT *)0x0) {
      iVar4 = 0;
      while( true ) {
        iVar1 = OPENSSL_sk_num(policies);
        if (iVar1 <= iVar4) {
          param->flags = param->flags | 0x80;
          return 1;
        }
        pAVar3 = (ASN1_OBJECT *)OPENSSL_sk_value(policies,iVar4);
        pAVar3 = OBJ_dup(pAVar3);
        if (pAVar3 == (ASN1_OBJECT *)0x0) break;
        iVar1 = OPENSSL_sk_push(param->policies,pAVar3);
        if (iVar1 == 0) {
          ASN1_OBJECT_free(pAVar3);
          return 0;
        }
        iVar4 = iVar4 + 1;
      }
    }
    return 0;
  }
  param->policies = (stack_st_ASN1_OBJECT *)0x0;
  return 1;
}


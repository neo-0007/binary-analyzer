
bool X509v3_asid_add_inherit(long *param_1,int param_2)

{
  long lVar1;
  ASIdentifierChoice *pAVar2;
  ASN1_NULL *pAVar3;
  
  if (param_1 == (long *)0x0) {
    return false;
  }
  if (param_2 == 0) {
    lVar1 = *param_1;
  }
  else {
    if (param_2 != 1) {
      return false;
    }
    lVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (lVar1 == 0) {
    pAVar2 = ASIdentifierChoice_new();
    *param_1 = (long)pAVar2;
    if (pAVar2 != (ASIdentifierChoice *)0x0) {
      pAVar3 = ASN1_NULL_new();
      (pAVar2->u).inherit = pAVar3;
      if (pAVar3 != (ASN1_NULL *)0x0) {
        *(undefined4 *)*param_1 = 0;
        return true;
      }
    }
    return false;
  }
  return *(int *)*param_1 == 0;
}


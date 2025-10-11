
bool X509_ALGOR_copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  ASN1_TYPE *a;
  bool bVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return false;
  }
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if ((ASN1_OBJECT *)*param_1 != (ASN1_OBJECT *)0x0) {
    ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
  }
  *param_1 = 0;
  if ((ASN1_TYPE *)param_1[1] != (ASN1_TYPE *)0x0) {
    ASN1_TYPE_free((ASN1_TYPE *)param_1[1]);
  }
  pAVar2 = (ASN1_OBJECT *)*param_2;
  param_1[1] = 0;
  if (pAVar2 != (ASN1_OBJECT *)0x0) {
    pAVar2 = OBJ_dup(pAVar2);
    *param_1 = pAVar2;
    if (pAVar2 == (ASN1_OBJECT *)0x0) {
      return false;
    }
  }
  bVar3 = true;
  if (param_2[1] != 0) {
    a = ASN1_TYPE_new();
    param_1[1] = a;
    if (a == (ASN1_TYPE *)0x0) {
      return false;
    }
    iVar1 = ASN1_TYPE_set1(a,*(int *)param_2[1],*(void **)((int *)param_2[1] + 2));
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}


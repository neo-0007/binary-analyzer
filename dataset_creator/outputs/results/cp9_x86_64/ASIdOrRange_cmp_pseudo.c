
void ASIdOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  ASN1_INTEGER *y;
  int iVar3;
  ASN1_INTEGER *x;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  y = *(ASN1_INTEGER **)(piVar2 + 2);
  x = *(ASN1_INTEGER **)(piVar1 + 2);
  if (*piVar1 == 0) {
    if (*piVar2 != 0) {
      ASN1_INTEGER_cmp(x,*(ASN1_INTEGER **)y);
      return;
    }
  }
  else {
    x = *(ASN1_INTEGER **)x;
    if ((*piVar1 == 1) && (*piVar2 == 1)) {
      iVar3 = ASN1_INTEGER_cmp(x,*(ASN1_INTEGER **)y);
      if (iVar3 != 0) {
        return;
      }
      ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(*(long *)(piVar1 + 2) + 8),
                       *(ASN1_INTEGER **)(*(long *)(piVar2 + 2) + 8));
      return;
    }
  }
  ASN1_INTEGER_cmp(x,y);
  return;
}


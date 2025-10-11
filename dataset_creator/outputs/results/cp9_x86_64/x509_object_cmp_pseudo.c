
int x509_object_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  iVar3 = *piVar1;
  if (iVar3 - *piVar2 == 0) {
    if (iVar3 == 1) {
      iVar3 = X509_subject_name_cmp(*(X509 **)(piVar1 + 2),*(X509 **)(piVar2 + 2));
      return iVar3;
    }
    if (iVar3 == 2) {
      iVar3 = X509_CRL_cmp(*(X509_CRL **)(piVar1 + 2),*(X509_CRL **)(piVar2 + 2));
      return iVar3;
    }
  }
  return iVar3 - *piVar2;
}


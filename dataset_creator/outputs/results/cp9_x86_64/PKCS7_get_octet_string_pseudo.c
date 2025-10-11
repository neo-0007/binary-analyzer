
int * PKCS7_get_octet_string(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x18));
  if (iVar1 == 0x15) {
    return *(int **)(param_1 + 0x20);
  }
  iVar1 = PKCS7_type_is_other(param_1);
  piVar2 = (int *)0x0;
  if ((iVar1 != 0) && (piVar2 = *(int **)(param_1 + 0x20), piVar2 != (int *)0x0)) {
    if (*piVar2 == 4) {
      return *(int **)(piVar2 + 2);
    }
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


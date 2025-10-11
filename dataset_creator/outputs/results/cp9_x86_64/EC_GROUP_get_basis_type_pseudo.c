
int EC_GROUP_get_basis_type(EC_GROUP *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = EC_GROUP_get_field_type();
  lVar3 = 0;
  iVar2 = 0;
  if (iVar1 == 0x197) {
    while (*(int *)(param_1 + lVar3 * 4 + 0x48) != 0) {
      lVar3 = lVar3 + 1;
      if (lVar3 == 6) {
        return 0;
      }
    }
    if ((int)lVar3 == 4) {
      return 0x2ab;
    }
    iVar2 = 0;
    if ((int)lVar3 == 2) {
      iVar2 = 0x2aa;
    }
  }
  return iVar2;
}


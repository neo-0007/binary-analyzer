
bool X509v3_asid_is_canonical(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return true;
  }
  piVar1 = (int *)*param_1;
  if (((piVar1 == (int *)0x0) || (*piVar1 == 0)) ||
     ((*piVar1 == 1 &&
      ((iVar2 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2)), iVar2 != 0 &&
       (iVar2 = ASIdentifierChoice_is_canonical_part_0(piVar1), iVar2 != 0)))))) {
    piVar1 = (int *)param_1[1];
    if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
      return true;
    }
    if ((*piVar1 == 1) && (iVar2 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2)), iVar2 != 0)) {
      iVar2 = ASIdentifierChoice_is_canonical_part_0(piVar1);
      return iVar2 != 0;
    }
  }
  return false;
}


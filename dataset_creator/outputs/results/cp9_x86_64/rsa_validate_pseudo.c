
bool rsa_validate(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x83) != 0) {
    if ((param_2 & 3) == 3) {
      iVar1 = ossl_rsa_validate_pairwise(param_1);
      return iVar1 != 0;
    }
    if (((param_2 & 1) != 0) && (iVar1 = ossl_rsa_validate_private(param_1), iVar1 == 0)) {
      return false;
    }
    if ((param_2 & 2) != 0) {
      iVar1 = ossl_rsa_validate_public(param_1);
      return iVar1 != 0;
    }
  }
  return true;
}


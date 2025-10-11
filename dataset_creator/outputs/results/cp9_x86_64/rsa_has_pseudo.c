
bool rsa_has(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((param_2 & 0x83) == 0) {
      return true;
    }
    if ((((param_2 & 3) == 0) || (lVar2 = RSA_get0_e(param_1), lVar2 != 0)) &&
       (((param_2 & 2) == 0 || (lVar2 = RSA_get0_n(param_1), lVar2 != 0)))) {
      if ((param_2 & 1) != 0) {
        lVar2 = RSA_get0_d(param_1);
        return lVar2 != 0;
      }
      return true;
    }
  }
  return false;
}


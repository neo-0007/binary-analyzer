
bool dsa_has(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if ((param_2 & 7) == 0) {
      return true;
    }
    if ((((param_2 & 2) == 0) || (lVar2 = DSA_get0_pub_key(param_1), lVar2 != 0)) &&
       (((param_2 & 1) == 0 || (lVar2 = DSA_get0_priv_key(param_1), lVar2 != 0)))) {
      if ((param_2 & 4) == 0) {
        return true;
      }
      lVar2 = DSA_get0_p(param_1);
      if (lVar2 != 0) {
        lVar2 = DSA_get0_g(param_1);
        return lVar2 != 0;
      }
    }
  }
  return false;
}


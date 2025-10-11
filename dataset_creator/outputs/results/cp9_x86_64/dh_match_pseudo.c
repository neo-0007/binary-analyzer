
bool dh_match(undefined8 param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *b;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_3 & 3) == 0) {
    if ((param_3 & 4) == 0) {
      return true;
    }
    uVar2 = ossl_dh_get0_params(param_1);
    uVar3 = ossl_dh_get0_params(param_2);
    goto LAB_0046cbf6;
  }
  if ((param_3 & 2) == 0) {
LAB_0046cb3d:
    if ((param_3 & 1) == 0) {
LAB_0046cb42:
      if ((param_3 & 4) == 0) {
        return (bool)(param_3 & 4);
      }
      ossl_dh_get0_params(param_1);
      ossl_dh_get0_params(param_2);
      return false;
    }
    a = (BIGNUM *)DH_get0_priv_key(param_1);
    b = (BIGNUM *)DH_get0_priv_key(param_2);
    if ((a == (BIGNUM *)0x0) || (b == (BIGNUM *)0x0)) goto LAB_0046cb42;
  }
  else {
    a = (BIGNUM *)DH_get0_pub_key(param_1);
    b = (BIGNUM *)DH_get0_pub_key(param_2);
    if ((a == (BIGNUM *)0x0) || (b == (BIGNUM *)0x0)) goto LAB_0046cb3d;
  }
  iVar1 = BN_cmp(a,b);
  if ((param_3 & 4) == 0) {
    return iVar1 == 0;
  }
  uVar2 = ossl_dh_get0_params(param_1);
  uVar3 = ossl_dh_get0_params(param_2);
  if (iVar1 != 0) {
    return false;
  }
LAB_0046cbf6:
  iVar1 = ossl_ffc_params_cmp(uVar2,uVar3,1);
  return iVar1 != 0;
}


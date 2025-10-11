
bool ossl_dh_check_priv_key(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *pBVar2;
  bool bVar3;
  
  *param_3 = 0;
  r = BN_new();
  if (r == (BIGNUM *)0x0) {
    return false;
  }
  pBVar2 = *(BIGNUM **)(param_1 + 0x10);
  if (pBVar2 == (BIGNUM *)0x0) {
LAB_004c7c28:
    bVar3 = false;
  }
  else {
    iVar1 = DH_get_nid(param_1);
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x68), iVar1 != 0)) {
      a = BN_value_one();
      iVar1 = BN_lshift(r,a,iVar1);
      if (iVar1 == 0) goto LAB_004c7c28;
      iVar1 = BN_cmp(r,*(BIGNUM **)(param_1 + 0x10));
      if (iVar1 < 0) {
        pBVar2 = r;
      }
    }
    iVar1 = ossl_ffc_validate_private_key(pBVar2,param_2,param_3);
    bVar3 = iVar1 != 0;
  }
  BN_free(r);
  return bVar3;
}


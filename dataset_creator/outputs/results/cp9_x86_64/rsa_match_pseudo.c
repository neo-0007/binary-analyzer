
ulong rsa_match(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pBVar3 = (BIGNUM *)RSA_get0_e(param_2);
  pBVar4 = (BIGNUM *)RSA_get0_e(param_1);
  iVar1 = BN_cmp(pBVar4,pBVar3);
  if ((param_3 & 3) == 0) {
    return (ulong)(iVar1 == 0);
  }
  if ((param_3 & 2) != 0) {
    pBVar3 = (BIGNUM *)RSA_get0_n(param_1);
    pBVar4 = (BIGNUM *)RSA_get0_n(param_2);
    if ((pBVar3 != (BIGNUM *)0x0) && (pBVar4 != (BIGNUM *)0x0)) {
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = BN_cmp(pBVar3,pBVar4);
      return (ulong)(iVar1 == 0);
    }
  }
  if ((param_3 & 1) == 0) {
    return (ulong)(param_3 & 1);
  }
  pBVar3 = (BIGNUM *)RSA_get0_d(param_1);
  pBVar4 = (BIGNUM *)RSA_get0_d(param_2);
  if (((pBVar3 != (BIGNUM *)0x0) && (pBVar4 != (BIGNUM *)0x0)) && (iVar1 == 0)) {
    iVar1 = BN_cmp(pBVar3,pBVar4);
    return (ulong)(iVar1 == 0);
  }
  return 0;
}



bool ec_has(EC_KEY *param_1,uint param_2)

{
  int iVar1;
  BIGNUM *pBVar2;
  EC_GROUP *pEVar3;
  EC_POINT *pEVar4;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != (EC_KEY *)0x0) && (iVar1 != 0)) {
    if ((param_2 & 0x87) == 0) {
      return true;
    }
    if ((((param_2 & 2) == 0) ||
        (pEVar4 = EC_KEY_get0_public_key(param_1), pEVar4 != (EC_POINT *)0x0)) &&
       (((param_2 & 1) == 0 || (pBVar2 = EC_KEY_get0_private_key(param_1), pBVar2 != (BIGNUM *)0x0))
       )) {
      if ((param_2 & 4) != 0) {
        pEVar3 = EC_KEY_get0_group(param_1);
        return pEVar3 != (EC_GROUP *)0x0;
      }
      return true;
    }
  }
  return false;
}


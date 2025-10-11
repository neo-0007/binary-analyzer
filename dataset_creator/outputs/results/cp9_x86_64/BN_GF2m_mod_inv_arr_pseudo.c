
undefined4
BN_GF2m_mod_inv_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,BN_CTX *param_4)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *pBVar3;
  
  BN_CTX_start(param_4);
  pBVar3 = BN_CTX_get(param_4);
  if (pBVar3 != (BIGNUM *)0x0) {
    iVar1 = BN_GF2m_arr2poly(param_3,pBVar3);
    if (iVar1 != 0) {
      uVar2 = BN_GF2m_mod_inv(param_1,param_2,pBVar3,param_4);
      goto LAB_00618243;
    }
  }
  uVar2 = 0;
LAB_00618243:
  BN_CTX_end(param_4);
  return uVar2;
}


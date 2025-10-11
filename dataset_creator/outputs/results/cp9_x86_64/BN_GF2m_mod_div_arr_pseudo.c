
undefined4
BN_GF2m_mod_div_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   BN_CTX *param_5)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *pBVar3;
  
  BN_CTX_start(param_5);
  pBVar3 = BN_CTX_get(param_5);
  if (pBVar3 != (BIGNUM *)0x0) {
    iVar1 = BN_GF2m_arr2poly(param_4,pBVar3);
    if (iVar1 != 0) {
      uVar2 = BN_GF2m_mod_div(param_1,param_2,param_3,pBVar3,param_5);
      goto LAB_006182cb;
    }
  }
  uVar2 = 0;
LAB_006182cb:
  BN_CTX_end(param_5);
  return uVar2;
}



bool BN_GF2m_mod_div(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    BN_CTX *param_5)

{
  int iVar1;
  BIGNUM *pBVar2;
  bool bVar3;
  
  BN_CTX_start(param_5);
  pBVar2 = BN_CTX_get(param_5);
  if (pBVar2 != (BIGNUM *)0x0) {
    iVar1 = BN_GF2m_mod_inv(pBVar2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = BN_GF2m_mod_mul(param_1,param_2,pBVar2,param_4,param_5);
      bVar3 = iVar1 != 0;
      goto LAB_00617ce1;
    }
  }
  bVar3 = false;
LAB_00617ce1:
  BN_CTX_end(param_5);
  return bVar3;
}


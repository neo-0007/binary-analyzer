
uint BN_GF2m_mod_exp_arr(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,undefined8 param_4,
                        BN_CTX *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *pBVar4;
  bool bVar5;
  uint local_3c;
  
  iVar1 = BN_is_zero(param_3);
  if (iVar1 != 0) {
    uVar2 = BN_set_word(param_1,1);
    return uVar2;
  }
  iVar1 = BN_abs_is_word(param_3);
  if (iVar1 == 0) {
    BN_CTX_start(param_5);
    pBVar4 = BN_CTX_get(param_5);
    local_3c = 0;
    if ((pBVar4 != (BIGNUM *)0x0) && (iVar1 = BN_GF2m_mod_arr(pBVar4,param_2,param_4), iVar1 != 0))
    {
      iVar1 = BN_num_bits(param_3);
      iVar1 = iVar1 + -2;
      if (-1 < iVar1) {
        do {
          iVar3 = BN_GF2m_mod_sqr_arr(pBVar4,pBVar4,param_4,param_5);
          if ((iVar3 == 0) ||
             ((iVar3 = BN_is_bit_set(param_3,iVar1), iVar3 != 0 &&
              (iVar3 = BN_GF2m_mod_mul_arr(pBVar4,pBVar4,param_2,param_4,param_5), iVar3 == 0))))
          goto LAB_00616edd;
          bVar5 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar5);
      }
      pBVar4 = BN_copy(param_1,pBVar4);
      local_3c = (uint)(pBVar4 != (BIGNUM *)0x0);
    }
LAB_00616edd:
    BN_CTX_end(param_5);
  }
  else {
    pBVar4 = BN_copy(param_1,param_2);
    local_3c = (uint)(pBVar4 != (BIGNUM *)0x0);
  }
  return local_3c;
}



bool BN_GF2m_mod_solve_quad_arr(BIGNUM *param_1,undefined8 param_2,uint *param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  uint uVar7;
  bool bVar8;
  int local_64;
  int local_40;
  
  if (*param_3 == 0) {
    BN_zero_ex();
    return true;
  }
  BN_CTX_start(param_4);
  pBVar2 = BN_CTX_get(param_4);
  a = BN_CTX_get(param_4);
  a_00 = BN_CTX_get(param_4);
  if ((a_00 != (BIGNUM *)0x0) && (iVar1 = BN_GF2m_mod_arr(pBVar2,param_2,param_3), iVar1 != 0)) {
    iVar1 = BN_is_zero(pBVar2);
    if (iVar1 != 0) {
      bVar8 = true;
      BN_zero_ex(param_1);
      goto LAB_00617183;
    }
    uVar7 = *param_3 & 1;
    if (uVar7 == 0) {
      pBVar3 = BN_CTX_get(param_4);
      pBVar4 = BN_CTX_get(param_4);
      pBVar5 = BN_CTX_get(param_4);
      if (pBVar5 != (BIGNUM *)0x0) {
        local_40 = 0;
        do {
          iVar1 = BN_priv_rand_ex(pBVar3,*param_3,0,0,0,param_4);
          if ((iVar1 == 0) || (iVar1 = BN_GF2m_mod_arr(pBVar3,pBVar3,param_3), iVar1 == 0))
          goto LAB_00617180;
          BN_zero_ex(a);
          pBVar6 = BN_copy(a_00,pBVar3);
          if (pBVar6 == (BIGNUM *)0x0) goto LAB_00617180;
          if (1 < (int)*param_3) {
            local_64 = 1;
            do {
              iVar1 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4);
              if ((((iVar1 == 0) ||
                   (iVar1 = BN_GF2m_mod_sqr_arr(pBVar4,a_00,param_3,param_4), iVar1 == 0)) ||
                  (iVar1 = BN_GF2m_mod_mul_arr(pBVar5,pBVar4,pBVar2), iVar1 == 0)) ||
                 ((iVar1 = BN_GF2m_add(a,a,pBVar5), iVar1 == 0 ||
                  (iVar1 = BN_GF2m_add(a_00,pBVar4,pBVar3), iVar1 == 0)))) goto LAB_00617180;
              local_64 = local_64 + 1;
            } while (local_64 < (int)*param_3);
          }
          local_40 = local_40 + 1;
          iVar1 = BN_is_zero(a_00);
        } while ((iVar1 != 0) && (local_40 != 0x32));
        iVar1 = BN_is_zero(a_00);
        if (iVar1 == 0) goto LAB_00617318;
        ERR_new();
        ERR_set_debug("../crypto/bn/bn_gf2m.c",0x435,"BN_GF2m_mod_solve_quad_arr");
        ERR_set_error(3,0x71,0);
      }
    }
    else {
      pBVar3 = BN_copy(a,pBVar2);
      if (pBVar3 != (BIGNUM *)0x0) {
        if (2 < (int)*param_3) {
          do {
            iVar1 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4);
            if (((iVar1 == 0) || (iVar1 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4), iVar1 == 0)) ||
               (iVar1 = BN_GF2m_add(a,a,pBVar2), iVar1 == 0)) goto LAB_00617180;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 <= (int)(*param_3 - 1) / 2);
        }
LAB_00617318:
        iVar1 = BN_GF2m_mod_sqr_arr(a_00,a,param_3,param_4);
        if ((iVar1 != 0) && (iVar1 = BN_GF2m_add(a_00,a,a_00), iVar1 != 0)) {
          iVar1 = BN_ucmp(a_00,pBVar2);
          if (iVar1 == 0) {
            pBVar2 = BN_copy(param_1,a);
            bVar8 = pBVar2 != (BIGNUM *)0x0;
          }
          else {
            ERR_new();
            ERR_set_debug("../crypto/bn/bn_gf2m.c",0x43f,"BN_GF2m_mod_solve_quad_arr");
            ERR_set_error(3,0x74,0);
            bVar8 = false;
          }
          goto LAB_00617183;
        }
      }
    }
  }
LAB_00617180:
  bVar8 = false;
LAB_00617183:
  BN_CTX_end(param_4);
  return bVar8;
}


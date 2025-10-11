
bool ossl_ec_GF2m_simple_set_compressed_coordinates
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,BN_CTX *param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BN_CTX *c;
  ulong uVar8;
  bool bVar9;
  
  c = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) && (c = BN_CTX_new(), param_5 = c, c == (BN_CTX *)0x0)) {
    return false;
  }
  BN_CTX_start(param_5);
  pBVar4 = BN_CTX_get(param_5);
  pBVar5 = BN_CTX_get(param_5);
  pBVar6 = BN_CTX_get(param_5);
  pBVar7 = BN_CTX_get(param_5);
  if (pBVar7 != (BIGNUM *)0x0) {
    plVar1 = param_1 + 9;
    iVar2 = BN_GF2m_mod_arr(pBVar5,param_3,plVar1);
    if (iVar2 != 0) {
      iVar2 = BN_is_zero(pBVar5);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x100))(param_1,pBVar4,pBVar5,param_5);
        if ((((iVar2 != 0) &&
             (iVar2 = (**(code **)(*param_1 + 0x108))(param_1,pBVar4,param_1[0xd],pBVar4,param_5),
             iVar2 != 0)) && (iVar2 = BN_GF2m_add(pBVar4,param_1[0xc],pBVar4), iVar2 != 0)) &&
           (iVar2 = BN_GF2m_add(pBVar4,pBVar5,pBVar4), iVar2 != 0)) {
          ERR_set_mark();
          iVar2 = BN_GF2m_mod_solve_quad_arr(pBVar7,pBVar4,plVar1,param_5);
          if (iVar2 == 0) {
            uVar8 = ERR_peek_last_error();
            bVar9 = false;
            if ((((uVar8 & 0x80000000) == 0) && ((char)(uVar8 >> 0x17) == '\x03')) &&
               (((uint)uVar8 & 0x7fffff) == 0x74)) {
              ERR_pop_to_mark();
              ERR_new();
              ERR_set_debug("../crypto/ec/ec2_oct.c",0x58,
                            "ossl_ec_GF2m_simple_set_compressed_coordinates");
              ERR_set_error(0x10,0x6e,0);
            }
            else {
              ERR_clear_last_mark();
              ERR_new();
              ERR_set_debug("../crypto/ec/ec2_oct.c",0x5d,
                            "ossl_ec_GF2m_simple_set_compressed_coordinates");
              ERR_set_error(0x10,0x80003,0);
            }
            goto LAB_005c26ca;
          }
          ERR_clear_last_mark();
          iVar2 = BN_is_odd(pBVar7);
          iVar3 = (**(code **)(*param_1 + 0xf8))(param_1,pBVar6,pBVar5,pBVar7,param_5);
          if (iVar3 != 0) {
            if ((param_4 != 0) != (iVar2 != 0)) {
              iVar2 = BN_GF2m_add(pBVar6,pBVar6,pBVar5);
              goto joined_r0x005c27e8;
            }
            goto LAB_005c2826;
          }
        }
      }
      else {
        iVar2 = BN_GF2m_mod_sqrt_arr(pBVar6,param_1[0xd],plVar1,param_5);
joined_r0x005c27e8:
        if (iVar2 != 0) {
LAB_005c2826:
          iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,pBVar5,pBVar6,param_5);
          bVar9 = iVar2 != 0;
          goto LAB_005c26ca;
        }
      }
    }
  }
  bVar9 = false;
LAB_005c26ca:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return bVar9;
}


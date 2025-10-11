
/* WARNING: Type propagation algorithm not settling */

bool ossl_ec_GFp_simple_set_compressed_coordinates
               (long *param_1,undefined8 param_2,BIGNUM *param_3,int param_4,BN_CTX *param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  BIGNUM *pBVar4;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *ret;
  BN_CTX *c;
  ulong uVar5;
  BIGNUM *m;
  BIGNUM *b;
  undefined8 uVar6;
  bool bVar7;
  
  c = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) &&
     (c = (BN_CTX *)BN_CTX_new_ex(param_1[0x15]), param_5 = c, c == (BN_CTX *)0x0)) {
    return false;
  }
  BN_CTX_start(param_5);
  pBVar4 = BN_CTX_get(param_5);
  r = BN_CTX_get(param_5);
  r_00 = BN_CTX_get(param_5);
  ret = BN_CTX_get(param_5);
  if ((ret != (BIGNUM *)0x0) &&
     (iVar2 = BN_nnmod(r_00,param_3,(BIGNUM *)param_1[8],param_5), iVar2 != 0)) {
    if (*(long *)(*param_1 + 0x120) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x100))(param_1,r,param_3,param_5);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,pBVar4,r,param_3,param_5);
        goto joined_r0x004ffe91;
      }
    }
    else {
      iVar2 = BN_mod_sqr(r,param_3,(BIGNUM *)param_1[8],param_5);
      if (iVar2 != 0) {
        iVar2 = BN_mod_mul(pBVar4,r,param_3,(BIGNUM *)param_1[8],param_5);
joined_r0x004ffe91:
        if (iVar2 != 0) {
          if ((int)param_1[0xe] == 0) {
            pcVar1 = *(code **)(*param_1 + 0x120);
            if (pcVar1 == (code *)0x0) {
              iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,r,param_1[0xc],r_00,param_5);
            }
            else {
              iVar2 = (*pcVar1)(param_1,r,param_1[0xc],param_5);
              if (iVar2 == 0) goto LAB_004ffe10;
              iVar2 = BN_mod_mul(r,r,r_00,(BIGNUM *)param_1[8],param_5);
            }
            if (iVar2 != 0) {
              iVar2 = BN_mod_add_quick(pBVar4,pBVar4,r,(BIGNUM *)param_1[8]);
              goto joined_r0x004ffeff;
            }
          }
          else {
            iVar2 = BN_mod_lshift1_quick(r,r_00,(BIGNUM *)param_1[8]);
            if ((iVar2 != 0) &&
               (iVar2 = BN_mod_add_quick(r,r,r_00,(BIGNUM *)param_1[8]), iVar2 != 0)) {
              iVar2 = BN_mod_sub_quick(pBVar4,pBVar4,r,(BIGNUM *)param_1[8]);
joined_r0x004ffeff:
              if (iVar2 != 0) {
                b = (BIGNUM *)param_1[0xd];
                if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
                  m = (BIGNUM *)param_1[8];
                }
                else {
                  iVar2 = (**(code **)(*param_1 + 0x120))(param_1,r,b,param_5);
                  if (iVar2 == 0) goto LAB_004ffe10;
                  m = (BIGNUM *)param_1[8];
                  b = r;
                }
                iVar2 = BN_mod_add_quick(pBVar4,pBVar4,b,m);
                if (iVar2 != 0) {
                  ERR_set_mark();
                  pBVar4 = BN_mod_sqrt(ret,pBVar4,(BIGNUM *)param_1[8],param_5);
                  if (pBVar4 == (BIGNUM *)0x0) {
                    uVar5 = ERR_peek_last_error();
                    if ((((uVar5 & 0x80000000) != 0) || ((char)(uVar5 >> 0x17) != '\x03')) ||
                       (((uint)uVar5 & 0x7fffff) != 0x6f)) {
                      ERR_clear_last_mark();
                      bVar7 = false;
                      ERR_new();
                      ERR_set_debug("../crypto/ec/ecp_oct.c",0x75,
                                    "ossl_ec_GFp_simple_set_compressed_coordinates");
                      ERR_set_error(0x10,0x80003,0);
                      goto LAB_004ffe13;
                    }
                    ERR_pop_to_mark();
                    ERR_new();
                    uVar6 = 0x70;
LAB_004fffd6:
                    bVar7 = false;
                    ERR_set_debug("../crypto/ec/ecp_oct.c",uVar6,
                                  "ossl_ec_GFp_simple_set_compressed_coordinates");
                    ERR_set_error(0x10,0x6e,0);
                    goto LAB_004ffe13;
                  }
                  ERR_clear_last_mark();
                  uVar3 = BN_is_odd(ret);
                  if (uVar3 == (param_4 != 0)) {
LAB_005000bd:
                    uVar3 = BN_is_odd(ret);
                    if (uVar3 == (param_4 != 0)) {
                      iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,r_00,ret,param_5);
                      bVar7 = iVar2 != 0;
                    }
                    else {
                      ERR_new();
                      bVar7 = false;
                      ERR_set_debug("../crypto/ec/ecp_oct.c",0x90,
                                    "ossl_ec_GFp_simple_set_compressed_coordinates");
                      ERR_set_error(0x10,0xc0103,0);
                    }
                    goto LAB_004ffe13;
                  }
                  iVar2 = BN_is_zero(ret);
                  if (iVar2 == 0) {
                    iVar2 = BN_usub(ret,(BIGNUM *)param_1[8],ret);
                    if (iVar2 != 0) goto LAB_005000bd;
                  }
                  else {
                    iVar2 = BN_kronecker(r_00,(BIGNUM *)param_1[8],param_5);
                    if (iVar2 != -2) {
                      if (iVar2 != 1) {
                        ERR_new();
                        uVar6 = 0x89;
                        goto LAB_004fffd6;
                      }
                      ERR_new();
                      ERR_set_debug("../crypto/ec/ecp_oct.c",0x84,
                                    "ossl_ec_GFp_simple_set_compressed_coordinates");
                      ERR_set_error(0x10,0x6d,0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004ffe10:
  bVar7 = false;
LAB_004ffe13:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return bVar7;
}


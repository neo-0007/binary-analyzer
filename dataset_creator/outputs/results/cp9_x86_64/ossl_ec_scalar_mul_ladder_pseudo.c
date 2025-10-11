
int ossl_ec_scalar_mul_ladder
              (EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,EC_POINT *param_4,BN_CTX *param_5
              )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  EC_POINT *dst;
  EC_POINT *dst_00;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *a;
  long lVar8;
  BIGNUM *pBVar9;
  undefined8 uVar10;
  bool bVar11;
  uint local_68;
  
  if ((param_4 != (EC_POINT *)0x0) && (iVar1 = EC_POINT_is_at_infinity(param_1,param_4), iVar1 != 0)
     ) {
    iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
    return iVar1;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_mult.c",0xa2,"ossl_ec_scalar_mul_ladder");
    ERR_set_error(0x10,0x72,0);
    return 0;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_mult.c",0xa6,"ossl_ec_scalar_mul_ladder");
    ERR_set_error(0x10,0xa4,0);
    return 0;
  }
  BN_CTX_start(param_5);
  dst = EC_POINT_new(param_1);
  iVar1 = 0;
  if ((dst == (EC_POINT *)0x0) || (dst_00 = EC_POINT_new(param_1), dst_00 == (EC_POINT *)0x0)) {
    ERR_new();
    dst_00 = (EC_POINT *)0x0;
    ERR_set_debug("../crypto/ec/ec_mult.c",0xae,"ossl_ec_scalar_mul_ladder");
    ERR_set_error(0x10,0xc0100,0);
    goto LAB_004e6812;
  }
  if (param_4 == (EC_POINT *)0x0) {
    iVar2 = EC_POINT_copy(dst,*(EC_POINT **)(param_1 + 8));
    if (iVar2 != 0) goto LAB_004e627a;
    ERR_new();
    uVar10 = 0xb4;
  }
  else {
    iVar2 = EC_POINT_copy(dst,param_4);
    if (iVar2 != 0) {
LAB_004e627a:
      BN_set_flags(*(undefined8 *)(dst + 0x10),4);
      BN_set_flags(*(undefined8 *)(dst + 0x18),4);
      BN_set_flags(*(undefined8 *)(dst + 0x20),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x10),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x18),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x20),4);
      BN_set_flags(*(undefined8 *)(dst_00 + 0x10),4);
      BN_set_flags(*(undefined8 *)(dst_00 + 0x18),4);
      BN_set_flags(*(undefined8 *)(dst_00 + 0x20),4);
      r = BN_CTX_get(param_5);
      r_00 = BN_CTX_get(param_5);
      a = BN_CTX_get(param_5);
      if (a == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_mult.c",0xc6,"ossl_ec_scalar_mul_ladder");
        ERR_set_error(0x10,0xc0100,0);
        goto LAB_004e6812;
      }
      iVar2 = BN_mul(r,*(BIGNUM **)(param_1 + 0x10),*(BIGNUM **)(param_1 + 0x18),param_5);
      if (iVar2 == 0) {
        ERR_new();
        uVar10 = 0xcb;
        goto LAB_004e6841;
      }
      iVar3 = BN_num_bits(r);
      iVar2 = bn_get_top(r);
      iVar2 = iVar2 + 2;
      lVar8 = bn_wexpand(a,iVar2);
      if ((lVar8 == 0) || (lVar8 = bn_wexpand(r_00,iVar2), lVar8 == 0)) {
        ERR_new();
        uVar10 = 0xd9;
      }
      else {
        pBVar9 = BN_copy(a,param_3);
        if (pBVar9 != (BIGNUM *)0x0) {
          BN_set_flags(a,4);
          iVar4 = BN_num_bits(a);
          if (((iVar3 < iVar4) || (iVar4 = BN_is_negative(a), iVar4 != 0)) &&
             (iVar4 = BN_nnmod(a,a,r,param_5), iVar4 == 0)) {
            ERR_new();
            uVar10 = 0xea;
          }
          else {
            iVar4 = BN_add(r_00,a,r);
            if (iVar4 == 0) {
              ERR_new();
              uVar10 = 0xf0;
            }
            else {
              BN_set_flags(r_00,4);
              iVar4 = BN_add(a,r_00,r);
              if (iVar4 != 0) {
                iVar4 = BN_is_bit_set(r_00,iVar3);
                BN_consttime_swap((long)iVar4,a,r_00,iVar2);
                uVar5 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
                lVar8 = bn_wexpand(*(undefined8 *)(dst_00 + 0x10),uVar5);
                if (((((lVar8 == 0) ||
                      (lVar8 = bn_wexpand(*(undefined8 *)(dst_00 + 0x18),uVar5), lVar8 == 0)) ||
                     ((lVar8 = bn_wexpand(*(undefined8 *)(dst_00 + 0x20),uVar5), lVar8 == 0 ||
                      ((lVar8 = bn_wexpand(*(undefined8 *)(param_2 + 0x10),uVar5), lVar8 == 0 ||
                       (lVar8 = bn_wexpand(*(undefined8 *)(param_2 + 0x18),uVar5), lVar8 == 0))))))
                    || (lVar8 = bn_wexpand(*(undefined8 *)(param_2 + 0x20),uVar5), lVar8 == 0)) ||
                   (((lVar8 = bn_wexpand(*(undefined8 *)(dst + 0x10),uVar5), lVar8 == 0 ||
                     (lVar8 = bn_wexpand(*(undefined8 *)(dst + 0x18),uVar5), lVar8 == 0)) ||
                    (lVar8 = bn_wexpand(*(undefined8 *)(dst + 0x20),uVar5), lVar8 == 0)))) {
                  ERR_new();
                  uVar10 = 0x109;
                  goto LAB_004e6891;
                }
                lVar8 = *(long *)param_1;
                if (*(int *)(dst + 0x28) == 0) {
                  if ((*(code **)(lVar8 + 0xd0) == (code *)0x0) ||
                     (iVar2 = (**(code **)(lVar8 + 0xd0))(param_1,dst,param_5), iVar2 == 0)) {
                    ERR_new();
                    iVar1 = 0;
                    ERR_set_debug("../crypto/ec/ec_mult.c",0x110,"ossl_ec_scalar_mul_ladder");
                    ERR_set_error(0x10,0x80010,0);
                    goto LAB_004e6812;
                  }
                  lVar8 = *(long *)param_1;
                }
                if (*(code **)(lVar8 + 0x1a0) == (code *)0x0) {
                  iVar2 = EC_POINT_copy(dst_00,dst);
                  if (iVar2 != 0) {
                    iVar2 = EC_POINT_dbl(param_1,param_2,dst_00,param_5);
                    goto joined_r0x004e6a95;
                  }
                }
                else {
                  iVar2 = (**(code **)(lVar8 + 0x1a0))(param_1,param_2,dst_00,dst,param_5);
joined_r0x004e6a95:
                  if (iVar2 != 0) {
                    local_68 = 1;
                    iVar3 = iVar3 + -1;
                    if (-1 < iVar3) {
                      do {
                        uVar6 = BN_is_bit_set(a,iVar3);
                        lVar8 = (long)(int)(local_68 ^ uVar6);
                        BN_consttime_swap(lVar8,*(undefined8 *)(param_2 + 0x10),
                                          *(undefined8 *)(dst_00 + 0x10),uVar5);
                        BN_consttime_swap(lVar8,*(undefined8 *)(param_2 + 0x18),
                                          *(undefined8 *)(dst_00 + 0x18),uVar5);
                        BN_consttime_swap(lVar8,*(undefined8 *)(param_2 + 0x20),
                                          *(undefined8 *)(dst_00 + 0x20),uVar5);
                        uVar7 = (*(uint *)(dst_00 + 0x28) ^ *(uint *)(param_2 + 0x28)) &
                                (local_68 ^ uVar6);
                        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar7;
                        *(uint *)(dst_00 + 0x28) = *(uint *)(dst_00 + 0x28) ^ uVar7;
                        if (*(code **)(*(long *)param_1 + 0x1a8) == (code *)0x0) {
                          iVar2 = EC_POINT_add(param_1,dst_00,param_2,dst_00,param_5);
                          if (iVar2 != 0) {
                            iVar2 = EC_POINT_dbl(param_1,param_2,param_2,param_5);
                            goto joined_r0x004e669c;
                          }
LAB_004e66a2:
                          ERR_new();
                          ERR_set_debug("../crypto/ec/ec_mult.c",0x166,"ossl_ec_scalar_mul_ladder");
                          ERR_set_error(0x10,0xa2,0);
                          goto LAB_004e6812;
                        }
                        iVar2 = (**(code **)(*(long *)param_1 + 0x1a8))
                                          (param_1,param_2,dst_00,dst,param_5);
joined_r0x004e669c:
                        if (iVar2 == 0) goto LAB_004e66a2;
                        bVar11 = iVar3 != 0;
                        iVar3 = iVar3 + -1;
                        local_68 = uVar6;
                      } while (bVar11);
                    }
                    lVar8 = (long)(int)local_68;
                    BN_consttime_swap(lVar8,*(undefined8 *)(param_2 + 0x10),
                                      *(undefined8 *)(dst_00 + 0x10),uVar5);
                    BN_consttime_swap(lVar8,*(undefined8 *)(param_2 + 0x18),
                                      *(undefined8 *)(dst_00 + 0x18),uVar5);
                    iVar1 = 1;
                    BN_consttime_swap(lVar8,*(undefined8 *)(param_2 + 0x20),
                                      *(undefined8 *)(dst_00 + 0x20),uVar5);
                    local_68 = (*(uint *)(dst_00 + 0x28) ^ *(uint *)(param_2 + 0x28)) & local_68;
                    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ local_68;
                    *(uint *)(dst_00 + 0x28) = *(uint *)(dst_00 + 0x28) ^ local_68;
                    if (*(code **)(*(long *)param_1 + 0x1b0) != (code *)0x0) {
                      iVar1 = (**(code **)(*(long *)param_1 + 0x1b0))
                                        (param_1,param_2,dst_00,dst,param_5);
                      if (iVar1 == 0) {
                        ERR_new();
                        ERR_set_debug("../crypto/ec/ec_mult.c",0x175,"ossl_ec_scalar_mul_ladder");
                        ERR_set_error(0x10,0x88,0);
                        iVar1 = 0;
                      }
                      else {
                        iVar1 = 1;
                      }
                    }
                    goto LAB_004e6812;
                  }
                }
                ERR_new();
                ERR_set_debug("../crypto/ec/ec_mult.c",0x116,"ossl_ec_scalar_mul_ladder");
                ERR_set_error(0x10,0x99,0);
                goto LAB_004e6812;
              }
              ERR_new();
              uVar10 = 0xf5;
            }
          }
LAB_004e6841:
          iVar1 = 0;
          ERR_set_debug("../crypto/ec/ec_mult.c",uVar10,"ossl_ec_scalar_mul_ladder");
          ERR_set_error(0x10,0x80003,0);
          goto LAB_004e6812;
        }
        ERR_new();
        uVar10 = 0xde;
      }
LAB_004e6891:
      ERR_set_debug("../crypto/ec/ec_mult.c",uVar10,"ossl_ec_scalar_mul_ladder");
      ERR_set_error(0x10,0x80003,0);
      goto LAB_004e6812;
    }
    ERR_new();
    uVar10 = 0xb9;
  }
  ERR_set_debug("../crypto/ec/ec_mult.c",uVar10,"ossl_ec_scalar_mul_ladder");
  ERR_set_error(0x10,0x80010,0);
LAB_004e6812:
  EC_POINT_free(dst);
  EC_POINT_clear_free(dst_00);
  BN_CTX_end(param_5);
  return iVar1;
}


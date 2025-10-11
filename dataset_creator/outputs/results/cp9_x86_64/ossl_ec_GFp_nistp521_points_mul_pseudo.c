
int ossl_ec_GFp_nistp521_points_mul
              (EC_GROUP *param_1,undefined8 param_2,BIGNUM *param_3,ulong param_4,long param_5,
              long param_6,BN_CTX *param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *r;
  long lVar7;
  long lVar8;
  EC_POINT *pEVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  BIGNUM *a;
  uint uVar13;
  long in_FS_OFFSET;
  ulong local_2f8;
  void *local_2f0;
  void *local_2e0;
  EC_POINT *local_2c0;
  void *local_2b0;
  undefined8 *local_288;
  int local_270;
  undefined1 local_268 [80];
  undefined1 local_218 [80];
  undefined1 local_1c8 [80];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BN_CTX_start(param_7);
  pBVar4 = BN_CTX_get(param_7);
  pBVar5 = BN_CTX_get(param_7);
  pBVar6 = BN_CTX_get(param_7);
  r = BN_CTX_get(param_7);
  if (r == (BIGNUM *)0x0) {
LAB_004fc680:
    iVar3 = 0;
    local_2c0 = (EC_POINT *)0x0;
    local_2b0 = (void *)0x0;
    local_2e0 = (void *)0x0;
    local_2f0 = (void *)0x0;
  }
  else {
    local_2f8 = param_4;
    if (param_3 == (BIGNUM *)0x0) {
      local_2c0 = (EC_POINT *)0x0;
      local_288 = (undefined8 *)0x0;
LAB_004fc7af:
      bVar2 = false;
      if (local_2f8 != 0) {
LAB_004fc7c6:
        if (local_2f8 == 1) {
          local_2f0 = (void *)CRYPTO_zalloc(0x42,"../crypto/ec/ecp_nistp521.c",0x7c5);
          local_2e0 = (void *)CRYPTO_zalloc(0xe58,"../crypto/ec/ecp_nistp521.c",0x7c6);
          if ((local_2e0 != (void *)0x0) && (local_2f0 != (void *)0x0)) {
            local_270 = 0;
            local_2b0 = (void *)0x0;
            goto LAB_004fca7d;
          }
          local_2b0 = (void *)0x0;
        }
        else {
          local_2f0 = (void *)CRYPTO_zalloc(local_2f8 * 0x42,"../crypto/ec/ecp_nistp521.c",0x7c5);
          local_2e0 = (void *)CRYPTO_zalloc(local_2f8 * 0xe58,"../crypto/ec/ecp_nistp521.c",0x7c6);
          local_2b0 = CRYPTO_malloc((int)local_2f8 * 0x4c8 + 0x48,"../crypto/ec/ecp_nistp521.c",
                                    0x7c9);
          if (((local_2f0 != (void *)0x0) && (local_2e0 != (void *)0x0)) &&
             (local_2b0 != (void *)0x0)) {
            local_270 = 1;
LAB_004fca7d:
            uVar1 = 0;
            uVar10 = 0;
            do {
              if (param_4 == uVar10) {
                pEVar9 = EC_GROUP_get0_generator(param_1);
                a = param_3;
              }
              else {
                pEVar9 = *(EC_POINT **)(param_5 + uVar10 * 8);
                a = *(BIGNUM **)(param_6 + uVar10 * 8);
              }
              if ((a != (BIGNUM *)0x0) && (pEVar9 != (EC_POINT *)0x0)) {
                iVar3 = BN_num_bits(a);
                if ((iVar3 < 0x20a) && (iVar3 = BN_is_negative(a), iVar3 == 0)) {
                  iVar3 = BN_bn2lebinpad(a,(void *)((long)local_2f0 + uVar10 * 0x42),0x42);
                }
                else {
                  iVar3 = BN_nnmod(r,a,*(BIGNUM **)(param_1 + 0x10),param_7);
                  if (iVar3 == 0) {
                    ERR_new();
                    uVar11 = 0x7ea;
                    goto LAB_004fce56;
                  }
                  iVar3 = BN_bn2lebinpad(r,(void *)((long)local_2f0 + uVar10 * 0x42),0x42);
                }
                if (iVar3 < 0) {
                  ERR_new();
                  uVar11 = 0x7f4;
                  goto LAB_004fc9c9;
                }
                iVar3 = BN_to_felem(&local_178,*(undefined8 *)(pEVar9 + 0x10));
                if (((iVar3 == 0) ||
                    (iVar3 = BN_to_felem(&local_128,*(undefined8 *)(pEVar9 + 0x18)), iVar3 == 0)) ||
                   (iVar3 = BN_to_felem(&local_d8,*(undefined8 *)(pEVar9 + 0x20)), iVar3 == 0))
                goto LAB_004fc6b3;
                uVar13 = 2;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0xd8) = local_178;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0xe0) = uStack_170;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x118) = local_138;
                lVar7 = (long)local_2e0 + uVar10 * 0xe58 + 0x1b0;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0xe8) = local_168;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0xf0) = uStack_160;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0xf8) = local_158;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x100) = uStack_150;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x108) = local_148;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x110) = uStack_140;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x120) = local_128;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x128) = uStack_120;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x160) = local_e8;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x130) = local_118;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x138) = uStack_110;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x140) = local_108;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x148) = uStack_100;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x150) = local_f8;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x158) = uStack_f0;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x168) = local_d8;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x170) = uStack_d0;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x1a8) = local_98;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x178) = local_c8;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x180) = uStack_c0;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x188) = local_b8;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 400) = uStack_b0;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x198) = local_a8;
                *(undefined8 *)((long)local_2e0 + uVar10 * 0xe58 + 0x1a0) = uStack_a0;
                do {
                  if ((uVar13 & 1) == 0) {
                    lVar8 = (long)((int)uVar13 >> 1) * 0xd8;
                    point_double(lVar7,lVar7 + 0x48,lVar7 + 0x90,
                                 (long)local_2e0 + lVar8 + uVar10 * 0xe58,
                                 (long)local_2e0 + lVar8 + uVar10 * 0xe58 + 0x48,
                                 (long)local_2e0 + lVar8 + uVar10 * 0xe58 + 0x90);
                  }
                  else {
                    point_add(lVar7,lVar7 + 0x48,lVar7 + 0x90,
                              (long)local_2e0 + uVar10 * 0xe58 + 0xd8,
                              (long)local_2e0 + uVar10 * 0xe58 + 0x120,
                              (long)local_2e0 + uVar10 * 0xe58 + 0x168,0,lVar7 + -0xd8,lVar7 + -0x90
                              ,lVar7 + -0x48);
                  }
                  uVar13 = uVar13 + 1;
                  lVar7 = lVar7 + 0xd8;
                } while (uVar13 != 0x11);
              }
              uVar1 = uVar1 + 1;
              uVar10 = (ulong)uVar1;
            } while (uVar10 < local_2f8);
            if (local_270 != 0) {
              ossl_ec_GFp_nistp_points_make_affine_internal
                        (local_2f8 * 0x11,local_2e0,0x48,local_2b0,felem_one,felem_is_zero_int,
                         felem_assign,felem_square_reduce,felem_mul_reduce,felem_inv,felem_contract)
              ;
            }
            if ((param_3 != (BIGNUM *)0x0) && (bVar2)) goto LAB_004fc5b1;
            goto LAB_004fc8c2;
          }
        }
        ERR_new();
        iVar3 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp521.c",0x7cc,"ossl_ec_GFp_nistp521_points_mul");
        ERR_set_error(0x10,0xc0100,0);
        goto LAB_004fc6b3;
      }
      local_2b0 = (void *)0x0;
      local_2e0 = (void *)0x0;
      local_2f0 = (void *)0x0;
      local_270 = 0;
LAB_004fc8c2:
      puVar12 = (undefined1 *)0x0;
      local_288 = (undefined8 *)0x0;
    }
    else {
      local_288 = &gmul;
      if (*(undefined8 **)(param_1 + 0xa0) != (undefined8 *)0x0) {
        local_288 = *(undefined8 **)(param_1 + 0xa0);
      }
      local_2c0 = EC_POINT_new(param_1);
      if (local_2c0 == (EC_POINT *)0x0) goto LAB_004fc680;
      lVar7 = felem_to_BN(pBVar4,local_288 + 0x1b);
      if (((lVar7 == 0) || (lVar7 = felem_to_BN(pBVar5,local_288 + 0x24), lVar7 == 0)) ||
         (lVar7 = felem_to_BN(pBVar6,local_288 + 0x2d), lVar7 == 0)) {
        ERR_new();
        iVar3 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp521.c",0x7ab,"ossl_ec_GFp_nistp521_points_mul");
        ERR_set_error(0x10,0x80003,0);
        local_2b0 = (void *)0x0;
        local_2e0 = (void *)0x0;
        local_2f0 = (void *)0x0;
        goto LAB_004fc6b3;
      }
      iVar3 = ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp
                        (param_1,local_2c0,pBVar4,pBVar5,pBVar6,param_7);
      if (iVar3 == 0) {
        local_2b0 = (void *)0x0;
        local_2e0 = (void *)0x0;
        local_2f0 = (void *)0x0;
        iVar3 = 0;
        goto LAB_004fc6b3;
      }
      iVar3 = EC_POINT_cmp(param_1,local_2c0,*(EC_POINT **)(param_1 + 8),param_7);
      if (iVar3 != 0) {
        local_2f8 = param_4 + 1;
        goto LAB_004fc7af;
      }
      if (param_4 != 0) {
        bVar2 = true;
        goto LAB_004fc7c6;
      }
      local_2f8 = 0;
      local_2b0 = (void *)0x0;
      local_2e0 = (void *)0x0;
      local_2f0 = (void *)0x0;
      local_270 = 0;
LAB_004fc5b1:
      puVar12 = local_88;
      local_48 = 0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      iVar3 = BN_num_bits(param_3);
      if ((iVar3 < 0x20a) && (iVar3 = BN_is_negative(param_3), iVar3 == 0)) {
        BN_bn2lebinpad(param_3,puVar12,0x42);
      }
      else {
        iVar3 = BN_nnmod(r,param_3,*(BIGNUM **)(param_1 + 0x10),param_7);
        if (iVar3 == 0) {
          ERR_new();
          uVar11 = 0x81e;
LAB_004fce56:
          iVar3 = 0;
          ERR_set_debug("../crypto/ec/ecp_nistp521.c",uVar11,"ossl_ec_GFp_nistp521_points_mul");
          ERR_set_error(0x10,0x80003,0);
          goto LAB_004fc6b3;
        }
        BN_bn2lebinpad(r,puVar12,0x42);
      }
    }
    batch_mul(&local_178,&local_128,&local_d8,local_2f0,local_2f8 & 0xffffffff,puVar12,local_270,
              local_2e0,local_288);
    felem_contract(local_268,&local_178);
    felem_contract(local_218,&local_128);
    felem_contract(local_1c8,&local_d8);
    lVar7 = felem_to_BN(pBVar4,local_268);
    if (((lVar7 == 0) || (lVar7 = felem_to_BN(pBVar5,local_218), lVar7 == 0)) ||
       (lVar7 = felem_to_BN(pBVar6,local_1c8), lVar7 == 0)) {
      ERR_new();
      uVar11 = 0x837;
LAB_004fc9c9:
      iVar3 = 0;
      ERR_set_debug("../crypto/ec/ecp_nistp521.c",uVar11,"ossl_ec_GFp_nistp521_points_mul");
      ERR_set_error(0x10,0x80003,0);
    }
    else {
      iVar3 = ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp
                        (param_1,param_2,pBVar4,pBVar5,pBVar6,param_7);
    }
  }
LAB_004fc6b3:
  BN_CTX_end(param_7);
  EC_POINT_free(local_2c0);
  CRYPTO_free(local_2f0);
  CRYPTO_free(local_2e0);
  CRYPTO_free(local_2b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}


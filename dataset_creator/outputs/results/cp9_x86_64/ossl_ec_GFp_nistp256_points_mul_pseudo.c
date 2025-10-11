
int ossl_ec_GFp_nistp256_points_mul
              (EC_GROUP *param_1,undefined8 param_2,BIGNUM *param_3,ulong param_4,long param_5,
              long param_6,BN_CTX *param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *r;
  long lVar8;
  long lVar9;
  EC_POINT *pEVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int num;
  undefined1 *puVar14;
  undefined8 *puVar15;
  BIGNUM *a;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  uint local_244;
  void *local_240;
  void *local_238;
  EC_POINT *local_218;
  ulong local_210;
  void *local_200;
  int local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BN_CTX_start(param_7);
  pBVar5 = BN_CTX_get(param_7);
  pBVar6 = BN_CTX_get(param_7);
  pBVar7 = BN_CTX_get(param_7);
  r = BN_CTX_get(param_7);
  if (r != (BIGNUM *)0x0) {
    local_210 = param_4;
    if (param_3 == (BIGNUM *)0x0) {
      puVar15 = (undefined8 *)0x0;
      local_218 = (EC_POINT *)0x0;
LAB_004f77b6:
      bVar3 = false;
      if (local_210 == 0) {
        local_200 = (void *)0x0;
        local_240 = (void *)0x0;
        local_238 = (void *)0x0;
        local_1b8 = 0;
LAB_004f78d2:
        puVar14 = (undefined1 *)0x0;
        puVar15 = (undefined8 *)0x0;
LAB_004f78ff:
        batch_mul(local_148,local_108,local_c8,local_238,local_210 & 0xffffffff,puVar14,local_1b8,
                  local_240,puVar15);
        felem_contract(&local_1a8,local_148);
        felem_contract(&local_188,local_108);
        felem_contract(&local_168,local_c8);
        local_68 = local_1a8;
        local_60 = local_1a0;
        local_58 = local_198;
        local_50 = local_190;
        lVar8 = BN_lebin2bn(&local_68,0x20,pBVar5);
        if (lVar8 != 0) {
          local_68 = local_188;
          local_60 = local_180;
          local_58 = local_178;
          local_50 = local_170;
          lVar8 = BN_lebin2bn(&local_68,0x20,pBVar6);
          if (lVar8 != 0) {
            local_68 = local_168;
            local_60 = local_160;
            local_58 = local_158;
            local_50 = local_150;
            lVar8 = BN_lebin2bn(&local_68,0x20,pBVar7);
            if (lVar8 != 0) {
              iVar4 = ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp
                                (param_1,param_2,pBVar5,pBVar6,pBVar7,param_7);
              goto LAB_004f76c3;
            }
          }
        }
        ERR_new();
        uVar13 = 0x8a5;
LAB_004f7aa1:
        iVar4 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp256.c",uVar13,"ossl_ec_GFp_nistp256_points_mul");
        ERR_set_error(0x10,0x80003,0);
      }
      else {
LAB_004f77cd:
        iVar4 = (int)(local_210 << 5);
        num = (int)(local_210 * 0x660);
        if (local_210 < 3) {
          local_238 = CRYPTO_malloc(iVar4,"../crypto/ec/ecp_nistp256.c",0x830);
          local_240 = CRYPTO_malloc(num,"../crypto/ec/ecp_nistp256.c",0x831);
          if ((local_240 != (void *)0x0) && (local_238 != (void *)0x0)) {
            local_1b8 = 0;
            local_200 = (void *)0x0;
            goto LAB_004f7b2f;
          }
          local_200 = (void *)0x0;
        }
        else {
          local_238 = CRYPTO_malloc(iVar4,"../crypto/ec/ecp_nistp256.c",0x830);
          local_240 = CRYPTO_malloc(num,"../crypto/ec/ecp_nistp256.c",0x831);
          local_200 = CRYPTO_malloc(((int)(local_210 << 4) + (int)local_210) * 0x20 + 0x20,
                                    "../crypto/ec/ecp_nistp256.c",0x834);
          if (((local_238 != (void *)0x0) && (local_240 != (void *)0x0)) &&
             (local_200 != (void *)0x0)) {
            local_1b8 = 1;
LAB_004f7b2f:
            uVar11 = 0;
            memset(local_238,0,local_210 << 5);
            memset(local_240,0,local_210 * 0x660);
            local_244 = 0;
            do {
              if (param_4 == uVar11) {
                pEVar10 = EC_GROUP_get0_generator(param_1);
                a = param_3;
              }
              else {
                pEVar10 = *(EC_POINT **)(param_5 + uVar11 * 8);
                a = *(BIGNUM **)(param_6 + uVar11 * 8);
              }
              if ((a != (BIGNUM *)0x0) && (pEVar10 != (EC_POINT *)0x0)) {
                iVar4 = BN_num_bits(a);
                if ((iVar4 < 0x101) && (iVar4 = BN_is_negative(a), iVar4 == 0)) {
                  iVar4 = BN_bn2lebinpad(a,(void *)(uVar11 * 0x20 + (long)local_238),0x20);
                }
                else {
                  iVar4 = BN_nnmod(r,a,*(BIGNUM **)(param_1 + 0x10),param_7);
                  if (iVar4 == 0) {
                    ERR_new();
                    uVar13 = 0x857;
                    goto LAB_004f7e70;
                  }
                  iVar4 = BN_bn2lebinpad(r,(void *)(uVar11 * 0x20 + (long)local_238),0x20);
                }
                if (iVar4 < 0) {
                  ERR_new();
                  uVar13 = 0x861;
                  goto LAB_004f7aa1;
                }
                iVar4 = BN_to_felem(local_148,*(undefined8 *)(pEVar10 + 0x10));
                if (iVar4 == 0) goto LAB_004f76c3;
                iVar4 = BN_to_felem(local_108,*(undefined8 *)(pEVar10 + 0x18));
                if (iVar4 == 0) goto LAB_004f76c3;
                iVar4 = BN_to_felem(local_c8,*(undefined8 *)(pEVar10 + 0x20));
                if (iVar4 == 0) goto LAB_004f76c3;
                lVar8 = (long)local_240 + uVar11 * 0x660 + 0x60;
                lVar1 = (long)local_240 + uVar11 * 0x660 + 0x80;
                felem_shrink(lVar8,local_148);
                lVar2 = (long)local_240 + uVar11 * 0x660 + 0xa0;
                felem_shrink(lVar1,local_108);
                felem_shrink(lVar2,local_c8);
                lVar12 = (long)local_240 + uVar11 * 0x660 + 0xc0;
                uVar16 = 2;
                do {
                  while( true ) {
                    if ((uVar16 & 1) != 0) break;
                    uVar17 = uVar16 + 1;
                    lVar9 = (long)((int)uVar16 >> 1) * 0x60;
                    point_double_small(lVar12,lVar12 + 0x20,lVar12 + 0x40,
                                       (long)local_240 + lVar9 + uVar11 * 0x660,
                                       (long)local_240 + lVar9 + uVar11 * 0x660 + 0x20,
                                       (long)local_240 + lVar9 + uVar11 * 0x660 + 0x40);
                    lVar12 = lVar12 + 0x60;
                    uVar16 = uVar17;
                    if (uVar17 == 0x11) goto LAB_004f7d30;
                  }
                  uVar16 = uVar16 + 1;
                  point_add_small(lVar12,lVar12 + 0x20,lVar12 + 0x40,lVar8,lVar1,lVar2,
                                  lVar12 + -0x60,lVar12 + -0x40,lVar12 + -0x20);
                  lVar12 = lVar12 + 0x60;
                } while (uVar16 != 0x11);
              }
LAB_004f7d30:
              local_244 = local_244 + 1;
              uVar11 = (ulong)local_244;
            } while (uVar11 < local_210);
            if (local_1b8 != 0) {
              ossl_ec_GFp_nistp_points_make_affine_internal
                        (local_210 * 0x11,local_240,0x20,local_200,smallfelem_one,
                         smallfelem_is_zero_int,smallfelem_assign,smallfelem_square_contract,
                         smallfelem_mul_contract,smallfelem_inv_contract,smallfelem_assign);
            }
            if ((param_3 == (BIGNUM *)0x0) || (!bVar3)) goto LAB_004f78d2;
LAB_004f75dd:
            puVar14 = local_88;
            local_88 = (undefined1  [16])0x0;
            local_78 = (undefined1  [16])0x0;
            iVar4 = BN_num_bits(param_3);
            if ((iVar4 < 0x101) && (iVar4 = BN_is_negative(param_3), iVar4 == 0)) {
              BN_bn2lebinpad(param_3,puVar14,0x20);
            }
            else {
              iVar4 = BN_nnmod(r,param_3,*(BIGNUM **)(param_1 + 0x10),param_7);
              if (iVar4 == 0) {
                ERR_new();
                uVar13 = 0x88d;
LAB_004f7e70:
                iVar4 = 0;
                ERR_set_debug("../crypto/ec/ecp_nistp256.c",uVar13,"ossl_ec_GFp_nistp256_points_mul"
                             );
                ERR_set_error(0x10,0x80003,0);
                goto LAB_004f76c3;
              }
              BN_bn2lebinpad(r,puVar14,0x20);
            }
            goto LAB_004f78ff;
          }
        }
        ERR_new();
        iVar4 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp256.c",0x837,"ossl_ec_GFp_nistp256_points_mul");
        ERR_set_error(0x10,0xc0100,0);
      }
      goto LAB_004f76c3;
    }
    puVar15 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = &gmul;
    }
    local_218 = EC_POINT_new(param_1);
    if (local_218 != (EC_POINT *)0x0) {
      local_68 = puVar15[0xc];
      local_60 = puVar15[0xd];
      local_58 = puVar15[0xe];
      local_50 = puVar15[0xf];
      lVar8 = BN_lebin2bn(&local_68,0x20,pBVar5);
      if (lVar8 != 0) {
        local_68 = puVar15[0x10];
        local_60 = puVar15[0x11];
        local_58 = puVar15[0x12];
        local_50 = puVar15[0x13];
        lVar8 = BN_lebin2bn(&local_68,0x20,pBVar6);
        if (lVar8 != 0) {
          local_68 = puVar15[0x14];
          local_60 = puVar15[0x15];
          local_58 = puVar15[0x16];
          local_50 = puVar15[0x17];
          lVar8 = BN_lebin2bn(&local_68,0x20,pBVar7);
          if (lVar8 != 0) {
            iVar4 = ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp
                              (param_1,local_218,pBVar5,pBVar6,pBVar7,param_7);
            if (iVar4 == 0) {
              local_200 = (void *)0x0;
              local_240 = (void *)0x0;
              local_238 = (void *)0x0;
              iVar4 = 0;
              goto LAB_004f76c3;
            }
            iVar4 = EC_POINT_cmp(param_1,local_218,*(EC_POINT **)(param_1 + 8),param_7);
            if (iVar4 != 0) {
              local_210 = param_4 + 1;
              goto LAB_004f77b6;
            }
            if (param_4 != 0) {
              bVar3 = true;
              goto LAB_004f77cd;
            }
            local_210 = 0;
            local_200 = (void *)0x0;
            local_240 = (void *)0x0;
            local_238 = (void *)0x0;
            local_1b8 = 0;
            goto LAB_004f75dd;
          }
        }
      }
      ERR_new();
      iVar4 = 0;
      ERR_set_debug("../crypto/ec/ecp_nistp256.c",0x817,"ossl_ec_GFp_nistp256_points_mul");
      ERR_set_error(0x10,0x80003,0);
      local_200 = (void *)0x0;
      local_240 = (void *)0x0;
      local_238 = (void *)0x0;
      goto LAB_004f76c3;
    }
  }
  iVar4 = 0;
  local_218 = (EC_POINT *)0x0;
  local_200 = (void *)0x0;
  local_240 = (void *)0x0;
  local_238 = (void *)0x0;
LAB_004f76c3:
  BN_CTX_end(param_7);
  EC_POINT_free(local_218);
  CRYPTO_free(local_238);
  CRYPTO_free(local_240);
  CRYPTO_free(local_200);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar4;
}


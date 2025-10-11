
/* WARNING: Removing unreachable block (ram,0x004ff71f) */
/* WARNING: Removing unreachable block (ram,0x004ff694) */

int ecp_nistz256_points_mul
              (EC_GROUP *param_1,long param_2,BIGNUM *param_3,ulong param_4,void *param_5,
              void *param_6,BN_CTX *param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  EC_POINT *a;
  EC_POINT *b;
  long lVar12;
  long lVar13;
  BIGNUM *pBVar14;
  undefined1 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  ulong uVar26;
  undefined1 *puVar27;
  long in_FS_OFFSET;
  undefined8 *local_1e0;
  void *local_1d0;
  ulong *local_1c0;
  byte *local_1b0;
  void *local_1a0;
  void *local_190;
  int local_188;
  ulong local_178;
  void *local_160;
  void *local_158;
  byte *local_150;
  undefined8 *local_148;
  ulong local_140 [4];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  if (0xffffffe < param_4) {
    ERR_new();
    iVar9 = 0;
    ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x3d1,"ecp_nistz256_points_mul");
    ERR_set_error(0x10,0xc0100,0);
    goto LAB_004fe50e;
  }
  BN_CTX_start(param_7);
  local_178 = param_4;
  local_160 = param_5;
  local_158 = param_6;
  if (param_3 == (BIGNUM *)0x0) {
    if (param_4 == 0) {
LAB_004fee3d:
      local_1a0 = (void *)0x0;
      local_190 = (void *)0x0;
LAB_004fee64:
      local_1c0 = &local_e0;
      iVar9 = bn_set_words(*(undefined8 *)(param_2 + 0x10),local_1c0,4);
      if (((iVar9 != 0) &&
          (iVar9 = bn_set_words(*(undefined8 *)(param_2 + 0x18),&local_c0,4), iVar9 != 0)) &&
         (iVar9 = bn_set_words(*(undefined8 *)(param_2 + 0x20),&local_a0,4), iVar9 != 0)) {
        iVar9 = 1;
        uVar11 = is_one(*(undefined8 *)(param_2 + 0x20));
        *(uint *)(param_2 + 0x28) = uVar11 & 1;
      }
    }
    else {
      puVar25 = &local_e0;
      bVar8 = true;
      local_1a0 = (void *)0x0;
      local_190 = (void *)0x0;
LAB_004fe582:
      local_1c0 = &local_e0;
      if (local_178 * 0x10 + 6 < 0x1555556) {
        local_1d0 = CRYPTO_malloc((int)(local_178 * 0x600) + 0x220,"../crypto/ec/ecp_nistz256.c",
                                  0x27c);
        if (local_1d0 == (void *)0x0) goto LAB_004fefc0;
        local_1b0 = (byte *)CRYPTO_malloc((int)(local_178 * 0x21),"../crypto/ec/ecp_nistz256.c",
                                          0x27e);
        if ((local_1b0 != (byte *)0x0) &&
           (local_1e0 = (undefined8 *)
                        CRYPTO_malloc((int)local_178 * 8,"../crypto/ec/ecp_nistz256.c",0x27f),
           local_1e0 != (undefined8 *)0x0)) {
          lVar12 = ((ulong)local_1d0 & 0xffffffffffffffc0) + 0x40;
          puVar6 = (ulong *)(lVar12 + local_178 * 0x600);
          uVar26 = 0;
          lVar21 = lVar12;
          local_150 = local_1b0;
          local_148 = local_1e0;
          do {
            iVar9 = BN_num_bits(*(BIGNUM **)((long)local_158 + uVar26 * 8));
            if ((iVar9 < 0x101) &&
               (iVar9 = BN_is_negative(*(undefined8 *)((long)local_158 + uVar26 * 8)), iVar9 == 0))
            {
              pBVar14 = *(BIGNUM **)((long)local_158 + uVar26 * 8);
            }
            else {
              pBVar14 = BN_CTX_get(param_7);
              if (pBVar14 == (BIGNUM *)0x0) goto LAB_004ff00c;
              iVar9 = BN_nnmod(pBVar14,*(BIGNUM **)((long)local_158 + uVar26 * 8),
                               *(BIGNUM **)(param_1 + 0x10),param_7);
              if (iVar9 == 0) {
                ERR_new();
                ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x291,"ecp_nistz256_windowed_mul");
                ERR_set_error(0x10,0x80003,0);
                goto LAB_004ff00c;
              }
            }
            iVar19 = 0;
            *local_148 = pBVar14;
            iVar10 = bn_get_top();
            pbVar20 = local_150;
            iVar9 = iVar19;
            if (iVar10 * -8 < 0) {
              do {
                lVar13 = bn_get_words(*local_148);
                iVar19 = iVar9 + 8;
                uVar18 = *(undefined8 *)(lVar13 + (long)(iVar9 >> 3) * 8);
                *pbVar20 = (byte)uVar18;
                pbVar20[1] = (byte)((ulong)uVar18 >> 8);
                pbVar20[2] = (byte)((ulong)uVar18 >> 0x10);
                pbVar20[3] = (byte)((ulong)uVar18 >> 0x18);
                pbVar20[4] = (byte)((ulong)uVar18 >> 0x20);
                pbVar20[5] = (byte)((ulong)uVar18 >> 0x28);
                pbVar20[7] = (byte)((ulong)uVar18 >> 0x38);
                pbVar20[6] = (byte)((ulong)uVar18 >> 0x30);
                iVar10 = bn_get_top();
                pbVar20 = pbVar20 + 8;
                iVar9 = iVar19;
              } while (SBORROW4(iVar19,iVar10 * 8) != iVar19 + iVar10 * -8 < 0);
            }
            if (iVar19 < 0x21) {
              uVar11 = 0x21 - iVar19;
              pbVar20 = local_150 + iVar19;
              if (uVar11 < 8) {
                if ((uVar11 != 0) && (*pbVar20 = 0, (uVar11 & 2) != 0)) {
                  (pbVar20 + ((ulong)uVar11 - 2))[0] = 0;
                  (pbVar20 + ((ulong)uVar11 - 2))[1] = 0;
                }
              }
              else {
                pbVar20[0] = 0;
                pbVar20[1] = 0;
                pbVar20[2] = 0;
                pbVar20[3] = 0;
                pbVar20[4] = 0;
                pbVar20[5] = 0;
                pbVar20[6] = 0;
                pbVar20[7] = 0;
                pbVar22 = pbVar20 + ((ulong)uVar11 - 8);
                pbVar22[0] = 0;
                pbVar22[1] = 0;
                pbVar22[2] = 0;
                pbVar22[3] = 0;
                pbVar22[4] = 0;
                pbVar22[5] = 0;
                pbVar22[6] = 0;
                pbVar22[7] = 0;
                uVar11 = uVar11 + ((int)pbVar20 - (int)((ulong)(pbVar20 + 8) & 0xfffffffffffffff8))
                         & 0xfffffff8;
                if (7 < uVar11) {
                  uVar16 = 0;
                  do {
                    uVar17 = (ulong)uVar16;
                    uVar16 = uVar16 + 8;
                    *(undefined8 *)(((ulong)(pbVar20 + 8) & 0xfffffffffffffff8) + uVar17) = 0;
                  } while (uVar16 < uVar11);
                }
              }
            }
            iVar9 = bn_copy_words(puVar6,*(undefined8 *)
                                          (*(long *)((long)local_160 + uVar26 * 8) + 0x10),4);
            if (iVar9 == 0) {
LAB_004ff603:
              ERR_new();
              ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x2ad,"ecp_nistz256_windowed_mul");
              ERR_set_error(0x10,0x92,0);
              goto LAB_004ff00c;
            }
            puVar1 = puVar6 + 4;
            iVar9 = bn_copy_words(puVar1,*(undefined8 *)
                                          (*(long *)((long)local_160 + uVar26 * 8) + 0x18),4);
            if ((iVar9 == 0) ||
               (iVar9 = bn_copy_words(puVar6 + 8,
                                      *(undefined8 *)
                                       (*(long *)((long)local_160 + uVar26 * 8) + 0x20),4),
               iVar9 == 0)) goto LAB_004ff603;
            puVar2 = puVar6 + 0xc;
            ecp_nistz256_scatter_w5(lVar21,puVar6,1);
            uVar26 = uVar26 + 1;
            ecp_nistz256_point_double(puVar2,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar2,2);
            puVar3 = puVar6 + 0x18;
            ecp_nistz256_point_add(puVar3,puVar2,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar3,3);
            ecp_nistz256_point_double(puVar2,puVar2);
            ecp_nistz256_scatter_w5(lVar21,puVar2,4);
            ecp_nistz256_point_double(puVar3,puVar3);
            ecp_nistz256_scatter_w5(lVar21,puVar3,6);
            puVar4 = puVar6 + 0x24;
            ecp_nistz256_point_add(puVar4,puVar2,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar4,5);
            puVar5 = puVar6 + 0x30;
            ecp_nistz256_point_add(puVar5,puVar3,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar5,7);
            ecp_nistz256_point_double(puVar2,puVar2);
            ecp_nistz256_scatter_w5(lVar21,puVar2,8);
            ecp_nistz256_point_double(puVar3,puVar3);
            ecp_nistz256_scatter_w5(lVar21,puVar3,0xc);
            ecp_nistz256_point_double(puVar4,puVar4);
            ecp_nistz256_scatter_w5(lVar21,puVar4,10);
            ecp_nistz256_point_double(puVar5,puVar5);
            ecp_nistz256_scatter_w5(lVar21,puVar5,0xe);
            ecp_nistz256_point_add(puVar3,puVar3,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar3,0xd);
            ecp_nistz256_point_add(puVar4,puVar4,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar4,0xb);
            ecp_nistz256_point_add(puVar5,puVar5,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar5,0xf);
            ecp_nistz256_point_add(puVar3,puVar2,puVar6);
            ecp_nistz256_scatter_w5(lVar21,puVar3,9);
            ecp_nistz256_point_double(puVar2,puVar2);
            ecp_nistz256_scatter_w5(lVar21,puVar2,0x10);
            lVar21 = lVar21 + 0x600;
            local_150 = local_150 + 0x21;
            local_148 = local_148 + 1;
          } while (uVar26 < local_178);
          puVar2 = puVar6 + 0x10;
          ecp_nistz256_gather_w5
                    (puVar6,lVar12,(local_1b0[0x1f] >> 6 & 1) - ((char)local_1b0[0x1f] >> 7));
          uVar26 = puVar6[1];
          local_188 = 0xff;
          *puVar25 = *puVar6;
          puVar25[1] = uVar26;
          uVar26 = puVar6[3];
          puVar25[2] = puVar6[2];
          puVar25[3] = uVar26;
          uVar26 = puVar6[5];
          puVar25[4] = puVar6[4];
          puVar25[5] = uVar26;
          uVar26 = puVar6[7];
          puVar25[6] = puVar6[6];
          puVar25[7] = uVar26;
          uVar26 = puVar6[9];
          puVar25[8] = puVar6[8];
          puVar25[9] = uVar26;
          uVar26 = puVar6[0xb];
          puVar25[10] = puVar6[10];
          puVar25[0xb] = uVar26;
          do {
            uVar26 = (ulong)(local_188 == 0xff);
            if (uVar26 < local_178) {
              lVar21 = lVar12 + uVar26 * 0x600;
              uVar11 = local_188 - 1U >> 3;
              local_158._0_1_ = (byte)(local_188 - 1U) & 7;
              uVar17 = (ulong)uVar11;
              pbVar20 = local_1b0 + uVar26 * 0x21 + uVar17;
              do {
                pbVar22 = pbVar20 + 0x21;
                uVar16 = (ushort)(CONCAT11(pbVar20[(uVar11 + 1) - uVar17],*pbVar20) >>
                                 (byte)local_158) & 0x3f;
                uVar23 = -(uVar16 >> 5);
                uVar16 = (uVar16 >> 5) - 1 & uVar16 | 0x3f - uVar16 & uVar23;
                ecp_nistz256_gather_w5(puVar6,lVar21,(uVar16 >> 1) + (uVar16 & 1) & 0x7fffffff);
                ecp_nistz256_neg(puVar2,puVar1);
                copy_conditional(puVar1,puVar2,uVar23 & 1);
                ecp_nistz256_point_add(puVar25,puVar25,puVar6);
                lVar21 = lVar21 + 0x600;
                pbVar20 = pbVar22;
              } while (local_1b0 + uVar17 + local_178 * 0x21 != pbVar22);
            }
            local_188 = local_188 + -5;
            ecp_nistz256_point_double(puVar25,puVar25);
            ecp_nistz256_point_double(puVar25,puVar25);
            ecp_nistz256_point_double(puVar25,puVar25);
            ecp_nistz256_point_double(puVar25,puVar25);
            ecp_nistz256_point_double(puVar25,puVar25);
          } while (local_188 != 0);
          uVar26 = 0;
          pbVar20 = local_1b0;
          do {
            bVar7 = *pbVar20;
            pbVar20 = pbVar20 + 0x21;
            uVar16 = (uint)bVar7 * 2 & 0x3f;
            uVar11 = -(uVar16 >> 5);
            uVar23 = 0x3f - uVar16 & uVar11;
            ecp_nistz256_gather_w5
                      (puVar6,lVar12,
                       (((uVar16 >> 5) - 1 & uVar16 | uVar23) >> 1) + (uVar23 & 1) & 0x7fffffff);
            ecp_nistz256_neg(puVar2,puVar1);
            copy_conditional(puVar1,puVar2,uVar11 & 1);
            ecp_nistz256_point_add(puVar25,puVar25,puVar6);
            uVar26 = uVar26 + 1;
            lVar12 = lVar12 + 0x600;
          } while (uVar26 < local_178);
          CRYPTO_free(local_1d0);
          CRYPTO_free(local_1b0);
          CRYPTO_free(local_1e0);
          if (!bVar8) {
            ecp_nistz256_point_add(local_1c0,local_1c0,puVar25);
          }
          goto LAB_004fee64;
        }
      }
      else {
LAB_004fefc0:
        local_1d0 = (void *)0x0;
        local_1b0 = (byte *)0x0;
      }
      ERR_new();
      ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x280,"ecp_nistz256_windowed_mul");
      ERR_set_error(0x10,0xc0100,0);
      local_1e0 = (undefined8 *)0x0;
LAB_004ff00c:
      iVar9 = 0;
      CRYPTO_free(local_1d0);
      CRYPTO_free(local_1b0);
      CRYPTO_free(local_1e0);
    }
  }
  else {
    a = EC_GROUP_get0_generator(param_1);
    if (a == (EC_POINT *)0x0) {
      ERR_new();
      iVar9 = 0;
      ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x3da,"ecp_nistz256_points_mul");
      ERR_set_error(0x10,0x71,0);
      local_1a0 = (void *)0x0;
      local_190 = (void *)0x0;
    }
    else {
      lVar21 = *(long *)(param_1 + 0xa0);
      if (lVar21 == 0) goto LAB_004ff05a;
      b = EC_POINT_new(param_1);
      if (b != (EC_POINT *)0x0) {
        ecp_nistz256_gather_w7(&local_e0,*(undefined8 *)(lVar21 + 0x10),1);
        iVar9 = bn_set_words(*(undefined8 *)(b + 0x10),&local_e0,4);
        if (((iVar9 != 0) &&
            (iVar9 = bn_set_words(*(undefined8 *)(b + 0x18),&local_c0,4), iVar9 != 0)) &&
           (iVar9 = bn_set_words(*(undefined8 *)(b + 0x20),ONE,4), iVar9 != 0)) {
          *(undefined4 *)(b + 0x28) = 1;
          iVar9 = EC_POINT_cmp(param_1,a,b,param_7);
          if (iVar9 != 0) {
            EC_POINT_free(b);
LAB_004ff05a:
            iVar9 = ecp_nistz256_is_affine_G(a);
            if (iVar9 != 0) {
              puVar15 = ecp_nistz256_precomputed;
              goto LAB_004ff074;
            }
            local_178 = param_4 + 1;
            lVar21 = local_178 * 8;
            local_190 = CRYPTO_malloc((int)lVar21,"../crypto/ec/ecp_nistz256.c",0x464);
            iVar9 = 0;
            if (local_190 != (void *)0x0) {
              local_1a0 = CRYPTO_malloc((int)lVar21,"../crypto/ec/ecp_nistz256.c",0x46a);
              if (local_1a0 != (void *)0x0) {
                memcpy(local_190,param_6,lVar21 - 8U);
                *(BIGNUM **)((long)local_190 + lVar21 + -8) = param_3;
                memcpy(local_1a0,param_5,lVar21 - 8U);
                puVar25 = &local_e0;
                *(EC_POINT **)((long)local_1a0 + lVar21 + -8) = a;
                bVar8 = true;
                local_160 = local_1a0;
                local_158 = local_190;
                goto LAB_004fe582;
              }
              ERR_new();
              ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x46c,"ecp_nistz256_points_mul");
              ERR_set_error(0x10,0xc0100,0);
              goto LAB_004fe4cf;
            }
            ERR_new();
            ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x466,"ecp_nistz256_points_mul");
            uVar18 = 0xc0100;
LAB_004ff5da:
            iVar9 = 0;
            ERR_set_error(0x10,uVar18,0);
            local_1a0 = (void *)0x0;
            local_190 = (void *)0x0;
            goto LAB_004fe4cf;
          }
          puVar15 = *(undefined1 **)(lVar21 + 0x10);
          EC_POINT_free(b);
          if (puVar15 == (undefined1 *)0x0) goto LAB_004ff05a;
LAB_004ff074:
          iVar9 = BN_num_bits(param_3);
          if ((0x100 < iVar9) || (iVar9 = BN_is_negative(param_3), iVar9 != 0)) {
            pBVar14 = BN_CTX_get(param_7);
            if (pBVar14 == (BIGNUM *)0x0) goto LAB_004fe4a5;
            iVar9 = BN_nnmod(pBVar14,param_3,*(BIGNUM **)(param_1 + 0x10),param_7);
            param_3 = pBVar14;
            if (iVar9 == 0) {
              ERR_new();
              ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x40a,"ecp_nistz256_points_mul");
              uVar18 = 0x80003;
              goto LAB_004ff5da;
            }
          }
          puVar27 = local_70;
          for (iVar9 = 0; iVar10 = bn_get_top(), iVar9 < iVar10 * 8; iVar9 = iVar9 + 8) {
            lVar21 = bn_get_words(param_3);
            uVar18 = *(undefined8 *)(lVar21 + (long)(iVar9 >> 3) * 8);
            *puVar27 = (char)uVar18;
            puVar27[1] = (char)((ulong)uVar18 >> 8);
            puVar27[2] = (char)((ulong)uVar18 >> 0x10);
            puVar27[3] = (char)((ulong)uVar18 >> 0x18);
            puVar27[4] = (char)((ulong)uVar18 >> 0x20);
            puVar27[5] = (char)((ulong)uVar18 >> 0x28);
            puVar27[7] = (char)((ulong)uVar18 >> 0x38);
            puVar27[6] = (char)((ulong)uVar18 >> 0x30);
            puVar27 = puVar27 + 8;
          }
          uVar11 = 0x21 - iVar9;
          lVar21 = (long)iVar9;
          puVar24 = (undefined8 *)(local_70 + lVar21);
          if (uVar11 < 8) {
            if ((uVar11 != 0) && (*(undefined1 *)puVar24 = 0, (uVar11 & 2) != 0)) {
              *(undefined2 *)(local_70 + (ulong)uVar11 + lVar21 + -2) = 0;
            }
          }
          else {
            *puVar24 = 0;
            *(undefined8 *)((long)&uStack_78 + (ulong)uVar11 + lVar21) = 0;
            uVar11 = uVar11 + ((int)puVar24 - (int)(local_70 + lVar21 + 8)) & 0xfffffff8;
            if (7 < uVar11) {
              uVar16 = 0;
              do {
                uVar26 = (ulong)uVar16;
                uVar16 = uVar16 + 8;
                *(undefined8 *)(local_70 + lVar21 + 8 + uVar26) = 0;
              } while (uVar16 < uVar11);
            }
          }
          bVar7 = local_70[0];
          puVar25 = local_140;
          uVar11 = (uint)local_70[0] + (uint)local_70[0] & 0xff;
          uVar16 = -(uVar11 >> 7);
          uVar11 = (uVar11 >> 7) - 1 & uVar11 | 0xff - uVar11 & uVar16;
          ecp_nistz256_gather_w7(&local_e0,puVar15,(uVar11 & 1) + (uVar11 >> 1) & 0x7fffffff);
          ecp_nistz256_neg(&local_a0,&local_c0);
          copy_conditional(&local_c0,&local_a0,uVar16 & 1);
          local_a8 = local_e0 | local_d8 | local_d0 | local_c8 | local_c0 | local_b8 | local_b0 |
                     local_a8;
          local_a8 = local_a8 | -local_a8;
          local_a0 = local_a8 >> 0x3f;
          local_90 = (long)local_a8 >> 0x3f;
          local_98 = local_90 & 0xffffffff00000000;
          local_88 = (ulong)((uint)((long)local_a8 >> 0x3f) & 0xfffffffe);
          uVar26 = 6;
          while( true ) {
            puVar15 = puVar15 + 0x1000;
            uVar23 = (int)uVar26 + 7;
            uVar11 = (ushort)(CONCAT11(local_70[(int)(uVar26 >> 3) + 1],bVar7) >> ((byte)uVar26 & 7)
                             ) & 0xff;
            uVar16 = -(uVar11 >> 7);
            uVar11 = (uVar11 >> 7) - 1 & uVar11 | 0xff - uVar11 & uVar16;
            ecp_nistz256_gather_w7(puVar25,puVar15,(uVar11 >> 1) + (uVar11 & 1) & 0x7fffffff);
            ecp_nistz256_neg(local_100,local_120);
            copy_conditional(local_120,local_100,uVar16 & 1);
            ecp_nistz256_point_add_affine(&local_e0,&local_e0,puVar25);
            if (uVar23 == 0x102) break;
            bVar7 = local_70[uVar23 >> 3];
            uVar26 = (ulong)uVar23;
          }
          if (param_4 == 0) goto LAB_004fee3d;
          bVar8 = false;
          local_1a0 = (void *)0x0;
          local_190 = (void *)0x0;
          goto LAB_004fe582;
        }
        EC_POINT_free(b);
      }
LAB_004fe4a5:
      iVar9 = 0;
      local_1a0 = (void *)0x0;
      local_190 = (void *)0x0;
    }
  }
LAB_004fe4cf:
  BN_CTX_end(param_7);
  CRYPTO_free(local_1a0);
  CRYPTO_free(local_190);
LAB_004fe50e:
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


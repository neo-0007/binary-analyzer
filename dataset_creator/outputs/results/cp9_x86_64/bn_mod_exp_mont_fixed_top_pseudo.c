
/* WARNING: Removing unreachable block (ram,0x005b1120) */
/* WARNING: Removing unreachable block (ram,0x005b1130) */
/* WARNING: Removing unreachable block (ram,0x005b1110) */

uint bn_mod_exp_mont_fixed_top
               (BIGNUM *param_1,BIGNUM *param_2,undefined8 *param_3,BIGNUM *param_4,BN_CTX *param_5,
               BN_MONT_CTX *param_6)

{
  uint uVar1;
  ulong *puVar2;
  BN_MONT_CTX *pBVar3;
  BN_CTX *pBVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  BIGNUM *pBVar10;
  long lVar11;
  undefined8 uVar12;
  ulong **ppuVar13;
  ulong **ppuVar14;
  BIGNUM *pBVar15;
  int *piVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong **ppuVar24;
  ulong *puVar25;
  long lVar26;
  long in_FS_OFFSET;
  byte bVar27;
  undefined1 auStack_e8 [8];
  char *local_e0;
  uint local_d8;
  uint local_d4;
  void *local_d0;
  BIGNUM *local_c8;
  ulong local_c0;
  ulong **local_b8;
  ulong **local_b0;
  BIGNUM *local_a8;
  BN_MONT_CTX *local_a0;
  BN_MONT_CTX *local_98;
  undefined8 *local_90;
  BIGNUM *local_88;
  BN_CTX *local_80;
  BIGNUM local_78;
  BIGNUM local_58;
  long local_40;
  undefined1 *puVar19;
  
  bVar27 = 0;
  puVar18 = auStack_e8;
  puVar19 = auStack_e8;
  puVar20 = auStack_e8;
  puVar22 = auStack_e8;
  puVar21 = auStack_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_1;
  local_98 = param_6;
  local_90 = param_3;
  local_80 = param_5;
  iVar5 = BN_is_odd(param_4);
  if (iVar5 == 0) {
    uVar7 = 0;
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_exp.c",0x25f,"bn_mod_exp_mont_fixed_top");
    ERR_set_error(3,0x66,0);
    goto LAB_005b0aca;
  }
  uVar1 = param_4->top;
  iVar5 = *(int *)(local_90 + 1);
  if (iVar5 == 0) {
    iVar5 = BN_abs_is_word(param_4,1);
    if (iVar5 == 0) {
      uVar7 = BN_set_word(local_a8,1);
      puVar22 = auStack_e8;
    }
    else {
      uVar7 = 1;
      BN_zero_ex(local_a8);
      puVar22 = auStack_e8;
    }
    goto LAB_005b0aca;
  }
  BN_CTX_start(local_80);
  local_a0 = local_98;
  if (local_98 == (BN_MONT_CTX *)0x0) {
    local_a0 = BN_MONT_CTX_new();
    if (local_a0 != (BN_MONT_CTX *)0x0) {
      uVar7 = BN_MONT_CTX_set(local_a0,param_4,local_80);
      if (uVar7 != 0) goto LAB_005b03fc;
      goto LAB_005b0bd7;
    }
    uVar7 = 0;
    BN_MONT_CTX_free((BN_MONT_CTX *)0x0);
  }
  else {
LAB_005b03fc:
    if (((param_2->neg == 0) && (iVar6 = BN_ucmp(param_2,param_4), pBVar10 = param_2, iVar6 < 0)) ||
       ((pBVar10 = BN_CTX_get(local_80), pBVar10 != (BIGNUM *)0x0 &&
        (local_88 = pBVar10, iVar6 = BN_nnmod(pBVar10,param_2,param_4,local_80), pBVar10 = local_88,
        iVar6 != 0)))) {
      local_88 = pBVar10;
      iVar6 = local_88->top;
      if (iVar6 == 0x10) {
        if (*(int *)(local_90 + 1) != 0x10) goto LAB_005b0461;
        iVar6 = BN_num_bits(param_4);
        if ((iVar6 != 0x400) || (iVar6 = rsaz_avx2_eligible(), pBVar10 = local_a8, iVar6 == 0)) {
          iVar6 = local_88->top;
          goto LAB_005b0458;
        }
        lVar17 = bn_wexpand(local_a8,0x10);
        if (lVar17 == 0) goto LAB_005b0ab0;
        uVar7 = 1;
        RSAZ_1024_mod_exp_avx2
                  (pBVar10->d,local_88->d,*local_90,param_4->d,(local_a0->RR).d,local_a0->n0[0]);
        pBVar10->top = 0x10;
        pBVar10->neg = 0;
        bn_correct_top(pBVar10);
      }
      else {
LAB_005b0458:
        if (((iVar6 != 8) || (*(int *)(local_90 + 1) != 8)) ||
           (iVar6 = BN_num_bits(param_4), pBVar10 = local_a8, iVar6 != 0x200)) {
LAB_005b0461:
          local_d4 = iVar5 * 0x40;
          if ((int)local_d4 < 0x133) {
            iVar5 = 0;
            if ((int)local_d4 < 0x5a) {
              uVar9 = 2;
              if (0x16 < (int)local_d4) {
                uVar9 = 8;
              }
              local_b0 = (ulong **)CONCAT44(local_b0._4_4_,uVar9);
              local_b8 = (ulong **)
                         CONCAT44(local_b8._4_4_,
                                  (0x16 < (int)local_d4) + 1 + (uint)(0x16 < (int)local_d4));
            }
            else {
              local_b0 = (ulong **)CONCAT44(local_b0._4_4_,0x10);
              local_b8 = (ulong **)CONCAT44(local_b8._4_4_,4);
            }
          }
          else {
            local_b0 = (ulong **)CONCAT44(local_b0._4_4_,0x20);
            iVar5 = uVar1 * 8;
            local_b8 = (ulong **)CONCAT44(local_b8._4_4_,5);
          }
          iVar6 = uVar1 * 2;
          if ((int)(uVar1 * 2) < (int)(uint)local_b0) {
            iVar6 = (uint)local_b0;
          }
          iVar5 = iVar5 + (iVar6 + (uVar1 << (sbyte)local_b8)) * 8;
          if (iVar5 < 0xc00) {
            uVar23 = (long)(iVar5 + 0x40) + 0x17;
            puVar21 = auStack_e8;
            while (puVar19 != auStack_e8 + -(uVar23 & 0xfffffffffffff000)) {
              puVar18 = puVar21 + -0x1000;
              *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
              puVar19 = puVar21 + -0x1000;
              puVar21 = puVar21 + -0x1000;
            }
            uVar23 = (ulong)((uint)uVar23 & 0xff0);
            lVar17 = -uVar23;
            puVar20 = puVar18 + lVar17;
            if (uVar23 != 0) {
              *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
            }
            local_c0 = (ulong)iVar5;
            pBVar10 = (BIGNUM *)
                      ((((ulong)(puVar18 + lVar17 + 0xf) & 0xfffffffffffffff0) -
                       (ulong)((uint)(puVar18 + lVar17 + 0xf) & 0x30)) + 0x40);
            if (7 < local_c0) {
              pBVar15 = pBVar10;
              for (uVar23 = local_c0 >> 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                pBVar15->d = (ulong *)0x0;
                pBVar15 = (BIGNUM *)((long)pBVar15 + (ulong)bVar27 * -0x10 + 8);
              }
            }
            local_d0 = (void *)0x0;
            local_e0 = "../crypto/bn/bn_exp.c";
            local_c8 = local_88;
            local_88 = pBVar10;
          }
          else {
            local_e0 = "../crypto/bn/bn_exp.c";
            local_d0 = CRYPTO_malloc(iVar5 + 0x40,"../crypto/bn/bn_exp.c",0x2cc);
            if (local_d0 == (void *)0x0) goto LAB_005b0ab0;
            local_c8 = local_88;
            local_88 = (BIGNUM *)(((ulong)local_d0 & 0xffffffffffffffc0) + 0x40);
            local_c0 = (ulong)iVar5;
            memset(local_88,0,local_c0);
          }
          lVar17 = (long)(int)(uint)local_b0;
          lVar26 = (long)(int)uVar1;
          puVar2 = param_4->d;
          local_58.top = 0;
          local_78.top = 0;
          local_78.d = (ulong *)((long)&local_88->d + lVar17 * lVar26 * 8);
          local_58.d = (ulong *)((ulong **)local_78.d + lVar26);
          local_58.neg = 0;
          local_58.flags = 2;
          local_78.neg = 0;
          local_78.flags = 2;
          local_78.dmax = uVar1;
          local_58.dmax = uVar1;
          if ((long)puVar2[lVar26 + -1] < 0) {
            *local_78.d = (ulong)-*puVar2;
            lVar11 = 1;
            local_78.top = uVar1;
            if (1 < (int)uVar1) {
              do {
                ((ulong **)local_78.d)[lVar11] = (ulong *)~puVar2[lVar11];
                lVar11 = lVar11 + 1;
              } while (lVar26 != lVar11);
            }
LAB_005b0608:
            pBVar3 = local_a0;
            *(undefined8 *)(puVar20 + -8) = 0x5b062c;
            pBVar10 = local_c8;
            local_c8 = &local_58;
            iVar5 = bn_to_mont_fixed_top(&local_58,pBVar10,local_a0,local_80);
            puVar2 = local_58.d;
            if (iVar5 == 0) goto LAB_005b0c28;
            if (((int)local_b8 != 5) || ((int)uVar1 < 2)) {
              uVar7 = local_78.top;
              if ((int)uVar1 <= local_78.top) {
                uVar7 = uVar1;
              }
              if (0 < (int)uVar7) {
                ppuVar24 = (ulong **)(local_78.d + 1);
                ppuVar14 = (ulong **)local_78.d;
                pBVar10 = local_88;
                while( true ) {
                  ppuVar13 = ppuVar24;
                  pBVar10->d = *ppuVar14;
                  pBVar10 = (BIGNUM *)(&pBVar10->d + lVar17);
                  if (ppuVar13 == (ulong **)((long)(local_78.d + 1) + (ulong)(uVar7 - 1) * 2 * 4))
                  break;
                  ppuVar24 = ppuVar13 + 1;
                  ppuVar14 = ppuVar13;
                }
              }
              uVar7 = local_58.top;
              if ((int)uVar1 <= local_58.top) {
                uVar7 = uVar1;
              }
              if (0 < (int)uVar7) {
                piVar16 = &local_88->top;
                ppuVar24 = (ulong **)(local_58.d + 1);
                ppuVar14 = (ulong **)local_58.d;
                while( true ) {
                  ppuVar13 = ppuVar24;
                  *(ulong **)piVar16 = *ppuVar14;
                  piVar16 = piVar16 + lVar17 * 2;
                  if ((ulong **)(local_58.d + 1 + (uVar7 - 1)) == ppuVar13) break;
                  ppuVar24 = ppuVar13 + 1;
                  ppuVar14 = ppuVar13;
                }
              }
              if ((int)local_b8 != 1) {
                *(undefined8 *)(puVar20 + -8) = 0x5b0e3b;
                iVar5 = bn_mul_mont_fixed_top(&local_78,local_c8,local_c8,local_a0,local_80);
                if (iVar5 == 0) goto LAB_005b0c28;
                uVar7 = local_78.top;
                if ((int)uVar1 <= local_78.top) {
                  uVar7 = uVar1;
                }
                if (0 < (int)uVar7) {
                  piVar16 = &local_88->neg;
                  ppuVar24 = (ulong **)(local_78.d + 1);
                  ppuVar14 = (ulong **)local_78.d;
                  while( true ) {
                    ppuVar13 = ppuVar24;
                    *(ulong **)piVar16 = *ppuVar14;
                    piVar16 = piVar16 + lVar17 * 2;
                    if ((ulong **)((long)(local_78.d + 1) + (ulong)(uVar7 - 1) * 2 * 4) == ppuVar13)
                    break;
                    ppuVar24 = ppuVar13 + 1;
                    ppuVar14 = ppuVar13;
                  }
                }
                pBVar10 = local_88 + 1;
                if (3 < (int)(uint)local_b0) {
                  iVar5 = 3;
                  do {
                    *(undefined8 *)(puVar20 + -8) = 0x5b0edd;
                    iVar6 = bn_mul_mont_fixed_top(&local_78,local_c8,&local_78,local_a0,local_80);
                    if (iVar6 == 0) goto LAB_005b0c28;
                    uVar7 = local_78.top;
                    if ((int)uVar1 <= local_78.top) {
                      uVar7 = uVar1;
                    }
                    if (0 < (int)uVar7) {
                      ppuVar24 = (ulong **)(local_78.d + 1);
                      pBVar15 = pBVar10;
                      ppuVar14 = (ulong **)local_78.d;
                      while( true ) {
                        ppuVar13 = ppuVar24;
                        pBVar15->d = *ppuVar14;
                        pBVar15 = (BIGNUM *)(&pBVar15->d + lVar17);
                        if ((ulong **)((long)(local_78.d + 1) + (ulong)(uVar7 - 1) * 2 * 4) ==
                            ppuVar13) break;
                        ppuVar24 = ppuVar13 + 1;
                        ppuVar14 = ppuVar13;
                      }
                    }
                    iVar5 = iVar5 + 1;
                    pBVar10 = (BIGNUM *)&pBVar10->top;
                  } while (iVar5 != (uint)local_b0);
                }
              }
              uVar23 = (ulong)local_b8 & 0xffffffff;
              iVar6 = (int)(local_d4 - 1) % (int)local_b8 + 1;
              bVar27 = (byte)iVar6;
              iVar6 = local_d4 - iVar6;
              *(undefined8 *)(puVar20 + -8) = 0x5b0f62;
              uVar7 = bn_get_bits(local_90,iVar6);
              *(undefined8 *)(puVar20 + -8) = 0x5b0f87;
              iVar5 = MOD_EXP_CTIME_COPY_FROM_PREBUF
                                (&local_78,uVar1,local_88,(1 << (bVar27 & 0x1f)) - 1U & uVar7,
                                 uVar23 & 0xffffffff);
              pBVar4 = local_80;
              pBVar3 = local_a0;
              ppuVar24 = local_b8;
              if (iVar5 != 0) {
                iVar5 = (uint)local_b0;
                local_b0 = (ulong **)CONCAT44(local_b0._4_4_,iVar6);
                local_d8 = iVar5 - 1;
                iVar5 = (int)local_b8;
                local_d4 = uVar1;
                do {
                  if ((int)(uint)local_b0 < 1) goto LAB_005b0a86;
                  iVar6 = 0;
                  do {
                    *(undefined8 *)(puVar20 + -8) = 0x5b0fec;
                    iVar8 = bn_mul_mont_fixed_top(&local_78,&local_78,&local_78,pBVar3,pBVar4);
                    if (iVar8 == 0) goto LAB_005b0c28;
                    iVar6 = iVar6 + 1;
                  } while (iVar5 != iVar6);
                  iVar6 = (uint)local_b0 - iVar5;
                  local_b0 = (ulong **)CONCAT44(local_b0._4_4_,iVar6);
                  *(undefined8 *)(puVar20 + -8) = 0x5b1016;
                  uVar7 = bn_get_bits(local_90,iVar6);
                  pBVar10 = local_c8;
                  *(undefined8 *)(puVar20 + -8) = 0x5b103a;
                  iVar6 = MOD_EXP_CTIME_COPY_FROM_PREBUF
                                    (local_c8,local_d4,local_88,local_d8 & uVar7,
                                     (ulong)ppuVar24 & 0xffffffff);
                  if (iVar6 == 0) break;
                  *(undefined8 *)(puVar20 + -8) = 0x5b1056;
                  iVar6 = bn_mul_mont_fixed_top(&local_78,&local_78,pBVar10,pBVar3,pBVar4);
                } while (iVar6 != 0);
              }
              goto LAB_005b0c28;
            }
            puVar25 = pBVar3->n0;
            uVar7 = local_78.top;
            if (local_58.top < (int)uVar1) {
              local_b0 = (ulong **)CONCAT44(local_b0._4_4_,local_78.top);
              *(undefined8 *)(puVar20 + -8) = 0x5b0684;
              memset(local_58.d + local_58.top,0,(ulong)((uVar1 - local_58.top) - 1) * 8 + 8);
              uVar7 = (uint)local_b0;
            }
            ppuVar24 = (ulong **)local_78.d;
            if ((int)uVar7 < (int)uVar1) {
              local_b0 = (ulong **)local_78.d;
              *(undefined8 *)(puVar20 + -8) = 0x5b06b8;
              memset(local_78.d + (int)uVar7,0,(ulong)((uVar1 - uVar7) - 1) * 8 + 8);
              ppuVar24 = local_b0;
            }
            pBVar10 = local_88;
            ppuVar14 = (ulong **)(puVar2 + lVar26);
            puVar2 = (local_a0->N).d;
            lVar17 = 0;
            do {
              ppuVar14[lVar17] = (ulong *)puVar2[lVar17];
              lVar17 = lVar17 + 1;
            } while ((int)lVar17 < (int)uVar1);
            *(undefined8 *)(puVar20 + -8) = 0x5b06f5;
            bn_scatter5(ppuVar24,lVar26,local_88,0);
            *(undefined8 *)(puVar20 + -8) = 0x5b070a;
            bn_scatter5(local_58.d,(long)local_58.top,pBVar10,1);
            *(undefined8 *)(puVar20 + -8) = 0x5b0723;
            bn_mul_mont(local_78.d,local_58.d,local_58.d,ppuVar14,puVar25,uVar1);
            *(undefined8 *)(puVar20 + -8) = 0x5b0737;
            bn_scatter5(local_78.d,lVar26,pBVar10,2);
            iVar6 = 3;
            iVar5 = 4;
            local_b0 = ppuVar14;
            do {
              *(undefined8 *)(puVar20 + -8) = 0x5b076a;
              bn_mul_mont(local_78.d,local_78.d,local_78.d,local_b0,puVar25,uVar1);
              lVar17 = (long)iVar5;
              iVar5 = iVar5 * 2;
              *(undefined8 *)(puVar20 + -8) = 0x5b0780;
              bn_scatter5(local_78.d,lVar26,local_88,lVar17);
              pBVar10 = local_88;
              ppuVar24 = local_b0;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            local_b0 = (ulong **)0x3;
            local_88 = (BIGNUM *)puVar25;
            do {
              ppuVar14 = local_b0;
              iVar5 = (int)local_b0;
              *(ulong *)(puVar20 + -0x10) = (ulong)(iVar5 - 1);
              *(undefined8 *)(puVar20 + -0x18) = 0x5b07cc;
              bn_mul_mont_gather5(local_78.d,local_58.d,pBVar10,ppuVar24,local_88,uVar1);
              iVar5 = iVar5 * 2;
              *(undefined8 *)(puVar20 + -0x18) = 0x5b07e1;
              bn_scatter5(local_78.d,lVar26,pBVar10,ppuVar14);
              do {
                *(undefined8 *)(puVar20 + -8) = 0x5b0809;
                bn_mul_mont(local_78.d,local_78.d,local_78.d,ppuVar24,local_88,uVar1);
                lVar17 = (long)iVar5;
                iVar5 = iVar5 * 2;
                *(undefined8 *)(puVar20 + -8) = 0x5b081d;
                bn_scatter5(local_78.d,lVar26,pBVar10,lVar17);
              } while (iVar5 < 0x20);
              local_b0 = (ulong **)((long)local_b0 + 2);
            } while (local_b0 != (ulong **)0x9);
            lVar17 = 9;
            local_b0 = (ulong **)0x9;
            do {
              *(ulong *)(puVar20 + -0x10) = (ulong)((int)lVar17 - 1);
              *(undefined8 *)(puVar20 + -0x18) = 0x5b0864;
              bn_mul_mont_gather5(local_78.d,local_58.d,pBVar10,ppuVar24,local_88,uVar1);
              *(undefined8 *)(puVar20 + -0x18) = 0x5b0876;
              bn_scatter5(local_78.d,lVar26,pBVar10,lVar17);
              *(undefined8 *)(puVar20 + -0x18) = 0x5b088f;
              bn_mul_mont(local_78.d,local_78.d,local_78.d,ppuVar24,local_88,uVar1);
              lVar11 = lVar17 * 2;
              lVar17 = lVar17 + 2;
              *(undefined8 *)(puVar20 + -0x18) = 0x5b08a6;
              bn_scatter5(local_78.d,lVar26,pBVar10,lVar11);
            } while (lVar17 != 0x11);
            local_b8 = ppuVar24;
            iVar5 = 0x11;
            lVar17 = 0x11;
            local_b0 = &local_88->d;
            local_88 = pBVar10;
            do {
              *(ulong *)(puVar20 + -0x10) = (ulong)(iVar5 - 1);
              iVar5 = iVar5 + 2;
              *(undefined8 *)(puVar20 + -0x18) = 0x5b08f6;
              bn_mul_mont_gather5(local_78.d,local_58.d,pBVar10,local_b8,local_b0,uVar1);
              *(undefined8 *)(puVar20 + -0x18) = 0x5b090c;
              bn_scatter5(local_78.d,lVar26,pBVar10,lVar17);
              ppuVar14 = local_b0;
              ppuVar24 = local_b8;
              lVar17 = lVar17 + 2;
            } while (iVar5 < 0x20);
            iVar5 = (int)(local_d4 - 1) % 5 + 1;
            bVar27 = (byte)iVar5;
            iVar5 = local_d4 - iVar5;
            *(undefined8 *)(puVar20 + -8) = 0x5b095f;
            uVar7 = bn_get_bits(local_90,iVar5);
            *(undefined8 *)(puVar20 + -8) = 0x5b0985;
            bn_gather5(local_78.d,lVar26,local_88,(long)(int)((1 << (bVar27 & 0x1f)) - 1U & uVar7));
            pBVar10 = local_88;
            if ((uVar1 & 7) == 0) {
              while (0 < iVar5) {
                iVar5 = iVar5 + -5;
                uVar12 = *local_90;
                *(undefined8 *)(puVar20 + -8) = 0x5b10c4;
                uVar12 = bn_get_bits5(uVar12,iVar5);
                *(undefined8 *)(puVar20 + -0x10) = uVar12;
                *(undefined8 *)(puVar20 + -0x18) = 0x5b10e1;
                bn_power5(local_78.d,local_78.d,pBVar10,ppuVar24,ppuVar14,uVar1);
              }
            }
            else {
              while (0 < iVar5) {
                iVar5 = iVar5 + -5;
                *(undefined8 *)(puVar20 + -8) = 0x5b09bb;
                bn_mul_mont(local_78.d,local_78.d,local_78.d,ppuVar24,ppuVar14,uVar1);
                *(undefined8 *)(puVar20 + -8) = 0x5b09d3;
                bn_mul_mont(local_78.d,local_78.d,local_78.d,ppuVar24,ppuVar14,uVar1);
                *(undefined8 *)(puVar20 + -8) = 0x5b09eb;
                bn_mul_mont(local_78.d,local_78.d,local_78.d,ppuVar24,ppuVar14,uVar1);
                *(undefined8 *)(puVar20 + -8) = 0x5b0a03;
                bn_mul_mont(local_78.d,local_78.d,local_78.d,ppuVar24,ppuVar14,uVar1);
                *(undefined8 *)(puVar20 + -8) = 0x5b0a1b;
                bn_mul_mont(local_78.d,local_78.d,local_78.d,ppuVar24,ppuVar14,uVar1);
                uVar12 = *local_90;
                *(undefined8 *)(puVar20 + -8) = 0x5b0a2c;
                uVar12 = bn_get_bits5(uVar12,iVar5);
                *(undefined8 *)(puVar20 + -0x10) = uVar12;
                *(undefined8 *)(puVar20 + -0x18) = 0x5b0a49;
                bn_mul_mont_gather5(local_78.d,local_78.d,pBVar10,ppuVar24,ppuVar14,uVar1);
              }
            }
            *(undefined8 *)(puVar20 + -8) = 0x5b0a6e;
            uVar7 = bn_from_montgomery(local_78.d,local_78.d,0,ppuVar24,ppuVar14,uVar1);
            *(undefined8 *)(puVar20 + -8) = 0x5b0a7d;
            local_78.top = uVar1;
            bn_correct_top(&local_78);
            if (uVar7 == 0) {
LAB_005b0a86:
              *(undefined8 *)(puVar20 + -8) = 0x5b0aa3;
              iVar5 = bn_from_mont_fixed_top(local_a8,&local_78,local_a0,local_80);
              uVar7 = (uint)(iVar5 != 0);
            }
            else {
              *(undefined8 *)(puVar20 + -8) = 0x5b118f;
              pBVar10 = BN_copy(local_a8,&local_78);
              if (pBVar10 == (BIGNUM *)0x0) goto LAB_005b0c28;
            }
          }
          else {
            *(undefined8 *)(puVar20 + -8) = 0x5b0c00;
            pBVar10 = BN_value_one();
            *(undefined8 *)(puVar20 + -8) = 0x5b0c16;
            iVar5 = bn_to_mont_fixed_top(&local_78,pBVar10,local_a0,local_80);
            if (iVar5 != 0) goto LAB_005b0608;
LAB_005b0c28:
            uVar7 = 0;
          }
          if (local_98 == (BN_MONT_CTX *)0x0) {
            *(undefined8 *)(puVar20 + -8) = 0x5b117b;
            BN_MONT_CTX_free(local_a0);
          }
          *(undefined8 *)(puVar20 + -8) = 0x5b0c49;
          OPENSSL_cleanse(local_88,local_c0);
          *(undefined8 *)(puVar20 + -8) = 0x5b0c61;
          CRYPTO_free(local_d0);
          puVar21 = puVar20;
          goto LAB_005b0ac1;
        }
        lVar17 = bn_wexpand(local_a8,8);
        if (lVar17 == 0) goto LAB_005b0ab0;
        uVar7 = 1;
        RSAZ_512_mod_exp(pBVar10->d,local_88->d,*local_90,param_4->d,local_a0->n0[0],
                         (local_a0->RR).d);
        pBVar10->top = 8;
        pBVar10->neg = 0;
        bn_correct_top(pBVar10);
      }
    }
    else {
LAB_005b0ab0:
      uVar7 = 0;
    }
    puVar21 = auStack_e8;
    if (local_98 == (BN_MONT_CTX *)0x0) {
LAB_005b0bd7:
      BN_MONT_CTX_free(local_a0);
      puVar21 = auStack_e8;
    }
  }
LAB_005b0ac1:
  *(undefined8 *)(puVar21 + -8) = 0x5b0aca;
  BN_CTX_end(local_80);
  puVar22 = puVar21;
LAB_005b0aca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_005b122d;
  __stack_chk_fail_local();
}


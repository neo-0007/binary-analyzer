
ulong ossl_ec_wNAF_mul(EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,ulong param_4,
                      undefined8 *param_5,long *param_6,BN_CTX *param_7)

{
  undefined8 *puVar1;
  char cVar2;
  EC_POINT *dst;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *ptr;
  ulong *ptr_00;
  long *ptr_01;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  void *__dest;
  EC_POINT *pEVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  BIGNUM *pBVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  void *__src;
  ulong uVar23;
  long in_FS_OFFSET;
  undefined8 *local_d8;
  void *local_c0;
  long local_b8;
  ulong local_b0;
  int local_a0;
  ulong local_88;
  EC_POINT *local_80;
  ulong local_78;
  long local_60;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = BN_is_zero(*(undefined8 *)(param_1 + 0x10));
  if ((iVar4 == 0) && (iVar4 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar4 == 0)) {
    if (*(BIGNUM **)(param_1 + 0x10) == param_3) {
LAB_004e6e90:
      if (param_3 == (BIGNUM *)0x0) goto LAB_004e6e9c;
      goto LAB_004e6b81;
    }
    if (param_3 != (BIGNUM *)0x0) {
      if (param_4 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar16 = 0;
          goto LAB_004e75e8;
        }
        goto LAB_004e7b8d;
      }
      goto LAB_004e6e90;
    }
LAB_004e6e9c:
    if (param_4 != 1) goto LAB_004e6b75;
    if (*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)*param_6) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar16 = *param_5;
        param_3 = (BIGNUM *)*param_6;
LAB_004e75e8:
        uVar7 = ossl_ec_scalar_mul_ladder(param_1,param_2,param_3,uVar16,param_7);
        return uVar7;
      }
      goto LAB_004e7b8d;
    }
LAB_004e6ec0:
    local_a0 = 0;
    local_b8 = 0;
    local_60 = 0;
    local_88 = 0;
    local_78 = 0;
    local_80 = (EC_POINT *)0x0;
    local_b0 = param_4;
LAB_004e6bf7:
    iVar4 = (int)local_b0 * 8;
    ptr = (undefined4 *)CRYPTO_malloc(iVar4,"../crypto/ec/ec_mult.c",0x201);
    ptr_00 = (ulong *)CRYPTO_malloc(iVar4,"../crypto/ec/ec_mult.c",0x202);
    ptr_01 = (long *)CRYPTO_malloc(iVar4 + 8,"../crypto/ec/ec_mult.c",0x204);
    local_c0 = CRYPTO_malloc(iVar4,"../crypto/ec/ec_mult.c",0x205);
    if (ptr_01 == (long *)0x0) {
      ERR_new();
      uVar7 = 0;
      ERR_set_debug("../crypto/ec/ec_mult.c",0x20c,"ossl_ec_wNAF_mul");
      ERR_set_error(0x10,0xc0100,0);
      EC_POINT_free((EC_POINT *)0x0);
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
    }
    else {
      *ptr_01 = 0;
      plVar13 = ptr_01;
      if (((ptr == (undefined4 *)0x0) || (ptr_00 == (ulong *)0x0)) || (local_c0 == (void *)0x0)) {
        ERR_new();
        uVar7 = 0;
        ERR_set_debug("../crypto/ec/ec_mult.c",0x20c,"ossl_ec_wNAF_mul");
        ERR_set_error(0x10,0xc0100,0);
        EC_POINT_free((EC_POINT *)0x0);
        CRYPTO_free(ptr);
        CRYPTO_free(ptr_00);
        pvVar9 = (void *)*ptr_01;
        local_d8 = (undefined8 *)0x0;
        if (pvVar9 == (void *)0x0) {
          CRYPTO_free(ptr_01);
          goto LAB_004e6f6a;
        }
LAB_004e7018:
        do {
          CRYPTO_free(pvVar9);
          pvVar9 = (void *)plVar13[1];
          plVar13 = plVar13 + 1;
        } while (pvVar9 != (void *)0x0);
        CRYPTO_free(ptr_01);
        if (local_d8 == (undefined8 *)0x0) goto LAB_004e6f6a;
      }
      else {
        uVar7 = (long)local_a0 + param_4;
        if (uVar7 == 0) {
          local_50 = 0;
          uVar23 = 0;
        }
        else {
          uVar18 = 0;
          local_50 = 0;
          uVar23 = 0;
          puVar22 = ptr_00;
          do {
            pBVar17 = param_3;
            if (uVar18 < param_4) {
              uVar5 = BN_num_bits((BIGNUM *)param_6[uVar18]);
              if (uVar5 < 2000) {
                if (uVar5 < 800) goto LAB_004e6d98;
                local_50 = local_50 + 0x10;
                iVar4 = 5;
                *(undefined8 *)(ptr + uVar18 * 2) = 5;
                ptr_01[uVar18 + 1] = 0;
              }
              else {
                local_50 = local_50 + 0x20;
                iVar4 = 6;
                *(undefined8 *)(ptr + uVar18 * 2) = 6;
                ptr_01[uVar18 + 1] = 0;
              }
LAB_004e6d12:
              pBVar17 = (BIGNUM *)param_6[uVar18];
            }
            else {
              uVar5 = BN_num_bits(param_3);
              if (uVar5 < 2000) {
                if (uVar5 < 800) {
LAB_004e6d98:
                  if (uVar5 < 300) {
                    if (uVar5 < 0x46) {
                      iVar4 = 2 - (uint)(uVar5 < 0x14);
                      lVar11 = 2 - (ulong)(uVar5 < 0x14);
                      lVar8 = lVar11;
                    }
                    else {
                      iVar4 = 3;
                      lVar8 = 4;
                      lVar11 = 3;
                    }
                  }
                  else {
                    iVar4 = 4;
                    lVar8 = 8;
                    lVar11 = 4;
                  }
                  local_50 = local_50 + lVar8;
                  *(long *)(ptr + uVar18 * 2) = lVar11;
                  ptr_01[uVar18 + 1] = 0;
                  if (uVar18 < param_4) goto LAB_004e6d12;
                }
                else {
                  local_50 = local_50 + 0x10;
                  iVar4 = 5;
                  *(undefined8 *)(ptr + uVar18 * 2) = 5;
                  ptr_01[uVar18 + 1] = 0;
                }
              }
              else {
                local_50 = local_50 + 0x20;
                iVar4 = 6;
                *(undefined8 *)(ptr + uVar18 * 2) = 6;
                ptr_01[uVar18 + 1] = 0;
              }
            }
            lVar8 = bn_compute_wNAF(pBVar17,iVar4,puVar22);
            ptr_01[uVar18] = lVar8;
            if (lVar8 == 0) goto LAB_004e6fcd;
            if (uVar23 < *puVar22) {
              uVar23 = *puVar22;
            }
            uVar18 = uVar18 + 1;
            puVar22 = puVar22 + 1;
          } while (uVar7 != uVar18);
        }
        if (local_88 != 0) {
          if (local_b8 == 0) {
            if (local_a0 != 1) {
              ERR_new();
              uVar16 = 0x22a;
              goto LAB_004e7647;
            }
            goto LAB_004e7372;
          }
          local_48 = 0;
          if (local_a0 == 0) {
            uVar16 = *(undefined8 *)(local_b8 + 0x18);
            *(undefined8 *)(ptr + param_4 * 2) = uVar16;
            pvVar9 = (void *)bn_compute_wNAF(param_3,uVar16,&local_48);
            if (pvVar9 != (void *)0x0) {
              if (uVar23 < local_48) {
                if ((local_48 < local_88 * local_78) &&
                   (uVar18 = ((local_78 - 1) + local_48) / local_78, local_b0 = param_4 + uVar18,
                   *(ulong *)(local_b8 + 0x10) < uVar18)) {
                  ERR_new();
                  ERR_set_debug("../crypto/ec/ec_mult.c",0x25e,"ossl_ec_wNAF_mul");
                  ERR_set_error(0x10,0xc0103,0);
                  CRYPTO_free(pvVar9);
                  goto LAB_004e6fcd;
                }
                plVar19 = *(long **)(local_b8 + 0x20);
                if (param_4 < local_b0) {
                  uVar18 = param_4;
                  __src = pvVar9;
                  do {
                    if (uVar18 < local_b0 - 1) {
                      ptr_00[uVar18] = local_78;
                      if (local_48 < local_78) {
                        ERR_new();
                        ERR_set_debug("../crypto/ec/ec_mult.c",0x26d,"ossl_ec_wNAF_mul");
                        ERR_set_error(0x10,0xc0103,0);
                        CRYPTO_free(pvVar9);
                        goto LAB_004e6fcd;
                      }
                      local_48 = local_48 - local_78;
                      uVar15 = ptr_00[uVar18];
                    }
                    else {
                      ptr_00[uVar18] = local_48;
                      uVar15 = local_48;
                    }
                    uVar14 = uVar18 + 1;
                    ptr_01[uVar14] = 0;
                    __dest = CRYPTO_malloc((int)uVar15,"../crypto/ec/ec_mult.c",0x27a);
                    ptr_01[uVar18] = (long)__dest;
                    if (__dest == (void *)0x0) {
                      ERR_new();
                      ERR_set_debug("../crypto/ec/ec_mult.c",0x27c,"ossl_ec_wNAF_mul");
                      ERR_set_error(0x10,0xc0100,0);
                      CRYPTO_free(pvVar9);
                      goto LAB_004e6fcd;
                    }
                    memcpy(__dest,__src,ptr_00[uVar18]);
                    if (uVar23 < ptr_00[uVar18]) {
                      uVar23 = ptr_00[uVar18];
                    }
                    if (*plVar19 == 0) {
                      ERR_new();
                      ERR_set_debug("../crypto/ec/ec_mult.c",0x285,"ossl_ec_wNAF_mul");
                      ERR_set_error(0x10,0xc0103,0);
                      CRYPTO_free(pvVar9);
                      goto LAB_004e6fcd;
                    }
                    __src = (void *)((long)__src + local_78);
                    *(long **)((long)local_c0 + uVar14 * 8 + -8) = plVar19;
                    plVar19 = plVar19 + local_60;
                    uVar18 = uVar14;
                  } while (uVar14 < local_b0);
                }
                CRYPTO_free(pvVar9);
              }
              else {
                local_b0 = param_4 + 1;
                ptr_01[param_4] = (long)pvVar9;
                ptr_01[param_4 + 1] = 0;
                uVar16 = *(undefined8 *)(local_b8 + 0x20);
                ptr_00[param_4] = local_48;
                *(undefined8 *)((long)local_c0 + param_4 * 8) = uVar16;
              }
              goto LAB_004e7372;
            }
          }
          else {
            ERR_new();
            uVar16 = 0x233;
LAB_004e7647:
            ERR_set_debug("../crypto/ec/ec_mult.c",uVar16,"ossl_ec_wNAF_mul");
            ERR_set_error(0x10,0xc0103,0);
          }
LAB_004e6fcd:
          EC_POINT_free((EC_POINT *)0x0);
          CRYPTO_free(ptr);
          CRYPTO_free(ptr_00);
          pvVar9 = (void *)*ptr_01;
          if (pvVar9 == (void *)0x0) {
            uVar7 = 0;
            CRYPTO_free(ptr_01);
            goto LAB_004e6f6a;
          }
          local_d8 = (undefined8 *)0x0;
          uVar7 = 0;
          goto LAB_004e7018;
        }
LAB_004e7372:
        local_d8 = (undefined8 *)CRYPTO_malloc((int)local_50 * 8 + 8,"../crypto/ec/ec_mult.c",0x297)
        ;
        if (local_d8 == (undefined8 *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_mult.c",0x299,"ossl_ec_wNAF_mul");
          ERR_set_error(0x10,0xc0100,0);
          goto LAB_004e6fcd;
        }
        local_d8[local_50] = 0;
        puVar21 = local_d8;
        if (uVar7 != 0) {
          uVar18 = 0;
          puVar20 = ptr;
          do {
            uVar15 = 0;
            *(undefined8 **)((long)local_c0 + uVar18 * 8) = puVar21;
            do {
              pEVar10 = EC_POINT_new(param_1);
              *puVar21 = pEVar10;
              if (pEVar10 == (EC_POINT *)0x0) {
                uVar7 = 0;
                pEVar10 = (EC_POINT *)0x0;
                goto LAB_004e742b;
              }
              uVar15 = uVar15 + 1;
              puVar21 = puVar21 + 1;
            } while (uVar15 < (ulong)(1L << ((char)*puVar20 - 1U & 0x3f)));
            uVar18 = uVar18 + 1;
            puVar20 = puVar20 + 2;
          } while (uVar7 != uVar18);
        }
        if (local_d8 + local_50 == puVar21) {
          pEVar10 = EC_POINT_new(param_1);
          if (pEVar10 != (EC_POINT *)0x0) {
            uVar18 = 0;
            if (uVar7 != 0) {
              do {
                dst = (EC_POINT *)**(undefined8 **)((long)local_c0 + uVar18 * 8);
                if (uVar18 < param_4) {
                  uVar5 = EC_POINT_copy(dst,(EC_POINT *)param_5[uVar18]);
                  if (uVar5 != 0) goto LAB_004e7894;
LAB_004e78c6:
                  uVar7 = (ulong)uVar5;
                  goto LAB_004e742b;
                }
                uVar5 = EC_POINT_copy(dst,local_80);
                if (uVar5 == 0) goto LAB_004e78c6;
LAB_004e7894:
                if (1 < *(ulong *)(ptr + uVar18 * 2)) {
                  uVar5 = EC_POINT_dbl(param_1,pEVar10,
                                       (EC_POINT *)**(undefined8 **)((long)local_c0 + uVar18 * 8),
                                       param_7);
                  if (uVar5 == 0) goto LAB_004e78c6;
                  if (ptr[uVar18 * 2] != 1) {
                    uVar15 = 1;
                    do {
                      lVar8 = *(long *)((long)local_c0 + uVar18 * 8);
                      iVar4 = EC_POINT_add(param_1,*(EC_POINT **)(lVar8 + uVar15 * 8),
                                           *(EC_POINT **)(lVar8 + -8 + uVar15 * 8),pEVar10,param_7);
                      if (iVar4 == 0) {
                        uVar5 = 0;
                        goto LAB_004e78c6;
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < (ulong)(1L << ((char)ptr[uVar18 * 2] - 1U & 0x3f)));
                  }
                }
                uVar18 = uVar18 + 1;
              } while (uVar7 != uVar18);
            }
            if (*(code **)(*(long *)param_1 + 0xd8) != (code *)0x0) {
              uVar5 = (**(code **)(*(long *)param_1 + 0xd8))(param_1,local_50,local_d8,param_7);
              uVar7 = (ulong)uVar5;
              if (uVar5 != 0) {
                local_a0 = (int)uVar23 + -1;
                if (-1 < local_a0) {
                  uVar5 = 0;
                  uVar7 = (ulong)local_a0;
                  bVar3 = true;
                  do {
                    uVar23 = 0;
                    if (local_b0 != 0) {
                      do {
                        if (uVar7 < ptr_00[uVar23]) {
                          cVar2 = *(char *)(ptr_01[uVar23] + uVar7);
                          if (cVar2 != '\0') {
                            uVar6 = (uint)(byte)-cVar2;
                            if ('\0' < cVar2) {
                              uVar6 = (int)cVar2;
                            }
                            if ((uint)(int)cVar2 >> 0x1f != uVar5) {
                              if ((bVar3) ||
                                 (iVar4 = EC_POINT_invert(param_1,param_2,param_7), iVar4 != 0)) {
                                uVar5 = uVar5 ^ 1;
                                goto LAB_004e7aec;
                              }
                              uVar6 = 0;
LAB_004e7b1f:
                              uVar7 = (ulong)uVar6;
                              goto LAB_004e742b;
                            }
LAB_004e7aec:
                            lVar8 = *(long *)((long)local_c0 + uVar23 * 8);
                            lVar11 = (long)((int)(uVar6 & 0xff) >> 1);
                            if (bVar3) {
                              uVar6 = EC_POINT_copy(param_2,*(EC_POINT **)(lVar8 + lVar11 * 8));
                              if (uVar6 == 0) goto LAB_004e7b1f;
                              iVar4 = ossl_ec_point_blind_coordinates(param_1,param_2,param_7);
                              if (iVar4 == 0) {
                                uVar7 = 0;
                                ERR_new();
                                ERR_set_debug("../crypto/ec/ec_mult.c",0x2fa,"ossl_ec_wNAF_mul");
                                ERR_set_error(0x10,0xa3,0);
                                goto LAB_004e742b;
                              }
                              bVar3 = false;
                            }
                            else {
                              uVar6 = EC_POINT_add(param_1,param_2,param_2,
                                                   *(EC_POINT **)(lVar8 + lVar11 * 8),param_7);
                              if (uVar6 == 0) goto LAB_004e7b1f;
                            }
                          }
                        }
                        uVar23 = uVar23 + 1;
                      } while (local_b0 != uVar23);
                    }
                    local_a0 = local_a0 + -1;
                    if (local_a0 == -1) {
                      if (bVar3) break;
                      uVar7 = 1;
                      if (uVar5 != 0) {
                        iVar4 = EC_POINT_invert(param_1,param_2,param_7);
                        uVar7 = (ulong)(iVar4 != 0);
                      }
                      goto LAB_004e742b;
                    }
                    if ((!bVar3) &&
                       (iVar4 = EC_POINT_dbl(param_1,param_2,param_2,param_7), iVar4 == 0))
                    goto LAB_004e7bf2;
                    uVar7 = uVar7 - 1;
                  } while( true );
                }
                iVar4 = EC_POINT_set_to_infinity(param_1,param_2);
                uVar7 = (ulong)(iVar4 != 0);
              }
              goto LAB_004e742b;
            }
          }
          uVar7 = 0;
        }
        else {
          ERR_new();
          uVar7 = 0;
          ERR_set_debug("../crypto/ec/ec_mult.c",0x2aa,"ossl_ec_wNAF_mul");
          ERR_set_error(0x10,0xc0103,0);
          pEVar10 = (EC_POINT *)0x0;
        }
LAB_004e742b:
        EC_POINT_free(pEVar10);
        CRYPTO_free(ptr);
        CRYPTO_free(ptr_00);
        pvVar9 = (void *)*ptr_01;
        if (pvVar9 != (void *)0x0) goto LAB_004e7018;
        CRYPTO_free(ptr_01);
      }
      pEVar10 = (EC_POINT *)*local_d8;
      puVar21 = local_d8;
      while (pEVar10 != (EC_POINT *)0x0) {
        EC_POINT_clear_free(pEVar10);
        puVar1 = puVar21 + 1;
        puVar21 = puVar21 + 1;
        pEVar10 = (EC_POINT *)*puVar1;
      }
      CRYPTO_free(local_d8);
    }
  }
  else {
LAB_004e6b75:
    if (param_3 == (BIGNUM *)0x0) goto LAB_004e6ec0;
LAB_004e6b81:
    local_80 = EC_GROUP_get0_generator(param_1);
    if (local_80 != (EC_POINT *)0x0) {
      local_b8 = *(long *)(param_1 + 0xa0);
      if (local_b8 == 0) {
        local_a0 = 1;
        local_60 = 0;
        local_88 = 1;
        local_b0 = param_4 + 1;
        local_78 = 0;
      }
      else if (*(long *)(local_b8 + 0x10) == 0) {
        local_60 = 0;
        local_a0 = 1;
        local_b8 = 0;
        local_b0 = param_4 + 1;
        local_88 = 1;
        local_78 = 0;
      }
      else {
        iVar4 = EC_POINT_cmp(param_1,local_80,(EC_POINT *)**(undefined8 **)(local_b8 + 0x20),param_7
                            );
        if (iVar4 == 0) {
          local_78 = *(ulong *)(local_b8 + 8);
          iVar4 = BN_num_bits(param_3);
          local_88 = *(ulong *)(local_b8 + 0x10);
          bVar12 = (char)*(undefined8 *)(local_b8 + 0x18) - 1;
          if (*(long *)(local_b8 + 0x28) != local_88 << (bVar12 & 0x3f)) {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_mult.c",499,"ossl_ec_wNAF_mul");
            ERR_set_error(0x10,0xc0103,0);
            goto LAB_004e758b;
          }
          uVar7 = (ulong)(long)iVar4 / local_78 + 1;
          if (uVar7 <= local_88) {
            local_88 = uVar7;
          }
          local_60 = 1L << (bVar12 & 0x3f);
          local_b0 = local_88 + param_4;
          local_a0 = 0;
        }
        else {
          local_a0 = 1;
          local_b8 = 0;
          local_60 = 0;
          local_b0 = param_4 + 1;
          local_88 = 1;
          local_78 = 0;
        }
      }
      goto LAB_004e6bf7;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_mult.c",0x1d7,"ossl_ec_wNAF_mul");
    ERR_set_error(0x10,0x71,0);
LAB_004e758b:
    uVar7 = 0;
    EC_POINT_free((EC_POINT *)0x0);
    CRYPTO_free((void *)0x0);
    CRYPTO_free((void *)0x0);
    local_c0 = (void *)0x0;
  }
LAB_004e6f6a:
  CRYPTO_free(local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_004e7b8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_004e7bf2:
  uVar7 = 0;
  goto LAB_004e742b;
}


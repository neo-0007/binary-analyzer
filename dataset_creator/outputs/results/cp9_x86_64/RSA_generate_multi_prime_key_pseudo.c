
ulong RSA_generate_multi_prime_key
                (long param_1,ulong param_2,int param_3,BIGNUM *param_4,BN_GENCB *param_5)

{
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  BIGNUM *pBVar7;
  BIGNUM *ret;
  BIGNUM *r;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  BN_CTX *local_b0;
  int local_90;
  int local_8c;
  int local_80;
  int local_6c;
  undefined8 *local_68;
  int local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00556014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return uVar6;
    }
    goto LAB_00556749;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    if ((param_3 == 2) && (0x7ff < (int)param_2)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = ossl_rsa_sp800_56b_generate_key(param_1,param_2,param_4,param_5);
        return uVar6;
      }
      goto LAB_00556749;
    }
    if ((int)param_2 < 0x200) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_gen.c",0x5a,"rsa_multiprime_keygen");
      uVar13 = 0x78;
    }
    else {
      if (param_4 != (BIGNUM *)0x0) {
        uVar1 = ossl_rsa_check_public_exponent(param_4);
        param_2 = param_2 & 0xffffffff;
        uVar6 = (ulong)uVar1;
        if (uVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_gen.c",0x60,"rsa_multiprime_keygen");
          ERR_set_error(4,0xb2,0);
          goto LAB_00556031;
        }
      }
      if (1 < param_3) {
        iVar2 = ossl_rsa_multip_cap(param_2 & 0xffffffff);
        if (param_3 <= iVar2) {
          local_b0 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
          if (local_b0 != (BN_CTX *)0x0) {
            BN_CTX_start(local_b0);
            pBVar7 = BN_CTX_get(local_b0);
            ret = BN_CTX_get(local_b0);
            r = BN_CTX_get(local_b0);
            if (r != (BIGNUM *)0x0) {
              lVar12 = 0;
              do {
                local_58[lVar12] =
                     (uint)((int)lVar12 < (int)param_2 % param_3) + (int)param_2 / param_3;
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < param_3);
              *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
              if (*(long *)(param_1 + 0x28) == 0) {
                pBVar8 = BN_new();
                *(BIGNUM **)(param_1 + 0x28) = pBVar8;
                if (pBVar8 == (BIGNUM *)0x0) goto LAB_005562b0;
              }
              lVar12 = *(long *)(param_1 + 0x38);
              if (lVar12 == 0) {
                lVar12 = BN_secure_new();
                *(long *)(param_1 + 0x38) = lVar12;
                if (lVar12 == 0) goto LAB_005562b0;
              }
              BN_set_flags(lVar12,4);
              if (*(long *)(param_1 + 0x30) == 0) {
                pBVar8 = BN_new();
                *(BIGNUM **)(param_1 + 0x30) = pBVar8;
                if (pBVar8 == (BIGNUM *)0x0) goto LAB_005562b0;
              }
              lVar12 = *(long *)(param_1 + 0x40);
              if (lVar12 == 0) {
                lVar12 = BN_secure_new();
                *(long *)(param_1 + 0x40) = lVar12;
                if (lVar12 == 0) goto LAB_005562b0;
              }
              BN_set_flags(lVar12,4);
              lVar12 = *(long *)(param_1 + 0x48);
              if (lVar12 == 0) {
                lVar12 = BN_secure_new();
                *(long *)(param_1 + 0x48) = lVar12;
                if (lVar12 == 0) goto LAB_005562b0;
              }
              BN_set_flags(lVar12,4);
              lVar12 = *(long *)(param_1 + 0x50);
              if (lVar12 == 0) {
                lVar12 = BN_secure_new();
                *(long *)(param_1 + 0x50) = lVar12;
                if (lVar12 == 0) goto LAB_005562b0;
              }
              BN_set_flags(lVar12,4);
              lVar12 = *(long *)(param_1 + 0x58);
              if (lVar12 == 0) {
                lVar12 = BN_secure_new();
                *(long *)(param_1 + 0x58) = lVar12;
                if (lVar12 == 0) goto LAB_005562b0;
              }
              BN_set_flags(lVar12,4);
              lVar12 = *(long *)(param_1 + 0x60);
              if (lVar12 == 0) {
                lVar12 = BN_secure_new();
                *(long *)(param_1 + 0x60) = lVar12;
                if (lVar12 == 0) goto LAB_005562b0;
              }
              BN_set_flags(lVar12,4);
              if (param_3 == 2) {
                local_68 = (undefined8 *)0x0;
                lVar12 = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0x10) = 1;
                lVar12 = OPENSSL_sk_new_reserve(0,param_3 + -2);
                if (lVar12 == 0) goto LAB_005562b0;
                if (*(long *)(param_1 + 0x88) != 0) {
                  OPENSSL_sk_pop_free(*(long *)(param_1 + 0x88),ossl_rsa_multip_info_free);
                }
                *(long *)(param_1 + 0x88) = lVar12;
                iVar2 = 2;
                do {
                  local_68 = (undefined8 *)ossl_rsa_multip_info_new();
                  if (local_68 == (undefined8 *)0x0) goto LAB_005562b0;
                  iVar2 = iVar2 + 1;
                  OPENSSL_sk_push(lVar12,local_68);
                } while (iVar2 < param_3);
              }
              pBVar8 = BN_copy(*(BIGNUM **)(param_1 + 0x30),param_4);
              if (pBVar8 != (BIGNUM *)0x0) {
                local_8c = 0;
                local_6c = 0;
                iVar2 = 0;
LAB_00556457:
                if (iVar2 == 0) {
                  pBVar8 = *(BIGNUM **)(param_1 + 0x40);
                }
                else if (iVar2 == 1) {
                  pBVar8 = *(BIGNUM **)(param_1 + 0x48);
                }
                else {
                  local_68 = (undefined8 *)OPENSSL_sk_value(lVar12,iVar2 + -2);
                  pBVar8 = (BIGNUM *)*local_68;
                }
                BN_set_flags(pBVar8,4);
                local_60 = 0;
                iVar5 = local_58[iVar2];
                local_80 = 0;
                local_6c = local_6c + iVar5;
                local_90 = iVar5;
LAB_00556497:
                iVar3 = BN_generate_prime_ex2(pBVar8,local_90,0,0,0,param_5,local_b0);
                if (iVar3 == 0) goto LAB_005562b0;
                iVar3 = 0;
                if (iVar2 != 0) {
                  do {
                    if (iVar3 == 0) {
                      pBVar9 = *(BIGNUM **)(param_1 + 0x40);
                    }
                    else if (iVar3 == 1) {
                      pBVar9 = *(BIGNUM **)(param_1 + 0x48);
                    }
                    else {
                      puVar11 = (undefined8 *)OPENSSL_sk_value(lVar12,iVar3 + -2);
                      pBVar9 = (BIGNUM *)*puVar11;
                    }
                    iVar4 = BN_cmp(pBVar8,pBVar9);
                    if (iVar4 == 0) goto LAB_00556497;
                    iVar3 = iVar3 + 1;
                  } while (iVar3 != iVar2);
                }
                pBVar9 = BN_value_one();
                iVar3 = BN_sub(r,pBVar8,pBVar9);
                if (iVar3 == 0) goto LAB_005562b0;
                ERR_set_mark();
                BN_set_flags(r,4);
                pBVar9 = BN_mod_inverse(ret,r,*(BIGNUM **)(param_1 + 0x30),local_b0);
                if (pBVar9 == (BIGNUM *)0x0) {
                  uVar6 = ERR_peek_last_error();
                  if ((((uVar6 & 0x80000000) != 0) || ((char)(uVar6 >> 0x17) != '\x03')) ||
                     (((uint)uVar6 & 0x7fffff) != 0x6c)) goto LAB_005562b0;
                  ERR_pop_to_mark();
                  iVar3 = BN_GENCB_call(param_5,2,local_8c);
                  local_8c = local_8c + 1;
                  if (iVar3 == 0) goto LAB_005562b0;
                  goto LAB_00556497;
                }
                if (iVar2 == 1) {
                  iVar3 = BN_mul(ret,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),
                                 local_b0);
                }
                else {
                  if (iVar2 == 0) {
                    iVar2 = BN_GENCB_call(param_5,3,0);
                    if (iVar2 == 0) goto LAB_005562b0;
                    iVar2 = 0;
                    goto LAB_00556682;
                  }
                  iVar3 = BN_mul(ret,*(BIGNUM **)(param_1 + 0x28),pBVar8,local_b0);
                }
                if ((iVar3 == 0) || (iVar3 = BN_rshift(r,ret,local_6c + -4), iVar3 == 0))
                goto LAB_005562b0;
                uVar6 = BN_get_word(r);
                if (uVar6 - 9 < 7) {
                  pBVar8 = *(BIGNUM **)(param_1 + 0x28);
                  if (1 < iVar2) {
                    pBVar8 = BN_copy((BIGNUM *)local_68[3],pBVar8);
                    if (pBVar8 == (BIGNUM *)0x0) goto LAB_005562b0;
                    pBVar8 = *(BIGNUM **)(param_1 + 0x28);
                  }
                  pBVar8 = BN_copy(pBVar8,ret);
                  if ((pBVar8 == (BIGNUM *)0x0) ||
                     (iVar5 = BN_GENCB_call(param_5,3,iVar2), iVar5 == 0)) goto LAB_005562b0;
                  iVar2 = iVar2 + 1;
                  if (iVar2 < param_3) goto LAB_00556457;
                  iVar2 = BN_cmp(*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48));
                  if (iVar2 < 0) {
                    uVar13 = *(undefined8 *)(param_1 + 0x48);
                    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
                    *(undefined8 *)(param_1 + 0x40) = uVar13;
                  }
                  pBVar8 = BN_value_one();
                  iVar2 = BN_sub(ret,*(BIGNUM **)(param_1 + 0x40),pBVar8);
                  if (iVar2 == 0) goto LAB_005562b0;
                  pBVar8 = BN_value_one();
                  iVar2 = BN_sub(r,*(BIGNUM **)(param_1 + 0x48),pBVar8);
                  if ((iVar2 == 0) || (iVar2 = BN_mul(pBVar7,ret,r,local_b0), iVar2 == 0))
                  goto LAB_005562b0;
                  iVar2 = 2;
                  goto LAB_005568bc;
                }
                iVar3 = BN_GENCB_call(param_5,2,local_8c);
                if (iVar3 == 0) goto LAB_005562b0;
                if (param_3 == 5) {
                  if (uVar6 < 9) {
                    local_80 = local_80 + 1;
                    local_90 = local_80 + iVar5;
                  }
                  else {
                    local_80 = local_80 + -1;
                    local_90 = local_80 + iVar5;
                  }
                }
                else if (local_60 == 4) goto LAB_00556674;
                local_60 = local_60 + 1;
                local_8c = local_8c + 1;
                goto LAB_00556497;
              }
            }
          }
          goto LAB_005562b0;
        }
      }
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_gen.c",0x66,"rsa_multiprime_keygen");
      uVar13 = 0xa5;
    }
    uVar6 = 0;
    ERR_set_error(4,uVar13,0);
    local_b0 = (BN_CTX *)0x0;
    goto LAB_005562e3;
  }
  uVar6 = 0;
  if (param_3 == 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0055608b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
      return uVar6;
    }
    goto LAB_00556749;
  }
  goto LAB_00556031;
LAB_005568bc:
  if (param_3 <= iVar2) goto code_r0x005568c1;
  puVar11 = (undefined8 *)OPENSSL_sk_value(lVar12,iVar2 + -2);
  pBVar8 = BN_value_one();
  iVar5 = BN_sub((BIGNUM *)puVar11[1],(BIGNUM *)*puVar11,pBVar8);
  if ((iVar5 == 0) || (iVar5 = BN_mul(pBVar7,pBVar7,(BIGNUM *)puVar11[1],local_b0), iVar5 == 0))
  goto LAB_005562b0;
  iVar2 = iVar2 + 1;
  goto LAB_005568bc;
LAB_00556674:
  local_6c = 0;
  iVar2 = -1;
  local_8c = local_8c + 1;
LAB_00556682:
  iVar2 = iVar2 + 1;
  goto LAB_00556457;
code_r0x005568c1:
  pBVar8 = BN_new();
  if (pBVar8 != (BIGNUM *)0x0) {
    BN_with_flags(pBVar8,pBVar7,4);
    pBVar7 = BN_mod_inverse(*(BIGNUM **)(param_1 + 0x38),*(BIGNUM **)(param_1 + 0x30),pBVar8,
                            local_b0);
    if (pBVar7 == (BIGNUM *)0x0) {
LAB_00556a6b:
      BN_free(pBVar8);
    }
    else {
      BN_free(pBVar8);
      pBVar7 = BN_new();
      if (pBVar7 != (BIGNUM *)0x0) {
        BN_with_flags(pBVar7,*(undefined8 *)(param_1 + 0x38),4);
        iVar2 = BN_div((BIGNUM *)0x0,*(BIGNUM **)(param_1 + 0x50),pBVar7,ret,local_b0);
        if ((iVar2 == 0) ||
           (iVar2 = BN_div((BIGNUM *)0x0,*(BIGNUM **)(param_1 + 0x58),pBVar7,r,local_b0), iVar2 == 0
           )) {
LAB_00556a75:
          BN_free(pBVar7);
        }
        else {
          for (iVar2 = 2; iVar2 < param_3; iVar2 = iVar2 + 1) {
            lVar10 = OPENSSL_sk_value(lVar12,iVar2 + -2);
            iVar5 = BN_div((BIGNUM *)0x0,*(BIGNUM **)(lVar10 + 8),pBVar7,*(BIGNUM **)(lVar10 + 8),
                           local_b0);
            if (iVar5 == 0) goto LAB_00556a75;
          }
          BN_free(pBVar7);
          pBVar8 = BN_new();
          if (pBVar8 != (BIGNUM *)0x0) {
            iVar2 = 2;
            BN_with_flags(pBVar8,*(undefined8 *)(param_1 + 0x40),4);
            pBVar7 = BN_mod_inverse(*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_1 + 0x48),pBVar8
                                    ,local_b0);
            if (pBVar7 == (BIGNUM *)0x0) goto LAB_00556a6b;
            for (; iVar2 < param_3; iVar2 = iVar2 + 1) {
              puVar11 = (undefined8 *)OPENSSL_sk_value(lVar12,iVar2 + -2);
              BN_with_flags(pBVar8,*puVar11,4);
              pBVar7 = BN_mod_inverse((BIGNUM *)puVar11[2],(BIGNUM *)puVar11[3],pBVar8,local_b0);
              if (pBVar7 == (BIGNUM *)0x0) goto LAB_00556a6b;
            }
            uVar6 = 1;
            BN_free(pBVar8);
            goto LAB_005562e3;
          }
        }
      }
    }
  }
LAB_005562b0:
  ERR_new();
  uVar6 = 0;
  ERR_set_debug("../crypto/rsa/rsa_gen.c",0x19f,"rsa_multiprime_keygen");
  ERR_set_error(4,0x80003,0);
LAB_005562e3:
  BN_CTX_end(local_b0);
  BN_CTX_free(local_b0);
LAB_00556031:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00556749:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


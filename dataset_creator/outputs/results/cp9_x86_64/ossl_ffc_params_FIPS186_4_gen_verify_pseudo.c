
int ossl_ffc_params_FIPS186_4_gen_verify
              (undefined8 param_1,long *param_2,uint param_3,int param_4,ulong param_5,ulong param_6
              ,uint *param_7,BN_GENCB *param_8)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  EVP_MD *type;
  long lVar8;
  BN_CTX *ctx;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  BIGNUM *dv;
  BIGNUM *pBVar11;
  BIGNUM *ret;
  size_t count;
  BIGNUM *a;
  ulong uVar12;
  undefined8 uVar13;
  EVP_MD_CTX *ctx_00;
  BN_MONT_CTX *mont;
  byte *s;
  char *pcVar14;
  long in_FS_OFFSET;
  void *local_158;
  int local_150;
  ushort local_148;
  byte local_140;
  void *local_128;
  void *local_120;
  BIGNUM *local_118;
  BIGNUM *local_c8;
  uint local_c0;
  int local_bc;
  int local_90;
  undefined4 local_8c;
  byte local_88;
  ushort local_87;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  local_90 = 0;
  local_8c = 0;
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_2 + 8);
  }
  lVar8 = param_2[9];
  *param_7 = 0;
  if (lVar8 == 0) {
    if (param_6 == 0) {
      pcVar14 = "SHA-256";
      param_6 = (-(ulong)(param_5 < 0x800) & 0xffffffffffffffa0) + 0x100;
      if (param_5 < 0x800) {
        pcVar14 = "SHA1";
      }
LAB_005352de:
      type = (EVP_MD *)EVP_MD_fetch(param_1,pcVar14,param_2[10]);
      goto LAB_0053510a;
    }
    if (param_6 == 0xa0) {
      pcVar14 = "SHA1";
      goto LAB_005352de;
    }
    pcVar14 = "SHA-224";
    if (param_6 == 0xe0) goto LAB_005352de;
    if (param_6 == 0x100) {
      pcVar14 = "SHA-256";
      goto LAB_005352de;
    }
    type = (EVP_MD *)0x0;
    *param_7 = 0x20;
    lVar8 = 0;
LAB_0053526a:
    lVar2 = param_2[4];
  }
  else {
    type = (EVP_MD *)EVP_MD_fetch(param_1,lVar8,param_2[10]);
LAB_0053510a:
    if ((type == (EVP_MD *)0x0) || (iVar4 = EVP_MD_get_size(), iVar4 < 1)) {
      lVar8 = 0;
      goto LAB_0053526a;
    }
    if (param_6 == 0) {
      param_6 = (long)(iVar4 * 8);
    }
    if (param_6 < param_5) {
      if (param_4 == 1) {
        if (((param_5 == 0x400) && (param_6 == 0xa0)) ||
           ((param_5 == 0x800 && ((param_6 - 0xe0 & 0xffffffffffffffdf) == 0)))) {
LAB_0053535c:
          lVar8 = EVP_MD_CTX_new();
          if ((lVar8 == 0) || (ctx = (BN_CTX *)BN_CTX_new_ex(), ctx == (BN_CTX *)0x0))
          goto LAB_0053526a;
          BN_CTX_start(ctx);
          pBVar9 = BN_CTX_get(ctx);
          pBVar10 = BN_CTX_get(ctx);
          dv = BN_CTX_get(ctx);
          pBVar11 = BN_CTX_get(ctx);
          ret = BN_CTX_get(ctx);
          if (ret == (BIGNUM *)0x0) {
            local_158 = (void *)param_2[4];
            iVar5 = 0;
            local_128 = (void *)0x0;
            local_120 = (void *)0x0;
            mont = (BN_MONT_CTX *)0x0;
LAB_00535480:
            if (local_120 == local_158) goto LAB_00535718;
            CRYPTO_free(local_120);
            CRYPTO_free(local_128);
          }
          else {
            count = (long)iVar4;
            if (param_2[5] != 0) {
              count = param_2[5];
            }
            local_158 = (void *)param_2[4];
            if (local_158 != (void *)0x0) {
              local_120 = local_158;
              if (param_3 == 0) {
                if (((uVar1 & 1) == 0) || (-1 < (int)param_2[6])) goto LAB_00535569;
LAB_00535763:
                mont = (BN_MONT_CTX *)0x0;
                iVar5 = 0;
                local_128 = (void *)0x0;
                *param_7 = 0x200;
              }
              else {
LAB_00535443:
                local_118 = (BIGNUM *)*param_2;
                if ((local_118 == (BIGNUM *)0x0) == (param_2[1] == 0)) goto LAB_0053558a;
                mont = (BN_MONT_CTX *)0x0;
                iVar5 = 0;
                local_128 = (void *)0x0;
                *param_7 = 0x800;
              }
              goto LAB_00535480;
            }
            if (param_3 != 0) {
              local_120 = (void *)0x0;
              goto LAB_00535443;
            }
            local_120 = (void *)0x0;
            if ((uVar1 & 1) != 0) goto LAB_00535763;
LAB_00535569:
            if (((uVar1 & 2) != 0) && (param_2[2] == 0)) {
              mont = (BN_MONT_CTX *)0x0;
              iVar5 = 0;
              *param_7 = 0x400;
              local_128 = (void *)0x0;
              goto LAB_00535480;
            }
            local_118 = (BIGNUM *)*param_2;
LAB_0053558a:
            if ((local_118 != (BIGNUM *)0x0) && ((uVar1 & 1) == 0)) {
              local_c8 = (BIGNUM *)param_2[1];
              pcVar14 = "../crypto/ffc/ffc_params_generate.c";
              local_128 = (void *)0x0;
LAB_00535a81:
              mont = BN_MONT_CTX_new();
              if (mont == (BN_MONT_CTX *)0x0) goto LAB_00535a52;
              iVar5 = BN_MONT_CTX_set(mont,local_118,ctx);
              if ((iVar5 != 0) &&
                 (((uVar1 & 2) == 0 ||
                  (iVar5 = ossl_ffc_params_validate_unverifiable_g
                                     (ctx,mont,local_118,local_c8,param_2[2],ret,param_7),
                  iVar5 != 0)))) {
                pBVar11 = BN_value_one();
                iVar5 = BN_sub(pBVar10,local_118,pBVar11);
                if ((iVar5 != 0) &&
                   (iVar5 = BN_div(dv,(BIGNUM *)0x0,pBVar10,local_c8,ctx), iVar5 != 0)) {
                  if ((local_120 != (void *)0x0) && (lVar2 = param_2[7], (int)lVar2 != -1)) {
                    iVar4 = EVP_MD_get_size(type);
                    if ((0 < iVar4) &&
                       (ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new(), ctx_00 != (EVP_MD_CTX *)0x0)) {
                      iVar5 = 1;
                      while( true ) {
                        local_140 = (byte)(int)lVar2;
                        local_88 = local_140;
                        local_148 = (ushort)iVar5;
                        local_87 = local_148 << 8 | local_148 >> 8;
                        iVar7 = EVP_DigestInit_ex(ctx_00,type,(ENGINE *)0x0);
                        if (((iVar7 == 0) ||
                            (iVar7 = EVP_DigestUpdate(ctx_00,local_120,count), iVar7 == 0)) ||
                           (iVar7 = EVP_DigestUpdate(ctx_00,&ggen_0,4), iVar7 == 0)) break;
                        iVar7 = EVP_DigestUpdate(ctx_00,&local_88,3);
                        if (((iVar7 == 0) ||
                            (iVar7 = EVP_DigestFinal_ex(ctx_00,&local_88,(uint *)0x0), iVar7 == 0))
                           || ((pBVar10 = BN_bin2bn(&local_88,iVar4,ret), pBVar10 == (BIGNUM *)0x0
                               || (iVar7 = BN_mod_exp_mont(pBVar9,ret,dv,local_118,ctx,mont),
                                  iVar7 == 0)))) break;
                        pBVar10 = BN_value_one();
                        iVar7 = BN_cmp(pBVar9,pBVar10);
                        if (0 < iVar7) {
                          EVP_MD_CTX_free(ctx_00);
                          if (param_3 != 0) {
                            local_c0 = 1;
                            goto LAB_0053606d;
                          }
                          iVar4 = BN_cmp(pBVar9,(BIGNUM *)param_2[2]);
                          local_c0 = 1;
                          if (iVar4 == 0) goto LAB_00535d8c;
                          iVar5 = 0;
                          *param_7 = 0x8000;
                          local_158 = (void *)param_2[4];
                          goto LAB_00535480;
                        }
                        iVar5 = iVar5 + 1;
                        if (iVar5 == 0x10000) break;
                      }
                      EVP_MD_CTX_free(ctx_00);
                    }
                    iVar5 = 0;
                    *param_7 = 0x400;
                    local_158 = (void *)param_2[4];
                    goto LAB_00535480;
                  }
                  local_c0 = param_3;
                  if (param_3 == 0) {
LAB_00535d8c:
                    iVar5 = BN_GENCB_call(param_8,3,1);
                    if (iVar5 != 0) {
LAB_00535db9:
                      iVar5 = ((local_c0 ^ 1) & uVar1 >> 1 & 1) + 1;
                    }
                  }
                  else {
                    iVar4 = generate_unverifiable_g
                                      (ctx,mont,pBVar9,ret,local_118,dv,pBVar10,&local_8c,ctx,
                                       pcVar14);
                    local_c0 = 0;
                    if (iVar4 == 0) {
                      iVar5 = 0;
                    }
                    else {
LAB_0053606d:
                      iVar5 = BN_GENCB_call(param_8,3,1);
                      if (iVar5 != 0) {
                        if ((BIGNUM *)*param_2 != local_118) {
                          BN_free((BIGNUM *)*param_2);
                          pBVar10 = BN_dup(local_118);
                          *param_2 = (long)pBVar10;
                        }
                        if ((BIGNUM *)param_2[1] != local_c8) {
                          BN_free((BIGNUM *)param_2[1]);
                          pBVar10 = BN_dup(local_c8);
                          param_2[1] = (long)pBVar10;
                        }
                        if ((BIGNUM *)param_2[2] != pBVar9) {
                          BN_free((BIGNUM *)param_2[2]);
                          pBVar9 = BN_dup(pBVar9);
                          param_2[2] = (long)pBVar9;
                        }
                        if (((*param_2 == 0) || (param_2[1] == 0)) || (param_2[2] == 0)) {
                          local_158 = (void *)param_2[4];
                          iVar5 = 0;
                          goto LAB_00535480;
                        }
                        iVar5 = ossl_ffc_params_set_validate_params
                                          (param_2,local_120,count,local_90);
                        if (iVar5 != 0) {
                          *(undefined4 *)((long)param_2 + 0x3c) = local_8c;
                          goto LAB_00535db9;
                        }
                      }
                    }
                  }
                }
              }
              local_158 = (void *)param_2[4];
              goto LAB_00535480;
            }
            local_118 = BN_CTX_get(ctx);
            local_c8 = BN_CTX_get(ctx);
            if (local_c8 == (BIGNUM *)0x0) {
LAB_005355f2:
              local_158 = (void *)param_2[4];
              mont = (BN_MONT_CTX *)0x0;
              iVar5 = 0;
              local_128 = (void *)0x0;
              goto LAB_00535480;
            }
            if (count << 3 < param_6) {
              *param_7 = 0x100;
              goto LAB_005355f2;
            }
            local_128 = CRYPTO_malloc((int)count,"../crypto/ffc/ffc_params_generate.c",0x283);
            if (local_128 == (void *)0x0) {
LAB_00535a52:
              local_158 = (void *)param_2[4];
              mont = (BN_MONT_CTX *)0x0;
              iVar5 = 0;
              goto LAB_00535480;
            }
            if (local_120 == (void *)0x0) {
              if (param_3 != 0) {
                local_120 = CRYPTO_malloc((int)count,"../crypto/ffc/ffc_params_generate.c",0x28e);
                if (local_120 != (void *)0x0) {
                  iVar5 = (int)param_5;
                  local_bc = iVar5 * 4 + -1;
                  goto LAB_00535835;
                }
                goto LAB_00535a52;
              }
              mont = (BN_MONT_CTX *)0x0;
              iVar5 = 0;
              *param_7 = 0x200;
              local_158 = (void *)param_2[4];
              goto LAB_00535480;
            }
            iVar5 = (int)param_5;
            local_bc = iVar5 * 4 + -1;
            if ((param_3 == 0) &&
               (bVar3 = local_bc < (int)param_2[6], local_bc = (int)param_2[6], bVar3)) {
              iVar5 = 0;
              mont = (BN_MONT_CTX *)0x0;
              *param_7 = 0x1000;
              local_158 = (void *)param_2[4];
              goto LAB_00535480;
            }
LAB_00535835:
            pcVar14 = "../crypto/ffc/ffc_params_generate.c";
            a = BN_value_one();
            iVar5 = BN_lshift(pBVar11,a,iVar5 + -1);
            if (iVar5 == 0) {
LAB_00535e68:
              local_158 = (void *)param_2[4];
              mont = (BN_MONT_CTX *)0x0;
              goto LAB_00535480;
            }
            local_150 = 0;
            uVar12 = param_5 - 1;
            iVar7 = (int)(param_6 >> 3);
            local_158 = (void *)param_2[4];
            do {
              iVar5 = EVP_MD_get_size(type);
              uVar13 = ossl_bn_get_libctx(ctx);
              while( true ) {
                iVar6 = BN_GENCB_call(param_8,0,local_150);
                if ((iVar6 == 0) ||
                   (((local_158 != local_120 &&
                     (iVar6 = RAND_bytes_ex(uVar13,local_120,count), iVar6 < 0)) ||
                    (iVar6 = EVP_Digest(local_120,count,&local_88,(uint *)0x0,type,(ENGINE *)0x0),
                    iVar6 == 0)))) goto LAB_00535a52;
                if (iVar7 < iVar5) {
                  s = &local_88 + ((long)iVar5 - (long)iVar7);
                }
                else {
                  s = &local_88;
                  if (iVar5 < iVar7) {
                    memset(&local_88 + iVar5,0,(long)(iVar7 - iVar5));
                  }
                }
                *s = *s | 0x80;
                s[(long)iVar7 + -1] = s[(long)iVar7 + -1] | 1;
                pBVar11 = BN_bin2bn(s,iVar7,local_c8);
                if (pBVar11 == (BIGNUM *)0x0) goto LAB_00535a52;
                iVar6 = BN_check_prime(local_c8,ctx,param_8);
                if (0 < iVar6) break;
                if (local_158 == local_120) {
                  mont = (BN_MONT_CTX *)0x0;
                  iVar5 = 0;
                  *param_7 = *param_7 | 0x10;
                  local_158 = (void *)param_2[4];
                  goto LAB_00535480;
                }
                local_150 = local_150 + 1;
                if (iVar6 != 0) goto LAB_00535a52;
              }
              if ((param_3 == 0) && (iVar5 = BN_cmp(local_c8,(BIGNUM *)param_2[1]), iVar5 != 0)) {
                iVar5 = 0;
                mont = (BN_MONT_CTX *)0x0;
                *param_7 = 0x4000;
                local_158 = (void *)param_2[4];
                goto LAB_00535480;
              }
              iVar5 = BN_GENCB_call(param_8,2,0);
              if ((iVar5 == 0) || (iVar5 = BN_GENCB_call(param_8,3,0), iVar5 == 0)) {
                mont = (BN_MONT_CTX *)0x0;
                local_158 = (void *)param_2[4];
                goto LAB_00535480;
              }
              memcpy(local_128,local_120,count);
              iVar5 = generate_p(ctx,type,local_bc,uVar12 / (ulong)(long)(iVar4 << 3) & 0xffffffff,
                                 local_128,count,local_c8,local_118,param_5 & 0xffffffff,param_8,
                                 &local_90,param_7);
              if (0 < iVar5) {
                iVar5 = BN_GENCB_call(param_8,2,1);
                if (iVar5 == 0) goto LAB_00535e68;
                if ((param_3 == 0) &&
                   ((local_90 != local_bc ||
                    (iVar4 = BN_cmp(local_118,(BIGNUM *)*param_2), iVar4 != 0)))) {
                  local_158 = (void *)param_2[4];
                  iVar5 = 0;
                  mont = (BN_MONT_CTX *)0x0;
                  goto LAB_00535480;
                }
                if ((uVar1 & 3) != 1) goto LAB_00535a81;
                local_c0 = 0;
                mont = (BN_MONT_CTX *)0x0;
                goto LAB_00535db9;
              }
              local_158 = (void *)param_2[4];
              if (iVar5 != 0) {
                mont = (BN_MONT_CTX *)0x0;
                iVar5 = 0;
                goto LAB_00535480;
              }
              local_150 = local_150 + 1;
            } while (local_158 != local_120);
            iVar5 = 0;
            mont = (BN_MONT_CTX *)0x0;
            *param_7 = 1;
LAB_00535718:
            CRYPTO_free(local_128);
          }
          BN_CTX_end(ctx);
          goto LAB_0053520b;
        }
        ERR_new();
        ERR_set_debug("../crypto/ffc/ffc_params_generate.c",0x4d,"ffc_validate_LN");
        ERR_set_error(5,0x7f,0);
      }
      else if (param_4 == 0) {
        if ((((0xbff < param_5) && (0xff < param_6)) || ((0x7ff < param_5 && (0xdf < param_6)))) ||
           ((0x3ff < param_5 && (0x9f < param_6)))) goto LAB_0053535c;
        ERR_new();
        ERR_set_debug("../crypto/ffc/ffc_params_generate.c",0x57,"ffc_validate_LN");
        ERR_set_error(10,0x72,0);
      }
    }
    lVar2 = param_2[4];
    lVar8 = 0;
    *param_7 = 0x80;
  }
  if (lVar2 == 0) {
    iVar5 = 0;
    CRYPTO_free((void *)0x0);
    ctx = (BN_CTX *)0x0;
    mont = (BN_MONT_CTX *)0x0;
  }
  else {
    CRYPTO_free((void *)0x0);
    mont = (BN_MONT_CTX *)0x0;
    iVar5 = 0;
    CRYPTO_free((void *)0x0);
    ctx = (BN_CTX *)0x0;
  }
LAB_0053520b:
  BN_CTX_free(ctx);
  BN_MONT_CTX_free(mont);
  EVP_MD_CTX_free(lVar8);
  EVP_MD_free(type);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


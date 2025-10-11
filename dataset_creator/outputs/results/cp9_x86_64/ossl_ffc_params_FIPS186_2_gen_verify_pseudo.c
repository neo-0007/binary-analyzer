
int ossl_ffc_params_FIPS186_2_gen_verify
              (undefined8 param_1,long *param_2,int param_3,undefined8 param_4,ulong param_5,
              ulong param_6,undefined4 *param_7,BN_GENCB *param_8)

{
  byte *md;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EVP_MD *type;
  BIGNUM *pBVar6;
  BIGNUM *a;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *r;
  BIGNUM *pBVar9;
  undefined8 uVar10;
  char *pcVar11;
  byte *pbVar12;
  BN_MONT_CTX *mont;
  ulong uVar13;
  byte *md_00;
  uint uVar14;
  char *pcVar15;
  long in_FS_OFFSET;
  bool bVar16;
  BN_CTX *local_198;
  BIGNUM *local_188;
  int local_180;
  uint local_158;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [30];
  char acStack_ea [34];
  byte local_c8 [63];
  byte abStack_89 [73];
  long local_40;
  
  lVar1 = param_2[4];
  uVar13 = param_2[5];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = 0;
  local_110 = 0;
  local_10c = 0xffffffff;
  if (param_3 == 0) {
    local_158 = *(uint *)(param_2 + 8);
  }
  *param_7 = 0;
  if (param_2[9] == 0) {
    if (param_6 == 0) {
      pcVar15 = "SHA-256";
      param_6 = (-(ulong)(param_5 < 0x800) & 0xffffffffffffffa0) + 0x100;
      if (param_5 < 0x800) {
        pcVar15 = "SHA1";
      }
    }
    else if (param_6 == 0xa0) {
      pcVar15 = "SHA1";
    }
    else {
      pcVar15 = "SHA-224";
      if (param_6 != 0xe0) {
        if (param_6 != 0x100) {
          type = (EVP_MD *)0x0;
          iVar2 = 0;
          local_198 = (BN_CTX *)0x0;
          *param_7 = 0x20;
          mont = (BN_MONT_CTX *)0x0;
          goto LAB_00536490;
        }
        pcVar15 = "SHA-256";
      }
    }
    type = (EVP_MD *)EVP_MD_fetch(param_1,pcVar15,param_2[10]);
    if (type == (EVP_MD *)0x0) goto LAB_00536454;
  }
  else {
    type = (EVP_MD *)EVP_MD_fetch(param_1,param_2[9],param_2[10]);
    if (type == (EVP_MD *)0x0) {
LAB_00536454:
      local_198 = (BN_CTX *)0x0;
      type = (EVP_MD *)0x0;
      mont = (BN_MONT_CTX *)0x0;
      iVar2 = 0;
      goto LAB_00536490;
    }
    if (param_6 == 0) {
      iVar2 = EVP_MD_get_size(type);
      param_6 = (ulong)(iVar2 * 8);
    }
  }
  if (param_5 < 0x200) {
    mont = (BN_MONT_CTX *)0x0;
    iVar2 = 0;
    local_198 = (BN_CTX *)0x0;
    *param_7 = 0x80;
    goto LAB_00536490;
  }
  param_6 = param_6 >> 3;
  if (((param_6 & 0xfffffffffffffff7) != 0x14) && (param_6 != 0x20)) {
    mont = (BN_MONT_CTX *)0x0;
    iVar2 = 0;
    local_198 = (BN_CTX *)0x0;
    *param_7 = 0x20;
    goto LAB_00536490;
  }
  if (lVar1 != 0) {
    if (uVar13 < param_6) {
      mont = (BN_MONT_CTX *)0x0;
      iVar2 = 0;
      local_198 = (BN_CTX *)0x0;
      *param_7 = 0x100;
      goto LAB_00536490;
    }
    __memcpy_chk(local_108,lVar1,param_6,0x20);
  }
  local_198 = (BN_CTX *)BN_CTX_new_ex(param_1);
  if (local_198 == (BN_CTX *)0x0) {
    mont = (BN_MONT_CTX *)0x0;
    iVar2 = 0;
    goto LAB_00536490;
  }
  BN_CTX_start(local_198);
  pBVar6 = BN_CTX_get(local_198);
  a = BN_CTX_get(local_198);
  local_188 = BN_CTX_get(local_198);
  pBVar7 = BN_CTX_get(local_198);
  pBVar8 = BN_CTX_get(local_198);
  r = BN_CTX_get(local_198);
  if (r == (BIGNUM *)0x0) {
LAB_00536825:
    mont = (BN_MONT_CTX *)0x0;
    iVar2 = 0;
  }
  else {
    uVar13 = param_5 + 0x3f & 0xffffffffffffffc0;
    pBVar9 = BN_value_one();
    iVar2 = (int)uVar13;
    iVar3 = BN_lshift(r,pBVar9,iVar2 + -1);
    if (iVar3 == 0) goto LAB_00536825;
    if (param_3 == 0) {
      if (((local_158 & 1) == 0) || ((lVar1 != 0 && (-1 < (int)param_2[6])))) {
        if (((local_158 & 2) == 0) || (param_2[2] != 0)) {
          pBVar9 = (BIGNUM *)*param_2;
          goto LAB_0053663f;
        }
        iVar2 = 0;
        *param_7 = 0x400;
        mont = (BN_MONT_CTX *)0x0;
      }
      else {
        iVar2 = 0;
        mont = (BN_MONT_CTX *)0x0;
        *param_7 = 0x200;
      }
    }
    else {
      pBVar9 = (BIGNUM *)*param_2;
      if ((pBVar9 != (BIGNUM *)0x0) == (param_2[1] != 0)) {
LAB_0053663f:
        if ((pBVar9 == (BIGNUM *)0x0) || ((local_158 & 1) != 0)) {
          bVar16 = lVar1 == 0;
          local_180 = 0;
          iVar2 = iVar2 * 4 + -1;
          iVar3 = (int)param_6;
LAB_005366a0:
          uVar10 = ossl_bn_get_libctx(local_198);
          do {
            iVar4 = BN_GENCB_call(param_8,0,local_180);
            if ((iVar4 == 0) ||
               ((bVar16 && (iVar4 = RAND_bytes_ex(uVar10,local_108,param_6,0), iVar4 < 1))))
            goto LAB_00536825;
            pcVar15 = acStack_ea + 2;
            md_00 = local_c8;
            __memcpy_chk(pcVar15,local_108,param_6,0x20);
            __memcpy_chk(md_00,local_108,param_6);
            uVar14 = iVar3 - 1;
            if (-1 < (int)uVar14) {
              pcVar11 = pcVar15 + (int)uVar14;
              do {
                *pcVar11 = *pcVar11 + '\x01';
                if (*pcVar11 != '\0') break;
                pcVar11 = pcVar11 + -1;
              } while (acStack_ea + ((long)iVar3 - (ulong)uVar14) != pcVar11);
            }
            md = abStack_89 + 1;
            iVar4 = EVP_Digest(local_108,param_6,md,(uint *)0x0,type,(ENGINE *)0x0);
            if ((iVar4 == 0) ||
               (iVar4 = EVP_Digest(pcVar15,param_6,md_00,(uint *)0x0,type,(ENGINE *)0x0), iVar4 == 0
               )) goto LAB_00536825;
            pbVar12 = md;
            if (0 < iVar3) {
              do {
                *pbVar12 = *pbVar12 ^ *md_00;
                pbVar12 = pbVar12 + 1;
                md_00 = md_00 + 1;
              } while (pbVar12 != abStack_89 + (ulong)uVar14 + 2);
            }
            abStack_89[1] = abStack_89[1] | 0x80;
            abStack_89[param_6] = abStack_89[param_6] | 1;
            pBVar9 = BN_bin2bn(md,iVar3,local_188);
            if (pBVar9 == (BIGNUM *)0x0) goto LAB_00536825;
            iVar4 = BN_check_prime(local_188,local_198,param_8);
            if (0 < iVar4) goto LAB_005368b0;
            bVar16 = true;
            local_180 = local_180 + 1;
            if (iVar4 != 0) goto LAB_00536825;
          } while( true );
        }
        local_188 = (BIGNUM *)param_2[1];
LAB_00536974:
        mont = BN_MONT_CTX_new();
        if (mont == (BN_MONT_CTX *)0x0) goto LAB_00536825;
        iVar2 = BN_MONT_CTX_set(mont,pBVar9,local_198);
        if (iVar2 != 0) {
          if (param_3 == 0) {
            if (((local_158 & 2) == 0) ||
               (iVar2 = ossl_ffc_params_validate_unverifiable_g
                                  (local_198,mont,pBVar9,local_188,param_2[2],pBVar8,param_7),
               iVar2 != 0)) {
              iVar2 = BN_GENCB_call(param_8,3,1);
              if (iVar2 != 0) {
LAB_005369e9:
                iVar2 = 2 - (uint)((local_158 & 2) == 0);
              }
            }
            else {
              iVar2 = 0;
            }
          }
          else {
            pBVar7 = BN_value_one();
            iVar2 = BN_sub(r,pBVar9,pBVar7);
            if ((((iVar2 != 0) &&
                 (iVar2 = BN_div(pBVar6,(BIGNUM *)0x0,r,local_188,local_198), iVar2 != 0)) &&
                (iVar2 = generate_unverifiable_g(local_198,mont,a,pBVar8,pBVar9,pBVar6,r,&local_10c)
                , iVar2 != 0)) && (iVar2 = BN_GENCB_call(param_8,3,1), iVar2 != 0)) {
              if ((BIGNUM *)*param_2 != pBVar9) {
                BN_free((BIGNUM *)*param_2);
                pBVar6 = BN_dup(pBVar9);
                *param_2 = (long)pBVar6;
              }
              if ((BIGNUM *)param_2[1] != local_188) {
                BN_free((BIGNUM *)param_2[1]);
                pBVar6 = BN_dup(local_188);
                param_2[1] = (long)pBVar6;
              }
              if ((BIGNUM *)param_2[2] != a) {
                BN_free((BIGNUM *)param_2[2]);
                pBVar6 = BN_dup(a);
                param_2[2] = (long)pBVar6;
              }
              if (((*param_2 == 0) || (param_2[1] == 0)) || (param_2[2] == 0)) {
                iVar2 = 0;
              }
              else {
                iVar2 = ossl_ffc_params_set_validate_params(param_2,local_108,param_6,local_110);
                if (iVar2 != 0) {
                  *(undefined4 *)((long)param_2 + 0x3c) = local_10c;
                  goto LAB_005369e9;
                }
              }
            }
          }
        }
      }
      else {
        mont = (BN_MONT_CTX *)0x0;
        iVar2 = 0;
        *param_7 = 0x800;
      }
    }
  }
LAB_0053682b:
  BN_CTX_end(local_198);
LAB_00536490:
  BN_CTX_free(local_198);
  BN_MONT_CTX_free(mont);
  EVP_MD_free(type);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
LAB_005368b0:
  iVar4 = BN_GENCB_call(param_8,2,0);
  if ((iVar4 == 0) || (iVar4 = BN_GENCB_call(param_8,3,0), iVar4 == 0)) goto LAB_00536825;
  iVar4 = iVar2;
  if ((param_3 == 0) && (iVar4 = (int)param_2[6], iVar2 < (int)param_2[6])) {
    iVar2 = 0;
    mont = (BN_MONT_CTX *)0x0;
    *param_7 = 0x1000;
    goto LAB_0053682b;
  }
  iVar5 = generate_p(local_198,type,iVar4,(int)((uVar13 - 1) / 0xa0),pcVar15,param_6,local_188,
                     pBVar7,param_5 + 0x3f & 0xffffffc0,param_8,&local_110,param_7);
  if (0 < iVar5) {
    iVar2 = BN_GENCB_call(param_8,2,1);
    if (iVar2 != 0) {
      if (param_3 == 0) {
        if (local_110 != iVar4) {
          iVar2 = 0;
          mont = (BN_MONT_CTX *)0x0;
          *param_7 = 0x10000;
          goto LAB_0053682b;
        }
        iVar2 = BN_cmp(pBVar7,(BIGNUM *)*param_2);
        if (iVar2 != 0) {
          iVar2 = 0;
          mont = (BN_MONT_CTX *)0x0;
          *param_7 = 0x2000;
          goto LAB_0053682b;
        }
      }
      pBVar9 = pBVar7;
      if ((local_158 & 3) != 1) goto LAB_00536974;
      mont = (BN_MONT_CTX *)0x0;
      goto LAB_005369e9;
    }
    goto LAB_00536825;
  }
  bVar16 = true;
  local_180 = local_180 + 1;
  if (iVar5 == -1) goto LAB_00536825;
  goto LAB_005366a0;
}


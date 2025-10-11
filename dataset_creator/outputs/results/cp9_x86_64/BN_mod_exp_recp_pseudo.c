
int BN_mod_exp_recp(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BIGNUM *a_00;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM **ppBVar8;
  uint uVar9;
  int iVar10;
  long in_FS_OFFSET;
  BN_RECP_CTX *local_1c0;
  int local_1a8;
  BN_RECP_CTX local_188;
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_get_flags(p,4);
  if (((iVar2 == 0) && (iVar2 = BN_get_flags(a,4), iVar2 == 0)) &&
     (iVar2 = BN_get_flags(m,4), iVar2 == 0)) {
    iVar3 = BN_num_bits(p);
    if (iVar3 == 0) {
      iVar2 = BN_abs_is_word(m,1);
      if (iVar2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar2 = BN_set_word(r,1);
          return iVar2;
        }
        goto LAB_005b0330;
      }
      iVar2 = 1;
      BN_zero_ex(r);
    }
    else {
      BN_CTX_start(ctx);
      a_00 = BN_CTX_get(ctx);
      pBVar6 = BN_CTX_get(ctx);
      iVar2 = 0;
      local_148[0] = pBVar6;
      if (pBVar6 != (BIGNUM *)0x0) {
        BN_RECP_CTX_init(&local_188);
        pBVar7 = m;
        if (m->neg != 0) {
          pBVar7 = BN_copy(a_00,m);
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_005b00d8;
          a_00->neg = 0;
          pBVar7 = a_00;
        }
        iVar4 = BN_RECP_CTX_set(&local_188,pBVar7,ctx);
        if ((0 < iVar4) && (iVar4 = BN_nnmod(pBVar6,a,m,ctx), iVar4 != 0)) {
          iVar4 = BN_is_zero(pBVar6);
          if (iVar4 == 0) {
            if (iVar3 < 0x2a0) {
              if (0xef < iVar3) {
                local_1a8 = 5;
                goto LAB_005affe0;
              }
              if (0x4f < iVar3) {
                local_1a8 = 4;
                goto LAB_005affe0;
              }
              if (0x17 < iVar3) {
                local_1a8 = 3;
                goto LAB_005affe0;
              }
              local_1a8 = 1;
            }
            else {
              local_1a8 = 6;
LAB_005affe0:
              iVar4 = BN_mod_mul_reciprocal(a_00,pBVar6,pBVar6,&local_188,ctx);
              if (iVar4 == 0) goto LAB_005b00d8;
              ppBVar8 = local_148;
              do {
                pBVar6 = BN_CTX_get(ctx);
                ppBVar8[1] = pBVar6;
                if ((pBVar6 == (BIGNUM *)0x0) ||
                   (iVar4 = BN_mod_mul_reciprocal(pBVar6,*ppBVar8,a_00,&local_188,ctx), iVar4 == 0))
                goto LAB_005b00d8;
                ppBVar8 = ppBVar8 + 1;
              } while (local_148 + (ulong)((1 << ((char)local_1a8 - 1U & 0x1f)) - 2) + 1 != ppBVar8)
              ;
            }
            iVar4 = BN_set_word(r,1);
            if (iVar4 != 0) {
              bVar1 = true;
              iVar3 = iVar3 + -1;
              while( true ) {
                while (iVar4 = BN_is_bit_set(p,iVar3), iVar4 == 0) {
                  if ((!bVar1) && (iVar4 = BN_mod_mul_reciprocal(r,r,r,&local_188,ctx), iVar4 == 0))
                  goto LAB_005b00d8;
                  if (iVar3 == 0) goto LAB_005b00cf;
                  iVar3 = iVar3 + -1;
                }
                if (local_1a8 == 1) {
                  uVar9 = 1;
                  iVar4 = 0;
                }
                else if (iVar3 < 1) {
                  uVar9 = 1;
                  iVar4 = 0;
                }
                else {
                  iVar4 = 0;
                  iVar10 = 1;
                  uVar9 = 1;
                  do {
                    iVar5 = BN_is_bit_set(p,iVar3 - iVar10);
                    if (iVar5 != 0) {
                      uVar9 = uVar9 << ((char)iVar10 - (char)iVar4 & 0x1fU) | 1;
                      iVar4 = iVar10;
                    }
                    iVar10 = iVar10 + 1;
                  } while ((local_1a8 != iVar10) && (iVar10 != iVar3 + 1));
                }
                if (!bVar1) {
                  iVar10 = 0;
                  do {
                    iVar5 = BN_mod_mul_reciprocal(r,r,r,&local_188,ctx);
                    if (iVar5 == 0) goto LAB_005b00d8;
                    iVar10 = iVar10 + 1;
                  } while (iVar4 + 1 != iVar10);
                }
                iVar10 = BN_mod_mul_reciprocal(r,r,local_148[(int)uVar9 >> 1],&local_188,ctx);
                if (iVar10 == 0) goto LAB_005b00d8;
                iVar3 = iVar3 - (iVar4 + 1);
                if (iVar3 < 0) break;
                bVar1 = false;
              }
LAB_005b00cf:
              iVar2 = 1;
            }
          }
          else {
            iVar2 = 1;
            BN_zero_ex(r);
          }
        }
      }
LAB_005b00d8:
      local_1c0 = &local_188;
      BN_CTX_end(ctx);
      BN_RECP_CTX_free(local_1c0);
    }
  }
  else {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/bn/bn_exp.c",0xae,"BN_mod_exp_recp");
    ERR_set_error(3,0xc0101,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_005b0330:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



int BN_mod_exp_simple(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BIGNUM *r_00;
  BIGNUM *pBVar6;
  BIGNUM **ppBVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_178;
  uint local_164;
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
        goto LAB_005b22f0;
      }
      iVar2 = 1;
      BN_zero_ex(r);
    }
    else {
      BN_CTX_start(ctx);
      r_00 = BN_CTX_get(ctx);
      pBVar6 = BN_CTX_get(ctx);
      iVar2 = 0;
      local_148[0] = pBVar6;
      if ((pBVar6 != (BIGNUM *)0x0) && (iVar4 = BN_nnmod(pBVar6,a,m,ctx), iVar4 != 0)) {
        iVar4 = BN_is_zero(pBVar6);
        if (iVar4 == 0) {
          if (iVar3 < 0x2a0) {
            if (0xef < iVar3) {
              local_178 = 5;
              goto LAB_005b2068;
            }
            if (0x4f < iVar3) {
              local_178 = 4;
              goto LAB_005b2068;
            }
            if (0x17 < iVar3) {
              local_178 = 3;
              goto LAB_005b2068;
            }
            local_178 = 1;
          }
          else {
            local_178 = 6;
LAB_005b2068:
            iVar4 = BN_mod_mul(r_00,pBVar6,pBVar6,m,ctx);
            if (iVar4 == 0) goto LAB_005b1fb4;
            ppBVar7 = local_148;
            do {
              pBVar6 = BN_CTX_get(ctx);
              ppBVar7[1] = pBVar6;
              if ((pBVar6 == (BIGNUM *)0x0) ||
                 (iVar4 = BN_mod_mul(pBVar6,*ppBVar7,r_00,m,ctx), iVar4 == 0)) goto LAB_005b1fb4;
              ppBVar7 = ppBVar7 + 1;
            } while (local_148 + (ulong)((1 << ((char)local_178 - 1U & 0x1f)) - 2) + 1 != ppBVar7);
          }
          iVar4 = BN_set_word(r,1);
          if (iVar4 != 0) {
            bVar1 = true;
            iVar3 = iVar3 + -1;
            while( true ) {
              while (iVar4 = BN_is_bit_set(p,iVar3), iVar4 == 0) {
                if ((!bVar1) && (iVar4 = BN_mod_mul(r,r,r,m,ctx), iVar4 == 0)) goto LAB_005b1fb4;
                if (iVar3 == 0) goto LAB_005b2151;
                iVar3 = iVar3 + -1;
              }
              if (local_178 == 1) {
                local_164 = 1;
                iVar4 = 0;
              }
              else if (iVar3 < 1) {
                iVar4 = 0;
                local_164 = 1;
              }
              else {
                iVar8 = 1;
                iVar4 = 0;
                local_164 = 1;
                do {
                  iVar5 = BN_is_bit_set(p,iVar3 - iVar8);
                  if (iVar5 != 0) {
                    local_164 = local_164 << ((char)iVar8 - (char)iVar4 & 0x1fU) | 1;
                    iVar4 = iVar8;
                  }
                  iVar8 = iVar8 + 1;
                } while ((local_178 != iVar8) && (iVar8 != iVar3 + 1));
              }
              if (!bVar1) {
                iVar8 = 0;
                do {
                  iVar5 = BN_mod_mul(r,r,r,m,ctx);
                  if (iVar5 == 0) goto LAB_005b1fb4;
                  iVar8 = iVar8 + 1;
                } while (iVar4 + 1 != iVar8);
              }
              iVar8 = BN_mod_mul(r,r,local_148[(int)local_164 >> 1],m,ctx);
              if (iVar8 == 0) goto LAB_005b1fb4;
              iVar3 = iVar3 - (iVar4 + 1);
              if (iVar3 < 0) break;
              bVar1 = false;
            }
LAB_005b2151:
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 1;
          BN_zero_ex(r);
        }
      }
LAB_005b1fb4:
      BN_CTX_end(ctx);
    }
  }
  else {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/bn/bn_exp.c",0x510,"BN_mod_exp_simple");
    ERR_set_error(3,0xc0101,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_005b22f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


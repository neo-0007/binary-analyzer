
int BN_MONT_CTX_set(BN_MONT_CTX *mont,BIGNUM *mod,BN_CTX *ctx)

{
  BIGNUM *a;
  int iVar1;
  uint uVar2;
  BIGNUM *ret;
  BIGNUM *pBVar3;
  ulong uVar4;
  BIGNUM *pBVar5;
  int iVar6;
  long in_FS_OFFSET;
  BIGNUM local_78;
  ulong local_58;
  undefined8 local_50;
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_zero(mod);
  if (iVar1 != 0) goto LAB_004b131a;
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  iVar6 = 0;
  if (ret != (BIGNUM *)0x0) {
    a = &mont->N;
    pBVar3 = BN_copy(a,mod);
    if (pBVar3 != (BIGNUM *)0x0) {
      iVar1 = BN_get_flags(mod,4);
      if (iVar1 != 0) {
        BN_set_flags(a,4);
      }
      (mont->N).neg = 0;
      bn_init();
      local_78.d = &local_58;
      local_78.dmax = 2;
      local_78.neg = 0;
      iVar1 = BN_get_flags(mod,4);
      if (iVar1 != 0) {
        BN_set_flags(&local_78,4);
      }
      pBVar3 = &mont->RR;
      iVar1 = BN_num_bits(mod);
      uVar2 = iVar1 + 0x3fU;
      if ((int)(iVar1 + 0x3fU) < 0) {
        uVar2 = iVar1 + 0x7e;
      }
      mont->ri = uVar2 & 0xffffffc0;
      BN_zero_ex(pBVar3);
      iVar1 = BN_set_bit(pBVar3,0x40);
      if (iVar1 != 0) {
        local_58 = *mod->d;
        local_50 = 0;
        local_78.top = (int)(local_58 != 0);
        iVar1 = BN_is_one(&local_78);
        if (iVar1 == 0) {
          pBVar5 = BN_mod_inverse(ret,pBVar3,&local_78,ctx);
          if (pBVar5 == (BIGNUM *)0x0) goto LAB_004b1404;
        }
        else {
          BN_zero_ex(ret);
        }
        iVar1 = BN_lshift(ret,ret,0x40);
        if (iVar1 != 0) {
          iVar1 = BN_is_zero(ret);
          if (iVar1 == 0) {
            iVar1 = BN_sub_word(ret,1);
          }
          else {
            iVar1 = BN_set_word(ret,0xffffffffffffffff);
          }
          if ((iVar1 != 0) && (iVar1 = BN_div(ret,(BIGNUM *)0x0,ret,&local_78,ctx), iVar1 != 0)) {
            uVar4 = 0;
            if (0 < ret->top) {
              uVar4 = *ret->d;
            }
            mont->n0[0] = uVar4;
            mont->n0[1] = 0;
            BN_zero_ex(pBVar3);
            iVar1 = BN_set_bit(pBVar3,mont->ri * 2);
            if ((iVar1 != 0) && (iVar1 = BN_div((BIGNUM *)0x0,pBVar3,pBVar3,a,ctx), iVar1 != 0)) {
              iVar6 = (mont->RR).top;
              iVar1 = (mont->N).top;
              if (iVar6 < iVar1) {
                memset((mont->RR).d + iVar6,0,(ulong)(uint)((iVar1 + -1) - iVar6) * 8 + 8);
              }
              (mont->RR).top = iVar1;
              iVar6 = 1;
            }
          }
        }
      }
    }
  }
LAB_004b1404:
  BN_CTX_end(ctx);
LAB_004b131a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


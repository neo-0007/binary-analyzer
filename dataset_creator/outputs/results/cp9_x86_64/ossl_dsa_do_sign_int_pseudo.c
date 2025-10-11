
DSA_SIG * ossl_dsa_do_sign_int(uchar *param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  DSA_SIG *a;
  BIGNUM *pBVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *a_00;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *pBVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  BIGNUM *local_48;
  long local_40;
  
  ctx = *(BN_CTX **)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  if (((ctx == (BN_CTX *)0x0) || (ctx = *(BN_CTX **)(param_3 + 0x10), ctx == (BN_CTX *)0x0)) ||
     (ctx = *(BN_CTX **)(param_3 + 0x18), ctx == (BN_CTX *)0x0)) {
    pBVar3 = (BIGNUM *)0x0;
    a = (DSA_SIG *)0x0;
    uVar5 = 0x65;
  }
  else if (*(long *)(param_3 + 0x70) == 0) {
    pBVar3 = (BIGNUM *)0x0;
    a = (DSA_SIG *)0x0;
    uVar5 = 0x6f;
    ctx = (BN_CTX *)0x0;
  }
  else {
    a = DSA_SIG_new();
    if (a == (DSA_SIG *)0x0) {
      pBVar3 = (BIGNUM *)0x0;
      ctx = (BN_CTX *)0x0;
      uVar5 = 0x80003;
    }
    else {
      pBVar3 = BN_new();
      a->r = pBVar3;
      pBVar3 = BN_new();
      a->s = pBVar3;
      if ((a->r == (BIGNUM *)0x0) || (pBVar3 == (BIGNUM *)0x0)) {
        pBVar3 = (BIGNUM *)0x0;
        uVar5 = 0x80003;
        ctx = (BN_CTX *)0x0;
      }
      else {
        ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_3 + 0xb8));
        if (ctx == (BN_CTX *)0x0) {
          pBVar3 = (BIGNUM *)0x0;
          uVar5 = 0x80003;
        }
        else {
          ret = BN_CTX_get(ctx);
          a_00 = BN_CTX_get(ctx);
          r = BN_CTX_get(ctx);
          r_00 = BN_CTX_get(ctx);
          pBVar3 = r_00;
          if (r_00 != (BIGNUM *)0x0) {
            do {
              iVar1 = dsa_sign_setup_isra_0(param_3,ctx,&local_48,a->r,param_1,param_2);
              if (iVar1 == 0) {
LAB_004cd19d:
                uVar5 = 0x80003;
                pBVar3 = local_48;
                goto LAB_004cd1bb;
              }
              iVar2 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10));
              iVar1 = iVar2 + 7;
              if (iVar2 + 7 < 0) {
                iVar1 = iVar2 + 0xe;
              }
              if (iVar1 >> 3 < param_2) {
                iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10));
                param_2 = iVar1 + 0xe;
                if (-1 < iVar1 + 7) {
                  param_2 = iVar1 + 7;
                }
                param_2 = param_2 >> 3;
              }
              pBVar3 = BN_bin2bn(param_1,param_2,ret);
              if (pBVar3 == (BIGNUM *)0x0) goto LAB_004cd19d;
              do {
                iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10));
                iVar1 = BN_priv_rand_ex(a_00,iVar1 + -1,0xffffffff,0,0,ctx);
                if (iVar1 == 0) goto LAB_004cd19d;
                iVar1 = BN_is_zero(a_00);
              } while (iVar1 != 0);
              BN_set_flags(a_00,4);
              BN_set_flags(r,4);
              BN_set_flags(r_00,4);
              iVar1 = BN_mod_mul(r_00,a_00,*(BIGNUM **)(param_3 + 0x70),*(BIGNUM **)(param_3 + 0x10)
                                 ,ctx);
              pBVar3 = local_48;
              if (((iVar1 == 0) ||
                  (iVar1 = BN_mod_mul(r_00,r_00,a->r,*(BIGNUM **)(param_3 + 0x10),ctx), iVar1 == 0))
                 || ((iVar1 = BN_mod_mul(r,a_00,ret,*(BIGNUM **)(param_3 + 0x10),ctx), iVar1 == 0 ||
                     ((((iVar1 = BN_mod_add_quick(a->s,r_00,r,*(BIGNUM **)(param_3 + 0x10)),
                        iVar1 == 0 ||
                        (iVar1 = BN_mod_mul(a->s,a->s,pBVar3,*(BIGNUM **)(param_3 + 0x10),ctx),
                        iVar1 == 0)) ||
                       (pBVar4 = BN_mod_inverse(a_00,a_00,*(BIGNUM **)(param_3 + 0x10),ctx),
                       pBVar4 == (BIGNUM *)0x0)) ||
                      (iVar1 = BN_mod_mul(a->s,a->s,a_00,*(BIGNUM **)(param_3 + 0x10),ctx),
                      iVar1 == 0)))))) goto LAB_004cd3bf;
              iVar1 = BN_is_zero(a->r);
            } while ((iVar1 != 0) || (iVar1 = BN_is_zero(a->s), iVar1 != 0));
            goto LAB_004cd1f3;
          }
LAB_004cd3bf:
          uVar5 = 0x80003;
        }
      }
    }
  }
LAB_004cd1bb:
  ERR_new();
  ERR_set_debug("../crypto/dsa/dsa_ossl.c",0xb1,"ossl_dsa_do_sign_int");
  ERR_set_error(10,uVar5,0);
  DSA_SIG_free(a);
  a = (DSA_SIG *)0x0;
LAB_004cd1f3:
  BN_CTX_free(ctx);
  BN_clear_free(pBVar3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return a;
}


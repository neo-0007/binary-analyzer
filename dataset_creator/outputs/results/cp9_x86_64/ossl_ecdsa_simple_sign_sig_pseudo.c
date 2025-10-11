
ECDSA_SIG *
ossl_ecdsa_simple_sign_sig
          (uchar *param_1,int param_2,BIGNUM *param_3,BIGNUM *param_4,EC_KEY *param_5)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *pEVar3;
  BIGNUM *pBVar4;
  ECDSA_SIG *sig;
  BIGNUM *pBVar5;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  BIGNUM *local_80;
  int local_68;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  pEVar3 = EC_KEY_get0_group(param_5);
  pBVar4 = EC_KEY_get0_private_key(param_5);
  if (pEVar3 == (EC_GROUP *)0x0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0xd1,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0xc0102,0);
    goto LAB_004ea523;
  }
  if (pBVar4 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0xd5,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0x7d,0);
    sig = (ECDSA_SIG *)0x0;
    goto LAB_004ea523;
  }
  iVar1 = EC_KEY_can_sign(param_5);
  if (iVar1 == 0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0xda,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0x9f,0);
    goto LAB_004ea523;
  }
  sig = ECDSA_SIG_new();
  if (sig == (ECDSA_SIG *)0x0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0xe0,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0xc0100,0);
    goto LAB_004ea523;
  }
  pBVar5 = BN_new();
  sig->r = pBVar5;
  pBVar5 = BN_new();
  sig->s = pBVar5;
  if ((sig->r == (BIGNUM *)0x0) || (pBVar5 == (BIGNUM *)0x0)) {
    ERR_new();
    pBVar6 = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0xe6,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0xc0100,0);
    local_80 = (BIGNUM *)0x0;
  }
  else {
    ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_5 + 0x58));
    if ((ctx == (BN_CTX *)0x0) || (local_80 = BN_new(), local_80 == (BIGNUM *)0x0)) {
      ERR_new();
      pBVar6 = (BIGNUM *)0x0;
      ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0xed,"ossl_ecdsa_simple_sign_sig");
      ERR_set_error(0x10,0xc0100,0);
      local_80 = (BIGNUM *)0x0;
    }
    else {
      a = (BIGNUM *)EC_GROUP_get0_order(pEVar3);
      uVar2 = BN_num_bits(a);
      if ((int)uVar2 < param_2 * 8) {
        local_68 = uVar2 + 0xe;
        if (-1 < (int)(uVar2 + 7)) {
          local_68 = uVar2 + 7;
        }
        local_68 = local_68 >> 3;
        pBVar6 = BN_bin2bn(param_1,local_68,local_80);
        if (pBVar6 == (BIGNUM *)0x0) goto LAB_004ea7d0;
        if ((local_68 * 8 <= (int)uVar2) ||
           (iVar1 = BN_rshift(local_80,local_80,8 - (uVar2 & 7)), iVar1 != 0)) goto LAB_004ea363;
        ERR_new();
        uVar8 = 0xfe;
      }
      else {
        pBVar6 = BN_bin2bn(param_1,param_2,local_80);
        local_68 = param_2;
        if (pBVar6 != (BIGNUM *)0x0) {
LAB_004ea363:
          do {
            if (param_3 == (BIGNUM *)0x0 || param_4 == (BIGNUM *)0x0) {
              iVar1 = ecdsa_sign_setup(param_5,ctx,&local_48,sig,param_1,local_68);
              pBVar6 = local_48;
              if (iVar1 == 0) {
                ERR_new();
                ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x104,"ossl_ecdsa_simple_sign_sig");
                ERR_set_error(0x10,0x8002a,0);
                pBVar6 = local_48;
                goto LAB_004ea4fe;
              }
            }
            else {
              pBVar7 = BN_copy(sig->r,param_4);
              pBVar6 = param_3;
              if (pBVar7 == (BIGNUM *)0x0) {
                ERR_new();
                ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x10b,"ossl_ecdsa_simple_sign_sig");
                ERR_set_error(0x10,0xc0100,0);
                pBVar6 = local_48;
                goto LAB_004ea4fe;
              }
            }
            iVar1 = bn_to_mont_fixed_top(pBVar5,sig->r,*(undefined8 *)(pEVar3 + 0x90),ctx);
            if ((iVar1 == 0) ||
               (iVar1 = bn_mul_mont_fixed_top
                                  (pBVar5,pBVar5,pBVar4,*(undefined8 *)(pEVar3 + 0x90),ctx),
               iVar1 == 0)) {
              ERR_new();
              uVar8 = 0x119;
LAB_004ea721:
              ERR_set_debug("../crypto/ec/ecdsa_ossl.c",uVar8,"ossl_ecdsa_simple_sign_sig");
              ERR_set_error(0x10,0x80003,0);
              pBVar6 = local_48;
              goto LAB_004ea4fe;
            }
            iVar1 = bn_mod_add_fixed_top(pBVar5,pBVar5,local_80,a);
            if (iVar1 == 0) {
              ERR_new();
              uVar8 = 0x11d;
              goto LAB_004ea721;
            }
            iVar1 = bn_to_mont_fixed_top(pBVar5,pBVar5,*(undefined8 *)(pEVar3 + 0x90),ctx);
            if ((iVar1 == 0) ||
               (iVar1 = BN_mod_mul_montgomery
                                  (pBVar5,pBVar5,pBVar6,*(BN_MONT_CTX **)(pEVar3 + 0x90),ctx),
               iVar1 == 0)) {
              ERR_new();
              uVar8 = 0x126;
              goto LAB_004ea721;
            }
            iVar1 = BN_is_zero(pBVar5);
            pBVar6 = local_48;
            if (iVar1 == 0) goto LAB_004ea509;
          } while ((param_3 == (BIGNUM *)0x0) || (param_4 == (BIGNUM *)0x0));
          ERR_new();
          ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x130,"ossl_ecdsa_simple_sign_sig");
          ERR_set_error(0x10,0x9d,0);
          pBVar6 = local_48;
          goto LAB_004ea4fe;
        }
LAB_004ea7d0:
        ERR_new();
        uVar8 = 0xf9;
      }
      pBVar6 = (BIGNUM *)0x0;
      ERR_set_debug("../crypto/ec/ecdsa_ossl.c",uVar8,"ossl_ecdsa_simple_sign_sig");
      ERR_set_error(0x10,0x80003,0);
    }
  }
LAB_004ea4fe:
  ECDSA_SIG_free(sig);
  sig = (ECDSA_SIG *)0x0;
LAB_004ea509:
  BN_CTX_free(ctx);
  BN_clear_free(local_80);
  BN_clear_free(pBVar6);
LAB_004ea523:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return sig;
}


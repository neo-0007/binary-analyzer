
ulong dsa_do_verify(uchar *param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *r;
  BN_CTX *ctx;
  BIGNUM *pBVar4;
  BN_MONT_CTX *m_ctx;
  BIGNUM *mod;
  ulong uVar5;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(param_4 + 8) == 0) || (*(BIGNUM **)(param_4 + 0x10) == (BIGNUM *)0x0)) ||
     (*(long *)(param_4 + 0x18) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_ossl.c",0x14a,"dsa_do_verify");
    uVar5 = 0xffffffff;
    ERR_set_error(10,0x65,0);
    goto LAB_004cc816;
  }
  uVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x10));
  if (((uVar2 & 0xffffffbf) != 0xa0) && (uVar2 != 0x100)) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_ossl.c",0x151,"dsa_do_verify");
    uVar5 = 0xffffffff;
    ERR_set_error(10,0x66,0);
    goto LAB_004cc816;
  }
  iVar3 = BN_num_bits(*(BIGNUM **)(param_4 + 8));
  if (10000 < iVar3) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_ossl.c",0x156,"dsa_do_verify");
    uVar5 = 0xffffffff;
    ERR_set_error(10,0x67,0);
    goto LAB_004cc816;
  }
  ret = BN_new();
  ret_00 = BN_new();
  r = BN_new();
  ctx = (BN_CTX *)BN_CTX_new_ex(0);
  if (((ret == (BIGNUM *)0x0) || (ret_00 == (BIGNUM *)0x0)) ||
     ((r == (BIGNUM *)0x0 || (ctx == (BN_CTX *)0x0)))) goto LAB_004cc8a8;
  DSA_SIG_get0(param_3,&local_50,&local_48);
  iVar3 = BN_is_zero(local_50);
  if (iVar3 == 0) {
    iVar3 = BN_is_negative(local_50);
    if (iVar3 != 0) goto LAB_004cc7d1;
    iVar3 = BN_ucmp(local_50,*(BIGNUM **)(param_4 + 0x10));
    if (-1 < iVar3) goto LAB_004cc7d1;
    iVar3 = BN_is_zero(local_48);
    if (iVar3 != 0) goto LAB_004cc7d1;
    iVar3 = BN_is_negative(local_48);
    if (iVar3 != 0) goto LAB_004cc7d1;
    iVar3 = BN_ucmp(local_48,*(BIGNUM **)(param_4 + 0x10));
    if (-1 < iVar3) goto LAB_004cc7d1;
    pBVar4 = BN_mod_inverse(ret_00,local_48,*(BIGNUM **)(param_4 + 0x10),ctx);
    if (pBVar4 == (BIGNUM *)0x0) {
LAB_004cc8a8:
      uVar5 = 0xffffffff;
      ERR_new();
      ERR_set_debug("../crypto/dsa/dsa_ossl.c",0x1a2,"dsa_do_verify");
      ERR_set_error(10,0x80003,0);
    }
    else {
      if ((int)uVar2 >> 3 <= param_2) {
        param_2 = (int)uVar2 >> 3;
      }
      pBVar4 = BN_bin2bn(param_1,param_2,ret);
      if (pBVar4 == (BIGNUM *)0x0) goto LAB_004cc8a8;
      iVar3 = BN_mod_mul(ret,ret,ret_00,*(BIGNUM **)(param_4 + 0x10),ctx);
      if (iVar3 == 0) goto LAB_004cc8a8;
      pBVar4 = ret_00;
      iVar3 = BN_mod_mul(ret_00,local_50,ret_00,*(BIGNUM **)(param_4 + 0x10),ctx);
      if (iVar3 == 0) goto LAB_004cc8a8;
      mod = *(BIGNUM **)(param_4 + 8);
      m_ctx = (BN_MONT_CTX *)0x0;
      if ((*(byte *)(param_4 + 0x78) & 1) != 0) {
        pBVar4 = (BIGNUM *)(param_4 + 0x80);
        m_ctx = BN_MONT_CTX_set_locked
                          ((BN_MONT_CTX **)pBVar4,(int)*(undefined8 *)(param_4 + 0xb0),mod,ctx);
        if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_004cc8a8;
        mod = *(BIGNUM **)(param_4 + 8);
      }
      pcVar1 = *(code **)(*(long *)(param_4 + 0xa0) + 0x20);
      if (pcVar1 == (code *)0x0) {
        iVar3 = BN_mod_exp2_mont(r,*(BIGNUM **)(param_4 + 0x18),ret,*(BIGNUM **)(param_4 + 0x68),
                                 ret_00,mod,ctx,m_ctx);
        if (iVar3 != 0) goto LAB_004ccacc;
        goto LAB_004cc8a8;
      }
      iVar3 = (*pcVar1)(param_4,r,*(BIGNUM **)(param_4 + 0x18),ret,*(BIGNUM **)(param_4 + 0x68),
                        ret_00,mod,ctx,m_ctx,pBVar4);
      if (iVar3 == 0) goto LAB_004cc8a8;
LAB_004ccacc:
      iVar3 = BN_div((BIGNUM *)0x0,ret,r,*(BIGNUM **)(param_4 + 0x10),ctx);
      if (iVar3 == 0) goto LAB_004cc8a8;
      iVar3 = BN_ucmp(ret,local_50);
      uVar5 = (ulong)(iVar3 == 0);
    }
  }
  else {
LAB_004cc7d1:
    uVar5 = 0;
  }
  BN_CTX_free(ctx);
  BN_free(ret);
  BN_free(ret_00);
  BN_free(r);
LAB_004cc816:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



undefined4
rsa_ossl_private_encrypt(int param_1,uchar *param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *n;
  uchar *to;
  BIGNUM *pBVar5;
  BN_MONT_CTX *pBVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  BN_BLINDING *local_78;
  long local_68;
  BIGNUM *local_60;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
  if (ctx == (BN_CTX *)0x0) {
    to = (uchar *)0x0;
    uVar4 = 0xffffffff;
    local_68 = 0;
    goto LAB_0055b6d4;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  n = BN_CTX_get(ctx);
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  iVar2 = iVar2 >> 3;
  local_68 = (long)iVar2;
  to = (uchar *)CRYPTO_malloc(iVar2,"../crypto/rsa/rsa_ossl.c",0x10b);
  if ((n == (BIGNUM *)0x0) || (to == (uchar *)0x0)) {
    ERR_new();
    uVar7 = 0x10d;
LAB_0055b963:
    uVar4 = 0xffffffff;
    ERR_set_debug("../crypto/rsa/rsa_ossl.c",uVar7,"rsa_ossl_private_encrypt");
    ERR_set_error(4,0xc0100,0);
    goto LAB_0055b6d4;
  }
  if (param_5 == 3) {
    iVar1 = RSA_padding_add_none(to,iVar2,param_2,param_1);
  }
  else if (param_5 == 5) {
    iVar1 = RSA_padding_add_X931(to,iVar2,param_2,param_1);
  }
  else {
    if (param_5 != 1) {
      ERR_new();
      uVar4 = 0xffffffff;
      ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x11c,"rsa_ossl_private_encrypt");
      ERR_set_error(4,0x76,0);
      goto LAB_0055b6d4;
    }
    iVar1 = RSA_padding_add_PKCS1_type_1(to,iVar2,param_2,param_1);
  }
  if ((iVar1 < 1) || (pBVar5 = BN_bin2bn(to,iVar2,ret), pBVar5 == (BIGNUM *)0x0)) {
LAB_0055b9f8:
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x28));
    if (-1 < iVar1) {
      ERR_new();
      uVar4 = 0xffffffff;
      ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x127,"rsa_ossl_private_encrypt");
      ERR_set_error(4,0x84,0);
      goto LAB_0055b6d4;
    }
    uVar3 = *(uint *)(param_4 + 0xa4);
    if ((uVar3 & 2) != 0) {
      pBVar6 = BN_MONT_CTX_set_locked
                         ((BN_MONT_CTX **)(param_4 + 0xa8),(int)*(undefined8 *)(param_4 + 0xd0),
                          *(BIGNUM **)(param_4 + 0x28),ctx);
      if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_0055b9f8;
      uVar3 = *(uint *)(param_4 + 0xa4);
    }
    local_78 = (BN_BLINDING *)0x0;
    local_60 = (BIGNUM *)0x0;
    if ((uVar3 & 0x80) == 0) {
      local_78 = (BN_BLINDING *)rsa_get_blinding(param_4,&local_44,ctx);
      if (local_78 == (BN_BLINDING *)0x0) {
        ERR_new();
        uVar4 = 0xffffffff;
        ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x133,"rsa_ossl_private_encrypt");
        ERR_set_error(4,0xc0103,0);
        goto LAB_0055b6d4;
      }
      if ((local_44 == 0) && (local_60 = BN_CTX_get(ctx), local_60 == (BIGNUM *)0x0)) {
        ERR_new();
        uVar7 = 0x13a;
        goto LAB_0055b963;
      }
      iVar1 = rsa_blinding_convert(local_78,ret,local_60,ctx);
      if (iVar1 == 0) goto LAB_0055b9f8;
      uVar3 = *(uint *)(param_4 + 0xa4);
    }
    if ((((uVar3 & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
       (((*(long *)(param_4 + 0x40) == 0 ||
         (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
          (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
      pBVar5 = BN_new();
      if (pBVar5 == (BIGNUM *)0x0) {
        ERR_new();
        uVar7 = 0x14b;
        goto LAB_0055b963;
      }
      if (*(long *)(param_4 + 0x38) == 0) {
        uVar4 = 0xffffffff;
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x14f,"rsa_ossl_private_encrypt");
        ERR_set_error(4,0xb3,0);
        BN_free(pBVar5);
        goto LAB_0055b6d4;
      }
      BN_with_flags(pBVar5,*(long *)(param_4 + 0x38),4);
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                        (n,ret,pBVar5,*(undefined8 *)(param_4 + 0x28),ctx,
                         *(undefined8 *)(param_4 + 0xa8));
      if (iVar1 == 0) {
        BN_free(pBVar5);
        uVar4 = 0xffffffff;
        goto LAB_0055b6d4;
      }
      BN_free(pBVar5);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(n,ret,param_4,ctx);
      if (iVar1 == 0) goto LAB_0055b9f8;
    }
    if (local_78 != (BN_BLINDING *)0x0) {
      BN_set_flags(n,4);
      iVar1 = BN_BLINDING_invert_ex(n,local_60,local_78,ctx);
      if (iVar1 == 0) goto LAB_0055b9f8;
    }
    if (param_5 == 5) {
      iVar1 = BN_sub(ret,*(BIGNUM **)(param_4 + 0x28),n);
      if (iVar1 == 0) goto LAB_0055b9f8;
      iVar1 = BN_cmp(n,ret);
      if (0 < iVar1) {
        n = ret;
      }
    }
    uVar4 = BN_bn2binpad(n,param_3,iVar2);
  }
LAB_0055b6d4:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_clear_free(to,local_68,"../crypto/rsa/rsa_ossl.c",0x175);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}


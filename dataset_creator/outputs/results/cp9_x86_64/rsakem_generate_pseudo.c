
undefined4
rsakem_generate(long param_1,uchar *param_2,size_t *param_3,uchar *param_4,size_t *param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar5;
  undefined4 uVar6;
  size_t len;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0xfffffffe;
  }
  iVar2 = RSA_size(*(RSA **)(param_1 + 8));
  len = (size_t)iVar2;
  uVar6 = 0;
  if (param_2 == (uchar *)0x0) {
    if (len == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kem/rsa_kem.c",0x100,"rsasve_generate");
      ERR_set_error(0x39,0x9e,0);
      return 0;
    }
    if (param_3 == (size_t *)0x0 && param_5 == (size_t *)0x0) {
      return 0;
    }
    if (param_3 != (size_t *)0x0) {
      *param_3 = len;
    }
    if (param_5 != (size_t *)0x0) {
      *param_5 = len;
      return 1;
    }
LAB_0046c001:
    uVar6 = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar4 = ossl_rsa_get0_libctx(uVar1);
    ctx = (BN_CTX *)BN_CTX_secure_new_ex(uVar4);
    if (ctx == (BN_CTX *)0x0) {
      return 0;
    }
    BN_CTX_start(ctx);
    a = BN_CTX_get(ctx);
    a_00 = BN_CTX_get(ctx);
    if (a_00 != (BIGNUM *)0x0) {
      pBVar5 = (BIGNUM *)RSA_get0_n(uVar1);
      pBVar5 = BN_copy(a,pBVar5);
      if ((((pBVar5 != (BIGNUM *)0x0) && (iVar3 = BN_sub_word(a,3), iVar3 != 0)) &&
          (iVar3 = BN_priv_rand_range_ex(a_00,a,0,ctx), iVar3 != 0)) &&
         ((iVar3 = BN_add_word(a_00,2), iVar3 != 0 &&
          (iVar3 = BN_bn2binpad(a_00,param_4,iVar2), iVar2 == iVar3)))) {
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
        iVar2 = RSA_public_encrypt(iVar2,param_4,param_2,*(RSA **)(param_1 + 8),3);
        if (iVar2 == 0) {
          OPENSSL_cleanse(param_4,len);
          return 0;
        }
        if (param_3 != (size_t *)0x0) {
          *param_3 = len;
        }
        if (param_5 != (size_t *)0x0) {
          *param_5 = len;
        }
        goto LAB_0046c001;
      }
    }
    BN_CTX_end(ctx);
    BN_CTX_free(ctx);
  }
  return uVar6;
}



X509_STORE_CTX *
X509_build_chain(X509 *param_1,stack_st_X509 *param_2,X509_STORE *param_3,int param_4,
                undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  X509_STORE_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  X509_STORE_CTX *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (X509_STORE_CTX *)0x0;
  if (param_1 == (X509 *)0x0) {
    ERR_new();
    ctx = (X509_STORE_CTX *)0x0;
    ERR_set_debug("../crypto/x509/x509_vfy.c",0xd14,"X509_build_chain");
    ERR_set_error(0xb,0xc0102,0);
    goto LAB_0059563c;
  }
  ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(param_5);
  if (ctx == (X509_STORE_CTX *)0x0) goto LAB_0059563c;
  if (param_3 == (X509_STORE *)0x0) {
    iVar2 = X509_STORE_CTX_init(ctx,(X509_STORE *)0x0,param_1,(stack_st_X509 *)0x0);
    if (iVar2 != 0) {
      X509_STORE_CTX_set0_trusted_stack(ctx,param_2);
      iVar2 = ossl_x509_add_cert_new(&ctx->valid,param_1,1);
      if (iVar2 == 0) goto LAB_005956a0;
      *(undefined4 *)((long)&ctx->cleanup + 4) = 1;
      build_chain(ctx);
LAB_005955e6:
      uVar3._0_4_ = ctx->valid;
      uVar3._4_4_ = ctx->last_untrusted;
      iVar2 = OPENSSL_sk_num(uVar3);
      if ((iVar2 < 2) || (uVar3 = 9, param_4 != 0)) {
        uVar3 = 1;
      }
      uVar1._0_4_ = ctx->valid;
      uVar1._4_4_ = ctx->last_untrusted;
      iVar2 = ossl_x509_add_certs_new(&local_38,uVar1,uVar3);
      if (iVar2 == 0) {
        OPENSSL_sk_free(local_38);
        local_38 = (X509_STORE_CTX *)0x0;
      }
    }
  }
  else {
    iVar2 = X509_STORE_CTX_init(ctx,param_3,param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = ossl_x509_add_cert_new(&ctx->valid,param_1,1);
      if (iVar2 == 0) {
LAB_005956a0:
        ctx->explicit_policy = 0x11;
      }
      else {
        *(undefined4 *)((long)&ctx->cleanup + 4) = 1;
        iVar2 = build_chain(ctx);
        if (iVar2 != 0) goto LAB_005955e6;
      }
    }
  }
  X509_STORE_CTX_free(ctx);
  ctx = local_38;
LAB_0059563c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return ctx;
}


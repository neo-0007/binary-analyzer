
int X509_verify_cert(X509_STORE_CTX *ctx)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar6;
  int iVar5;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (ctx == (X509_STORE_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x10a,"X509_verify_cert");
    ERR_set_error(0xb,0xc0102,0);
    return -1;
  }
  if (*(long *)&ctx->current_method == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x10e,"X509_verify_cert");
    uVar8 = 0x69;
LAB_00593fe4:
    ERR_set_error(0xb,uVar8,0);
    ctx->explicit_policy = 0x45;
    return -1;
  }
  lVar6._0_4_ = ctx->valid;
  lVar6._4_4_ = ctx->last_untrusted;
  if (lVar6 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x118,"X509_verify_cert");
    uVar8 = 0xc0101;
    goto LAB_00593fe4;
  }
  iVar4 = ossl_x509_add_cert_new(&ctx->valid,*(long *)&ctx->current_method,1);
  if (iVar4 == 0) {
    ctx->explicit_policy = 0x11;
    return -1;
  }
  *(undefined4 *)((long)&ctx->cleanup + 4) = 1;
  lVar6 = X509_get0_pubkey(*(undefined8 *)&ctx->current_method);
  iVar4 = *(int *)((long)&ctx->crls[1].stack.data + 4);
  if (0 < iVar4) {
    if (lVar6 != 0) {
      iVar5 = EVP_PKEY_get_security_bits();
      if (5 < iVar4) {
        iVar4 = 5;
      }
      if (*(int *)(minbits_table + (long)(iVar4 + -1) * 4) <= iVar5) goto LAB_00593d51;
    }
    *(undefined4 *)((long)&ctx->tree + 4) = 0;
    lVar6 = *(long *)&ctx->current_method;
    if (lVar6 == 0) {
      uVar8._0_4_ = ctx->valid;
      uVar8._4_4_ = ctx->last_untrusted;
      lVar6 = OPENSSL_sk_value(uVar8,0);
    }
    *(long *)&ctx->error = lVar6;
    ctx->explicit_policy = 0x42;
    iVar4 = (*ctx->verify)((X509_STORE_CTX *)0x0);
    if (iVar4 == 0) {
      return 0;
    }
  }
LAB_00593d51:
  lVar6 = *(long *)&(ctx->ex_data).dummy;
  if ((lVar6 == 0) || (iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar6 + 8)), iVar4 < 1)) {
LAB_00593d6a:
    iVar4 = verify_chain(ctx);
  }
  else {
    lVar6 = *(long *)&(ctx->ex_data).dummy;
    lVar9 = *(long *)&ctx->current_method;
    X509_free(*(X509 **)(lVar6 + 0x20));
    *(undefined8 *)(lVar6 + 0x2c) = 0xffffffffffffffff;
    uVar8 = *(undefined8 *)&ctx->current_method;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    uVar1 = *(undefined8 *)&(ctx->ex_data).dummy;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    iVar4 = dane_match_isra_0(*(undefined4 *)((long)&ctx->cleanup + 4),uVar1,uVar8,0);
    if (iVar4 == 0) {
      if (((*(byte *)(lVar6 + 0x28) & 5) != 0) || (-1 < *(int *)(lVar6 + 0x2c))) goto LAB_00593d6a;
      iVar4 = X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)&ctx->valid);
      if (iVar4 == 0) goto LAB_00594115;
      iVar4 = X509_chain_check_suiteb(0,lVar9,0,(ctx->crls->stack).comp);
      *(undefined4 *)((long)&ctx->tree + 4) = 0;
      if (iVar4 != 0) {
        if (lVar9 == 0) {
          uVar2._0_4_ = ctx->valid;
          uVar2._4_4_ = ctx->last_untrusted;
          uVar8 = OPENSSL_sk_value(uVar2,0);
          ctx->explicit_policy = iVar4;
          *(undefined8 *)&ctx->error = uVar8;
          iVar4 = (*ctx->verify)((X509_STORE_CTX *)0x0);
          if (iVar4 != 0) {
            *(undefined4 *)((long)&ctx->tree + 4) = 0;
            goto LAB_0059409c;
          }
        }
        else {
          *(long *)&ctx->error = lVar9;
          ctx->explicit_policy = iVar4;
          iVar4 = (*ctx->verify)((X509_STORE_CTX *)0x0);
          if (iVar4 != 0) {
            *(undefined4 *)((long)&ctx->tree + 4) = 0;
            goto LAB_00593e2b;
          }
        }
LAB_00593ee8:
        iVar4 = 0;
        goto LAB_00593ef0;
      }
      if (lVar9 == 0) {
LAB_0059409c:
        uVar3._0_4_ = ctx->valid;
        uVar3._4_4_ = ctx->last_untrusted;
        lVar9 = OPENSSL_sk_value(uVar3,0);
      }
LAB_00593e2b:
      *(long *)&ctx->error = lVar9;
      ctx->explicit_policy = 0x41;
      iVar4 = (*ctx->verify)((X509_STORE_CTX *)0x0);
    }
    else {
      iVar5 = X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)&ctx->valid);
      if (iVar5 == 0) {
LAB_00594115:
        iVar4 = -1;
        goto LAB_00593ef0;
      }
      if (iVar4 < 1) {
        *(long *)&ctx->error = lVar9;
        *(undefined8 *)((long)&ctx->tree + 4) = 0x1100000000;
        return -1;
      }
      iVar4 = X509_chain_check_suiteb(0,lVar9,0,(ctx->crls->stack).comp);
      if (iVar4 != 0) {
        *(undefined4 *)((long)&ctx->tree + 4) = 0;
        lVar7 = lVar9;
        if (lVar9 == 0) {
          uVar1._0_4_ = ctx->valid;
          uVar1._4_4_ = ctx->last_untrusted;
          lVar7 = OPENSSL_sk_value(uVar1,0);
        }
        *(long *)&ctx->error = lVar7;
        ctx->explicit_policy = iVar4;
        iVar4 = (*ctx->verify)((X509_STORE_CTX *)0x0);
        if (iVar4 == 0) {
          iVar4 = 0;
          goto LAB_00593ef0;
        }
      }
      if (((*(byte *)(lVar6 + 0x38) & 1) == 0) && (iVar4 = check_id(ctx), iVar4 == 0))
      goto LAB_00593ee8;
      *(long *)&ctx->error = lVar9;
      *(undefined4 *)((long)&ctx->tree + 4) = 0;
      iVar4 = (*ctx->verify)((X509_STORE_CTX *)0x1);
    }
  }
  if (0 < iVar4) {
    return iVar4;
  }
LAB_00593ef0:
  if (ctx->explicit_policy != 0) {
    return iVar4;
  }
  ctx->explicit_policy = 1;
  return iVar4;
}


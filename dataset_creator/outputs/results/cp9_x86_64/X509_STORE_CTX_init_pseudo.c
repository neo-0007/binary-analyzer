
int X509_STORE_CTX_init(X509_STORE_CTX *ctx,X509_STORE *store,X509 *x509,stack_st_X509 *chain)

{
  stack_st_X509_CRL *psVar1;
  int iVar2;
  code *pcVar3;
  _func_1864 *p_Var4;
  X509_VERIFY_PARAM *pXVar5;
  X509_PURPOSE *xp;
  undefined8 uVar6;
  
  if (ctx == (X509_STORE_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x919,"X509_STORE_CTX_init");
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  X509_STORE_CTX_cleanup(ctx);
  ctx->cert = (X509 *)chain;
  ctx->ctx = store;
  *(X509 **)&ctx->current_method = x509;
  ctx->untrusted = (stack_st_X509 *)0x0;
  ctx->param = (X509_VERIFY_PARAM *)0x0;
  ctx->cleanup = (_func_1866 *)0x0;
  ctx->valid = 0;
  ctx->last_untrusted = 0;
  ctx->chain = (stack_st_X509 *)0x0;
  ctx->tree = (X509_POLICY_TREE *)0x0;
  ctx->explicit_policy = 0;
  *(undefined8 *)&ctx->error = 0;
  ctx->current_cert = (X509 *)0x0;
  ctx->current_issuer = (X509 *)0x0;
  ctx->current_crl = (X509_CRL *)0x0;
  ctx->current_crl_score = 0;
  ctx->current_reasons = 0;
  *(undefined8 *)&(ctx->ex_data).dummy = 0;
  *(undefined4 *)&ctx[1].ctx = 0;
  ctx->parent = (X509_STORE_CTX *)0x0;
  (ctx->ex_data).sk = (stack_st_void *)0x0;
  if (store == (X509_STORE *)0x0) {
    ctx->check_revocation = (_func_1859 *)0x0;
    ctx->get_issuer = check_issued;
    ctx->lookup_crls = (_func_1865 *)0x0;
    ctx->verify_cb = X509_STORE_CTX_get1_issuer;
    ctx->verify = null_callback;
    ctx->other_ctx = internal_verify;
    ctx->check_issued = check_revocation;
    ctx->get_crl = check_crl;
    ctx->check_crl = cert_crl;
    ctx->cert_crl = check_policy;
    ctx->check_policy = X509_STORE_CTX_get1_certs;
    ctx->lookup_certs = X509_STORE_CTX_get1_crls;
    pXVar5 = X509_VERIFY_PARAM_new();
    ctx->crls = (stack_st_X509_CRL *)pXVar5;
    if (pXVar5 == (X509_VERIFY_PARAM *)0x0) goto LAB_00594ed3;
    *(uint *)&pXVar5->inh_flags = (uint)pXVar5->inh_flags | 0x11;
LAB_00594d4a:
    pXVar5 = X509_VERIFY_PARAM_lookup("default");
    iVar2 = X509_VERIFY_PARAM_inherit((X509_VERIFY_PARAM *)ctx->crls,pXVar5);
    if (iVar2 != 0) {
      if (*(int *)&ctx->crls[1].stack.field_0x4 == 0) {
        iVar2 = X509_PURPOSE_get_by_id(ctx->crls[1].stack.num);
        xp = X509_PURPOSE_get0(iVar2);
        if (xp != (X509_PURPOSE *)0x0) {
          psVar1 = ctx->crls;
          iVar2 = X509_PURPOSE_get_trust(xp);
          *(int *)&psVar1[1].stack.field_0x4 = iVar2;
        }
      }
      iVar2 = CRYPTO_new_ex_data(5,ctx,(CRYPTO_EX_DATA *)&ctx->parent);
      if (iVar2 != 0) {
        return 1;
      }
      ERR_new();
      uVar6 = 0x996;
      goto LAB_00594da3;
    }
  }
  else {
    ctx->lookup_crls = (_func_1865 *)(store->ex_data).sk;
    pcVar3 = store->check_issued;
    if (pcVar3 == (_func_1846 *)0x0) {
      pcVar3 = check_issued;
    }
    ctx->get_issuer = pcVar3;
    pcVar3 = store->get_issuer;
    if (pcVar3 == (_func_1845 *)0x0) {
      pcVar3 = X509_STORE_CTX_get1_issuer;
    }
    ctx->verify_cb = pcVar3;
    pcVar3 = store->verify_cb;
    if (pcVar3 == (_func_1844 *)0x0) {
      pcVar3 = null_callback;
    }
    ctx->verify = pcVar3;
    pcVar3 = store->verify;
    if (pcVar3 == (_func_1843 *)0x0) {
      pcVar3 = internal_verify;
    }
    ctx->other_ctx = pcVar3;
    pcVar3 = store->check_revocation;
    if (pcVar3 == (_func_1858 *)0x0) {
      pcVar3 = check_revocation;
    }
    ctx->check_issued = pcVar3;
    ctx->check_revocation = (_func_1859 *)store->get_crl;
    pcVar3 = store->check_crl;
    if (pcVar3 == (_func_1860 *)0x0) {
      pcVar3 = check_crl;
    }
    ctx->get_crl = pcVar3;
    pcVar3 = store->cert_crl;
    if (pcVar3 == (_func_1850 *)0x0) {
      pcVar3 = cert_crl;
    }
    ctx->check_crl = pcVar3;
    pcVar3 = store->lookup_certs;
    if (pcVar3 == (_func_1862 *)0x0) {
      pcVar3 = check_policy;
    }
    ctx->cert_crl = pcVar3;
    if (store->lookup_crls == (_func_1852 *)0x0) {
      ctx->check_policy = X509_STORE_CTX_get1_certs;
      p_Var4 = (_func_1864 *)store->cleanup;
      if (p_Var4 == (_func_1864 *)0x0) goto LAB_00594eb0;
LAB_00594d1d:
      ctx->lookup_certs = p_Var4;
      pXVar5 = X509_VERIFY_PARAM_new();
      ctx->crls = (stack_st_X509_CRL *)pXVar5;
    }
    else {
      ctx->check_policy = (_func_1863 *)store->lookup_crls;
      p_Var4 = (_func_1864 *)store->cleanup;
      if (p_Var4 != (_func_1864 *)0x0) goto LAB_00594d1d;
LAB_00594eb0:
      ctx->lookup_certs = X509_STORE_CTX_get1_crls;
      pXVar5 = X509_VERIFY_PARAM_new();
      ctx->crls = (stack_st_X509_CRL *)pXVar5;
    }
    if (pXVar5 == (X509_VERIFY_PARAM *)0x0) {
LAB_00594ed3:
      ERR_new();
      uVar6 = 0x974;
      goto LAB_00594da3;
    }
    iVar2 = X509_VERIFY_PARAM_inherit(pXVar5,store->param);
    if (iVar2 != 0) goto LAB_00594d4a;
  }
  ERR_new();
  uVar6 = 0x983;
LAB_00594da3:
  ERR_set_debug("../crypto/x509/x509_vfy.c",uVar6,"X509_STORE_CTX_init");
  ERR_set_error(0xb,0xc0100,0);
  X509_STORE_CTX_cleanup(ctx);
  return 0;
}


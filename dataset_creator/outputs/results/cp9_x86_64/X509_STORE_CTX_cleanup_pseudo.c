
void X509_STORE_CTX_cleanup(X509_STORE_CTX *ctx)

{
  long lVar1;
  undefined8 uVar2;
  X509_NAME *in_RSI;
  
  if (ctx->lookup_crls != (_func_1865 *)0x0) {
    (*ctx->lookup_crls)(ctx,in_RSI);
    ctx->lookup_crls = (_func_1865 *)0x0;
  }
  if ((X509_VERIFY_PARAM *)ctx->crls != (X509_VERIFY_PARAM *)0x0) {
    lVar1._0_4_ = ctx->current_crl_score;
    lVar1._4_4_ = ctx->current_reasons;
    if (lVar1 == 0) {
      X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)ctx->crls);
    }
    ctx->crls = (stack_st_X509_CRL *)0x0;
  }
  X509_policy_tree_free((X509_POLICY_TREE *)ctx->chain);
  uVar2._0_4_ = ctx->valid;
  uVar2._4_4_ = ctx->last_untrusted;
  ctx->chain = (stack_st_X509 *)0x0;
  OPENSSL_sk_pop_free(uVar2,X509_free);
  ctx->valid = 0;
  ctx->last_untrusted = 0;
  CRYPTO_free_ex_data(5,ctx,(CRYPTO_EX_DATA *)&ctx->parent);
  ctx->parent = (X509_STORE_CTX *)0x0;
  (ctx->ex_data).sk = (stack_st_void *)0x0;
  return;
}


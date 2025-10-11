
void X509V3_set_ctx(X509V3_CTX *ctx,X509 *issuer,X509 *subject,X509_REQ *req,X509_CRL *crl,int flags
                   )

{
  if (ctx != (X509V3_CTX *)0x0) {
    ctx->flags = flags;
    ctx->issuer_cert = issuer;
    ctx->subject_cert = subject;
    ctx->subject_req = req;
    ctx->crl = crl;
    ctx->db_meth = (X509V3_CONF_METHOD *)0x0;
    ctx->db = (void *)0x0;
    *(undefined8 *)(ctx + 1) = 0;
    return;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_conf.c",0x1c2,"X509V3_set_ctx");
  ERR_set_error(0x22,0xc0102,0);
  return;
}


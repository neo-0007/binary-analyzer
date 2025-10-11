
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BN_MONT_CTX * BN_MONT_CTX_new(void)

{
  BN_MONT_CTX *ctx;
  
  ctx = (BN_MONT_CTX *)CRYPTO_malloc(0x68,"../crypto/bn/bn_mont.c",0xe8);
  if (ctx == (BN_MONT_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_mont.c",0xe9,"BN_MONT_CTX_new");
    ERR_set_error(3,0xc0100,0);
  }
  else {
    BN_MONT_CTX_init(ctx);
    ctx->flags = 1;
  }
  return ctx;
}


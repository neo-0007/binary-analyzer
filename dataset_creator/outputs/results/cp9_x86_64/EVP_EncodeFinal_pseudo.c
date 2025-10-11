
void EVP_EncodeFinal(EVP_ENCODE_CTX *ctx,uchar *out,int *outl)

{
  uint uVar1;
  ulong uVar2;
  
  if (ctx->num == 0) {
    *outl = 0;
    return;
  }
  uVar1 = evp_encodeblock_int(ctx,out,ctx->enc_data);
  uVar2 = (ulong)uVar1;
  if ((ctx->expect_nl & 1) == 0) {
    uVar1 = uVar1 + 1;
    out[uVar2] = '\n';
  }
  out[uVar1] = '\0';
  ctx->num = 0;
  *outl = uVar1;
  return;
}


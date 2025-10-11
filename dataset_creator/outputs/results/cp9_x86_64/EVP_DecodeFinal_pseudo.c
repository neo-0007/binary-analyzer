
int EVP_DecodeFinal(EVP_ENCODE_CTX *ctx,uchar *out,int *outl)

{
  int iVar1;
  int iVar2;
  
  *outl = 0;
  if (ctx->num == 0) {
    return 1;
  }
  iVar1 = evp_decodeblock_int(ctx,out,ctx->enc_data);
  iVar2 = -1;
  if (-1 < iVar1) {
    ctx->num = 0;
    iVar2 = 1;
    *outl = iVar1;
  }
  return iVar2;
}



void EVP_EncodeUpdate(EVP_ENCODE_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uchar *__src;
  
  *outl = 0;
  if (inl < 1) {
    return;
  }
  if (0x50 < ctx->length) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                "../crypto/evp/encode.c",0xab);
  }
  iVar1 = ctx->num;
  iVar2 = ctx->length - iVar1;
  if (inl < iVar2) {
    memcpy(ctx->enc_data + iVar1,in,(long)inl);
    ctx->num = ctx->num + inl;
    return;
  }
  uVar4 = 0;
  __src = in;
  if (iVar1 != 0) {
    __src = in + iVar2;
    memcpy(ctx->enc_data + iVar1,in,(long)iVar2);
    inl = inl - iVar2;
    iVar1 = evp_encodeblock_int(ctx,out,ctx->enc_data,ctx->length);
    ctx->num = 0;
    uVar4 = (ulong)iVar1;
    out = out + uVar4;
    if ((ctx->expect_nl & 1) == 0) {
      *out = '\n';
      uVar4 = uVar4 + 1;
      out = out + 1;
    }
    *out = '\0';
    if (inl < ctx->length) {
LAB_005f3a05:
      if (uVar4 < 0x80000000) {
        if (inl != 0) {
          memcpy(ctx->enc_data,__src,(long)inl);
        }
        ctx->num = inl;
        *outl = (int)uVar4;
        return;
      }
      goto LAB_005f3aad;
    }
    if (0x7fffffff < uVar4) goto LAB_005f3aad;
  }
  uVar3 = 0x80000000;
  do {
    iVar1 = evp_encodeblock_int(ctx,out,__src);
    __src = __src + ctx->length;
    inl = inl - ctx->length;
    out = out + iVar1;
    uVar4 = uVar4 + (long)iVar1;
    if ((ctx->expect_nl & 1) == 0) {
      *out = '\n';
      uVar4 = uVar4 + 1;
      out = out + 1;
    }
    *out = '\0';
    if (inl < ctx->length) goto LAB_005f3a05;
  } while (uVar4 < uVar3);
LAB_005f3aad:
  *outl = 0;
  return;
}


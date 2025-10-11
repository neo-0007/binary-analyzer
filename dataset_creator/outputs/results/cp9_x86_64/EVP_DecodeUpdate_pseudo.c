
int EVP_DecodeUpdate(EVP_ENCODE_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  uchar *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  puVar1 = ctx->enc_data;
  uVar8 = ctx->num;
  iVar7 = 0;
  if (((0 < (int)uVar8) && (iVar7 = 0, ctx->enc_data[(long)(int)uVar8 + -1] == '=')) &&
     (iVar7 = 1, uVar8 != 1)) {
    iVar7 = (ctx->enc_data[(long)(int)uVar8 + -2] == '=') + 1;
  }
  uVar9 = 0;
  if (inl != 0) {
    puVar10 = srpdata_ascii2bin;
    if ((ctx->expect_nl & 2) == 0) {
      puVar10 = data_ascii2bin;
    }
    if (0 < inl) {
      pbVar2 = in + inl;
      inl = 0;
LAB_005f3c62:
      bVar3 = *in;
      in = in + 1;
      if ((-1 < (char)bVar3) && (bVar4 = puVar10[bVar3], bVar4 != 0xff)) {
        if (bVar3 == 0x3d) {
          iVar7 = iVar7 + 1;
          if (iVar7 != 3) goto LAB_005f3c98;
          goto LAB_005f3d58;
        }
        if (iVar7 == 0) {
LAB_005f3c98:
          if (bVar4 == 0xf2) goto LAB_005f3d40;
          if ((bVar4 | 0x13) != 0xf3) {
            if (0x3f < (int)uVar8) goto LAB_005f3d58;
            lVar6 = (long)(int)uVar8;
            uVar8 = uVar8 + 1;
            puVar1[lVar6] = bVar3;
          }
joined_r0x005f3cc5:
          if (uVar8 == 0x40) {
            iVar5 = evp_decodeblock_int(ctx,out,puVar1,0x40);
            if (iVar7 <= iVar5) {
              uVar8 = 0;
              inl = inl + (iVar5 - iVar7);
              out = out + (iVar5 - iVar7);
              goto joined_r0x005f3d01;
            }
            goto LAB_005f3df0;
          }
joined_r0x005f3d01:
          if (in == pbVar2) goto LAB_005f3d10;
          goto LAB_005f3c62;
        }
        if ((bVar4 | 0x13) != 0xf3) goto LAB_005f3d58;
        if (bVar4 != 0xf2) goto joined_r0x005f3cc5;
LAB_005f3d40:
        uVar9 = 0;
        if ((int)uVar8 < 1) goto LAB_005f3d5e;
        uVar9 = uVar8 & 3;
        if ((uVar8 & 3) == 0) {
          iVar5 = evp_decodeblock_int(ctx,out,puVar1,uVar8);
          if (iVar5 < iVar7) {
LAB_005f3df0:
            uVar8 = 0;
            goto LAB_005f3d58;
          }
          uVar8 = 0;
          inl = inl + (iVar5 - iVar7);
          goto LAB_005f3d5e;
        }
      }
LAB_005f3d58:
      uVar9 = 0xffffffff;
      goto LAB_005f3d5e;
    }
    inl = 0;
LAB_005f3d10:
    if ((int)uVar8 < 1) {
      uVar9 = (uint)(uVar8 != 0);
    }
    else {
      uVar9 = 1;
      if ((uVar8 & 3) == 0) {
        uVar9 = 0xffffffff;
        iVar5 = evp_decodeblock_int(ctx,out,puVar1,uVar8);
        uVar8 = 0;
        if (iVar5 < iVar7) goto LAB_005f3d5e;
        inl = inl + (iVar5 - iVar7);
        uVar9 = 0;
        uVar8 = 0;
      }
    }
    uVar9 = iVar7 == 0 | uVar9;
  }
LAB_005f3d5e:
  *outl = inl;
  ctx->num = uVar8;
  return uVar9;
}


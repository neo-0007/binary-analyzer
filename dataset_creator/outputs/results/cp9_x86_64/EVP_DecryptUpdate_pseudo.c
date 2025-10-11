
int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  EVP_CIPHER *pEVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  uchar *puVar13;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("../crypto/evp/evp_enc.c",0x317,"EVP_DecryptUpdate");
    ERR_set_error(6,0xc0102,0);
  }
  else {
    *outl = 0;
    if (ctx->encrypt == 0) {
      pEVar6 = ctx->cipher;
      uVar5 = 0;
      if (pEVar6 == (EVP_CIPHER *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_enc.c",0x322,"EVP_DecryptUpdate");
        ERR_set_error(6,0x83,0);
      }
      else {
        lVar10 = (long)inl;
        if (pEVar6[1].do_cipher == (_func_1090 *)0x0) {
          uVar3 = pEVar6->block_size;
          EVP_CIPHER_CTX_test_flags(ctx,0x2000);
          pEVar6 = ctx->cipher;
          if ((pEVar6->flags & 0x100000) == 0) {
            if (inl < 1) {
              *outl = 0;
              uVar5 = (uint)(inl == 0);
            }
            else {
              if ((ctx->flags & 0x100) != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  iVar2 = evp_EncryptDecryptUpdate(ctx,out,outl,in);
                  return iVar2;
                }
                goto LAB_0040a280;
              }
              if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","../crypto/evp/evp_enc.c",
                            0x35b);
              }
              uVar4 = ctx->final_used;
              if (uVar4 != 0) {
                if ((out == in) || (iVar2 = ossl_is_partially_overlapping(out,in,uVar3), iVar2 != 0)
                   ) {
                  ERR_new();
                  uVar12 = 0x361;
                  goto LAB_0040a0d1;
                }
                if (0x7fffffff - uVar3 < (-uVar3 & inl)) {
                  ERR_new();
                  uVar5 = 0;
                  ERR_set_debug("../crypto/evp/evp_enc.c",0x36e,"EVP_DecryptUpdate");
                  ERR_set_error(6,0xca,0);
                  goto LAB_00409db0;
                }
                if (uVar3 < 8) {
                  if ((uVar3 & 4) == 0) {
                    if ((uVar3 != 0) && (*out = ctx->final[0], (uVar3 & 2) != 0)) {
                      *(undefined2 *)(out + ((ulong)uVar3 - 2)) =
                           *(undefined2 *)(ctx->final + ((ulong)uVar3 - 2));
                    }
                  }
                  else {
                    *(undefined4 *)out = *(undefined4 *)ctx->final;
                    *(undefined4 *)(out + ((ulong)uVar3 - 4)) =
                         *(undefined4 *)(ctx->final + ((ulong)uVar3 - 4));
                  }
                }
                else {
                  *(undefined8 *)out = *(undefined8 *)ctx->final;
                  *(undefined8 *)(out + ((ulong)uVar3 - 8)) =
                       *(undefined8 *)(ctx->final + ((ulong)uVar3 - 8));
                  lVar10 = (long)out - ((ulong)(out + 8) & 0xfffffffffffffff8);
                  uVar4 = (int)lVar10 + uVar3 & 0xfffffff8;
                  if (7 < uVar4) {
                    uVar8 = 0;
                    do {
                      uVar11 = (ulong)uVar8;
                      uVar8 = uVar8 + 8;
                      *(undefined8 *)(((ulong)(out + 8) & 0xfffffffffffffff8) + uVar11) =
                           *(undefined8 *)((long)ctx + uVar11 + (0x88 - lVar10));
                    } while (uVar8 < uVar4);
                  }
                }
                out = out + uVar3;
                uVar4 = 1;
              }
              iVar2 = evp_EncryptDecryptUpdate(ctx,out,outl,in);
              if (iVar2 != 0) {
                if ((uVar3 < 2) || (ctx->buf_len != 0)) {
                  ctx->final_used = 0;
                }
                else {
                  *outl = *outl - uVar3;
                  ctx->final_used = 1;
                  puVar13 = out + *outl;
                  if (uVar3 < 8) {
                    if ((uVar3 & 4) == 0) {
                      if ((uVar3 != 0) && (ctx->final[0] = *puVar13, (uVar3 & 2) != 0)) {
                        *(undefined2 *)(ctx->final + ((ulong)uVar3 - 2)) =
                             *(undefined2 *)(puVar13 + ((ulong)uVar3 - 2));
                      }
                    }
                    else {
                      *(undefined4 *)ctx->final = *(undefined4 *)puVar13;
                      *(undefined4 *)(ctx->final + ((ulong)uVar3 - 4)) =
                           *(undefined4 *)(puVar13 + ((ulong)uVar3 - 4));
                    }
                  }
                  else {
                    *(undefined8 *)ctx->final = *(undefined8 *)puVar13;
                    uVar11 = (ulong)(ctx->final + 8) & 0xfffffffffffffff8;
                    *(undefined8 *)(ctx->final + ((ulong)uVar3 - 8)) =
                         *(undefined8 *)(puVar13 + ((ulong)uVar3 - 8));
                    lVar10 = (long)ctx + (0x88 - uVar11);
                    uVar5 = (int)lVar10 + uVar3 & 0xfffffff8;
                    if (7 < uVar5) {
                      uVar9 = 0;
                      do {
                        uVar8 = (int)uVar9 + 8;
                        *(undefined8 *)(uVar11 + uVar9) =
                             *(undefined8 *)(puVar13 + (uVar9 - lVar10));
                        uVar9 = (ulong)uVar8;
                      } while (uVar8 < uVar5);
                    }
                  }
                }
                uVar5 = 1;
                if (uVar4 != 0) {
                  *outl = *outl + uVar3;
                  uVar5 = uVar4;
                }
              }
            }
          }
          else {
            if (uVar3 == 1) {
              iVar2 = ossl_is_partially_overlapping(out,in);
              if (iVar2 != 0) {
                ERR_new();
                uVar12 = 0x346;
LAB_0040a0d1:
                ERR_set_debug("../crypto/evp/evp_enc.c",uVar12,"EVP_DecryptUpdate");
                ERR_set_error(6,0xa2,0);
                goto LAB_00409db0;
              }
              pEVar6 = ctx->cipher;
            }
            iVar2 = (*pEVar6->cleanup)(ctx);
            if (iVar2 < 0) {
              *outl = 0;
            }
            else {
              *outl = iVar2;
              uVar5 = 1;
            }
          }
        }
        else {
          iVar2 = EVP_CIPHER_CTX_get_block_size();
          pcVar1 = (code *)ctx->cipher[1].app_data;
          if ((pcVar1 == (code *)0x0) || (iVar2 < 1)) {
            ERR_new();
            uVar12 = 0x32b;
LAB_00409df1:
            ERR_set_debug("../crypto/evp/evp_enc.c",uVar12,"EVP_DecryptUpdate");
            ERR_set_error(6,0xbd,0);
          }
          else {
            lVar7 = iVar2 + lVar10;
            if (iVar2 == 1) {
              lVar7 = lVar10;
            }
            uVar3 = (*pcVar1)(ctx[1].cipher,out,&local_48,lVar7,in,lVar10);
            if (uVar3 != 0) {
              if (0x7fffffff < local_48) {
                ERR_new();
                uVar12 = 0x334;
                goto LAB_00409df1;
              }
              *outl = (int)local_48;
              uVar5 = uVar3;
            }
          }
        }
      }
    }
    else {
      ERR_new();
      uVar5 = 0;
      ERR_set_debug("../crypto/evp/evp_enc.c",0x31d,"EVP_DecryptUpdate");
      ERR_set_error(6,0x94,0);
    }
  }
LAB_00409db0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_0040a280:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


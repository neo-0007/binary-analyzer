
int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *outm,int *outl)

{
  byte bVar1;
  uint uVar2;
  EVP_CIPHER *pEVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    iVar6 = 0;
    ERR_set_debug("../crypto/evp/evp_enc.c",0x39d,"EVP_DecryptFinal_ex");
    ERR_set_error(6,0xc0102,0);
    goto LAB_0040a3c0;
  }
  *outl = 0;
  if (ctx->encrypt != 0) {
    ERR_new();
    iVar6 = 0;
    ERR_set_debug("../crypto/evp/evp_enc.c",0x3a3,"EVP_DecryptFinal_ex");
    ERR_set_error(6,0x94,0);
    goto LAB_0040a3c0;
  }
  pEVar3 = ctx->cipher;
  iVar6 = 0;
  if (pEVar3 == (EVP_CIPHER *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x3a8,"EVP_DecryptFinal_ex");
    ERR_set_error(6,0x83,0);
    goto LAB_0040a3c0;
  }
  if (pEVar3[1].do_cipher == (_func_1090 *)0x0) {
    if ((pEVar3->flags & 0x100000) != 0) {
      iVar4 = (*pEVar3->cleanup)(ctx);
      if (-1 < iVar4) {
        *outl = iVar4;
        iVar6 = 1;
      }
      goto LAB_0040a3c0;
    }
    uVar2 = pEVar3->block_size;
    uVar5 = (ulong)((uint)ctx->flags & 0x100);
    if ((ctx->flags & 0x100) == 0) {
      if (1 < uVar2) {
        if ((ctx->buf_len != 0) || (ctx->final_used == 0)) {
          ERR_new();
          ERR_set_debug("../crypto/evp/evp_enc.c",0x3db,"EVP_DecryptFinal_ex");
          ERR_set_error(6,0x6d,0);
          goto LAB_0040a3c0;
        }
        if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","../crypto/evp/evp_enc.c",0x3de);
        }
        uVar7 = (ulong)(uVar2 - 1);
        bVar1 = ctx->final[uVar7];
        if (bVar1 == 0) {
LAB_0040a682:
          ERR_new();
          uVar8 = 0x3e6;
        }
        else {
          if ((int)uVar2 < (int)(uint)bVar1) goto LAB_0040a682;
          do {
            if ((int)uVar7 == uVar2 - bVar1) {
              iVar6 = uVar2 - bVar1;
              if (0 < iVar6) {
                do {
                  outm[uVar5] = ctx->final[uVar5];
                  uVar5 = uVar5 + 1;
                } while ((long)iVar6 != uVar5);
              }
              *outl = iVar6;
              iVar6 = 1;
              goto LAB_0040a3c0;
            }
            uVar7 = (ulong)((int)uVar7 - 1);
          } while (bVar1 == ctx->final[uVar7]);
          ERR_new();
          uVar8 = 0x3eb;
        }
        iVar6 = 0;
        ERR_set_debug("../crypto/evp/evp_enc.c",uVar8,"EVP_DecryptFinal_ex");
        ERR_set_error(6,100,0);
        goto LAB_0040a3c0;
      }
    }
    else if (ctx->buf_len != 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_enc.c",0x3d3,"EVP_DecryptFinal_ex");
      ERR_set_error(6,0x8a,0);
      goto LAB_0040a3c0;
    }
    iVar6 = 1;
    goto LAB_0040a3c0;
  }
  iVar4 = EVP_CIPHER_CTX_get_block_size();
  if (iVar4 < 1) {
LAB_0040a470:
    ERR_new();
    uVar8 = 0x3b2;
  }
  else {
    if (*(code **)(ctx->cipher + 2) == (code *)0x0) goto LAB_0040a470;
    if (iVar4 == 1) {
      iVar4 = 0;
    }
    iVar4 = (**(code **)(ctx->cipher + 2))(ctx[1].cipher,outm,&local_38,(long)iVar4);
    if (iVar4 == 0) goto LAB_0040a3c0;
    if (local_38 < 0x80000000) {
      *outl = (int)local_38;
      iVar6 = iVar4;
      goto LAB_0040a3c0;
    }
    ERR_new();
    uVar8 = 0x3bb;
  }
  ERR_set_debug("../crypto/evp/evp_enc.c",uVar8,"EVP_DecryptFinal_ex");
  ERR_set_error(6,0xbc,0);
LAB_0040a3c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


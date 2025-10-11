
int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *out,int *outl)

{
  uint uVar1;
  uint uVar2;
  EVP_CIPHER *pEVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    iVar4 = 0;
    ERR_set_debug("../crypto/evp/evp_enc.c",0x2c0,"EVP_EncryptFinal_ex");
    ERR_set_error(6,0xc0102,0);
    goto LAB_00409a94;
  }
  *outl = 0;
  if (ctx->encrypt == 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x2c6,"EVP_EncryptFinal_ex");
    ERR_set_error(6,0x94,0);
    iVar4 = 0;
    goto LAB_00409a94;
  }
  pEVar3 = ctx->cipher;
  if (pEVar3 == (EVP_CIPHER *)0x0) {
    ERR_new();
    iVar4 = 0;
    ERR_set_debug("../crypto/evp/evp_enc.c",0x2cb,"EVP_EncryptFinal_ex");
    ERR_set_error(6,0x83,0);
    goto LAB_00409a94;
  }
  if (pEVar3[1].do_cipher == (_func_1090 *)0x0) {
    if ((pEVar3->flags & 0x100000) == 0) {
      uVar1 = pEVar3->block_size;
      if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: b <= sizeof(ctx->buf)","../crypto/evp/evp_enc.c",0x2f2);
      }
      iVar4 = 1;
      if (uVar1 != 1) {
        uVar2 = ctx->buf_len;
        if ((ctx->flags & 0x100) == 0) {
          if (uVar2 < uVar1) {
            memset(ctx->buf + uVar2,uVar1 - uVar2 & 0xff,(ulong)((uVar1 - uVar2) - 1) + 1);
          }
          iVar4 = (*pEVar3->cleanup)(ctx);
          if (iVar4 != 0) {
            *outl = uVar1;
          }
        }
        else if (uVar2 != 0) {
          ERR_new();
          iVar4 = 0;
          ERR_set_debug("../crypto/evp/evp_enc.c",0x2fa,"EVP_EncryptFinal_ex");
          ERR_set_error(6,0x8a,0);
        }
      }
      goto LAB_00409a94;
    }
    iVar4 = (*pEVar3->cleanup)(ctx);
    if (-1 < iVar4) {
      *outl = iVar4;
      iVar4 = 1;
      goto LAB_00409a94;
    }
  }
  else {
    iVar4 = EVP_CIPHER_CTX_get_block_size();
    if (iVar4 < 1) {
LAB_00409ba8:
      ERR_new();
      uVar5 = 0x2d4;
    }
    else {
      if (*(code **)(ctx->cipher + 2) == (code *)0x0) goto LAB_00409ba8;
      if (iVar4 == 1) {
        iVar4 = 0;
      }
      iVar4 = (**(code **)(ctx->cipher + 2))(ctx[1].cipher,out,&local_48,(long)iVar4);
      if (iVar4 == 0) goto LAB_00409a91;
      if (local_48 < 0x80000000) {
        *outl = (int)local_48;
        goto LAB_00409a94;
      }
      ERR_new();
      uVar5 = 0x2dd;
    }
    ERR_set_debug("../crypto/evp/evp_enc.c",uVar5,"EVP_EncryptFinal_ex");
    ERR_set_error(6,0xbc,0);
  }
LAB_00409a91:
  iVar4 = 0;
LAB_00409a94:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


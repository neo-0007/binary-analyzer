
uchar * PKCS12_pbe_crypt_ex(undefined8 *param_1,undefined8 param_2,int param_3,uchar *param_4,
                           int param_5,undefined8 *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar3;
  ulong uVar4;
  uchar *out;
  char *pcVar5;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  local_44 = 0;
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
    ERR_new(param_1,param_2);
    out = (uchar *)0x0;
    ERR_set_debug("../crypto/pkcs12/p12_decr.c",0x1f,"PKCS12_pbe_crypt_ex");
    ERR_set_error(0x23,0xc0100,0);
    goto LAB_005463ac;
  }
  out = (uchar *)0x0;
  iVar1 = EVP_PBE_CipherInit_ex(*param_1,param_2,param_3,param_1[1],ctx,param_8);
  if (iVar1 == 0) goto LAB_005463ac;
  iVar1 = EVP_CIPHER_CTX_get_block_size(ctx);
  iVar1 = iVar1 + param_5;
  uVar3 = EVP_CIPHER_CTX_get0_cipher(ctx);
  uVar4 = EVP_CIPHER_get_flags(uVar3);
  if ((uVar4 & 0x2000000) == 0) {
LAB_00546310:
    out = (uchar *)CRYPTO_malloc(iVar1,"../crypto/pkcs12/p12_decr.c",0x46);
    if (out == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_decr.c",0x47,"PKCS12_pbe_crypt_ex");
      ERR_set_error(0x23,0xc0100,0);
      goto LAB_005463ac;
    }
    iVar2 = EVP_CipherUpdate(ctx,out,&local_48,param_4,param_5);
    iVar1 = local_48;
    if (iVar2 == 0) {
      CRYPTO_free(out);
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_decr.c",0x4e,"PKCS12_pbe_crypt_ex");
      ERR_set_error(0x23,0x80006,0);
      out = (uchar *)0x0;
      goto LAB_005463ac;
    }
    iVar2 = EVP_CipherFinal_ex(ctx,out + local_48,&local_48);
    if (iVar2 == 0) {
      CRYPTO_free(out);
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_decr.c",0x56,"PKCS12_pbe_crypt_ex");
      pcVar5 = "empty password";
      if (param_3 != 0) {
        pcVar5 = "maybe wrong password";
      }
      ERR_set_error(0x23,0x74,pcVar5);
      out = (uchar *)0x0;
      goto LAB_005463ac;
    }
    iVar1 = iVar1 + local_48;
    uVar3 = EVP_CIPHER_CTX_get0_cipher(ctx);
    uVar4 = EVP_CIPHER_get_flags(uVar3);
    if (((uVar4 & 0x2000000) != 0) && (iVar2 = EVP_CIPHER_CTX_is_encrypting(ctx), iVar2 != 0)) {
      iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x10,local_44,out + iVar1);
      if (iVar2 < 0) {
        ERR_new();
        uVar3 = 0x61;
        goto LAB_00546527;
      }
      iVar1 = iVar1 + local_44;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = iVar1;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = out;
    }
  }
  else {
    iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x16,0,&local_44);
    if (-1 < iVar2) {
      iVar2 = EVP_CIPHER_CTX_is_encrypting(ctx);
      if (iVar2 == 0) {
        if (param_5 < local_44) {
          ERR_new();
          ERR_set_debug("../crypto/pkcs12/p12_decr.c",0x3a,"PKCS12_pbe_crypt_ex");
          ERR_set_error(0x23,0x77,0);
          out = (uchar *)0x0;
          goto LAB_005463ac;
        }
        param_5 = param_5 - local_44;
        iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,local_44,param_4 + param_5);
        if (iVar2 < 0) {
          ERR_new();
          uVar3 = 0x40;
          goto LAB_00546527;
        }
      }
      else {
        iVar1 = iVar1 + local_44;
      }
      goto LAB_00546310;
    }
    ERR_new();
    uVar3 = 0x32;
LAB_00546527:
    ERR_set_debug("../crypto/pkcs12/p12_decr.c",uVar3,"PKCS12_pbe_crypt_ex");
    ERR_set_error(0x23,0xc0103,0);
  }
LAB_005463ac:
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return out;
}


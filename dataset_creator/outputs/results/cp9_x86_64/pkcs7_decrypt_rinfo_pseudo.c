
undefined8
pkcs7_decrypt_rinfo(undefined8 *param_1,int *param_2,long param_3,undefined8 param_4,size_t param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  uchar *out;
  undefined8 uVar4;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_pkcs7_ctx_get0_propq(uVar3);
  uVar3 = ossl_pkcs7_ctx_get0_libctx(uVar3);
  uVar4 = 0xffffffff;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar3,param_4,uVar2);
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_decrypt_init(ctx);
    if (iVar1 < 1) {
      EVP_PKEY_CTX_free(ctx);
    }
    else {
      iVar1 = EVP_PKEY_is_a(param_4);
      if (iVar1 != 0) {
        EVP_PKEY_CTX_ctrl_str(ctx,"rsa_pkcs1_implicit_rejection","0");
      }
      iVar1 = EVP_PKEY_decrypt(ctx,(uchar *)0x0,&local_48,*(uchar **)(*(int **)(param_3 + 0x18) + 2)
                               ,(long)**(int **)(param_3 + 0x18));
      if (iVar1 < 1) {
        uVar4 = 0xffffffff;
        EVP_PKEY_CTX_free(ctx);
      }
      else {
        out = (uchar *)CRYPTO_malloc((int)local_48,"../crypto/pkcs7/pk7_doit.c",0xb8);
        if (out == (uchar *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0xbb,"pkcs7_decrypt_rinfo");
          uVar4 = 0xffffffff;
          ERR_set_error(0x21,0xc0100,0);
          EVP_PKEY_CTX_free(ctx);
        }
        else {
          iVar1 = EVP_PKEY_decrypt(ctx,out,&local_48,*(uchar **)(*(int **)(param_3 + 0x18) + 2),
                                   (long)**(int **)(param_3 + 0x18));
          if (((iVar1 < 1) || (local_48 == 0)) || ((local_48 != param_5 && (param_5 != 0)))) {
            ERR_new();
            ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0xc4,"pkcs7_decrypt_rinfo");
            ERR_set_error(0x21,0x80006,0);
            EVP_PKEY_CTX_free(ctx);
            CRYPTO_free(out);
            uVar4 = 0;
          }
          else {
            CRYPTO_clear_free(*param_1,(long)*param_2,"../crypto/pkcs7/pk7_doit.c",0xca);
            *param_1 = out;
            uVar4 = 1;
            *param_2 = (int)local_48;
            EVP_PKEY_CTX_free(ctx);
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


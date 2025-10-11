
undefined4
EVP_SignFinal_ex(EVP_MD_CTX *param_1,uchar *param_2,undefined4 *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar2;
  EVP_MD_CTX *out;
  undefined4 uVar3;
  long in_FS_OFFSET;
  uchar *local_a8;
  uint local_94;
  size_t local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_94 = 0;
  iVar1 = EVP_MD_CTX_test_flags(param_1,0x200);
  if (iVar1 == 0) {
    uVar3 = 0;
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/p_sign.c",0x24,"EVP_SignFinal_ex");
      ERR_set_error(6,0xc0100,0);
      goto LAB_005f58a6;
    }
    iVar1 = EVP_MD_CTX_copy_ex(out,param_1);
    if (iVar1 == 0) {
      EVP_MD_CTX_free();
      uVar3 = 0;
      goto LAB_005f58a6;
    }
    iVar1 = EVP_DigestFinal_ex(out,local_88,&local_94);
    EVP_MD_CTX_free(out);
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_005f58a6;
    }
LAB_005f57eb:
    local_a8 = local_88;
    iVar1 = EVP_PKEY_get_size(param_4);
    local_90 = (size_t)iVar1;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_5,param_4,param_6);
    if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_005f58d0;
    uVar3 = 0;
    iVar1 = EVP_PKEY_sign_init(ctx);
    if (0 < iVar1) {
      uVar2 = EVP_MD_CTX_get0_md(param_1);
      iVar1 = EVP_PKEY_CTX_set_signature_md(ctx,uVar2);
      if (0 < iVar1) {
        iVar1 = EVP_PKEY_sign(ctx,param_2,&local_90,local_a8,(ulong)local_94);
        if (0 < iVar1) {
          uVar3 = 1;
          *param_3 = (int)local_90;
        }
      }
    }
  }
  else {
    iVar1 = EVP_DigestFinal_ex(param_1,local_88,&local_94);
    if (iVar1 != 0) goto LAB_005f57eb;
LAB_005f58d0:
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar3 = 0;
  }
  EVP_PKEY_CTX_free(ctx);
LAB_005f58a6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


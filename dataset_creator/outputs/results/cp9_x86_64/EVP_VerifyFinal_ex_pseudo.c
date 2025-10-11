
int EVP_VerifyFinal_ex(EVP_MD_CTX *param_1,uchar *param_2,uint param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  EVP_MD_CTX *out;
  long in_FS_OFFSET;
  uchar *local_a0;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  iVar1 = EVP_MD_CTX_test_flags(param_1,0x200);
  if (iVar1 == 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/p_verify.c",0x22,"EVP_VerifyFinal_ex");
      ERR_set_error(6,0xc0100,0);
      iVar1 = 0;
      goto LAB_005f5a50;
    }
    iVar1 = EVP_MD_CTX_copy_ex(out,param_1);
    if (iVar1 == 0) {
      EVP_MD_CTX_free(out);
      iVar1 = 0;
      goto LAB_005f5a50;
    }
    iVar1 = EVP_DigestFinal_ex(out,local_88,&local_8c);
    EVP_MD_CTX_free(out);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_005f5a50;
    }
LAB_005f59e8:
    local_a0 = local_88;
    iVar1 = -1;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_5,param_4,param_6);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      iVar2 = EVP_PKEY_verify_init(ctx);
      if (0 < iVar2) {
        uVar3 = EVP_MD_CTX_get0_md(param_1);
        iVar2 = EVP_PKEY_CTX_set_signature_md(ctx,uVar3);
        if (0 < iVar2) {
          iVar1 = EVP_PKEY_verify(ctx,param_2,(ulong)param_3,local_a0,(ulong)local_8c);
        }
      }
    }
  }
  else {
    ctx = (EVP_PKEY_CTX *)0x0;
    iVar1 = EVP_DigestFinal_ex(param_1,local_88,&local_8c);
    if (iVar1 != 0) goto LAB_005f59e8;
  }
  EVP_PKEY_CTX_free(ctx);
LAB_005f5a50:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


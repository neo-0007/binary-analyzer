
undefined4
SSKDF_hash_kdm_part_0
          (EVP_MD *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5,int param_6,
          uchar *param_7,ulong param_8)

{
  int iVar1;
  undefined4 uVar2;
  EVP_MD_CTX *out;
  EVP_MD_CTX *ctx;
  ulong uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_MD_get_size();
  uVar3 = (ulong)iVar1;
  uVar2 = 0;
  if (0 < iVar1) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (((out != (EVP_MD_CTX *)0x0) && (ctx != (EVP_MD_CTX *)0x0)) &&
       (iVar1 = EVP_DigestInit(ctx,param_1), iVar1 != 0)) {
      uVar4 = 1;
      while( true ) {
        local_8c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        iVar1 = EVP_MD_CTX_copy_ex(out,ctx);
        if (iVar1 == 0) break;
        if (param_6 == 0) {
          iVar1 = EVP_DigestUpdate(out,&local_8c,4);
          if (iVar1 == 0) break;
          iVar1 = EVP_DigestUpdate(out,param_2,param_3);
        }
        else {
          iVar1 = EVP_DigestUpdate(out,param_2,param_3);
          if (iVar1 == 0) break;
          iVar1 = EVP_DigestUpdate(out,&local_8c,4);
        }
        if ((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(out,param_4,param_5), iVar1 == 0)) break;
        if (param_8 < uVar3) {
          iVar1 = EVP_DigestFinal_ex(out,local_88,(uint *)0x0);
          if (iVar1 != 0) {
            memcpy(param_7,local_88,param_8);
            uVar2 = 1;
            goto LAB_00469817;
          }
          break;
        }
        iVar1 = EVP_DigestFinal_ex(out,param_7,(uint *)0x0);
        if (iVar1 == 0) break;
        param_7 = param_7 + uVar3;
        param_8 = param_8 - uVar3;
        if (param_8 == 0) {
          uVar2 = 1;
          goto LAB_00469817;
        }
        uVar4 = uVar4 + 1;
      }
    }
    uVar2 = 0;
LAB_00469817:
    EVP_MD_CTX_free(out);
    EVP_MD_CTX_free(ctx);
    OPENSSL_cleanse(local_88,0x40);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


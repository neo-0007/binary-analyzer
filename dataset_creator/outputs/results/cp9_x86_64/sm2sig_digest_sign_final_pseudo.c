
undefined8 sm2sig_digest_sign_final(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  if ((param_1 == 0) || (ctx = *(EVP_MD_CTX **)(param_1 + 0x168), ctx == (EVP_MD_CTX *)0x0)) {
LAB_0048021c:
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
        iVar1 = sm2sig_compute_z_digest_part_0(param_1);
        if (iVar1 == 0) goto LAB_0048021c;
        ctx = *(EVP_MD_CTX **)(param_1 + 0x168);
      }
      iVar1 = EVP_DigestFinal_ex(ctx,local_78,&local_7c);
      if (iVar1 == 0) goto LAB_0048021c;
    }
    uVar2 = sm2sig_sign(param_1,param_2,param_3,param_4,local_78,local_7c);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}


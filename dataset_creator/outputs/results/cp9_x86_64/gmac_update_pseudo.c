
int gmac_update(long param_1,uchar *param_2,ulong param_3)

{
  EVP_CIPHER_CTX *ctx;
  int iVar1;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 1;
  if (param_3 != 0) {
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 8);
    if (0x7fffffff < param_3) {
      do {
        iVar1 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_34,param_2,0x7fffffff);
        if (iVar1 == 0) goto LAB_00474215;
        param_3 = param_3 - 0x7fffffff;
        param_2 = param_2 + 0x7fffffff;
      } while (0x7fffffff < param_3);
    }
    iVar1 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_34,param_2,(int)param_3);
  }
LAB_00474215:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}


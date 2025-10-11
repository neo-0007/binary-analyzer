
uint ctr_BCC_block(long param_1,uchar *param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  local_14 = 0x10;
  do {
    param_2[lVar2] = param_2[lVar2] ^ *(byte *)(param_3 + lVar2);
    lVar2 = lVar2 + 1;
  } while (param_4 != lVar2);
  uVar1 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_1 + 0x10),param_2,&local_14,param_2,param_4);
  if (uVar1 != 0) {
    uVar1 = (uint)(local_14 == param_4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


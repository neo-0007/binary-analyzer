
int CRYPTO_ocb128_finish(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  ulong local_48;
  ulong local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 - 1 < 0x10) {
    local_40 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    local_48 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    (*(code *)*param_1)(&local_48,&local_48,param_1[2]);
    local_48 = local_48 ^ param_1[0x10];
    local_40 = local_40 ^ param_1[0x11];
    iVar1 = CRYPTO_memcmp(&local_48,param_2,param_3);
  }
  else {
    iVar1 = -1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


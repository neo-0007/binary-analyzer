
int WPACKET_memset(undefined8 param_1,int param_2,size_t param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  iVar1 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    iVar1 = WPACKET_allocate_bytes(param_1,param_3,&local_28);
    if (iVar1 != 0) {
      iVar1 = 1;
      if (local_28 != (void *)0x0) {
        memset(local_28,param_2,param_3);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


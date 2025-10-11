
char * if_indextoname(uint __ifindex,char *__ifname)

{
  int __fd;
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char acStack_58 [16];
  uint local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = __opensock();
  if (-1 < __fd) {
    local_48 = __ifindex;
    iVar1 = ioctl(__fd,0x8910,acStack_58);
    __close_nocancel(__fd);
    if (-1 < iVar1) {
      pcVar2 = strncpy(__ifname,acStack_58,0x10);
      goto LAB_0076a897;
    }
    if (*(int *)(in_FS_OFFSET + -0x58) == 0x13) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 6;
    }
  }
  pcVar2 = (char *)0x0;
LAB_0076a897:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


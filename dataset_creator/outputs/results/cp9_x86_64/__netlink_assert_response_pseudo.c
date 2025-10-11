
void __netlink_assert_response(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  socklen_t local_17c;
  sockaddr local_178 [8];
  char local_f8 [200];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < param_2) {
    if (param_2 < 0x10) {
      local_17c = 0x80;
      iVar3 = getsockname(param_1,local_178,&local_17c);
      if (iVar3 < 0) {
        snprintf(local_f8,200,"Unexpected netlink response of size %zd on descriptor %d\n",param_2,
                 (ulong)param_1);
      }
      else {
        snprintf(local_f8,200,
                 "Unexpected netlink response of size %zd on descriptor %d (address family %d)\n",
                 param_2,(ulong)param_1,(ulong)local_178[0].sa_family);
      }
      goto LAB_0076cd47;
    }
    goto LAB_0076cc88;
  }
  uVar1 = *(uint *)(in_FS_OFFSET + -0x58);
  local_17c = 0x80;
  iVar3 = getsockname(param_1,local_178,&local_17c);
  if (iVar3 < 0) {
    snprintf(local_f8,200,"Unexpected error %d on netlink descriptor %d.\n",(ulong)uVar1,
             (ulong)param_1);
    goto LAB_0076cd47;
  }
  if (local_178[0].sa_family == 0x10) {
    if (uVar1 == 0xb) {
      uVar2 = fcntl(param_1,3,0);
      if ((-1 < (int)uVar2) && ((uVar2 & 0x800) == 0)) goto LAB_0076cd04;
    }
    else if ((int)uVar1 < 0xc) {
      if (uVar1 != 9) goto LAB_0076cd04;
    }
    else if ((0x17 < uVar1 - 0x58) || ((0x880001UL >> ((ulong)(uVar1 - 0x58) & 0x3f) & 1) == 0)) {
LAB_0076cd04:
      *(uint *)(in_FS_OFFSET + -0x58) = uVar1;
LAB_0076cc88:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return;
    }
  }
  snprintf(local_f8,200,"Unexpected error %d on netlink descriptor %d (address family %d).\n",
           (ulong)uVar1,(ulong)param_1,(ulong)(uint)local_178[0].sa_family);
LAB_0076cd47:
                    /* WARNING: Subroutine does not return */
  __libc_fatal(local_f8);
}


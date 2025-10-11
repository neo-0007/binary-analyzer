
int __res_enable_icmp(int param_1,int param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  if (param_1 == 2) {
    iVar1 = setsockopt(param_2,0,0xb,&local_14,4);
  }
  else if (param_1 == 10) {
    iVar1 = setsockopt(param_2,0x29,0x19,&local_14,4);
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    iVar1 = -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


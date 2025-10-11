
in_addr_t inet_addr(char *__cp)

{
  int iVar1;
  in_addr_t iVar2;
  long in_FS_OFFSET;
  in_addr_t local_1c;
  undefined1 local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = inet_aton_end(__cp,&local_1c,local_18);
  iVar2 = 0xffffffff;
  if (iVar1 != 0) {
    iVar2 = local_1c;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


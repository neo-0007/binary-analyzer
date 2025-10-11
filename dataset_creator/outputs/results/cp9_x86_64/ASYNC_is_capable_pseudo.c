
bool ASYNC_is_capable(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_3d8 [968];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = getcontext(auStack_3d8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


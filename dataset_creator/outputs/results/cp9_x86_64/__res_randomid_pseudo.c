
uint __res_randomid(void)

{
  long in_FS_OFFSET;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  clock_gettime(1,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ((uint)local_28.tv_sec ^ (uint)local_28.tv_nsec ^
           ((uint)local_28.tv_sec ^ (uint)local_28.tv_nsec) >> 8) & 0xffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


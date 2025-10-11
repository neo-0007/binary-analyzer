
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t __ctype_get_mb_cur_max(void)

{
  long in_FS_OFFSET;
  
  return (ulong)*(uint *)(**(long **)(in_FS_OFFSET + -0xd8) + 0xa8);
}


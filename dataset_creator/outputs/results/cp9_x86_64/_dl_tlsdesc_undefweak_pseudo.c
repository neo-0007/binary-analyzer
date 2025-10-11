
long _dl_tlsdesc_undefweak(void)

{
  long in_RAX;
  long *in_FS_OFFSET;
  
  return *(long *)(in_RAX + 8) - *in_FS_OFFSET;
}


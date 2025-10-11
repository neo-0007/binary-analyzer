
char * strerror(int __errnum)

{
  char *pcVar1;
  long in_FS_OFFSET;
  
  pcVar1 = strerror_l(__errnum,*(__locale_t *)(in_FS_OFFSET + -0x78));
  return pcVar1;
}


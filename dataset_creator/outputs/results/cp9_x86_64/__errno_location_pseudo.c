
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  long *in_FS_OFFSET;
  
  return (int *)(*in_FS_OFFSET + -0x58);
}


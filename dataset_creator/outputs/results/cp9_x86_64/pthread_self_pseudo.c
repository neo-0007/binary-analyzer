
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  long in_FS_OFFSET;
  
  return *(pthread_t *)(in_FS_OFFSET + 0x10);
}


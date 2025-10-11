
int raise(int __sig)

{
  int iVar1;
  pthread_t __threadid;
  long in_FS_OFFSET;
  
  __threadid = pthread_self();
  iVar1 = pthread_kill(__threadid,__sig);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(in_FS_OFFSET + -0x58) = iVar1;
  return -1;
}



int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  long in_FS_OFFSET;
  
  iVar1 = pthread_sigmask(__how,__set,__oset);
  if (iVar1 != 0) {
    *(int *)(in_FS_OFFSET + -0x58) = iVar1;
    iVar1 = -1;
  }
  return iVar1;
}


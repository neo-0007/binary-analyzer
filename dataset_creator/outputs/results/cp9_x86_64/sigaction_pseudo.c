
int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  long in_FS_OFFSET;
  
  if ((__sig - 1U < 0x40) && (1 < __sig - 0x20U)) {
    iVar1 = __libc_sigaction();
    return iVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return -1;
}


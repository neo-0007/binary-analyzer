
void __cxa_guard_release(uint *param_1)

{
  uint uVar1;
  
  if (__libc_single_threaded != '\0') {
    *param_1 = 1;
    return;
  }
  LOCK();
  uVar1 = *param_1;
  *param_1 = 1;
  UNLOCK();
  if ((uVar1 & 0x10000) == 0) {
    return;
  }
  syscall(0xca,param_1,1,0x7fffffff);
  return;
}



/* std::ios_base::xalloc() */

int std::ios_base::xalloc(void)

{
  int iVar1;
  
  iVar1 = xalloc()::_S_top;
  if (__libc_single_threaded != '\0') {
    iVar1 = xalloc()::_S_top + 4;
    xalloc()::_S_top = xalloc()::_S_top + 1;
    return iVar1;
  }
  LOCK();
  xalloc()::_S_top = xalloc()::_S_top + 1;
  UNLOCK();
  return iVar1 + 4;
}



void __pthread_disable_asynccancel(int param_1)

{
  long in_FS_OFFSET;
  
  if (param_1 != 1) {
    *(undefined1 *)(*(long *)(in_FS_OFFSET + 0x10) + 0x972) = 0;
  }
  return;
}


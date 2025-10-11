
void __libc_cleanup_pop_restore(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  
  *(undefined8 *)(in_FS_OFFSET + 0x2f8) = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x10);
  *(char *)(in_FS_OFFSET + 0x972) = (char)iVar1;
  if (iVar1 != 1) {
    return;
  }
  pthread_testcancel();
  return;
}


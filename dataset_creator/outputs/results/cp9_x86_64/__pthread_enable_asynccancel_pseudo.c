
void __pthread_enable_asynccancel(void)

{
  uint *puVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  *(undefined1 *)(in_FS_OFFSET + 0x972) = 1;
  if ((*(char *)(*(long *)(in_FS_OFFSET + 0x10) + 0x971) == '\0') &&
     ((*(uint *)(in_FS_OFFSET + 0x308) & 0x38) == 8)) {
    *(undefined8 *)(in_FS_OFFSET + 0x630) = 0xffffffffffffffff;
    LOCK();
    puVar1 = (uint *)(*(long *)(in_FS_OFFSET + 0x10) + 0x308);
    *puVar1 = *puVar1 | 0x10;
    UNLOCK();
    iVar2 = (int)*(undefined8 *)(in_FS_OFFSET + 0x300);
    func_0x00000000();
    if (iVar2 != 1) {
      *(undefined1 *)(*(long *)(in_FS_OFFSET + 0x10) + 0x972) = 0;
    }
    return;
  }
  return;
}


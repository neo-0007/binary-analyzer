
void __resolv_context_freeres(void)

{
  undefined4 uVar1;
  void *pvVar2;
  void *__ptr;
  long in_FS_OFFSET;
  
  __ptr = *(void **)(in_FS_OFFSET + -0x10);
  *(undefined8 *)(in_FS_OFFSET + -0x10) = 0;
  if (__ptr != (void *)0x0) {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    do {
      pvVar2 = *(void **)((long)__ptr + 0x20);
      *(void **)(in_FS_OFFSET + -0x10) = pvVar2;
      __resolv_conf_put(*(undefined8 *)((long)__ptr + 8));
      free(__ptr);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      __ptr = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}



void __res_thread_freeres(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__ptr;
  long in_FS_OFFSET;
  
  __resolv_context_freeres();
  lVar1 = *(long *)(in_FS_OFFSET + -0x70);
  iVar2 = *(int *)(lVar1 + 0x10);
  if (iVar2 == 0) {
    return;
  }
  if (-1 < *(int *)(lVar1 + 500)) {
    __close_nocancel();
    *(uint *)(lVar1 + 0x1f8) = *(uint *)(lVar1 + 0x1f8) & 0xfffffffc;
    iVar2 = *(int *)(lVar1 + 0x10);
    *(undefined4 *)(lVar1 + 500) = 0xffffffff;
  }
  lVar3 = 0;
  if (0 < iVar2) {
    do {
      __ptr = *(void **)(lVar1 + 0x218 + lVar3 * 8);
      if (__ptr != (void *)0x0) {
        iVar2 = *(int *)(lVar1 + 0x208 + lVar3 * 4);
        if (iVar2 != -1) {
          __close_nocancel(iVar2);
          *(undefined4 *)(lVar1 + 0x208 + lVar3 * 4) = 0xffffffff;
          __ptr = *(void **)(lVar1 + 0x218 + lVar3 * 8);
        }
        free(__ptr);
        *(undefined8 *)(lVar1 + 0x218 + lVar3 * 8) = 0;
        iVar2 = *(int *)(lVar1 + 0x10);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < iVar2);
  }
  __resolv_conf_detach(lVar1);
  *(undefined8 *)(*(long *)(in_FS_OFFSET + -0x70) + 8) = 0;
  return;
}


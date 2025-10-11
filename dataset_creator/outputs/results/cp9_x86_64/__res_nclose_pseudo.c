
void __res_nclose(long param_1)

{
  int iVar1;
  long lVar2;
  void *__ptr;
  
  if (-1 < *(int *)(param_1 + 500)) {
    __close_nocancel();
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffc;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = 0;
  if (0 < iVar1) {
    do {
      __ptr = *(void **)(param_1 + 0x218 + lVar2 * 8);
      if (__ptr != (void *)0x0) {
        iVar1 = *(int *)(param_1 + 0x208 + lVar2 * 4);
        if (iVar1 != -1) {
          __close_nocancel(iVar1);
          *(undefined4 *)(param_1 + 0x208 + lVar2 * 4) = 0xffffffff;
          __ptr = *(void **)(param_1 + 0x218 + lVar2 * 8);
        }
        free(__ptr);
        *(undefined8 *)(param_1 + 0x218 + lVar2 * 8) = 0;
        iVar1 = *(int *)(param_1 + 0x10);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < iVar1);
  }
  __resolv_conf_detach(param_1);
  return;
}


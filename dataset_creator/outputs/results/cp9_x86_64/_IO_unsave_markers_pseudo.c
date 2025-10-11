
void _IO_unsave_markers(uint *param_1)

{
  void *pvVar1;
  void *__ptr;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x12);
  if (pvVar1 != (void *)0x0) {
    __ptr = pvVar1;
    if ((*param_1 & 0x100) != 0) {
      *param_1 = *param_1 & 0xfffffeff;
      __ptr = *(void **)(param_1 + 6);
      *(void **)(param_1 + 6) = pvVar1;
      *(void **)(param_1 + 0x12) = __ptr;
      *(void **)(param_1 + 2) = pvVar1;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x16);
    }
    free(__ptr);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  }
  return;
}


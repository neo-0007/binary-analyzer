
void _nl_cleanup_ctype(long param_1)

{
  undefined8 *__ptr;
  undefined8 uVar1;
  
  __ptr = *(undefined8 **)(param_1 + 0x28);
  if (__ptr != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar1 = __ptr[3];
    *(undefined8 *)(param_1 + 0x20) = 0;
    __gconv_close_transform(__ptr[2],uVar1);
    __gconv_close_transform(*__ptr,__ptr[1]);
    free(__ptr);
    return;
  }
  return;
}


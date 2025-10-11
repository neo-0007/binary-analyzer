
int _IO_str_overflow(uint *param_1,int param_2)

{
  size_t __size;
  void *__src;
  uint uVar1;
  void *__dest;
  undefined1 *puVar2;
  size_t __n;
  
  uVar1 = *param_1;
  if ((uVar1 & 8) != 0) {
    return -(uint)(param_2 != -1);
  }
  if ((uVar1 & 0xc00) == 0x400) {
    puVar2 = *(undefined1 **)(param_1 + 2);
    uVar1 = uVar1 | 0x800;
    *param_1 = uVar1;
    *(undefined1 **)(param_1 + 10) = puVar2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 10);
  }
  __src = *(void **)(param_1 + 0xe);
  __n = *(long *)(param_1 + 0x10) - (long)__src;
  if ((ulong)((long)puVar2 - *(long *)(param_1 + 8)) < (param_2 == -1) + __n) {
LAB_006feb7a:
    if (param_2 != -1) {
      *(undefined1 **)(param_1 + 10) = puVar2 + 1;
      *puVar2 = (char)param_2;
      puVar2 = *(undefined1 **)(param_1 + 10);
    }
    if (*(undefined1 **)(param_1 + 4) < puVar2) {
      *(undefined1 **)(param_1 + 4) = puVar2;
    }
  }
  else {
    if (((uVar1 & 1) == 0) && (__size = __n * 2 + 100, __n <= __size)) {
      __dest = malloc(__size);
      if (__dest != (void *)0x0) {
        if (__src != (void *)0x0) {
          memcpy(__dest,__src,__n);
          free(__src);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
        }
        memset((void *)((long)__dest + __n),0,__size - __n);
        _IO_setb(param_1,__dest,(long)__dest + __size,1);
        puVar2 = (undefined1 *)((long)__dest + (*(long *)(param_1 + 10) - (long)__src));
        *(long *)(param_1 + 6) = (long)__dest + (*(long *)(param_1 + 6) - (long)__src);
        *(long *)(param_1 + 2) = (*(long *)(param_1 + 2) - (long)__src) + (long)__dest;
        *(long *)(param_1 + 4) = (*(long *)(param_1 + 4) - (long)__src) + (long)__dest;
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x10);
        *(void **)(param_1 + 8) = __dest;
        *(undefined1 **)(param_1 + 10) = puVar2;
        goto LAB_006feb7a;
      }
    }
    param_2 = -1;
  }
  return param_2;
}



void d_growable_string_callback_adapter(void *param_1,size_t param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong __size;
  
  __size = param_3[2];
  uVar1 = param_2 + 1 + param_3[1];
  if (__size < uVar1) {
    if ((int)param_3[3] != 0) {
      return;
    }
    if ((__size != 0) || (__size = 2, 2 < uVar1)) {
      do {
        __size = __size * 2;
      } while (__size < uVar1);
    }
    pvVar2 = realloc((void *)*param_3,__size);
    if (pvVar2 == (void *)0x0) {
      free((void *)*param_3);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined4 *)(param_3 + 3) = 1;
      return;
    }
    *param_3 = (long)pvVar2;
    param_3[2] = __size;
  }
  if ((int)param_3[3] == 0) {
    memcpy((void *)(param_3[1] + *param_3),param_1,param_2);
    *(undefined1 *)(*param_3 + param_2 + param_3[1]) = 0;
    param_3[1] = param_3[1] + param_2;
  }
  return;
}


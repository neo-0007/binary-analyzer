
void _IO_str_init_static(long param_1,void *param_2,int param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_3 < 0) {
    param_3 = -1;
  }
  if ((long)param_3 == 0) {
    pvVar1 = rawmemchr(param_2,0);
  }
  else {
    pvVar2 = (void *)((long)param_3 + (long)param_2);
    pvVar1 = (void *)0xffffffffffffffff;
    if (param_2 < pvVar2) {
      pvVar1 = pvVar2;
    }
  }
  _IO_setb(param_1,param_2,pvVar1,0);
  pvVar2 = param_2;
  pvVar3 = param_2;
  if (param_4 != (void *)0x0) {
    pvVar2 = pvVar1;
    pvVar1 = param_4;
    pvVar3 = param_4;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(void **)(param_1 + 8) = param_2;
  *(void **)(param_1 + 0x10) = pvVar1;
  *(void **)(param_1 + 0x18) = param_2;
  *(void **)(param_1 + 0x20) = param_2;
  *(void **)(param_1 + 0x28) = pvVar3;
  *(void **)(param_1 + 0x30) = pvVar2;
  return;
}


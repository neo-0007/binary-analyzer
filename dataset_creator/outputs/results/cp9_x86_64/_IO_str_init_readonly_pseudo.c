
void _IO_str_init_readonly(uint *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 < 0) {
    param_3 = -1;
  }
  if ((long)param_3 == 0) {
    pvVar1 = rawmemchr(param_2,0);
  }
  else {
    pvVar1 = (void *)((long)param_3 + (long)param_2);
    if (pvVar1 <= param_2) {
      pvVar1 = (void *)0xffffffffffffffff;
    }
  }
  _IO_setb(param_1,param_2,pvVar1,0);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = *param_1 | 8;
  *(void **)(param_1 + 2) = param_2;
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 6) = param_2;
  *(void **)(param_1 + 8) = param_2;
  *(void **)(param_1 + 10) = param_2;
  *(void **)(param_1 + 0xc) = param_2;
  return;
}


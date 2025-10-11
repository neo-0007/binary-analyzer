
void _IO_file_write(uint *param_1,void *param_2,size_t param_3)

{
  long lVar1;
  size_t __n;
  
  __n = param_3;
  if ((long)param_3 < 1) {
    lVar1 = 0;
  }
  else {
    do {
      if ((param_1[0x1d] & 2) == 0) {
        lVar1 = write(param_1[0x1c],param_2,__n);
      }
      else {
        lVar1 = __write_nocancel();
      }
      if (lVar1 < 0) {
        *param_1 = *param_1 | 0x20;
        lVar1 = param_3 - __n;
        goto LAB_006fa4eb;
      }
      __n = __n - lVar1;
      param_2 = (void *)((long)param_2 + lVar1);
    } while (0 < (long)__n);
    lVar1 = param_3 - __n;
  }
LAB_006fa4eb:
  if (-1 < *(long *)(param_1 + 0x24)) {
    *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) + lVar1;
  }
  return;
}


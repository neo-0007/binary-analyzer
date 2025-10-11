
undefined1  [16]
__libc_alloc_buffer_copy_bytes(void *param_1,long param_2,void *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  
  if (param_4 <= (ulong)(param_2 - (long)param_1)) {
    if (param_1 != (void *)0x0) {
      memcpy(param_1,param_3,param_4);
    }
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_4 + (long)param_1;
    return auVar1;
  }
  return ZEXT816(0);
}


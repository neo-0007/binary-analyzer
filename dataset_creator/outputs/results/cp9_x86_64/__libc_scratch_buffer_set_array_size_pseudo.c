
undefined8 __libc_scratch_buffer_set_array_size(long *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  undefined8 uVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  __size = SUB168(auVar1 * auVar2,0);
  if ((((param_3 | param_2) >> 0x20 != 0) && (param_2 != 0)) && (SUB168(auVar1 * auVar2,8) != 0)) {
    if ((long *)*param_1 != param_1 + 2) {
      free((long *)*param_1);
    }
    *param_1 = (long)(param_1 + 2);
    param_1[1] = 0x400;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return 0;
  }
  uVar3 = 1;
  if ((ulong)param_1[1] < __size) {
    if ((long *)*param_1 != param_1 + 2) {
      free((void *)*param_1);
    }
    pvVar4 = malloc(__size);
    if (pvVar4 == (void *)0x0) {
      *param_1 = (long)(param_1 + 2);
      param_1[1] = 0x400;
      uVar3 = 0;
    }
    else {
      param_1[1] = __size;
      *param_1 = (long)pvVar4;
      uVar3 = 1;
    }
  }
  return uVar3;
}


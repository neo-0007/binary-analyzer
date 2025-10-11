
bool __libc_scratch_buffer_grow(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong __size;
  long in_FS_OFFSET;
  bool bVar4;
  
  uVar2 = param_1[1];
  plVar1 = param_1 + 2;
  __size = uVar2 * 2;
  if ((long *)*param_1 != plVar1) {
    free((void *)*param_1);
    uVar2 = param_1[1];
  }
  if (__size < uVar2) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    param_1[1] = 0x400;
    *param_1 = (long)plVar1;
    return false;
  }
  plVar3 = (long *)malloc(__size);
  bVar4 = plVar3 == (long *)0x0;
  if (bVar4) {
    __size = 0x400;
    plVar3 = plVar1;
  }
  param_1[1] = __size;
  *param_1 = (long)plVar3;
  return !bVar4;
}


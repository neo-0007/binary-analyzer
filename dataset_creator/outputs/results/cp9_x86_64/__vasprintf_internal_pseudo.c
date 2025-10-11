
int __vasprintf_internal(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  void *__dest;
  size_t __n;
  long in_FS_OFFSET;
  uint local_138 [8];
  long local_118;
  long local_110;
  long local_108;
  void *local_100;
  undefined8 local_b0;
  undefined1 *local_60;
  undefined *local_58;
  undefined *puStack_50;
  long local_40;
  
  puVar2 = PTR_free_0092df90;
  puVar1 = PTR_malloc_0092df00;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar4 = malloc(100);
  if (pvVar4 == (void *)0x0) {
    iVar3 = -1;
    goto LAB_006f8e41;
  }
  local_b0 = 0;
  _IO_no_init(local_138,0x8000,0xffffffff,0,0);
  local_60 = _IO_str_jumps;
  _IO_str_init_static_internal(local_138,pvVar4,100,pvVar4);
  local_138[0] = local_138[0] & 0xfffffffe;
  local_58 = puVar1;
  puStack_50 = puVar2;
  iVar3 = __vfprintf_internal(local_138,param_2,param_3,param_4);
  pvVar4 = local_100;
  if (iVar3 < 0) {
    free(local_100);
    goto LAB_006f8e41;
  }
  __n = local_110 - local_118;
  __size = __n + 1;
  if (__size < (ulong)(local_108 - local_118) >> 1) {
    __dest = malloc(__size);
    *param_1 = (long)__dest;
    if (__dest == (void *)0x0) goto LAB_006f8e2a;
    memcpy(__dest,pvVar4,__n);
    free(pvVar4);
    pvVar4 = (void *)*param_1;
  }
  else {
LAB_006f8e2a:
    pvVar4 = realloc(pvVar4,__size);
    *param_1 = (long)pvVar4;
  }
  if (pvVar4 == (void *)0x0) {
    *param_1 = (long)local_100;
    pvVar4 = local_100;
  }
  *(undefined1 *)((long)pvVar4 + __n) = 0;
LAB_006f8e41:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}


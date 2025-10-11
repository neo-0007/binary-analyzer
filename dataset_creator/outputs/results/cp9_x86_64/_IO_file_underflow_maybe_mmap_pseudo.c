
void _IO_file_underflow_maybe_mmap(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  void *__addr;
  size_t sVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [24];
  uint local_a0;
  size_t local_88;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
  }
  iVar2 = (**(code **)(lVar1 + 0x90))(param_1,auStack_b8);
  if ((((iVar2 == 0) && ((local_a0 & 0xf000) == 0x8000)) && (local_88 != 0)) &&
     ((*(long *)(param_1 + 0x90) <= (long)local_88 || (*(long *)(param_1 + 0x90) == -1)))) {
    __addr = mmap64((void *)0x0,local_88,1,1,*(int *)(param_1 + 0x70),0);
    if (__addr != (void *)0xffffffffffffffff) {
      sVar4 = lseek64(*(int *)(param_1 + 0x70),local_88,0);
      if (sVar4 == local_88) {
        _IO_setb(param_1,__addr,(long)__addr + sVar4,0);
        *(void **)(param_1 + 0x18) = __addr;
        puVar6 = _IO_wfile_jumps_mmap;
        pvVar5 = (void *)((long)__addr + *(long *)(param_1 + 0x90));
        if (*(long *)(param_1 + 0x90) == -1) {
          pvVar5 = __addr;
        }
        *(size_t *)(param_1 + 0x90) = local_88;
        puVar3 = _IO_file_jumps_mmap;
        *(void **)(param_1 + 8) = pvVar5;
        *(size_t *)(param_1 + 0x10) = (long)__addr + local_88;
        goto LAB_006faf3d;
      }
      munmap(__addr,local_88);
      *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
    }
  }
  puVar3 = _IO_file_jumps;
  puVar6 = _IO_wfile_jumps;
LAB_006faf3d:
  if (0 < *(int *)(param_1 + 0xc0)) {
    puVar3 = puVar6;
  }
  *(undefined1 **)(param_1 + 0xd8) = puVar3;
  *(undefined1 **)(*(long *)(param_1 + 0xa0) + 0xe0) = puVar6;
  lVar1 = *(long *)(param_1 + 0xd8);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006fafa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x20))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



void _IO_file_xsgetn_maybe_mmap(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  void *__addr;
  size_t sVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_c8 [24];
  uint local_b0;
  size_t local_98;
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
  }
  iVar2 = (**(code **)(lVar1 + 0x90))(param_1,auStack_c8);
  if ((((iVar2 == 0) && ((local_b0 & 0xf000) == 0x8000)) && (local_98 != 0)) &&
     ((*(long *)(param_1 + 0x90) <= (long)local_98 || (*(long *)(param_1 + 0x90) == -1)))) {
    __addr = mmap64((void *)0x0,local_98,1,1,*(int *)(param_1 + 0x70),0);
    if (__addr != (void *)0xffffffffffffffff) {
      sVar4 = lseek64(*(int *)(param_1 + 0x70),local_98,0);
      if (sVar4 == local_98) {
        _IO_setb(param_1,__addr,(long)__addr + sVar4,0);
        *(void **)(param_1 + 0x18) = __addr;
        puVar6 = _IO_wfile_jumps_mmap;
        pvVar5 = (void *)((long)__addr + *(long *)(param_1 + 0x90));
        if (*(long *)(param_1 + 0x90) == -1) {
          pvVar5 = __addr;
        }
        *(size_t *)(param_1 + 0x90) = local_98;
        puVar3 = _IO_file_jumps_mmap;
        *(void **)(param_1 + 8) = pvVar5;
        *(size_t *)(param_1 + 0x10) = (long)__addr + local_98;
        goto LAB_006f9d2a;
      }
      munmap(__addr,local_98);
      *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
    }
  }
  puVar3 = _IO_file_jumps;
  puVar6 = _IO_wfile_jumps;
LAB_006f9d2a:
  if (0 < *(int *)(param_1 + 0xc0)) {
    puVar3 = puVar6;
  }
  *(undefined1 **)(param_1 + 0xd8) = puVar3;
  *(undefined1 **)(*(long *)(param_1 + 0xa0) + 0xe0) = puVar6;
  lVar1 = *(long *)(param_1 + 0xd8);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006f9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x40))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


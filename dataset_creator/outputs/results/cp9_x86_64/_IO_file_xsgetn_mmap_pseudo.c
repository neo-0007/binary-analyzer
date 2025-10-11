
long _IO_file_xsgetn_mmap(uint *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  __off64_t _Var5;
  void *__dest;
  undefined1 *puVar6;
  ulong uVar7;
  ulong __old_len;
  long in_FS_OFFSET;
  undefined1 local_d8 [24];
  uint local_c0;
  long local_a8;
  long local_40;
  
  pvVar3 = *(void **)(param_1 + 2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(long *)(param_1 + 4) - (long)pvVar3;
  __dest = param_2;
  if (uVar7 < param_3) {
    if ((*param_1 & 0x100) != 0) {
      param_3 = param_3 - uVar7;
      __dest = mempcpy(param_2,pvVar3,uVar7);
      _IO_switch_to_main_get_area(param_1);
      pvVar3 = *(void **)(param_1 + 2);
      uVar7 = *(long *)(param_1 + 4) - (long)pvVar3;
      if (param_3 <= uVar7) goto LAB_006fa6be;
    }
    lVar4 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar4 - 0x932180U) {
      _IO_vtable_check();
    }
    iVar1 = (**(code **)(lVar4 + 0x90))(param_1,local_d8);
    lVar4 = local_a8;
    if (((iVar1 != 0) || ((local_c0 & 0xf000) != 0x8000)) || (local_a8 == 0)) {
LAB_006fa750:
      munmap(*(void **)(param_1 + 0xe),*(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 0xe));
      puVar6 = _IO_file_jumps;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
      if (0 < (int)param_1[0x30]) {
        puVar6 = _IO_wfile_jumps;
      }
      *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      *(undefined1 **)(param_1 + 0x36) = puVar6;
      *(undefined1 **)(*(long *)(param_1 + 0x28) + 0xe0) = _IO_wfile_jumps;
      lVar4 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar4 - 0x932180U) {
        _IO_vtable_check();
      }
      lVar4 = (**(code **)(lVar4 + 0x40))(param_1,param_2,param_3);
      lVar4 = (long)__dest + (lVar4 - (long)param_2);
      goto LAB_006fa6e8;
    }
    iVar1 = getpagesize();
    pvVar3 = *(void **)(param_1 + 0xe);
    lVar2 = (long)iVar1;
    uVar7 = lVar4 + -1 + lVar2 & -lVar2;
    __old_len = ~(ulong)pvVar3 + *(long *)(param_1 + 0x10) + lVar2 & -lVar2;
    if (uVar7 < __old_len) {
      munmap((void *)((long)pvVar3 + uVar7),__old_len - uVar7);
      pvVar3 = *(void **)(param_1 + 0xe);
      lVar2 = (long)pvVar3 + local_a8;
    }
    else if (__old_len < uVar7) {
      pvVar3 = mremap(pvVar3,__old_len,uVar7,1);
      if (pvVar3 == (void *)0xffffffffffffffff) goto LAB_006fa750;
      *(void **)(param_1 + 0xe) = pvVar3;
      lVar2 = (long)pvVar3 + local_a8;
    }
    else {
      lVar2 = (long)pvVar3 + lVar4;
      local_a8 = lVar4;
    }
    *(void **)(param_1 + 6) = pvVar3;
    *(long *)(param_1 + 0x10) = lVar2;
    lVar4 = *(long *)(param_1 + 0x24) - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
    *(long *)(param_1 + 0x24) = lVar4;
    if (lVar4 < local_a8) {
      *(long *)(param_1 + 2) = lVar4 + (long)pvVar3;
      *(long *)(param_1 + 4) = lVar2;
      _Var5 = lseek64(param_1[0x1c],local_a8,0);
      if (_Var5 == *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)) {
        pvVar3 = *(void **)(param_1 + 2);
        *(__off64_t *)(param_1 + 0x24) = _Var5;
        uVar7 = *(long *)(param_1 + 4) - (long)pvVar3;
      }
      else {
        *param_1 = *param_1 | 0x20;
        pvVar3 = *(void **)(param_1 + 2);
        uVar7 = *(long *)(param_1 + 4) - (long)pvVar3;
      }
      if (uVar7 < param_3) {
        *param_1 = *param_1 | 0x10;
      }
      goto LAB_006fa6be;
    }
    *(long *)(param_1 + 2) = lVar2;
    *(long *)(param_1 + 4) = lVar2;
    if (param_3 != 0) {
      *param_1 = *param_1 | 0x10;
    }
  }
  else {
LAB_006fa6be:
    if (uVar7 != 0) {
      if (param_3 <= uVar7) {
        uVar7 = param_3;
      }
      __dest = mempcpy(__dest,pvVar3,uVar7);
      *(ulong *)(param_1 + 2) = (long)pvVar3 + uVar7;
    }
  }
  lVar4 = (long)__dest - (long)param_2;
LAB_006fa6e8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar4;
}



ulong _IO_file_underflow_mmap(uint *param_1)

{
  int iVar1;
  long lVar2;
  void *__addr;
  undefined1 *puVar3;
  long lVar4;
  __off64_t _Var5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong __old_len;
  long in_FS_OFFSET;
  undefined1 auStack_c8 [24];
  uint local_b0;
  long local_98;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar6 = *(byte **)(param_1 + 2);
  if (pbVar6 < *(byte **)(param_1 + 4)) {
LAB_006fb0dc:
    uVar7 = (ulong)*pbVar6;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar4 - 0x932180U) {
      _IO_vtable_check();
    }
    iVar1 = (**(code **)(lVar4 + 0x90))(param_1,auStack_c8);
    lVar4 = local_98;
    if (((iVar1 != 0) || ((local_b0 & 0xf000) != 0x8000)) || (local_98 == 0)) {
LAB_006fb1d0:
      munmap(*(void **)(param_1 + 0xe),*(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 0xe));
      puVar3 = _IO_file_jumps;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
      if (0 < (int)param_1[0x30]) {
        puVar3 = _IO_wfile_jumps;
      }
      *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      *(undefined1 **)(param_1 + 0x36) = puVar3;
      *(undefined1 **)(*(long *)(param_1 + 0x28) + 0xe0) = _IO_wfile_jumps;
      lVar4 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar4 - 0x932180U) {
        _IO_vtable_check();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006fb269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(lVar4 + 0x20))(param_1);
        return uVar7;
      }
      goto LAB_006fb362;
    }
    iVar1 = getpagesize();
    __addr = *(void **)(param_1 + 0xe);
    lVar2 = (long)iVar1;
    uVar7 = lVar4 + -1 + lVar2 & -lVar2;
    __old_len = ~(ulong)__addr + *(long *)(param_1 + 0x10) + lVar2 & -lVar2;
    if (uVar7 < __old_len) {
      munmap((void *)((long)__addr + uVar7),__old_len - uVar7);
      __addr = *(void **)(param_1 + 0xe);
      lVar2 = (long)__addr + local_98;
    }
    else if (__old_len < uVar7) {
      __addr = mremap(__addr,__old_len,uVar7,1);
      if (__addr == (void *)0xffffffffffffffff) goto LAB_006fb1d0;
      *(void **)(param_1 + 0xe) = __addr;
      lVar2 = (long)__addr + local_98;
    }
    else {
      lVar2 = (long)__addr + lVar4;
      local_98 = lVar4;
    }
    *(void **)(param_1 + 6) = __addr;
    *(long *)(param_1 + 0x10) = lVar2;
    lVar4 = *(long *)(param_1 + 0x24) - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
    *(long *)(param_1 + 0x24) = lVar4;
    if (lVar4 < local_98) {
      *(long *)(param_1 + 2) = lVar4 + (long)__addr;
      *(long *)(param_1 + 4) = lVar2;
      _Var5 = lseek64(param_1[0x1c],local_98,0);
      if (_Var5 == *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)) {
        *(__off64_t *)(param_1 + 0x24) = _Var5;
        pbVar8 = *(byte **)(param_1 + 4);
        pbVar6 = *(byte **)(param_1 + 2);
      }
      else {
        *param_1 = *param_1 | 0x20;
        pbVar6 = *(byte **)(param_1 + 2);
        pbVar8 = *(byte **)(param_1 + 4);
      }
      if (pbVar6 < pbVar8) goto LAB_006fb0dc;
    }
    else {
      *(long *)(param_1 + 2) = lVar2;
      *(long *)(param_1 + 4) = lVar2;
    }
    *param_1 = *param_1 | 0x10;
    uVar7 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_006fb362:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


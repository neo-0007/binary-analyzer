
undefined8 _IO_file_doallocate(uint *param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [24];
  uint local_a0;
  undefined8 local_90;
  size_t local_80;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < (int)param_1[0x1c]) {
    lVar2 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar2 - 0x932180U) {
      _IO_vtable_check();
    }
    iVar3 = (**(code **)(lVar2 + 0x90))(param_1,auStack_b8);
    if (-1 < iVar3) {
      if ((local_a0 & 0xf000) == 0x2000) {
        if (7 < ((uint)((ulong)local_90 >> 0x20) & 0xfffff000 | (uint)((ulong)local_90 >> 8) & 0xfff
                ) - 0x88) {
          uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          iVar3 = isatty(param_1[0x1c]);
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          if (iVar3 == 0) goto LAB_00797f5c;
        }
        *param_1 = *param_1 | 0x200;
      }
LAB_00797f5c:
      if (local_80 - 1 < 0x1fff) {
        pvVar4 = malloc(local_80);
        goto joined_r0x00797fd3;
      }
    }
  }
  pvVar4 = malloc(0x2000);
  local_80 = 0x2000;
joined_r0x00797fd3:
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    _IO_setb(param_1,pvVar4,(long)pvVar4 + local_80,1);
    uVar5 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


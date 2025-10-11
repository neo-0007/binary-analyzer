
undefined4 _IO_wfile_underflow_mmap(uint *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 & 4) == 0) {
    plVar4 = *(long **)(param_1 + 0x28);
    puVar6 = (undefined4 *)*plVar4;
    if ((undefined4 *)plVar4[1] <= puVar6) {
      uVar1 = *(undefined8 *)(param_1 + 0x26);
      uVar5 = *(ulong *)(param_1 + 2);
      if (uVar5 < *(ulong *)(param_1 + 4)) {
        lVar7 = plVar4[6];
      }
      else {
        iVar3 = _IO_file_underflow_mmap();
        if (iVar3 == -1) {
          uVar2 = 0xffffffff;
          goto LAB_006f7892;
        }
        plVar4 = *(long **)(param_1 + 0x28);
        uVar5 = *(ulong *)(param_1 + 2);
        lVar7 = plVar4[6];
      }
      local_28 = uVar5;
      if (lVar7 == 0) {
        if ((void *)plVar4[8] != (void *)0x0) {
          free((void *)plVar4[8]);
          *param_1 = *param_1 & 0xfffffeff;
        }
        _IO_wdoallocbuf(param_1);
        plVar4 = *(long **)(param_1 + 0x28);
        uVar5 = *(ulong *)(param_1 + 2);
        lVar7 = plVar4[6];
      }
      *plVar4 = lVar7;
      plVar4[2] = lVar7;
      plVar4[0xc] = plVar4[0xb];
      __libio_codecvt_in(uVar1,plVar4 + 0xb,uVar5,*(undefined8 *)(param_1 + 4),&local_28,lVar7,
                         plVar4[7],plVar4 + 1);
      *(ulong *)(param_1 + 2) = local_28;
      puVar6 = (undefined4 *)**(undefined8 **)(param_1 + 0x28);
      if ((undefined4 *)(*(undefined8 **)(param_1 + 0x28))[1] <= puVar6) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
        uVar2 = 0xffffffff;
        *param_1 = *param_1 | 0x20;
        goto LAB_006f7892;
      }
    }
    uVar2 = *puVar6;
  }
  else {
    *param_1 = *param_1 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    uVar2 = 0xffffffff;
  }
LAB_006f7892:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}


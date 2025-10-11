
__ssize_t _IO_padn(_IO_FILE *param_1,int param_2,__ssize_t param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  long local_40;
  
  puVar6 = blanks;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0x20) && (puVar6 = "0000000000000000", param_2 != 0x30)) {
    puVar6 = (undefined1 *)&local_58;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (ulong)(uint)param_2 & 0xff;
    local_58 = SUB168(auVar1 * ZEXT816(0x101010101010101),0);
    local_50 = SUB168(auVar1 * ZEXT816(0x101010101010101),8) +
               ((ulong)(uint)param_2 & 0xff) * 0x101010101010101;
  }
  uVar3 = (uint)param_3;
  uVar4 = param_3 & 0xffffffff;
  if ((int)uVar3 < 0x10) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar2 = *(long *)(param_1 + 1);
      if (0x827 < lVar2 - 0x932180U) {
        _IO_vtable_check();
      }
      lVar2 = (**(code **)(lVar2 + 0x38))(param_1,puVar6,0x10);
      lVar5 = lVar5 + lVar2;
      if (lVar2 != 0x10) goto LAB_00798457;
      uVar3 = (int)uVar4 - 0x10;
      uVar4 = (ulong)uVar3;
    } while (0xf < (int)uVar3);
  }
  if (0 < (int)uVar3) {
    lVar2 = *(long *)(param_1 + 1);
    if (0x827 < lVar2 - 0x932180U) {
      _IO_vtable_check();
    }
    lVar2 = (**(code **)(lVar2 + 0x38))(param_1,puVar6,(long)(int)uVar3);
    lVar5 = lVar5 + lVar2;
  }
LAB_00798457:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


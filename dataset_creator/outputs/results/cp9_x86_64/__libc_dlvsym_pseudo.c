
long __libc_dlvsym(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  char local_59;
  undefined1 local_58 [8];
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_30;
  byte *local_28;
  uint local_20;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  bVar1 = *param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 1;
  local_20 = 0;
  if (((ulong)bVar1 != 0) && (local_20 = (uint)bVar1, param_3[1] != 0)) {
    lVar3 = (ulong)param_3[1] + (ulong)bVar1 * 0x10;
    local_20 = (uint)lVar3;
    if (param_3[2] != 0) {
      lVar3 = lVar3 * 0x10 + (ulong)param_3[2];
      local_20 = (uint)lVar3;
      if (param_3[3] != 0) {
        lVar3 = lVar3 * 0x10 + (ulong)param_3[3];
        local_20 = (uint)lVar3;
        if (param_3[4] != 0) {
          pbVar5 = param_3 + 5;
          uVar4 = lVar3 * 0x10 + (ulong)param_3[4];
          bVar1 = param_3[5];
          local_20 = (uint)uVar4;
          if (bVar1 != 0) {
            do {
              pbVar5 = pbVar5 + 1;
              uVar4 = uVar4 * 0x10 + (ulong)bVar1;
              uVar4 = uVar4 ^ (uint)(uVar4 >> 0x18) & 0xf0;
              bVar1 = *pbVar5;
            } while (bVar1 != 0);
            local_20 = (uint)uVar4 & 0xfffffff;
          }
        }
      }
    }
  }
  local_18 = 0;
  local_50 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_28 = param_3;
  iVar2 = _dl_catch_error(local_58,&local_50,&local_59,do_dlvsym,&local_48);
  if ((iVar2 == 0) && (local_50 == 0)) {
    if (local_30 != 0) {
      if (*(short *)(local_30 + 6) == -0xf) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (local_38 != (long *)0x0) {
          lVar3 = *local_38;
        }
      }
      local_30 = lVar3 + *(long *)(local_30 + 8);
    }
  }
  else if (local_59 == '\0') {
    local_30 = 0;
  }
  else {
    _dl_error_free(local_50);
    local_30 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_30;
}


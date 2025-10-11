
void _dl_vsym(long param_1,undefined8 param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  long *plVar10;
  long local_a0;
  byte *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_78 [8];
  long local_70;
  long *local_58;
  undefined8 uStack_50;
  byte **local_48;
  undefined4 local_40;
  long *local_30;
  long local_20;
  
  bVar2 = *param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 1;
  local_90 = 0;
  if (((ulong)bVar2 != 0) && (local_90 = (uint)bVar2, param_3[1] != 0)) {
    lVar4 = (ulong)param_3[1] + (ulong)bVar2 * 0x10;
    local_90 = (uint)lVar4;
    if (param_3[2] != 0) {
      lVar4 = lVar4 * 0x10 + (ulong)param_3[2];
      local_90 = (uint)lVar4;
      if (param_3[3] != 0) {
        lVar4 = lVar4 * 0x10 + (ulong)param_3[3];
        local_90 = (uint)lVar4;
        if (param_3[4] != 0) {
          uVar6 = lVar4 * 0x10 + (ulong)param_3[4];
          pbVar8 = param_3 + 5;
          bVar2 = param_3[5];
          local_90 = (uint)uVar6;
          if (bVar2 != 0) {
            do {
              pbVar8 = pbVar8 + 1;
              uVar6 = uVar6 * 0x10 + (ulong)bVar2;
              uVar6 = uVar6 ^ (uint)(uVar6 >> 0x18) & 0xf0;
              bVar2 = *pbVar8;
            } while (bVar2 != 0);
            local_90 = (uint)uVar6 & 0xfffffff;
          }
        }
      }
    }
  }
  local_88 = 0;
  local_a0 = 0;
  local_98 = param_3;
  if (param_1 == 0) {
    plVar5 = (long *)_dl_find_dso_for_object(param_4);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)_dl_ns;
    }
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      local_48 = &local_98;
      local_40 = 5;
      local_30 = &local_a0;
      *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
      local_58 = plVar5;
      uStack_50 = param_2;
      uVar3 = _dl_catch_exception(local_78,call_dl_lookup,&local_58);
      LOCK();
      iVar1 = *(int *)(in_FS_OFFSET + 0x1c);
      *(int *)(in_FS_OFFSET + 0x1c) = 0;
      UNLOCK();
      if (iVar1 == 2) {
        syscall();
      }
      plVar5 = local_58;
      if (local_70 != 0) {
        _dl_signal_exception(uVar3,local_78,0);
        goto LAB_00785e1f;
      }
      goto LAB_00785bc1;
    }
    plVar7 = (long *)plVar5[0x73];
    plVar10 = (long *)0x0;
    uVar9 = 1;
LAB_00785c6e:
    plVar5 = (long *)_dl_lookup_symbol_x(param_2,plVar5,&local_a0,plVar7,&local_98,0,uVar9,plVar10);
  }
  else {
    if (param_1 == -1) {
      plVar5 = (long *)_dl_find_dso_for_object(param_4);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)_dl_ns;
        if (_dl_ns == (undefined *)0x0) goto LAB_00785d22;
LAB_00785d0c:
        if ((param_4 < (ulong)plVar5[0x6b]) || (plVar10 = plVar5, (ulong)plVar5[0x6c] <= param_4)) {
LAB_00785d22:
                    /* WARNING: Subroutine does not return */
          _dl_signal_error(0,0,0,"RTLD_NEXT used in code not dynamically loaded");
        }
      }
      else {
        plVar10 = plVar5;
        if (plVar5 == (long *)_dl_ns) goto LAB_00785d0c;
      }
      do {
        plVar7 = plVar10;
        plVar10 = (long *)plVar7[0x5c];
      } while (plVar10 != (long *)0x0);
      plVar7 = plVar7 + 0x74;
      uVar9 = 0;
      plVar10 = plVar5;
      goto LAB_00785c6e;
    }
    plVar5 = (long *)_dl_lookup_symbol_x(param_2,param_1,&local_a0,param_1 + 0x3a0,&local_98,0,0,0);
  }
LAB_00785bc1:
  if (local_a0 != 0) {
    if ((*(short *)(local_a0 + 6) == -0xf) || (plVar5 == (long *)0x0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar5;
    }
    if ((*(byte *)(local_a0 + 4) & 0xf) == 10) {
      (*(code *)(lVar4 + *(long *)(local_a0 + 8)))();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00785e1f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


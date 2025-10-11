
void _dl_sym(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  long *plVar7;
  long local_80;
  undefined1 local_78 [8];
  long local_70;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (param_1 == 0) {
    plVar3 = (long *)_dl_find_dso_for_object(param_3);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)_dl_ns;
    }
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      local_30 = &local_80;
      local_40 = 7;
      local_48 = 0;
      *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
      local_58 = plVar3;
      uStack_50 = param_2;
      uVar2 = _dl_catch_exception(local_78,call_dl_lookup,&local_58);
      LOCK();
      iVar1 = *(int *)(in_FS_OFFSET + 0x1c);
      *(int *)(in_FS_OFFSET + 0x1c) = 0;
      UNLOCK();
      if (iVar1 == 2) {
        syscall();
      }
      plVar3 = local_58;
      if (local_70 != 0) {
        _dl_signal_exception(uVar2,local_78,0);
        goto LAB_0078605e;
      }
      goto LAB_00785e8f;
    }
    plVar5 = (long *)plVar3[0x73];
    plVar7 = (long *)0x0;
    uVar6 = 3;
LAB_00785f26:
    plVar3 = (long *)_dl_lookup_symbol_x(param_2,plVar3,&local_80,plVar5,0,0,uVar6,plVar7);
  }
  else {
    if (param_1 == -1) {
      plVar3 = (long *)_dl_find_dso_for_object(param_3);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)_dl_ns;
        if (_dl_ns == (undefined *)0x0) goto LAB_00785f5e;
LAB_00785f4c:
        if ((param_3 < (ulong)plVar3[0x6b]) || (plVar7 = plVar3, (ulong)plVar3[0x6c] <= param_3)) {
LAB_00785f5e:
                    /* WARNING: Subroutine does not return */
          _dl_signal_error(0,0,0,"RTLD_NEXT used in code not dynamically loaded");
        }
      }
      else {
        plVar7 = plVar3;
        if (plVar3 == (long *)_dl_ns) goto LAB_00785f4c;
      }
      do {
        plVar5 = plVar7;
        plVar7 = (long *)plVar5[0x5c];
      } while (plVar7 != (long *)0x0);
      plVar5 = plVar5 + 0x74;
      uVar6 = 0;
      plVar7 = plVar3;
      goto LAB_00785f26;
    }
    plVar3 = (long *)_dl_lookup_symbol_x(param_2,param_1,&local_80,param_1 + 0x3a0,0,0,2,0);
  }
LAB_00785e8f:
  if (local_80 != 0) {
    if ((*(short *)(local_80 + 6) == -0xf) || (plVar3 == (long *)0x0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar3;
    }
    if ((*(byte *)(local_80 + 4) & 0xf) == 10) {
      (*(code *)(lVar4 + *(long *)(local_80 + 8)))();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0078605e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


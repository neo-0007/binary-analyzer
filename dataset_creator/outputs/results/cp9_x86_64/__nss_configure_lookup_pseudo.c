
undefined4 __nss_configure_lookup(char *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0x11;
  while (uVar4 = uVar3, uVar5 < uVar4) {
    while( true ) {
      uVar3 = uVar4 + uVar5 >> 1;
      iVar1 = strcmp(param_1,"aliases" + uVar3 * 0xe);
      if (iVar1 < 0) break;
      if (iVar1 == 0) {
        iVar1 = (int)((long)(uVar3 * 0xe) >> 1) * -0x49249249;
        lVar2 = global_database_state;
        if (global_database_state == 0) {
          lVar2 = __libc_allocate_once_slow(&global_database_state,global_state_allocate,0,0);
        }
        nss_database_check_reload_and_get(lVar2,&local_48,iVar1);
        lVar2 = global_database_state;
        if (global_database_state == 0) {
          lVar2 = __libc_allocate_once_slow(&global_database_state,global_state_allocate,0,0);
        }
        local_48 = __nss_action_parse(param_2);
        if (local_48 == 0) goto LAB_00770d38;
        *(undefined4 *)(lVar2 + 0xb8) = 1;
        *(long *)(lVar2 + 0x30 + (long)iVar1 * 8) = local_48;
        __nss_database_custom[iVar1] = 1;
        uVar6 = 0;
        goto LAB_00770d3e;
      }
      uVar5 = uVar3 + 1;
      if (uVar4 <= uVar5) goto LAB_00770d38;
    }
  }
LAB_00770d38:
  uVar6 = 0xffffffff;
LAB_00770d3e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}



undefined4 __nscd_get_nl_timestamp(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  timespec local_38;
  long local_20;
  
  plVar3 = DAT_0093dd28;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (__nss_not_use_nscd_hosts == 0) {
    iVar4 = 6;
    do {
      LOCK();
      iVar1 = __hst_map_handle;
      if (__hst_map_handle == 0) {
        __hst_map_handle = 1;
        iVar1 = 0;
      }
      UNLOCK();
      if (iVar1 == 0) {
        uVar5 = 0;
        if (DAT_0093dd28 == (long *)0x0) {
LAB_0077792e:
          plVar3 = (long *)__nscd_get_mapping(0xd,"hosts",&DAT_0093dd28);
          if (plVar3 != (long *)0xffffffffffffffff) {
            lVar2 = *plVar3;
LAB_007778f9:
            uVar5 = *(undefined4 *)(lVar2 + 0x18);
          }
        }
        else if (DAT_0093dd28 != (long *)0xffffffffffffffff) {
          lVar2 = *DAT_0093dd28;
          if (*(int *)(lVar2 + 0xc) == 0) {
            lVar2 = *(long *)(lVar2 + 0x10);
            clock_gettime(5,&local_38);
            if (lVar2 + 300U < (ulong)local_38.tv_sec) goto LAB_0077792e;
            lVar2 = *plVar3;
          }
          goto LAB_007778f9;
        }
        __hst_map_handle = 0;
        goto LAB_00777899;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar5 = 0;
LAB_00777899:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}


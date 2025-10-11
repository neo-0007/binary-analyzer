
void _res_hconf_reorder_addrs(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  void *__ptr;
  int iVar7;
  size_t __size;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined8 *puVar12;
  void *pvVar13;
  long in_FS_OFFSET;
  bool bVar14;
  int local_4c;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((_res_hconf[0x40] & 8) == 0) || (*(int *)(param_1 + 0x10) != 2)) goto LAB_0076e594;
  iVar8 = num_ifs_2;
  if (num_ifs_2 < 1) {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    iVar7 = socket(2,0x80002,0);
    if (iVar7 < 0) goto LAB_0076e594;
    LOCK();
    bVar14 = lock_1 == 0;
    if (bVar14) {
      lock_1 = 1;
    }
    UNLOCK();
    if (!bVar14) {
      __lll_lock_wait_private(&lock_1);
    }
    if (num_ifs_2 < 1) {
      __ifreq(&local_48,&local_4c,iVar7);
      pvVar13 = local_48;
      iVar8 = local_4c;
      if (local_48 == (void *)0x0) {
        iVar9 = 0;
      }
      else {
        __ptr = malloc((long)local_4c * 0xc);
        if (__ptr == (void *)0x0) {
          iVar9 = 0;
          ifaddrs = (void *)0x0;
        }
        else {
          ifaddrs = __ptr;
          if (iVar8 < 1) {
            __size = 0;
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            iVar11 = 0;
            do {
              __size = (long)iVar9 * 0xc;
              if (*(short *)((long)pvVar13 + 0x10) == 2) {
                uVar2 = *(undefined4 *)((long)pvVar13 + 0x14);
                *(undefined4 *)((long)__ptr + __size) = 2;
                ((undefined4 *)((long)__ptr + __size))[1] = uVar2;
                iVar5 = ioctl(iVar7,0x891b,pvVar13);
                __ptr = ifaddrs;
                iVar8 = local_4c;
                if (-1 < iVar5) {
                  iVar9 = iVar9 + 1;
                  *(undefined4 *)((long)ifaddrs + __size + 8) =
                       *(undefined4 *)((long)pvVar13 + 0x14);
                  __size = __size + 0xc;
                }
              }
              iVar11 = iVar11 + 1;
              pvVar13 = (void *)((long)pvVar13 + 0x28);
            } while (iVar11 < iVar8);
          }
          ifaddrs = realloc(__ptr,__size);
          if (ifaddrs == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("ifaddrs != NULL","res_hconf.c",0x1c1,"_res_hconf_reorder_addrs");
          }
        }
        free(local_48);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      num_ifs_2 = iVar9;
    }
    iVar9 = lock_1;
    iVar8 = num_ifs_2;
    LOCK();
    lock_1 = 0;
    UNLOCK();
    if (1 < iVar9) {
      __lll_lock_wake_private(&lock_1);
    }
    close(iVar7);
    if (iVar8 == 0) goto LAB_0076e594;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar4 = (uint *)*puVar3;
  if (puVar4 != (uint *)0x0) {
    puVar10 = puVar4;
    puVar12 = puVar3;
    do {
      iVar7 = 0;
      puVar6 = (uint *)((long)ifaddrs + 4);
      do {
        if (((*puVar6 ^ *puVar10) & puVar6[1]) == 0) {
          *puVar12 = puVar4;
          *puVar3 = puVar10;
          goto LAB_0076e594;
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 3;
      } while (iVar7 < iVar8);
      puVar10 = (uint *)puVar12[1];
      puVar12 = puVar12 + 1;
    } while (puVar10 != (uint *)0x0);
  }
LAB_0076e594:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}


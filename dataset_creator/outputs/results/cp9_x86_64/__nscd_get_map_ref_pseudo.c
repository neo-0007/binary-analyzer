
long * __nscd_get_map_ref(undefined4 param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long in_FS_OFFSET;
  timespec local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 2) != -1) {
    iVar4 = 6;
    do {
      LOCK();
      iVar2 = *param_3;
      if (iVar2 == 0) {
        *param_3 = 1;
        iVar2 = 0;
      }
      UNLOCK();
      if (iVar2 == 0) {
        plVar5 = *(long **)(param_3 + 2);
        if (plVar5 == (long *)0xffffffffffffffff) {
LAB_00779570:
          plVar5 = (long *)0xffffffffffffffff;
        }
        else {
          if (plVar5 == (long *)0x0) {
LAB_00779540:
            plVar5 = (long *)__nscd_get_mapping(param_1,param_2,param_3 + 2);
            if (plVar5 == (long *)0xffffffffffffffff) goto LAB_00779570;
            lVar3 = *plVar5;
          }
          else {
            lVar3 = *plVar5;
            if (*(int *)(lVar3 + 0xc) == 0) {
              lVar3 = *(long *)(lVar3 + 0x10);
              clock_gettime(5,&local_58);
              if (lVar3 + 300U < (ulong)local_58.tv_sec) goto LAB_00779540;
              lVar3 = *plVar5;
            }
            if ((ulong)plVar5[4] < (ulong)(long)*(int *)(lVar3 + 0x2c)) goto LAB_00779540;
          }
          uVar1 = *(uint *)(lVar3 + 8);
          *param_4 = uVar1;
          if ((uVar1 & 1) != 0) goto LAB_00779570;
          LOCK();
          *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
          UNLOCK();
        }
        *param_3 = 0;
        goto LAB_00779517;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  plVar5 = (long *)0xffffffffffffffff;
LAB_00779517:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return plVar5;
}


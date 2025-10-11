
int __pthread_tpp_change_priority(int param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  sched_param sVar8;
  long in_FS_OFFSET;
  sched_param local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(in_FS_OFFSET + 0x10);
  piVar6 = *(int **)(in_FS_OFFSET + 0x6b0);
  iVar4 = __sched_fifo_min_prio;
  iVar3 = __sched_fifo_max_prio;
  if (piVar6 == (int *)0x0) {
    if ((__sched_fifo_min_prio == -1) || (__sched_fifo_max_prio == -1)) {
      __sched_fifo_max_prio = sched_get_priority_max(1);
      __sched_fifo_min_prio = sched_get_priority_min(1);
    }
    iVar4 = __sched_fifo_min_prio;
    iVar3 = __sched_fifo_max_prio;
    piVar6 = (int *)calloc((long)(__sched_fifo_max_prio - __sched_fifo_min_prio) * 4 + 8,1);
    if (piVar6 == (int *)0x0) {
      iVar3 = 0xc;
      goto LAB_00701fc1;
    }
    *piVar6 = iVar4 + -1;
    *(int **)(in_FS_OFFSET + 0x6b0) = piVar6;
  }
  if (param_2 == -1) {
    if (param_1 != -1) {
      if ((param_1 < iVar4) || (iVar3 < param_1)) goto LAB_007021b9;
      iVar7 = *piVar6;
      piVar5 = piVar6 + (long)(param_1 - iVar4) + 1;
      *piVar5 = *piVar5 + -1;
      if ((*piVar5 == 0) && ((-1 < param_1 && (param_1 == iVar7)))) {
LAB_00701eb7:
        sVar8.__sched_priority = param_1 + -1;
        if (iVar4 <= sVar8.__sched_priority) {
          piVar5 = piVar6 + (long)(sVar8.__sched_priority - iVar4) + 1;
          do {
            if (*piVar5 != 0) break;
            sVar8.__sched_priority = sVar8.__sched_priority + -1;
            piVar5 = piVar5 + -1;
          } while (iVar4 <= sVar8.__sched_priority);
          goto LAB_00701ee8;
        }
        goto LAB_00701ef1;
      }
    }
  }
  else {
    if ((param_2 < iVar4) || (iVar3 < param_2)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("new_prio == -1 || (new_prio >= fifo_min_prio && new_prio <= fifo_max_prio)",
                    "tpp.c",0x53,"__pthread_tpp_change_priority");
    }
    if (param_1 == -1) {
      iVar7 = *piVar6;
      if (piVar6[(long)(param_2 - iVar4) + 1] == -1) {
LAB_00702090:
        iVar3 = 0xb;
        goto LAB_00701fc1;
      }
      sVar8.__sched_priority = param_2;
      if (param_2 <= iVar7) {
        sVar8.__sched_priority = iVar7;
      }
      piVar6[(long)(param_2 - iVar4) + 1] = piVar6[(long)(param_2 - iVar4) + 1] + 1;
    }
    else {
      if ((param_1 < iVar4) || (iVar3 < param_1)) {
LAB_007021b9:
                    /* WARNING: Subroutine does not return */
        __assert_fail("previous_prio == -1 || (previous_prio >= fifo_min_prio && previous_prio <= fifo_max_prio)"
                      ,"tpp.c",0x56,"__pthread_tpp_change_priority");
      }
      iVar7 = *piVar6;
      if (piVar6[(long)(param_2 - iVar4) + 1] == -1) goto LAB_00702090;
      piVar6[(long)(param_2 - iVar4) + 1] = piVar6[(long)(param_2 - iVar4) + 1] + 1;
      sVar8.__sched_priority = iVar7;
      if (iVar7 <= param_2) {
        sVar8.__sched_priority = param_2;
      }
      piVar5 = piVar6 + (long)(param_1 - iVar4) + 1;
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (param_1 == iVar7)) && (param_2 < param_1)) goto LAB_00701eb7;
    }
LAB_00701ee8:
    if (sVar8.__sched_priority != iVar7) {
LAB_00701ef1:
      piVar5 = (int *)(lVar1 + 0x618);
      LOCK();
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
        __lll_lock_wait_private(piVar5);
      }
      uVar2 = *(uint *)(lVar1 + 0x30c);
      *piVar6 = sVar8.__sched_priority;
      if ((uVar2 & 0x20) == 0) {
        iVar3 = sched_getparam(*(__pid_t *)(lVar1 + 0x2d0),(sched_param *)(lVar1 + 0x638));
        if (iVar3 == 0) {
          uVar2 = *(uint *)(lVar1 + 0x30c);
          *(uint *)(lVar1 + 0x30c) = uVar2 | 0x20;
          goto LAB_00701f1c;
        }
        iVar3 = *(int *)(in_FS_OFFSET + -0x58);
        if ((*(byte *)(lVar1 + 0x30c) & 0x40) == 0) goto LAB_007020f3;
LAB_007020d8:
        if (iVar3 == 0) goto LAB_00701f24;
      }
      else {
LAB_00701f1c:
        if ((uVar2 & 0x40) == 0) {
          iVar3 = 0;
LAB_007020f3:
          iVar4 = sched_getscheduler(*(__pid_t *)(lVar1 + 0x2d0));
          *(int *)(lVar1 + 0x63c) = iVar4;
          if (iVar4 == -1) {
            iVar3 = *(int *)(in_FS_OFFSET + -0x58);
          }
          else {
            *(uint *)(lVar1 + 0x30c) = *(uint *)(lVar1 + 0x30c) | 0x40;
          }
          goto LAB_007020d8;
        }
LAB_00701f24:
        local_44.__sched_priority = *(int *)(lVar1 + 0x638);
        if (((local_44.__sched_priority < sVar8.__sched_priority) ||
            (sVar8.__sched_priority = local_44.__sched_priority, local_44.__sched_priority < iVar7))
           && (local_44.__sched_priority = sVar8.__sched_priority,
              iVar3 = sched_setscheduler(*(__pid_t *)(lVar1 + 0x2d0),*(int *)(lVar1 + 0x63c),
                                         &local_44), iVar3 < 0)) {
          iVar3 = *(int *)(in_FS_OFFSET + -0x58);
        }
        else {
          iVar3 = 0;
        }
      }
      LOCK();
      iVar4 = *(int *)(lVar1 + 0x618);
      *(int *)(lVar1 + 0x618) = 0;
      UNLOCK();
      if (1 < iVar4) {
        __lll_lock_wake_private(piVar5);
      }
      goto LAB_00701fc1;
    }
  }
  iVar3 = 0;
LAB_00701fc1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}


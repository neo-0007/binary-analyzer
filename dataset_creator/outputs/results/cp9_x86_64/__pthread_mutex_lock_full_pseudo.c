
/* WARNING: Removing unreachable block (ram,0x00700820) */
/* WARNING: Removing unreachable block (ram,0x00700825) */
/* WARNING: Removing unreachable block (ram,0x00700849) */
/* WARNING: Removing unreachable block (ram,0x00700831) */
/* WARNING: Removing unreachable block (ram,0x007008c6) */
/* WARNING: Removing unreachable block (ram,0x007008d0) */
/* WARNING: Removing unreachable block (ram,0x007008ba) */
/* WARNING: Removing unreachable block (ram,0x00700485) */
/* WARNING: Removing unreachable block (ram,0x0070048d) */
/* WARNING: Removing unreachable block (ram,0x00700498) */

uint __pthread_mutex_lock_full(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(in_FS_OFFSET + 0x2d0);
  uVar3 = param_1[4] & 0x7f;
  if (0x33 < uVar3) {
    if (3 < uVar3 - 0x40) goto LAB_007002e8;
    uVar3 = *param_1;
    uVar8 = 0xffffffff;
    if (uVar2 != param_1[2]) {
LAB_007003f0:
      while( true ) {
        uVar5 = uVar3 >> 0x13;
        iVar4 = __pthread_current_priority();
        if ((int)uVar5 < iVar4) break;
        uVar6 = __pthread_tpp_change_priority(uVar8,uVar5);
        if (uVar6 != 0) goto LAB_007002ee;
        uVar6 = uVar3 & 0xfff80000;
        uVar7 = uVar6 | 1;
        LOCK();
        uVar3 = *param_1;
        if (uVar6 == uVar3) {
          *param_1 = uVar7;
        }
        UNLOCK();
        if (uVar6 == uVar3) {
LAB_007004a8:
          if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("mutex->__data.__owner == 0","pthread_mutex_lock.c",0x253,
                          "__pthread_mutex_lock_full");
          }
          goto LAB_007004b3;
        }
        while( true ) {
          LOCK();
          uVar3 = *param_1;
          if (uVar7 == uVar3) {
            *param_1 = uVar6 | 2;
            uVar3 = uVar7;
          }
          UNLOCK();
          uVar8 = uVar5;
          if (uVar6 != (uVar3 & 0xfff80000)) break;
          if (uVar6 != uVar3) {
            syscall();
          }
          LOCK();
          uVar3 = *param_1;
          if (uVar6 == uVar3) {
            *param_1 = uVar6 | 2;
          }
          UNLOCK();
          if (uVar6 == uVar3) goto LAB_007004a8;
        }
      }
      uVar6 = 0x16;
      if (uVar8 != 0xffffffff) {
        __pthread_tpp_change_priority(uVar8,0xffffffff);
        uVar6 = 0x16;
      }
      goto LAB_007002ee;
    }
    if ((param_1[4] & 3) == 2) {
      uVar6 = 0x23;
      goto LAB_007002ee;
    }
    if ((param_1[4] & 3) != 1) goto LAB_007003f0;
    uVar2 = param_1[1];
joined_r0x00700566:
    if (uVar2 == 0xffffffff) {
LAB_007007ab:
      uVar6 = 0xb;
    }
    else {
      uVar6 = 0;
      param_1[1] = uVar2 + 1;
    }
    goto LAB_007002ee;
  }
  if (uVar3 < 0x30) {
    if (uVar3 < 0x14) {
      if ((param_1[4] & 0x70) != 0) {
        puVar1 = param_1 + 8;
        *(uint **)(in_FS_OFFSET + 0x2f0) = puVar1;
        uVar3 = *param_1;
        uVar8 = 0;
LAB_00700259:
        do {
          uVar5 = uVar3;
          if (uVar3 == 0) {
            LOCK();
            uVar5 = *param_1;
            if (uVar5 == 0) {
              *param_1 = uVar2 | uVar8;
              uVar5 = 0;
            }
            UNLOCK();
            if (uVar5 == 0) {
              if (param_1[2] == 0x7ffffffe) {
                param_1[1] = 0;
                LOCK();
                uVar2 = *param_1;
                *param_1 = 0;
                UNLOCK();
                if (1 < (int)uVar2) {
                  __lll_lock_wake(param_1,0x80);
                }
                goto LAB_007007c9;
              }
              param_1[1] = 1;
              *(uint **)((*(ulong *)(in_FS_OFFSET + 0x2e0) & 0xfffffffffffffffe) - 8) = puVar1;
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(in_FS_OFFSET + 0x2e0);
              *(long *)(param_1 + 6) = *(long *)(in_FS_OFFSET + 0x10) + 0x2e0;
              *(uint **)(in_FS_OFFSET + 0x2e0) = puVar1;
              *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
              goto LAB_007002d3;
            }
          }
          uVar6 = uVar5 & 0x40000000;
          if ((uVar5 & 0x40000000) == 0) {
            if (uVar2 == (uVar5 & 0x3fffffff)) {
              if ((param_1[4] & 0x7f) == 0x12) goto LAB_007008d5;
              if ((param_1[4] & 0x7f) == 0x11) {
                *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
                if (param_1[1] == 0xffffffff) goto LAB_007007ab;
                param_1[1] = param_1[1] + 1;
                goto LAB_007002ee;
              }
            }
            if (-1 < (int)uVar5) {
              LOCK();
              uVar3 = *param_1;
              bVar9 = uVar5 == uVar3;
              if (bVar9) {
                *param_1 = uVar5 | 0x80000000;
                uVar3 = uVar5;
              }
              UNLOCK();
              if (!bVar9) goto LAB_00700259;
            }
            syscall();
            uVar3 = *param_1;
            uVar8 = 0x80000000;
            goto LAB_00700259;
          }
          LOCK();
          uVar3 = *param_1;
          bVar9 = uVar5 == uVar3;
          if (bVar9) {
            *param_1 = uVar5 & 0x80000000 | uVar2 | uVar8;
            uVar3 = uVar5;
          }
          UNLOCK();
        } while (!bVar9);
        param_1[1] = 1;
        param_1[2] = 0x7fffffff;
        *(uint **)((*(ulong *)(in_FS_OFFSET + 0x2e0) & 0xfffffffffffffffe) - 8) = puVar1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(in_FS_OFFSET + 0x2e0);
        *(long *)(param_1 + 6) = *(long *)(in_FS_OFFSET + 0x10) + 0x2e0;
        *(uint **)(in_FS_OFFSET + 0x2e0) = puVar1;
        *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
        uVar6 = 0x82;
        goto LAB_007002ee;
      }
    }
    else if (uVar3 - 0x20 < 4) goto LAB_00700320;
LAB_007002e8:
    uVar6 = 0x16;
    goto LAB_007002ee;
  }
LAB_00700320:
  uVar8 = param_1[4] & 3;
  uVar3 = param_1[4] & 0x10;
  if (uVar3 != 0) {
    *(ulong *)(in_FS_OFFSET + 0x2f0) = (ulong)(param_1 + 8) | 1;
  }
  if (uVar2 == (*param_1 & 0x3fffffff)) {
    if (uVar8 == 2) {
LAB_007008d5:
      *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
      uVar6 = 0x23;
      goto LAB_007002ee;
    }
    if (uVar8 == 1) {
      *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
      uVar2 = param_1[1];
      goto joined_r0x00700566;
    }
  }
  LOCK();
  uVar6 = *param_1;
  if (uVar6 == 0) {
    *param_1 = uVar2;
    uVar6 = 0;
  }
  UNLOCK();
  if (uVar6 != 0) {
    if (uVar3 == 0) {
      uVar6 = param_1[4] & 0x80;
      uVar3 = __futex_lock_pi64(param_1,0,0,uVar6);
      if ((uVar3 & 0xffffffdf) != 3) {
        if ((*param_1 & 0x40000000) != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("robust || (oldval & FUTEX_OWNER_DIED) == 0","pthread_mutex_lock.c",0x1c0,
                        "__pthread_mutex_lock_full");
        }
        goto LAB_007004b3;
      }
      if (uVar3 != 0x23) goto LAB_00700398;
    }
    else {
      uVar3 = __futex_lock_pi64(param_1,0,0,0x80);
      if ((uVar3 & 0xffffffdf) != 3) {
        if ((*param_1 & 0x40000000) != 0) {
          LOCK();
          *param_1 = *param_1 & 0xbfffffff;
          UNLOCK();
          param_1[1] = 1;
          param_1[2] = 0x7fffffff;
          *(uint **)((*(ulong *)(in_FS_OFFSET + 0x2e0) & 0xfffffffffffffffe) - 8) = param_1 + 8;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(in_FS_OFFSET + 0x2e0);
          *(long *)(param_1 + 6) = *(long *)(in_FS_OFFSET + 0x10) + 0x2e0;
          *(ulong *)(in_FS_OFFSET + 0x2e0) = (ulong)(param_1 + 8) | 1;
          *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
          uVar6 = 0x82;
          goto LAB_007002ee;
        }
        goto LAB_007004e2;
      }
      if (uVar3 != 0x23) {
        if (uVar3 == 3) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("e != ESRCH || !robust","pthread_mutex_lock.c",0x1b6,
                        "__pthread_mutex_lock_full");
        }
        uVar6 = 0x80;
        goto LAB_00700398;
      }
      uVar6 = 0x80;
    }
    if (uVar8 - 1 < 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("e != EDEADLK || (kind != PTHREAD_MUTEX_ERRORCHECK_NP && kind != PTHREAD_MUTEX_RECURSIVE_NP)"
                    ,"pthread_mutex_lock.c",0x1b1,"__pthread_mutex_lock_full");
    }
LAB_00700398:
    do {
      local_44 = 0;
      __futex_abstimed_wait64(&local_44,0,0,0,uVar6);
    } while( true );
  }
  if (uVar3 == 0) {
LAB_007004b3:
    param_1[1] = 1;
  }
  else {
LAB_007004e2:
    if (param_1[2] == 0x7ffffffe) {
      param_1[1] = 0;
      syscall();
LAB_007007c9:
      *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
      uVar6 = 0x83;
      goto LAB_007002ee;
    }
    param_1[1] = 1;
    *(uint **)((*(ulong *)(in_FS_OFFSET + 0x2e0) & 0xfffffffffffffffe) - 8) = param_1 + 8;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(in_FS_OFFSET + 0x2e0);
    *(long *)(param_1 + 6) = *(long *)(in_FS_OFFSET + 0x10) + 0x2e0;
    *(ulong *)(in_FS_OFFSET + 0x2e0) = (ulong)(param_1 + 8) | 1;
    *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
  }
LAB_007002d3:
  param_1[3] = param_1[3] + 1;
  param_1[2] = uVar2;
  uVar6 = 0;
LAB_007002ee:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}


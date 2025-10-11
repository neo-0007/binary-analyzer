
ulong __pthread_mutex_unlock_usercnt(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  
  uVar5 = param_1[4] & 0x17f;
  uVar3 = param_1[4] & 0x7c;
  uVar4 = (ulong)uVar3;
  if (uVar3 != 0) {
    uVar4 = __pthread_mutex_unlock_full();
    return uVar4;
  }
  if (uVar5 != 0) {
    if (uVar5 == 0x100) {
      uVar4 = __lll_unlock_elision(param_1,param_1[4] & 0x80);
      return uVar4;
    }
    if ((param_1[4] & 0x7fU) == 1) {
      if (param_1[2] != *(int *)(in_FS_OFFSET + 0x2d0)) {
        return 1;
      }
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return uVar4;
      }
    }
    else if ((param_1[4] & 0x7fU) != 3) {
      if (uVar5 != 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("type == PTHREAD_MUTEX_ERRORCHECK_NP","pthread_mutex_unlock.c",0x62,
                      "__pthread_mutex_unlock_usercnt");
      }
      if (param_1[2] != *(int *)(in_FS_OFFSET + 0x2d0)) {
        return 1;
      }
      if (*param_1 == 0) {
        return 1;
      }
    }
  }
  param_1[2] = 0;
  if (param_2 != 0) {
    param_1[3] = param_1[3] + -1;
  }
  if (((param_1[4] & 0x80U) == 0) && (*(int *)(in_FS_OFFSET + 0x18) == 0)) {
    *param_1 = 0;
  }
  else {
    LOCK();
    iVar2 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake();
      uVar4 = 0;
    }
  }
  return uVar4;
}


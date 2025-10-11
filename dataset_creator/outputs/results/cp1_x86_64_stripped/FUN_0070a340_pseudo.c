
undefined8 FUN_0070a340(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  
  uVar5 = param_1[4] & 0x17f;
  if ((param_1[4] & 0x7cU) != 0) {
    uVar4 = FUN_00709bf0();
    return uVar4;
  }
  if (uVar5 == 0) {
    if (DAT_00946970 != 0) {
      uVar5 = param_1[4];
      if ((uVar5 & 0x300) == 0) {
        param_1[4] = uVar5 | 0x100;
LAB_0070a3e6:
        uVar4 = FUN_007a2940(param_1,(long)param_1 + 0x16,param_1[4] & 0x80);
        return uVar4;
      }
      if ((uVar5 & 0x100) != 0) goto LAB_0070a3e6;
    }
  }
  else {
    if (uVar5 == 0x100) goto LAB_0070a3e6;
    if ((param_1[4] & 0x7fU) == 1) {
      if (param_1[2] == *(int *)(in_FS_OFFSET + 0x2d0)) {
        if (param_1[1] != -1) {
          param_1[1] = param_1[1] + 1;
          return 0;
        }
        return 0xb;
      }
      if ((((param_1[4] & 0x80U) == 0) && (*(int *)(in_FS_OFFSET + 0x18) == 0)) && (*param_1 == 0))
      {
        *param_1 = 1;
      }
      else {
        LOCK();
        iVar3 = *param_1;
        if (iVar3 == 0) {
          *param_1 = 1;
        }
        UNLOCK();
        if (iVar3 != 0) {
          FUN_007095f0();
        }
      }
      if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("mutex->__data.__owner == 0","pthread_mutex_lock.c",0x82,
                     "___pthread_mutex_lock");
      }
      param_1[1] = 1;
      goto LAB_0070a3a5;
    }
    if ((param_1[4] & 0x7fU) == 3) {
      LOCK();
      iVar3 = *param_1;
      if (iVar3 == 0) {
        *param_1 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
        iVar3 = (short)param_1[5] * 2 + 10;
        iVar2 = (int)DAT_0093f0c0;
        if (iVar3 <= DAT_0093f0c0) {
          iVar2 = iVar3;
        }
        iVar3 = 0;
        do {
          do {
            iVar6 = iVar3 + 1;
            if (iVar2 <= iVar3) {
              LOCK();
              iVar3 = *param_1;
              if (iVar3 == 0) {
                *param_1 = 1;
              }
              UNLOCK();
              if (iVar3 != 0) {
                FUN_007095f0(param_1,param_1[4] & 0x80);
              }
              goto LAB_0070a554;
            }
            iVar3 = iVar6;
          } while (*param_1 != 0);
          LOCK();
          iVar1 = *param_1;
          if (iVar1 == 0) {
            *param_1 = 1;
          }
          UNLOCK();
        } while (iVar1 != 0);
LAB_0070a554:
        *(short *)(param_1 + 5) = (short)param_1[5] + (short)((iVar6 - (short)param_1[5]) / 8);
      }
      if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("mutex->__data.__owner == 0","pthread_mutex_lock.c",0x9b,
                     "___pthread_mutex_lock");
      }
      goto LAB_0070a3a5;
    }
    if ((param_1[4] & 0x7fU) != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("PTHREAD_MUTEX_TYPE (mutex) == PTHREAD_MUTEX_ERRORCHECK_NP",
                   "pthread_mutex_lock.c",0xa0,"___pthread_mutex_lock");
    }
    if (param_1[2] == *(int *)(in_FS_OFFSET + 0x2d0)) {
      return 0x23;
    }
  }
  if ((((param_1[4] & 0x80U) == 0) && (*(int *)(in_FS_OFFSET + 0x18) == 0)) && (*param_1 == 0)) {
    *param_1 = 1;
  }
  else {
    LOCK();
    iVar3 = *param_1;
    if (iVar3 == 0) {
      *param_1 = 1;
    }
    UNLOCK();
    if (iVar3 != 0) {
      FUN_007095f0();
    }
  }
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("mutex->__data.__owner == 0","pthread_mutex_lock.c",0x5e,"___pthread_mutex_lock");
  }
LAB_0070a3a5:
  param_1[2] = *(int *)(in_FS_OFFSET + 0x2d0);
  param_1[3] = param_1[3] + 1;
  return 0;
}


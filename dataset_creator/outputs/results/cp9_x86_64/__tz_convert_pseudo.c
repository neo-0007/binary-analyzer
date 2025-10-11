
int * __tz_convert(long param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  bool bVar5;
  int local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  bVar5 = tzset_lock == 0;
  if (bVar5) {
    tzset_lock = 1;
  }
  UNLOCK();
  if (!bVar5) {
    __lll_lock_wait_private(&tzset_lock);
  }
  tzset_internal(param_3 == (int *)_tmbuf && param_2 != 0);
  if (__use_tzfile == 0) {
    iVar2 = __offtime(param_1,0,param_3);
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      compute_change(&tz_rules,param_3[5] + 0x76c);
      compute_change(&DAT_0093da90);
      piVar4 = param_3;
      if (param_2 != 0) {
        bVar5 = param_1 < DAT_0093dab0 && DAT_0093da80 <= param_1;
        if (DAT_0093dab0 < DAT_0093da80) {
          bVar5 = param_1 < DAT_0093dab0 || DAT_0093da80 <= param_1;
        }
        puVar1 = (&tzname)[bVar5];
        param_3[8] = (uint)bVar5;
        iVar2 = (&DAT_0093da78)[(ulong)bVar5 * 0xc];
        *(undefined **)(param_3 + 0xc) = puVar1;
        *(long *)(param_3 + 10) = (long)iVar2;
      }
    }
    local_38 = 0;
    local_3c = 0;
  }
  else {
    __tzfile_compute(param_1,param_2,&local_38,&local_3c,param_3);
    piVar4 = param_3;
  }
  iVar2 = tzset_lock;
  LOCK();
  tzset_lock = 0;
  UNLOCK();
  if (1 < iVar2) {
    __lll_lock_wake_private(&tzset_lock);
  }
  if (piVar4 != (int *)0x0) {
    if (param_2 == 0) {
      lVar3 = 0;
      piVar4[8] = 0;
      *(undefined **)(piVar4 + 0xc) = &DAT_00803efd;
      piVar4[10] = 0;
      piVar4[0xb] = 0;
    }
    else {
      lVar3 = *(long *)(piVar4 + 10);
    }
    iVar2 = __offtime(param_1,lVar3 - local_38,piVar4);
    if (iVar2 != 0) {
      *piVar4 = *piVar4 + local_3c;
      goto LAB_00758692;
    }
  }
  piVar4 = (int *)0x0;
LAB_00758692:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return piVar4;
}


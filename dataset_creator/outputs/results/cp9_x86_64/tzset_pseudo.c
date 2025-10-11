
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tzset(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = tzset_lock == 0;
  if (bVar2) {
    tzset_lock = 1;
  }
  UNLOCK();
  if (!bVar2) {
    __lll_lock_wait_private(&tzset_lock);
  }
  tzset_internal(1);
  iVar1 = tzset_lock;
  if (__use_tzfile == 0) {
    tzname = tz_rules;
    PTR_DAT_00931a28 = DAT_0093da90;
  }
  LOCK();
  tzset_lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&tzset_lock);
    return;
  }
  return;
}


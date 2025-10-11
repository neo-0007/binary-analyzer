
ulong __gconv_find_transform
                (char *param_1,char *param_2,long *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  long *__s2;
  long *__s1;
  long in_FS_OFFSET;
  bool bVar3;
  char *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __gconv_load_conf();
  LOCK();
  bVar3 = __gconv_lock == 0;
  if (bVar3) {
    __gconv_lock = 1;
  }
  UNLOCK();
  if (!bVar3) {
    __lll_lock_wait_private(&__gconv_lock);
  }
  uVar2 = __gconv_lookup_cache(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar2 == 2) {
    if (__gconv_modules_db == 0) {
      LOCK();
      UNLOCK();
      uVar2 = 1;
    }
    else {
      local_58[0] = param_2;
      __s2 = (long *)tfind(local_58,(void **)&__gconv_alias_db,__gconv_alias_compare);
      if (__s2 != (long *)0x0) {
        __s2 = *(long **)(*__s2 + 8);
      }
      local_58[0] = param_1;
      __s1 = (long *)tfind(local_58,(void **)&__gconv_alias_db,__gconv_alias_compare);
      if (__s1 != (long *)0x0) {
        __s1 = *(long **)(*__s1 + 8);
      }
      if (((param_5 & 1) == 0) ||
         (((iVar1 = strcmp(param_1,param_2), iVar1 != 0 &&
           ((__s1 == (long *)0x0 || (iVar1 = strcmp((char *)__s1,param_2), iVar1 != 0)))) &&
          ((__s2 == (long *)0x0 ||
           ((iVar1 = strcmp(param_1,(char *)__s2), iVar1 != 0 &&
            ((__s1 == (long *)0x0 || (iVar1 = strcmp((char *)__s1,(char *)__s2), iVar1 != 0)))))))))
         ) {
        uVar2 = find_derivation(param_1,__s1,param_2,__s2,param_3,param_4);
        iVar1 = __gconv_lock;
        LOCK();
        __gconv_lock = 0;
        UNLOCK();
        if (1 < iVar1) {
          __lll_lock_wake_private(&__gconv_lock);
          uVar2 = uVar2 & 0xffffffff;
        }
        if ((int)uVar2 == 0) {
          uVar2 = (ulong)(*param_3 == 0);
        }
        goto LAB_006ca625;
      }
      LOCK();
      UNLOCK();
      uVar2 = 0xffffffff;
    }
  }
  else {
    LOCK();
    UNLOCK();
  }
  bVar3 = 1 < __gconv_lock;
  __gconv_lock = 0;
  if (bVar3) {
    __gconv_lock = 0;
    __lll_lock_wake_private(&__gconv_lock);
    uVar2 = uVar2 & 0xffffffff;
  }
LAB_006ca625:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



long _nl_find_domain(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  size_t sVar2;
  long lVar3;
  char *__s;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_rwlock_rdlock((pthread_rwlock_t *)lock_0);
  sVar2 = strlen(param_1);
  lVar3 = _nl_make_l10nflist(&_nl_loaded_domains,param_1,sVar2 + 1,0,param_2,0,0,0,0,param_3,0);
  pthread_rwlock_unlock((pthread_rwlock_t *)lock_0);
  if (lVar3 == 0) {
    __s = (char *)_nl_expand_alias(param_2);
    if (__s != (char *)0x0) {
      sVar2 = strlen(__s);
      param_2 = malloc(sVar2 + 1);
      if (param_2 == (void *)0x0) goto LAB_006da3a9;
      memcpy(param_2,__s,sVar2 + 1);
    }
    uVar1 = _nl_explode_name(param_2,&local_68,&local_60,&local_58,&local_50,&local_48);
    if (uVar1 != 0xffffffff) {
      pthread_rwlock_wrlock((pthread_rwlock_t *)lock_0);
      sVar2 = strlen(param_1);
      lVar3 = _nl_make_l10nflist(&_nl_loaded_domains,param_1,sVar2 + 1,uVar1,local_68,local_58,
                                 local_50,local_48,local_60,param_3,1);
      pthread_rwlock_unlock((pthread_rwlock_t *)lock_0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 8) < 1) {
          _nl_load_domain(lVar3,param_4);
        }
        if ((*(long *)(lVar3 + 0x10) == 0) && (lVar5 = *(long *)(lVar3 + 0x20), lVar5 != 0)) {
          plVar4 = (long *)(lVar3 + 0x20);
          do {
            if (*(int *)(lVar5 + 8) < 1) {
              _nl_load_domain(lVar5,param_4);
              lVar5 = *plVar4;
            }
            if (*(long *)(lVar5 + 0x10) != 0) break;
            lVar5 = plVar4[1];
            plVar4 = plVar4 + 1;
          } while (lVar5 != 0);
        }
        if (__s != (char *)0x0) {
          free(param_2);
        }
      }
      if ((uVar1 & 1) != 0) {
        free(local_48);
      }
    }
  }
  else {
    if (*(int *)(lVar3 + 8) < 1) {
      _nl_load_domain(lVar3,param_4);
    }
    if ((*(long *)(lVar3 + 0x10) == 0) && (lVar5 = *(long *)(lVar3 + 0x20), lVar5 != 0)) {
      plVar4 = (long *)(lVar3 + 0x20);
      do {
        if (*(int *)(lVar5 + 8) < 1) {
          _nl_load_domain(lVar5,param_4);
          lVar5 = *plVar4;
        }
        if (*(long *)(lVar5 + 0x10) != 0) break;
        lVar5 = plVar4[1];
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_006da3a9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



long CONF_get_number(lhash_st_CONF_VALUE *conf,char *group,char *name)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  CONF local_68 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  ERR_set_mark();
  if (conf == (lhash_st_CONF_VALUE *)0x0) {
    iVar1 = NCONF_get_number_e((CONF *)0x0,group,name,&local_70);
  }
  else {
    CONF_set_nconf(local_68,conf);
    iVar1 = NCONF_get_number_e(local_68,group,name,&local_70);
  }
  ERR_pop_to_mark();
  lVar2 = 0;
  if (iVar1 != 0) {
    lVar2 = local_70;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


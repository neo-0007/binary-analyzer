
char * CONF_get_string(lhash_st_CONF_VALUE *conf,char *group,char *name)

{
  char *pcVar1;
  long in_FS_OFFSET;
  CONF aCStack_58 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (conf == (lhash_st_CONF_VALUE *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar1 = NCONF_get_string((CONF *)0x0,group,name);
      return pcVar1;
    }
  }
  else {
    CONF_set_nconf(aCStack_58,conf);
    pcVar1 = NCONF_get_string(aCStack_58,group,name);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pcVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



stack_st_CONF_VALUE * CONF_get_section(lhash_st_CONF_VALUE *conf,char *section)

{
  stack_st_CONF_VALUE *psVar1;
  long in_FS_OFFSET;
  CONF aCStack_58 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  psVar1 = (stack_st_CONF_VALUE *)0x0;
  if (conf != (lhash_st_CONF_VALUE *)0x0) {
    CONF_set_nconf(aCStack_58,conf);
    psVar1 = NCONF_get_section(aCStack_58,section);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return psVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


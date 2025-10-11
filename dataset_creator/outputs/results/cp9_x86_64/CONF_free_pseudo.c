
void CONF_free(lhash_st_CONF_VALUE *conf)

{
  long in_FS_OFFSET;
  CONF aCStack_48 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  CONF_set_nconf(aCStack_48,conf);
  NCONF_free_data(aCStack_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



int CONF_dump_bio(lhash_st_CONF_VALUE *conf,BIO *out)

{
  int iVar1;
  long in_FS_OFFSET;
  CONF aCStack_58 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  CONF_set_nconf(aCStack_58,conf);
  iVar1 = NCONF_dump_bio(aCStack_58,out);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


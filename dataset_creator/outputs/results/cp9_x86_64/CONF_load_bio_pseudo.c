
lhash_st_CONF_VALUE * CONF_load_bio(lhash_st_CONF_VALUE *conf,BIO *bp,long *eline)

{
  int iVar1;
  lhash_st_CONF_VALUE *plVar2;
  long in_FS_OFFSET;
  CONF aCStack_58 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  CONF_set_nconf(aCStack_58,conf);
  iVar1 = NCONF_load_bio(aCStack_58,bp,eline);
  plVar2 = (lhash_st_CONF_VALUE *)0x0;
  if (iVar1 != 0) {
    plVar2 = aCStack_58[0].data;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


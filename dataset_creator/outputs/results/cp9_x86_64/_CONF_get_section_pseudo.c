
CONF_VALUE * _CONF_get_section(CONF *conf,char *section)

{
  CONF_VALUE *pCVar1;
  long in_FS_OFFSET;
  char *local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((conf != (CONF *)0x0) && (section != (char *)0x0)) {
    local_20 = 0;
    local_28 = section;
    if (conf->data != (lhash_st_CONF_VALUE *)0x0) {
      pCVar1 = (CONF_VALUE *)OPENSSL_LH_retrieve(conf->data,&local_28);
      goto LAB_005bdde0;
    }
  }
  pCVar1 = (CONF_VALUE *)0x0;
LAB_005bdde0:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


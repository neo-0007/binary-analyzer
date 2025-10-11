
long _CONF_get_number(CONF *conf,char *section,char *name)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  ERR_set_mark();
  iVar1 = NCONF_get_number_e(conf,section,name,&local_38);
  ERR_pop_to_mark();
  lVar2 = 0;
  if (iVar1 != 0) {
    lVar2 = local_38;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


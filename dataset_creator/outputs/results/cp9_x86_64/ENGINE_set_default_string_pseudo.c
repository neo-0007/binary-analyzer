
int ENGINE_set_default_string(ENGINE *e,char *def_list)

{
  int iVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = CONF_parse_list(def_list,0x2c,1,int_def_cb,&local_24);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_fat.c",0x56,"ENGINE_set_default_string");
    ERR_set_error(0x26,0x96,"str=%s",def_list);
    iVar1 = 0;
  }
  else {
    iVar1 = ENGINE_set_default(e,local_24);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


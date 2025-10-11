
char * _CONF_get_string(CONF *conf,char *section,char *name)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  lhash_st_CONF_VALUE *plVar4;
  long in_FS_OFFSET;
  char *local_48;
  char *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (name == (char *)0x0) {
LAB_005bdfa8:
    pcVar3 = (char *)0x0;
  }
  else {
    if (conf == (CONF *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar3 = (char *)ossl_safe_getenv(name);
        return pcVar3;
      }
      goto LAB_005bdfe2;
    }
    plVar4 = conf->data;
    if (plVar4 == (lhash_st_CONF_VALUE *)0x0) goto LAB_005bdfa8;
    if (section == (char *)0x0) {
LAB_005bdf87:
      local_48 = "default";
      local_40 = name;
      lVar2 = OPENSSL_LH_retrieve(plVar4,&local_48);
      if (lVar2 == 0) goto LAB_005bdfa8;
    }
    else {
      local_48 = section;
      local_40 = name;
      lVar2 = OPENSSL_LH_retrieve(plVar4,&local_48);
      if (lVar2 == 0) {
        iVar1 = strcmp(section,"ENV");
        if ((iVar1 != 0) || (pcVar3 = (char *)ossl_safe_getenv(name), pcVar3 == (char *)0x0)) {
          plVar4 = conf->data;
          goto LAB_005bdf87;
        }
        goto LAB_005bdf4b;
      }
    }
    pcVar3 = *(char **)(lVar2 + 0x10);
  }
LAB_005bdf4b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
LAB_005bdfe2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


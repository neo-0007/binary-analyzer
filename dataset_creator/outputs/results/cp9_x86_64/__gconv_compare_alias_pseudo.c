
int __gconv_compare_alias(char *param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  char *__s1;
  char *__s2;
  long in_FS_OFFSET;
  int local_5c;
  char *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __gconv_load_conf();
  iVar1 = __gconv_compare_alias_cache(param_1,param_2,&local_5c);
  if (iVar1 != 0) {
    local_58[0] = param_2;
    plVar2 = (long *)tfind(local_58,(void **)&__gconv_alias_db,__gconv_alias_compare);
    __s2 = param_2;
    if ((plVar2 != (long *)0x0) &&
       (__s2 = *(char **)(*plVar2 + 8), *(char **)(*plVar2 + 8) == (char *)0x0)) {
      __s2 = param_2;
    }
    local_58[0] = param_1;
    plVar2 = (long *)tfind(local_58,(void **)&__gconv_alias_db,__gconv_alias_compare);
    __s1 = param_1;
    if ((plVar2 != (long *)0x0) &&
       (__s1 = *(char **)(*plVar2 + 8), *(char **)(*plVar2 + 8) == (char *)0x0)) {
      __s1 = param_1;
    }
    local_5c = strcmp(__s1,__s2);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_5c;
}


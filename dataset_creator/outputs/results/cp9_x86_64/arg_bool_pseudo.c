
char * arg_bool(undefined8 param_1,uint param_2,char *param_3,uint param_4)

{
  int iVar1;
  char *__fmt;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = strncasecmp(param_3,"on",2);
  if (iVar1 == 0) {
    _res_hconf._64_4_ = _res_hconf._64_4_ | param_4;
    param_3 = param_3 + 2;
  }
  else {
    iVar1 = strncasecmp(param_3,"off",3);
    if (iVar1 == 0) {
      param_3 = param_3 + 3;
      _res_hconf._64_4_ = _res_hconf._64_4_ & ~param_4;
    }
    else {
      __fmt = (char *)dcgettext(&_libc_intl_domainname,
                                "%s: line %d: expected `on\' or `off\', found `%s\'\n",5);
      iVar1 = asprintf(&local_38,__fmt,param_1,(ulong)param_2,param_3);
      if (iVar1 < 0) {
        param_3 = (char *)0x0;
      }
      else {
        __fxprintf(0,&DAT_007d9761,local_38);
        free(local_38);
        param_3 = (char *)0x0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


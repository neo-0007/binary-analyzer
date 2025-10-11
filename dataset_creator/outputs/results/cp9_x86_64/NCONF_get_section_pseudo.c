
stack_st_CONF_VALUE * NCONF_get_section(CONF *conf,char *section)

{
  stack_st_CONF_VALUE *psVar1;
  
  if (conf == (CONF *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_lib.c",0x120,"NCONF_get_section");
    ERR_set_error(0xe,0x69,0);
  }
  else {
    if (section != (char *)0x0) {
      psVar1 = _CONF_get_section_values(conf,section);
      return psVar1;
    }
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_lib.c",0x125,"NCONF_get_section");
    ERR_set_error(0xe,0x6b,0);
  }
  return (stack_st_CONF_VALUE *)0x0;
}


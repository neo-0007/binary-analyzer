
stack_st_CONF_VALUE * nconf_get_section(CONF *conf,char *section)

{
  stack_st_CONF_VALUE *psVar1;
  
  psVar1 = NCONF_get_section(conf,section);
  return psVar1;
}


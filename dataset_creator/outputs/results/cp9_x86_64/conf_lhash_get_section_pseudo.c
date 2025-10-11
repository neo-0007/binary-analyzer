
stack_st_CONF_VALUE * conf_lhash_get_section(lhash_st_CONF_VALUE *conf,char *section)

{
  stack_st_CONF_VALUE *psVar1;
  
  psVar1 = CONF_get_section(conf,section);
  return psVar1;
}



char * conf_lhash_get_string(lhash_st_CONF_VALUE *conf,char *group,char *name)

{
  char *pcVar1;
  
  pcVar1 = CONF_get_string(conf,group,name);
  return pcVar1;
}


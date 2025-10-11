
char * nconf_get_string(CONF *conf,char *group,char *name)

{
  char *pcVar1;
  
  pcVar1 = NCONF_get_string(conf,group,name);
  return pcVar1;
}


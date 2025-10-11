
char * NCONF_get_string(CONF *conf,char *group,char *name)

{
  char *pcVar1;
  
  pcVar1 = _CONF_get_string(conf,group,name);
  if (pcVar1 == (char *)0x0) {
    if (conf != (CONF *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/conf/conf_lib.c",0x13b,"NCONF_get_string");
      ERR_set_error(0xe,0x6c,"group=%s name=%s",group,name);
      return (char *)0x0;
    }
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_lib.c",0x138,"NCONF_get_string");
    ERR_set_error(0xe,0x6a,0);
  }
  return pcVar1;
}


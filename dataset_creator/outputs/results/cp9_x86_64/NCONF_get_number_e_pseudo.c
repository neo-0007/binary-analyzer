
int NCONF_get_number_e(CONF *conf,char *group,char *name,long *result)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  
  if (result == (long *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_lib.c",0x153,"NCONF_get_number_e");
    ERR_set_error(0xe,0xc0102,0);
    return 0;
  }
  pcVar2 = NCONF_get_string(conf,group,name);
  if (pcVar2 != (char *)0x0) {
    pcVar5 = default_to_int;
    pcVar4 = default_is_number;
    if (conf != (CONF *)0x0) {
      pcVar4 = conf->meth->is_number;
      pcVar5 = conf->meth->to_int;
      if (pcVar4 == (_func_3670 *)0x0) {
        pcVar4 = default_is_number;
      }
      if (pcVar5 == (_func_3671 *)0x0) {
        pcVar5 = default_to_int;
      }
    }
    lVar3 = 0;
    while( true ) {
      iVar1 = (*pcVar4)(conf,*pcVar2);
      if (iVar1 == 0) {
        *result = lVar3;
        return 1;
      }
      iVar1 = (*pcVar5)(conf,*pcVar2);
      if ((long)((0x7fffffffffffffffU - (long)iVar1) / 10) < lVar3) break;
      pcVar2 = pcVar2 + 1;
      lVar3 = (long)iVar1 + lVar3 * 10;
    }
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_lib.c",0x166,"NCONF_get_number_e");
    ERR_set_error(0xe,0x79,0);
    return 0;
  }
  return 0;
}


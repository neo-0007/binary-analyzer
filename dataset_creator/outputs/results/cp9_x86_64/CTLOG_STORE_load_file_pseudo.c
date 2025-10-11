
undefined8 CTLOG_STORE_load_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *arg;
  CONF *conf;
  char *list;
  undefined8 uVar2;
  undefined8 uVar3;
  
  arg = (undefined8 *)CRYPTO_zalloc(0x18,"../crypto/ct/ct_log.c",0x3f);
  if (arg == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_log.c",0x42,"ctlog_store_load_ctx_new");
    ERR_set_error(0x32,0xc0100,0);
    return 0;
  }
  *arg = param_1;
  uVar3 = 0;
  conf = NCONF_new((CONF_METHOD *)0x0);
  arg[1] = conf;
  if (conf != (CONF *)0x0) {
    iVar1 = NCONF_load(conf,param_2,(long *)0x0);
    if (iVar1 < 1) {
      ERR_new();
      uVar2 = 0xef;
    }
    else {
      list = NCONF_get_string((CONF *)arg[1],(char *)0x0,"enabled_logs");
      if (list != (char *)0x0) {
        iVar1 = CONF_parse_list(list,0x2c,1,ctlog_store_load_log,arg);
        if ((iVar1 == 0) || (arg[2] != 0)) {
          ERR_new();
          uVar3 = 0;
          ERR_set_debug("../crypto/ct/ct_log.c",0xfb,"CTLOG_STORE_load_file");
          ERR_set_error(0x32,0x6d,0);
          conf = (CONF *)arg[1];
        }
        else {
          conf = (CONF *)arg[1];
          uVar3 = 1;
        }
        goto LAB_0062267e;
      }
      ERR_new();
      uVar2 = 0xf5;
    }
    ERR_set_debug("../crypto/ct/ct_log.c",uVar2,"CTLOG_STORE_load_file");
    ERR_set_error(0x32,0x6d,0);
    conf = (CONF *)arg[1];
  }
LAB_0062267e:
  NCONF_free(conf);
  CRYPTO_free(arg);
  return uVar3;
}


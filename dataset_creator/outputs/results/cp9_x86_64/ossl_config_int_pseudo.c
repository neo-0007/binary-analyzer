
int ossl_config_int(undefined8 *param_1)

{
  int iVar1;
  ulong flags;
  char *appname;
  char *filename;
  
  if (openssl_configured == 0) {
    if (param_1 == (undefined8 *)0x0) {
      appname = (char *)0x0;
      filename = (char *)0x0;
      flags = 0x32;
    }
    else {
      filename = (char *)*param_1;
      appname = (char *)param_1[1];
      flags = param_1[2];
    }
    iVar1 = CONF_modules_load_file(filename,appname,flags);
    openssl_configured = 1;
    return iVar1;
  }
  return 1;
}


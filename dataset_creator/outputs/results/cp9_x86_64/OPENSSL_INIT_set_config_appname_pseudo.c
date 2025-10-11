
undefined8 OPENSSL_INIT_set_config_appname(long param_1,char *param_2)

{
  if ((param_2 != (char *)0x0) && (param_2 = strdup(param_2), param_2 == (char *)0x0)) {
    return 0;
  }
  free(*(void **)(param_1 + 8));
  *(char **)(param_1 + 8) = param_2;
  return 1;
}


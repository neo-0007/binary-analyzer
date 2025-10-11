
undefined8 parsebool(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_1,"on");
  if ((iVar1 == 0) || (iVar1 = OPENSSL_strcasecmp(param_1,&DAT_0080044b), iVar1 == 0)) {
    *param_2 = 1;
    return 1;
  }
  iVar1 = OPENSSL_strcasecmp(param_1,"off");
  if ((iVar1 != 0) && (iVar1 = OPENSSL_strcasecmp(param_1,"false"), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_def.c",0xca,"parsebool");
    ERR_set_error(0xe,0x7a,0);
    return 0;
  }
  *param_2 = 0;
  return 1;
}


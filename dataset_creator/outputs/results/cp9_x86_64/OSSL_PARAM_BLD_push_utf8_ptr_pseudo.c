
undefined8
OSSL_PARAM_BLD_push_utf8_ptr(undefined8 param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    param_4 = strlen(param_3);
  }
  else if (0x7fffffff < param_4) {
    ERR_new(param_1,param_2,param_4);
    ERR_set_debug("../crypto/param_build.c",0x104,"OSSL_PARAM_BLD_push_utf8_ptr");
    ERR_set_error(0xf,0x70,0);
    return 0;
  }
  lVar1 = param_push(param_1,param_2,param_4,8,6,0);
  if (lVar1 != 0) {
    *(char **)(lVar1 + 0x28) = param_3;
    return 1;
  }
  return 0;
}


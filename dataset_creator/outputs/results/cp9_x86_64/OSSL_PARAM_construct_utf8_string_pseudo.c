
undefined8 *
OSSL_PARAM_construct_utf8_string
          (undefined8 *param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  if ((param_3 != (char *)0x0) && (param_4 == 0)) {
    param_4 = strlen(param_3);
  }
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}


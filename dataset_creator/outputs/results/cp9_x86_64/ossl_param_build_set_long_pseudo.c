
undefined8
ossl_param_build_set_long(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = OSSL_PARAM_BLD_push_long(param_1,param_3,param_4);
    return uVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,param_3);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = OSSL_PARAM_set_long(lVar2,param_4);
  return uVar1;
}


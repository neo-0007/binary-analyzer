
undefined8 OSSL_PARAM_BLD_push_uint(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,4,4,2,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  return 0;
}


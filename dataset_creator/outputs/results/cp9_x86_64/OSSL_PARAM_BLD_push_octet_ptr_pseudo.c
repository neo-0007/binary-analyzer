
undefined8
OSSL_PARAM_BLD_push_octet_ptr
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if (0x7fffffff < param_4) {
    ERR_new();
    ERR_set_debug("../crypto/param_build.c",0x126,"OSSL_PARAM_BLD_push_octet_ptr");
    ERR_set_error(0xf,0x70,0);
    return 0;
  }
  lVar1 = param_push(param_1,param_2,param_4,8,7,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    return 1;
  }
  return 0;
}


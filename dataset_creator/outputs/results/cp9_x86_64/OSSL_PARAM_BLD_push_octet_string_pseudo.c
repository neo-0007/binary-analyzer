
undefined8
OSSL_PARAM_BLD_push_octet_string
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  if (0x7fffffff < param_4) {
    ERR_new();
    ERR_set_debug("../crypto/param_build.c",0x115,"OSSL_PARAM_BLD_push_octet_string");
    ERR_set_error(0xf,0x70,0);
    return 0;
  }
  uVar1 = CRYPTO_secure_allocated(param_3);
  lVar2 = param_push(param_1,param_2,param_4 & 0xffffffff,param_4,5,uVar1);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    return 1;
  }
  return 0;
}



undefined8 FUN_00548550(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    param_4 = thunk_FUN_007129d0(param_3);
  }
  else if (0x7fffffff < param_4) {
    FUN_0051f420(param_1,param_2,param_4);
    FUN_0051f540("../crypto/param_build.c",0x104,"OSSL_PARAM_BLD_push_utf8_ptr");
    FUN_0051f8f0(0xf,0x70,0);
    return 0;
  }
  lVar1 = FUN_00547df0(param_1,param_2,param_4,8,6,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    return 1;
  }
  return 0;
}


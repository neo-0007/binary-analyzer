
undefined8 FUN_00548480(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    param_4 = thunk_FUN_007129d0(param_3);
  }
  else if (0x7fffffff < param_4) {
    FUN_0051f420();
    FUN_0051f540("../crypto/param_build.c",0xf1,"OSSL_PARAM_BLD_push_utf8_string");
    FUN_0051f8f0(0xf,0x70,0);
    return 0;
  }
  uVar1 = FUN_0041bfe0(param_3);
  lVar2 = FUN_00547df0(param_1,param_2,param_4 & 0xffffffff,param_4 + 1,4,uVar1);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    return 1;
  }
  return 0;
}


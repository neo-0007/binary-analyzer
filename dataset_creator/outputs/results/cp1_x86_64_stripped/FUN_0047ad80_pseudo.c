
bool FUN_0047ad80(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0041bfc0(0xa8,"../providers/implementations/rands/drbg_hmac.c",0x116);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg_hmac.c",0x118,"drbg_hmac_new");
    FUN_0051f8f0(0x39,0xc0100,0);
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x88) = 0x10000;
    *(long *)(param_1 + 0xf8) = lVar1;
  }
  return lVar1 != 0;
}


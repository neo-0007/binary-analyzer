
bool FUN_0047a180(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0041bfc0(0x178,"../providers/implementations/rands/drbg_hash.c",0x188);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg_hash.c",0x18a,"drbg_hash_new");
    FUN_0051f8f0(0x39,0xc0100,0);
  }
  else {
    *(undefined8 *)(param_1 + 0xe8) = 0x6f;
    *(undefined8 *)(param_1 + 0x98) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x88) = 0x10000;
    *(long *)(param_1 + 0xf8) = lVar1;
  }
  return lVar1 != 0;
}


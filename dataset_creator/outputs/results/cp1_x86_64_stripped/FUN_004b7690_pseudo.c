
long FUN_004b7690(void)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(0x18,"../crypto/bn/bn_lib.c",0xf7);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_lib.c",0xf8,"BN_new");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x14) = 1;
  }
  return lVar1;
}


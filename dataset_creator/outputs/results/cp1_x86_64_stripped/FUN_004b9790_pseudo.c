
long FUN_004b9790(void)

{
  long lVar1;
  
  lVar1 = FUN_0041ad90(0x68,"../crypto/bn/bn_mont.c",0xe8);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_mont.c",0xe9,"BN_MONT_CTX_new");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    FUN_004b9740(lVar1);
    *(undefined4 *)(lVar1 + 0x60) = 1;
  }
  return lVar1;
}


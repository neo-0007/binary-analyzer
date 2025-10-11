
undefined8 FUN_00561440(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0041ad60(*(long *)(param_1 + 0x30),"../crypto/pkcs7/pk7_lib.c",0x1e8);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (param_2 != 0) {
    lVar1 = FUN_0041c2c0(param_2,"../crypto/pkcs7/pk7_lib.c",0x1ec);
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x1ee,"ossl_pkcs7_set1_propq");
      FUN_0051f8f0(0x39,0xc0100,0);
      return 0;
    }
  }
  return 1;
}


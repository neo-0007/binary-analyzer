
long FUN_005a7a40(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0041aec0(0x110,"../crypto/x509/x509_vfy.c",0x8ee);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x8f1,"X509_STORE_CTX_new_ex");
    FUN_0051f8f0(0xb,0xc0100,0);
  }
  else {
    *(undefined8 *)(lVar1 + 0x100) = param_1;
    if (param_2 != 0) {
      lVar2 = FUN_0041c2c0(param_2,"../crypto/x509/x509_vfy.c",0x8f7);
      *(long *)(lVar1 + 0x108) = lVar2;
      if (lVar2 == 0) {
        FUN_0041ad60(lVar1,"../crypto/x509/x509_vfy.c",0x8f9);
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x509_vfy.c",0x8fa,"X509_STORE_CTX_new_ex");
        FUN_0051f8f0(0xb,0xc0100,0);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}


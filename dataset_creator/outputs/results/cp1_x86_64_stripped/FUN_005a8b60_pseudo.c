
long FUN_005a8b60(void)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(0x70,"../crypto/x509/x509_vpm.c",0x56);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vpm.c",0x58,"X509_VERIFY_PARAM_new");
    FUN_0051f8f0(0xb,0xc0100,0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0xffffffffffffffff;
  }
  return lVar1;
}


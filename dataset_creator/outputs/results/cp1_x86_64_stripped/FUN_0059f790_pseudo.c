
long FUN_0059f790(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0041aec0(0x20,"../crypto/x509/x509_lu.c",0x14);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_lu.c",0x17,"X509_LOOKUP_new");
    FUN_0051f8f0(0xb,0xc0100,0);
  }
  else {
    *(long *)(lVar2 + 8) = param_1;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 8))(lVar2);
      if (iVar1 == 0) {
        FUN_0041ad60(lVar2,"../crypto/x509/x509_lu.c",0x1d);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


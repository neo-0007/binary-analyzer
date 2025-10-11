
long FUN_005a2a50(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004239c0(param_2);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_v3.c",0x91,"X509_EXTENSION_create_by_NID");
    FUN_0051f8f0(0xb,0x6d,0);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_005a2930(param_1,lVar1,param_3,param_4);
    if (lVar2 == 0) {
      FUN_004a06b0(lVar1);
      return 0;
    }
  }
  return lVar2;
}


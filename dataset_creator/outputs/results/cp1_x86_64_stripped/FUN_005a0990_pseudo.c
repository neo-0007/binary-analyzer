
undefined8 FUN_005a0990(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_005a0810(param_1,param_2,1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_lu.c",0x198,"X509_STORE_add_crl");
  FUN_0051f8f0(0xb,0xc0100,0);
  return 0;
}


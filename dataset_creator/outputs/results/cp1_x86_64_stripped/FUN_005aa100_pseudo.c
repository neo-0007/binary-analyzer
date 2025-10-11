
undefined8
FUN_005aa100(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004239c0(param_2);
  if (lVar1 == 0) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/x509/x509name.c",0x10c,"X509_NAME_ENTRY_create_by_NID");
    FUN_0051f8f0(0xb,0x6d,0);
  }
  else {
    uVar2 = FUN_005a9ec0(param_1,lVar1,param_3,param_4,param_5);
    FUN_004a06b0(lVar1);
  }
  return uVar2;
}


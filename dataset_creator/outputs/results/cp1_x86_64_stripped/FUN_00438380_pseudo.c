
undefined8
FUN_00438380(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00424530(param_2,0);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_att.c",0xf5,"X509_ATTRIBUTE_create_by_txt");
    uVar2 = 0;
    FUN_0051f8f0(0xb,0x77,"name=%s",param_2);
  }
  else {
    uVar2 = FUN_00438110(param_1,lVar1,param_3,param_4,param_5);
    FUN_004a06b0(lVar1);
  }
  return uVar2;
}


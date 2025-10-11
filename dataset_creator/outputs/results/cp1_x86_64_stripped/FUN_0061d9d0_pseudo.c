
undefined8 FUN_0061d9d0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0060f1c0();
  if (lVar1 != 0) {
    uVar2 = FUN_0061d380(lVar1,param_1,param_2,param_3);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_conf.c",0xc0,"X509V3_EXT_i2d");
  FUN_0051f8f0(0x22,0x81,0);
  return 0;
}



undefined4 FUN_0060f100(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_00942850 == 0) && (DAT_00942850 = FUN_00436420(FUN_0060f0b0), DAT_00942850 == 0)) {
    FUN_0051f420(0);
    FUN_0051f540("../crypto/x509/v3_lib.c",0x1d,"X509V3_EXT_add");
    FUN_0051f8f0(0x22,0xc0100,0);
    return 0;
  }
  iVar1 = FUN_00435f80(DAT_00942850,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_lib.c",0x21,"X509V3_EXT_add");
  FUN_0051f8f0(0x22,0xc0100,0);
  return 0;
}


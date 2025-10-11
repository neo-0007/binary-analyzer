
undefined8 FUN_006044e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = FUN_005a5c30(0,0,param_3,0);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_attr.c",99,"PKCS7_add0_attrib_signing_time");
      FUN_0051f8f0(0x21,0xc0100,0);
      return 0;
    }
  }
  uVar1 = FUN_00560c20(param_1,0x34,0x17);
  return uVar1;
}


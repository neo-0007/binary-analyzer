
undefined8 FUN_004384e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_004384c0();
  if (lVar2 == 0) {
    return 0;
  }
  if (((param_3 & 0xfffffffb) != 1) && (uVar1 = FUN_004a10a0(lVar2), uVar1 == param_3)) {
    return *(undefined8 *)(lVar2 + 8);
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_att.c",0x152,"X509_ATTRIBUTE_get0_data");
  FUN_0051f8f0(0xb,0x7a,0);
  return 0;
}


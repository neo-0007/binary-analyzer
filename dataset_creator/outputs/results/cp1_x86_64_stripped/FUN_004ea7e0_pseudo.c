
undefined8 FUN_004ea7e0(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_004ea0e0(*(undefined8 *)(param_1 + 0x18));
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_asn1.c",0x43e,"i2d_ECParameters");
  FUN_0051f8f0(0x10,0xc0102,0);
  return 0;
}


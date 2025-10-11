
undefined4 FUN_005b4920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_004b0b80();
  lVar3 = FUN_004ab550(uVar2);
  if (lVar3 != 0) {
    FUN_004abd40(lVar3,0x6a,0,param_2);
    uVar1 = FUN_005b4830(param_1,lVar3,param_3);
    FUN_004ab560(lVar3);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/a_i2d_fp.c",0x4d,"ASN1_item_i2d_fp");
  FUN_0051f8f0(0xd,0x80007,0);
  return 0;
}


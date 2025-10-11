
undefined8
FUN_0049e790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_004b0b80();
  lVar2 = FUN_004ab550(uVar1);
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/asn1/a_d2i_fp.c",0x5c,"ASN1_item_d2i_fp_ex");
    FUN_0051f8f0(0xd,0x80007,0);
  }
  else {
    FUN_004abd40(lVar2,0x6a,0,param_2);
    uVar1 = FUN_0049e6c0(param_1,lVar2,param_3,param_4,param_5);
    FUN_004ab560(lVar2);
  }
  return uVar1;
}


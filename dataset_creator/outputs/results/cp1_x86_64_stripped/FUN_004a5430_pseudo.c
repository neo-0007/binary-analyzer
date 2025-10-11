
ulong FUN_004a5430(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    uVar1 = FUN_004a3ef0();
    if (0 < (int)uVar1) {
      return uVar1;
    }
    FUN_004a6bc0(param_1,param_4);
    return uVar1 & 0xffffffff;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
  FUN_0051f8f0(0xd,0xc0102,0);
  return 0;
}


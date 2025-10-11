
long FUN_0049eed0(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeff) != param_3) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_int.c",0x1ff,"asn1_string_to_bn");
    FUN_0051f8f0(0xd,0xe1,0);
    return 0;
  }
  lVar1 = FUN_004b84d0(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_int.c",0x205,"asn1_string_to_bn");
    FUN_0051f8f0(0xd,0x69,0);
  }
  else if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
    FUN_004b7c90(lVar1,1);
    return lVar1;
  }
  return lVar1;
}


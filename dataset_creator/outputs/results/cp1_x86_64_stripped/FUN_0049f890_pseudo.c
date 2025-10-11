
undefined8 FUN_0049f890(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_int.c",0x16d,"asn1_string_get_uint64");
    FUN_0051f8f0(0xd,0xc0102,0);
  }
  else {
    if ((param_2[1] & 0xfffffeffU) != 2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_int.c",0x171,"asn1_string_get_uint64");
      FUN_0051f8f0(0xd,0xe1,0);
      return 0;
    }
    if ((param_2[1] & 0x100U) == 0) {
      uVar1 = FUN_0049efb0(param_1,*(undefined8 *)(param_2 + 2),(long)*param_2);
      return uVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_int.c",0x175,"asn1_string_get_uint64");
    FUN_0051f8f0(0xd,0xe2,0);
  }
  return 0;
}



undefined8 FUN_0056bfa0(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  if (param_2 < param_4) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_none.c",0x18,"RSA_padding_add_none");
    FUN_0051f8f0(4,0x6e,0);
    return 0;
  }
  if (param_2 <= param_4) {
    thunk_FUN_00713a50(param_1,param_3,param_4);
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/rsa/rsa_none.c",0x1d,"RSA_padding_add_none");
  FUN_0051f8f0(4,0x7a,0);
  return 0;
}


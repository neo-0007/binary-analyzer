
undefined8 FUN_004eda10(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (long *)0x0) || (param_1[3] == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0xd4,"EC_KEY_generate_key");
    FUN_0051f8f0(0x10,0xc0102,0);
    return 0;
  }
  if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0xe0,"EC_KEY_generate_key");
    FUN_0051f8f0(0x10,0x98,0);
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  param_1[0xd] = param_1[0xd] + 1;
  return uVar1;
}


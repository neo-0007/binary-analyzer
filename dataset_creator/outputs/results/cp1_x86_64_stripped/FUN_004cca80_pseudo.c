
undefined8 FUN_004cca80(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_lib.c",0x120,"NCONF_get_section");
    FUN_0051f8f0(0xe,0x69,0);
  }
  else {
    if (param_2 != 0) {
      uVar1 = FUN_005c96a0();
      return uVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_lib.c",0x125,"NCONF_get_section");
    FUN_0051f8f0(0xe,0x6b,0);
  }
  return 0;
}


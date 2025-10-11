
long FUN_004ccb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_005c9770();
  if (lVar1 == 0) {
    if (param_1 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/conf/conf_lib.c",0x13b,"NCONF_get_string");
      FUN_0051f8f0(0xe,0x6c,"group=%s name=%s",param_2,param_3);
      return 0;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_lib.c",0x138,"NCONF_get_string");
    FUN_0051f8f0(0xe,0x6a,0);
  }
  return lVar1;
}


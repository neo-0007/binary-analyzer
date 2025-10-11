
long FUN_004cc650(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_005cb940();
  }
  lVar1 = (**(code **)(param_2 + 8))(param_2);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_lib.c",0xbf,"NCONF_new_ex");
    FUN_0051f8f0(0xe,0xc0100,0);
  }
  else {
    *(undefined8 *)(lVar1 + 0x28) = param_1;
  }
  return lVar1;
}


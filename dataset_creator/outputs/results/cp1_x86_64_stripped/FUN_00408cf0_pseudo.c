
undefined4 FUN_00408cf0(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_2 = FUN_00426fd0(param_1,param_2,1), param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_fetch.c",0x1fa,"evp_set_default_properties_int");
    FUN_0051f8f0(6,0xd2,0);
    return 0;
  }
  iVar1 = FUN_00408460(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_004273f0(param_2);
  return 0;
}


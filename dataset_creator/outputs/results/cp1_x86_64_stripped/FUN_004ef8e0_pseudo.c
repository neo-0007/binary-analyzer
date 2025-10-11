
long FUN_004ef8e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x30),"../crypto/ec/ec_lib.c",0x211);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_3 == 0) || (param_2 == 0)) {
    lVar1 = 1;
  }
  else {
    lVar1 = FUN_0041ad90(param_3,"../crypto/ec/ec_lib.c",0x218);
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 != 0) {
      thunk_FUN_00713a50(lVar1,param_2,param_3);
      *(long *)(param_1 + 0x38) = param_3;
      return param_3;
    }
    FUN_0051f420(0);
    FUN_0051f540("../crypto/ec/ec_lib.c",0x219,"EC_GROUP_set_seed");
    FUN_0051f8f0(0x10,0xc0100,0);
    lVar1 = 0;
  }
  return lVar1;
}


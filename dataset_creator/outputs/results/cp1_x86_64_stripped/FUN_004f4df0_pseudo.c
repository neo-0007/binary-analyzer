
long FUN_004f4df0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004f4c40();
  if (lVar1 != 0) {
    lVar2 = FUN_0041ad90(lVar1,"../crypto/ec/ec_oct.c",0x8f);
    if (lVar2 == 0) {
      FUN_0051f420();
      lVar1 = 0;
      FUN_0051f540("../crypto/ec/ec_oct.c",0x90,"EC_POINT_point2buf");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      lVar1 = FUN_004f4c40(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar1 == 0) {
        FUN_0041ad60(lVar2,"../crypto/ec/ec_oct.c",0x95);
      }
      else {
        *param_4 = lVar2;
      }
    }
  }
  return lVar1;
}


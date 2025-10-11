
undefined8 FUN_004f0980(long *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 4) != 0x196) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x351,"EC_POINT_get_Jprojective_coordinates_GFp");
    FUN_0051f8f0(0x10,0xc0101,0);
    return 0;
  }
  if ((*param_1 == *param_2) &&
     ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1])))) {
    uVar1 = FUN_005109d0();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_lib.c",0x355,"EC_POINT_get_Jprojective_coordinates_GFp");
  FUN_0051f8f0(0x10,0x65,0);
  return 0;
}


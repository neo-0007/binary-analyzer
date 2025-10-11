
undefined8
FUN_004f0f80(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x78);
  if (pcVar1 != (code *)0x0) {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
      uVar3 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar3 != 0) {
        iVar2 = FUN_004f0ed0(param_1,param_2,param_5);
        uVar3 = 1;
        if (iVar2 < 1) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_lib.c",0x36d,"EC_POINT_set_affine_coordinates");
          FUN_0051f8f0(0x10,0x6b,0);
          uVar3 = 0;
        }
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x366,"EC_POINT_set_affine_coordinates");
      FUN_0051f8f0(0x10,0x65,0);
      uVar3 = 0;
    }
    return uVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_lib.c",0x362,"EC_POINT_set_affine_coordinates");
  FUN_0051f8f0(0x10,0xc0101,0);
  return 0;
}


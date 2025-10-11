
undefined8 FUN_004f0d70(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(*param_1 + 0x80) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x38a,"EC_POINT_get_affine_coordinates");
    FUN_0051f8f0(0x10,0xc0101,0);
    return 0;
  }
  if ((*param_1 == *param_2) &&
     ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1])))) {
    iVar1 = FUN_004f0cc0(param_1,param_2);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004f0e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x392,"EC_POINT_get_affine_coordinates");
    FUN_0051f8f0(0x10,0x6a,0);
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x38e,"EC_POINT_get_affine_coordinates");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0;
}


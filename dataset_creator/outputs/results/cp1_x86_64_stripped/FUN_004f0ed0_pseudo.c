
undefined8 FUN_004f0ed0(long *param_1,long *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x3ec,"EC_POINT_is_on_curve");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if (*param_1 == *param_2) {
      if ((int)param_1[4] == 0) {
LAB_004f0f3d:
                    /* WARNING: Could not recover jumptable at 0x004f0f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
      if (((int)param_2[1] == 0) || ((int)param_1[4] == (int)param_2[1])) goto LAB_004f0f3d;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x3f0,"EC_POINT_is_on_curve");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0;
}


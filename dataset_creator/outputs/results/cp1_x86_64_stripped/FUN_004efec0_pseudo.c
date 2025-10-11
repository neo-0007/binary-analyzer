
undefined8 FUN_004efec0(long *param_1,long *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x303,"EC_POINT_copy");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if ((*param_1 == *param_2) &&
       (((int)param_1[1] == (int)param_2[1] || (int)param_1[1] == 0 || ((int)param_2[1] == 0)))) {
      if (param_1 == param_2) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x004efefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x30a,"EC_POINT_copy");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0;
}


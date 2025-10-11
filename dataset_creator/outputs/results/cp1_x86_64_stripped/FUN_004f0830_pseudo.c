
undefined8 FUN_004f0830(long *param_1,long *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x32f,"EC_POINT_set_to_infinity");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x004f084d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x333,"EC_POINT_set_to_infinity");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0;
}


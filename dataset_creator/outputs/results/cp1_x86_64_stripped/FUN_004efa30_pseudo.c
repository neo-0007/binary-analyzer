
undefined8 FUN_004efa30(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004efa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_lib.c",0x23a,"EC_GROUP_get_curve");
  FUN_0051f8f0(0x10,0xc0101,0);
  return 0;
}


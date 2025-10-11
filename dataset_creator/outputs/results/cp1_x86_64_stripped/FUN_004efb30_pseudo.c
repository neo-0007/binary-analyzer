
undefined8 FUN_004efb30(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004efb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x48))();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_lib.c",0x268,"EC_GROUP_check_discriminant");
  FUN_0051f8f0(0x10,0xc0101,0);
  return 0;
}


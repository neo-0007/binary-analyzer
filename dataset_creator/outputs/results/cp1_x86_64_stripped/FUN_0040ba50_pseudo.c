
undefined8 FUN_0040ba50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    if (*(code **)(param_1 + 200) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040ba72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 200))(param_2,param_3);
      return uVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_utils.c",0x46,"seterr");
    FUN_0051f8f0(6,0xc6,0);
    return 0;
  }
  return 0xffffffff;
}


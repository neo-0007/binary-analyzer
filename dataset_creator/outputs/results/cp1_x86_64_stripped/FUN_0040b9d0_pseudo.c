
undefined8 FUN_0040b9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040b9f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0xd0))(param_2,param_3);
      return uVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_utils.c",0x41,"geterr");
    FUN_0051f8f0(6,0xc5,0);
    return 0;
  }
  return 0xffffffff;
}



undefined8 FUN_00537770(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    uVar1 = FUN_0040a4a0();
    uVar1 = FUN_00420b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x005377a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xf0))(0,uVar1);
    return uVar1;
  }
  return 0;
}


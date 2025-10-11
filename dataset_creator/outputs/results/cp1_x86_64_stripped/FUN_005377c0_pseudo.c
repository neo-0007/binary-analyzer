
undefined8 FUN_005377c0(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(*param_1 + 0xf8) != 0) {
    uVar1 = FUN_0040a4a0();
    uVar1 = FUN_00420b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x005377fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xf8))(param_1[0x15],uVar1);
    return uVar1;
  }
  return 0;
}


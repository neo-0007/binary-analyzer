
undefined8 FUN_0053e7b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0053e6e0();
  uVar1 = FUN_00420b60(uVar1);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053e7d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x30))(uVar1);
    return uVar1;
  }
  return 0;
}


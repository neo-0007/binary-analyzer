
undefined8 FUN_0053e7f0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0053e6e0();
  uVar1 = FUN_00420b60(uVar1);
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053e822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x60))(uVar1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


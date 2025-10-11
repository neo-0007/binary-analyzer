
undefined8 FUN_0053eb00(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053eb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xc0))(param_2);
    return uVar1;
  }
  return 0;
}


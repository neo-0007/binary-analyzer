
undefined8 FUN_0053ead0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053eaeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xb8))(param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


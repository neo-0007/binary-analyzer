
undefined8 FUN_0053bed0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053bee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x70))(param_2);
    return uVar1;
  }
  return 1;
}



undefined8 FUN_0053f350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053f363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(param_2);
    return uVar1;
  }
  return 1;
}


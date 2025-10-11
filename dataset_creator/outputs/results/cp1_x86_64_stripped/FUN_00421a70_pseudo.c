
undefined8 FUN_00421a70(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00421a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0xd0));
    return uVar1;
  }
  return 0;
}


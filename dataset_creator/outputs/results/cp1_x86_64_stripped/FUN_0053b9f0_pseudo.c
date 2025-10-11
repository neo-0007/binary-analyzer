
undefined8 FUN_0053b9f0(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = FUN_0053ae70();
    uVar1 = FUN_00420b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0053ba1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(0,uVar1);
    return uVar1;
  }
  return 0;
}


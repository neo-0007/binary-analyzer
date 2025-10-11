
undefined8 FUN_0053a4c0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x90) != 0) {
    uVar1 = FUN_0053a090();
    uVar1 = FUN_00420b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0053a4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x90))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}


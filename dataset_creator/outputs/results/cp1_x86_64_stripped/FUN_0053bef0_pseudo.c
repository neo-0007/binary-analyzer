
undefined8 FUN_0053bef0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053bf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1[1]);
    return uVar1;
  }
  return 1;
}


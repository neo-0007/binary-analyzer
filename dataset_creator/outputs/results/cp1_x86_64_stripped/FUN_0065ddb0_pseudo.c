
ulong FUN_0065ddb0(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x50) == FUN_00653560) {
    return (ulong)*(uint *)(param_1[2] + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x0065ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x50))();
  return uVar1;
}


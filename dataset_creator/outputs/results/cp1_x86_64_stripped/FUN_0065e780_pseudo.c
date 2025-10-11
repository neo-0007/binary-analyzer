
ulong FUN_0065e780(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_00653610) {
    return (ulong)*(uint *)(param_1[2] + 0x4c);
  }
                    /* WARNING: Could not recover jumptable at 0x0065e7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}


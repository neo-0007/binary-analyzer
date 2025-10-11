
ulong FUN_0065e1d0(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x48) == FUN_006535a0) {
    return (ulong)*(uint *)(param_1[2] + 100);
  }
                    /* WARNING: Could not recover jumptable at 0x0065e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


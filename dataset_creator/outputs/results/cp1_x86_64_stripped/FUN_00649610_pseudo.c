
ulong FUN_00649610(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x50) == FUN_0063e450) {
    return (ulong)*(uint *)(param_1[2] + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x00649630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x50))();
  return uVar1;
}


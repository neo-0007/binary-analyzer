
ulong FUN_00649340(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_0063e420) {
    return (ulong)*(byte *)(param_1[2] + 0x22);
  }
                    /* WARNING: Could not recover jumptable at 0x00649360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}



ulong FUN_00649fe0(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_0063e500) {
    return (ulong)*(byte *)(param_1[2] + 0x49);
  }
                    /* WARNING: Could not recover jumptable at 0x0064a000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}


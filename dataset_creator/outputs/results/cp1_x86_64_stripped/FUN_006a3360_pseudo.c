
ulong FUN_006a3360(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x50) == FUN_006a1160) {
    return (ulong)*(uint *)(param_1[2] + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x006a3380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x50))();
  return uVar1;
}


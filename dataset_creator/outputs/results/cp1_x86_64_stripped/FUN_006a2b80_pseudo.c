
ulong FUN_006a2b80(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_006a10e0) {
    return (ulong)*(uint *)(param_1[2] + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x006a2ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}


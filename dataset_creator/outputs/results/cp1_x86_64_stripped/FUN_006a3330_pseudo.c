
ulong FUN_006a3330(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x48) == FUN_006a1150) {
    return (ulong)*(uint *)(param_1[2] + 100);
  }
                    /* WARNING: Could not recover jumptable at 0x006a3350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


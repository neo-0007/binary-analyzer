
ulong FUN_0067a980(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x50) == FUN_006787d0) {
    return (ulong)*(uint *)(param_1[2] + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x0067a9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x50))();
  return uVar1;
}


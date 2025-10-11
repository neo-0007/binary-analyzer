
ulong FUN_0067a950(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x48) == FUN_006787c0) {
    return (ulong)*(uint *)(param_1[2] + 0x5c);
  }
                    /* WARNING: Could not recover jumptable at 0x0067a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


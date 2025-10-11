
ulong FUN_0067a160(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_00678750) {
    return (ulong)*(byte *)(param_1[2] + 0x22);
  }
                    /* WARNING: Could not recover jumptable at 0x0067a180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}


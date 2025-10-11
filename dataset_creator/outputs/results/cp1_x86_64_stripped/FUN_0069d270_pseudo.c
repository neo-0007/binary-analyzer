
ulong FUN_0069d270(long *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[2];
  if ((ulong)param_1[1] < uVar1) {
    param_1[2] = uVar1 - 1;
    return (ulong)*(byte *)(uVar1 - 1);
  }
  if (*(code **)(*param_1 + 0x58) == FUN_0069c960) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0069d2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0xffffffff);
  return uVar1;
}


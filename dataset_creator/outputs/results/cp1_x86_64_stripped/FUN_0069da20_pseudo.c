
ulong FUN_0069da20(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1[2];
  if ((ulong)param_1[1] < uVar2) {
    uVar1 = *(uint *)(uVar2 - 4);
    param_1[2] = uVar2 - 4;
    return (ulong)uVar1;
  }
  if (*(code **)(*param_1 + 0x58) == FUN_0069c9f0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0069da65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0xffffffff);
  return uVar2;
}


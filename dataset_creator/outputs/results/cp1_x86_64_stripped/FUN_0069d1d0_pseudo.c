
ulong FUN_0069d1d0(long *param_1)

{
  ulong uVar1;
  
  if ((byte *)param_1[2] < (byte *)param_1[3]) {
    return (ulong)*(byte *)param_1[2];
  }
  if (*(code **)(*param_1 + 0x48) == FUN_0069c950) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0069d200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


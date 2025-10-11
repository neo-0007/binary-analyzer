
ulong FUN_0069d220(long *param_1,char param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[2];
  if (((ulong)param_1[1] < uVar1) && (*(char *)(uVar1 - 1) == param_2)) {
    param_1[2] = uVar1 - 1;
    uVar1 = (ulong)*(byte *)(uVar1 - 1);
  }
  else {
    uVar1 = 0xffffffff;
    if (*(code **)(*param_1 + 0x58) != FUN_0069c960) {
                    /* WARNING: Could not recover jumptable at 0x0069d261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}


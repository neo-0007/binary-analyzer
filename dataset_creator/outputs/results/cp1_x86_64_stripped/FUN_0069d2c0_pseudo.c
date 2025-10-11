
ulong FUN_0069d2c0(long *param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if ((byte *)param_1[5] < (byte *)param_1[6]) {
    *(byte *)param_1[5] = param_2;
    param_1[5] = param_1[5] + 1;
  }
  else {
    if (*(code **)(*param_1 + 0x68) != FUN_0069c970) {
                    /* WARNING: Could not recover jumptable at 0x0069d303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x68))(param_1,uVar1);
      return uVar1;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


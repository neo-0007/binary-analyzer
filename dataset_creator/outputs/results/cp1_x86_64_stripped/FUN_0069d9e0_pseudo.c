
ulong FUN_0069d9e0(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2];
  uVar2 = (ulong)param_2;
  if (((ulong)param_1[1] < uVar1) && (*(uint *)(uVar1 - 4) == param_2)) {
    param_1[2] = uVar1 - 4;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(code **)(*param_1 + 0x58) != FUN_0069c9f0) {
                    /* WARNING: Could not recover jumptable at 0x0069da1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x58))();
      return uVar1;
    }
  }
  return uVar2;
}


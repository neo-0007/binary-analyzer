
ulong FUN_0069da70(long *param_1,uint param_2)

{
  uint *puVar1;
  ulong uVar2;
  
  puVar1 = (uint *)param_1[5];
  uVar2 = (ulong)param_2;
  if (puVar1 < (uint *)param_1[6]) {
    *puVar1 = param_2;
    param_1[5] = (long)(puVar1 + 1);
  }
  else {
    uVar2 = 0xffffffff;
    if (*(code **)(*param_1 + 0x68) != FUN_0069ca00) {
                    /* WARNING: Could not recover jumptable at 0x0069daa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x68))();
      return uVar2;
    }
  }
  return uVar2;
}


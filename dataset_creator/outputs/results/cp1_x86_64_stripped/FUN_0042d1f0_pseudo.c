
ulong FUN_0042d1f0(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (param_2 = FUN_004b82e0(param_2), param_2 == 0)) {
    return 0;
  }
  uVar1 = FUN_00414800(param_1,6,4,0x1004,0,param_2);
  if ((*(long *)(param_1 + 0x20) == 0) && ((int)uVar1 < 1)) {
    FUN_004b7fa0(param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}


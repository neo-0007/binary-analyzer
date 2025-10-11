
void FUN_00708d00(uint *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  
  if (param_3 < 0) {
    param_3 = -1;
  }
  if ((long)param_3 == 0) {
    uVar1 = FUN_00401230(param_2,0);
  }
  else {
    uVar1 = (long)param_3 + param_2;
    if (uVar1 <= param_2) {
      uVar1 = 0xffffffffffffffff;
    }
  }
  FUN_007069a0(param_1,param_2,uVar1,0);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = *param_1 | 8;
  *(ulong *)(param_1 + 2) = param_2;
  *(ulong *)(param_1 + 4) = uVar1;
  *(ulong *)(param_1 + 6) = param_2;
  *(ulong *)(param_1 + 8) = param_2;
  *(ulong *)(param_1 + 10) = param_2;
  *(ulong *)(param_1 + 0xc) = param_2;
  return;
}


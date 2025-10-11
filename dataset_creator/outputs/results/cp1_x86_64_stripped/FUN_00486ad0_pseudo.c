
void FUN_00486ad0(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < param_3) {
    thunk_FUN_00713720(param_1 + uVar1,(int)param_3 - (int)uVar1 & 0xff,param_3 - uVar1);
    return;
  }
  return;
}


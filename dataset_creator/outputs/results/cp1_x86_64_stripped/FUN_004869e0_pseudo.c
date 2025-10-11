
ulong FUN_004869e0(long param_1,long *param_2,long param_3,long *param_4,ulong *param_5)

{
  ulong uVar1;
  
  uVar1 = param_3 - *param_2;
  if (*param_5 < (ulong)(param_3 - *param_2)) {
    uVar1 = *param_5;
  }
  thunk_FUN_00713a50(param_1 + *param_2,*param_4,uVar1);
  *param_4 = *param_4 + uVar1;
  *param_5 = *param_5 - uVar1;
  *param_2 = *param_2 + uVar1;
  return -param_3 & *param_5;
}


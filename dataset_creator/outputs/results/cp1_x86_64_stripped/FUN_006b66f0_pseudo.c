
void FUN_006b66f0(long *param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    if (param_2 < uVar1) {
      param_1[1] = param_2;
      *(undefined4 *)(*param_1 + param_2 * 4) = 0;
    }
    return;
  }
  FUN_006b6430(param_1,uVar1,0,param_2 - uVar1,param_3);
  return;
}


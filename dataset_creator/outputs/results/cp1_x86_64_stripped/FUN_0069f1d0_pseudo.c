
void FUN_0069f1d0(long *param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    if (param_2 < uVar1) {
      param_1[1] = param_2;
      *(undefined1 *)(*param_1 + param_2) = 0;
    }
    return;
  }
  FUN_0069ef10(param_1,uVar1,0,param_2 - uVar1,(int)param_3);
  return;
}


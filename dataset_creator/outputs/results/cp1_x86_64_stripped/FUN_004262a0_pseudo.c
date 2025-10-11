
void FUN_004262a0(undefined8 param_1,long *param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = thunk_FUN_007129d0();
  *param_4 = *param_4 + uVar2;
  uVar1 = *param_3;
  if (uVar1 != 0) {
    uVar3 = uVar1 - 1;
    if (uVar2 + 1 <= uVar1) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        return;
      }
    }
    else {
      thunk_FUN_00712b50(*param_2,param_1,uVar3);
      *param_2 = *param_2 + uVar3;
      *param_3 = *param_3 - uVar3;
      if (uVar2 <= uVar3) {
        return;
      }
    }
    if (*param_3 == 1) {
      *(undefined1 *)*param_2 = 0;
      *param_2 = *param_2 + 1;
      *param_3 = *param_3 - 1;
      return;
    }
  }
  return;
}


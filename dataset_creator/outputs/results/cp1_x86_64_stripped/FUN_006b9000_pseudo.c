
void FUN_006b9000(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_3[2];
  uVar1 = param_2 + 1 + param_3[1];
  if (uVar3 < uVar1) {
    if ((int)param_3[3] != 0) {
      return;
    }
    if ((uVar3 != 0) || (uVar3 = 2, 2 < uVar1)) {
      do {
        uVar3 = uVar3 * 2;
      } while (uVar3 < uVar1);
    }
    lVar2 = FUN_00710840(*param_3,uVar3);
    if (lVar2 == 0) {
      FUN_007104f0(*param_3);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined4 *)(param_3 + 3) = 1;
      return;
    }
    *param_3 = lVar2;
    param_3[2] = uVar3;
  }
  if ((int)param_3[3] == 0) {
    thunk_FUN_00713a50(param_3[1] + *param_3,param_1,param_2);
    *(undefined1 *)(*param_3 + param_2 + param_3[1]) = 0;
    param_3[1] = param_3[1] + param_2;
  }
  return;
}


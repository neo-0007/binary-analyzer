
void FUN_0069e450(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = lVar1 - (param_3 + param_2);
  if ((lVar3 != 0) && (param_3 != 0)) {
    puVar2 = (undefined1 *)(param_3 + param_2 + *param_1);
    if (lVar3 == 1) {
      *(undefined1 *)(*param_1 + param_2) = *puVar2;
      lVar1 = param_1[1];
    }
    else {
      thunk_FUN_00713610((undefined1 *)(*param_1 + param_2),puVar2,lVar3);
      lVar1 = param_1[1];
    }
  }
  param_1[1] = lVar1 - param_3;
  *(undefined1 *)(*param_1 + (lVar1 - param_3)) = 0;
  return;
}

